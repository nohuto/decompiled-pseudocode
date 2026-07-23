/*
 * XREFs of EtwpRealtimeSaveBuffer @ 0x14061DF4C
 * Callers:
 *     EtwpFlushBufferToRealtime @ 0x14063AA24 (EtwpFlushBufferToRealtime.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x1406B7F74 (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x1407D0748 (EtwpRealtimeUpdateReferenceTime.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     ZwWriteFile @ 0x1403FA680 (ZwWriteFile.c)
 *     EtwpEventWriteTemplateAdmin @ 0x140939D2C (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateBackingFile @ 0x140939DEC (EtwpEventWriteTemplateBackingFile.c)
 */

__int64 __fastcall EtwpRealtimeSaveBuffer(__int64 a1, __int64 Buffer)
{
  LARGE_INTEGER v2; // r8
  LONGLONG v3; // rbx
  signed __int64 v5; // rax
  __int64 QuadPart; // r9
  NTSTATUS v8; // ebp
  LONGLONG v9; // r8
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  bool v13; // sf
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // r8d
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(LARGE_INTEGER *)(a1 + 400);
  v3 = *(_QWORD *)(a1 + 416);
  IoStatusBlock = 0LL;
  v5 = *(_QWORD *)(a1 + 408);
  ByteOffset = v2;
  QuadPart = v2.QuadPart;
  if ( v2.QuadPart >= v5 && v2.QuadPart + *(unsigned int *)(Buffer + 48) > *(_QWORD *)(a1 + 432) )
  {
    QuadPart = 72LL;
    v3 = v2.QuadPart;
    ByteOffset.QuadPart = 72LL;
  }
  if ( QuadPart >= v5 || QuadPart + *(unsigned int *)(Buffer + 48) < v5 )
  {
    v8 = ZwWriteFile(
           *(HANDLE *)(a1 + 376),
           0LL,
           0LL,
           0LL,
           &IoStatusBlock,
           (PVOID)Buffer,
           *(_DWORD *)(Buffer + 48),
           &ByteOffset,
           0LL);
    if ( v8 < 0 )
    {
      ++*(_DWORD *)(a1 + 276);
      *(_DWORD *)(a1 + 464) = 2;
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_WRITE_FAILED) )
        EtwpEventWriteTemplateAdmin(
          a1 + 384,
          (unsigned int)&ETW_EVENT_WRITE_FAILED,
          v20,
          a1 + 152,
          a1 + 384,
          v8,
          *(_DWORD *)(a1 + 12));
    }
    else
    {
      v9 = ByteOffset.QuadPart + *(unsigned int *)(Buffer + 48);
      v10 = *(_QWORD *)(a1 + 432);
      *(_QWORD *)(a1 + 400) = v9;
      if ( v3 <= v9 )
        v3 = v9;
      *(_QWORD *)(a1 + 416) = v3;
      *(_QWORD *)(a1 + 424) += *(unsigned int *)(Buffer + 48);
      v11 = (unsigned int)(*(_DWORD *)(a1 + 4) * *(_DWORD *)(a1 + 252));
      ++*(_DWORD *)(a1 + 440);
      if ( v10 - *(_QWORD *)(a1 + 424) <= v11 && *(int *)(a1 + 16) >= 0 )
      {
        _InterlockedExchange((volatile __int32 *)(a1 + 16), -1073741432);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_BACKING_FILE_FULL) )
          EtwpEventWriteTemplateBackingFile(v18, v17, v19, a1 + 152);
      }
    }
    if ( !v8 )
    {
      if ( *(_WORD *)(Buffer + 54) == 6 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 832), 0x10000000u);
      else
        _InterlockedAnd((volatile signed __int32 *)(a1 + 832), 0xEFFFFFFF);
    }
    return (unsigned int)v8;
  }
  else
  {
    ++*(_DWORD *)(a1 + 276);
    v13 = *(int *)(a1 + 16) < 0;
    *(_DWORD *)(a1 + 464) = 2;
    if ( !v13 )
      _InterlockedExchange((volatile __int32 *)(a1 + 16), -1073741432);
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_BACKING_FILE_FULL) )
      EtwpEventWriteTemplateBackingFile(v15, v14, v16, a1 + 152);
    return 3221225864LL;
  }
}
