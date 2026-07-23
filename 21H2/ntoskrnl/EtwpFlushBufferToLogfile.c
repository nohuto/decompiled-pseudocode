/*
 * XREFs of EtwpFlushBufferToLogfile @ 0x14060A094
 * Callers:
 *     EtwpFlushBuffer @ 0x14063990C (EtwpFlushBuffer.c)
 *     EtwpBufferingModeFlush @ 0x14093D358 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     ZwWriteFile @ 0x1403FA680 (ZwWriteFile.c)
 *     EtwpGenerateFileName @ 0x14060A1EC (EtwpGenerateFileName.c)
 *     EtwpEventWriteTemplateAdmin @ 0x140939D2C (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateMaxFileSize @ 0x140939E90 (EtwpEventWriteTemplateMaxFileSize.c)
 */

__int64 __fastcall EtwpFlushBufferToLogfile(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r9
  unsigned __int64 Length; // rbp
  __int64 v6; // r8
  int v7; // ecx
  NTSTATUS v8; // edi
  __int64 v9; // rcx
  int v11; // edx
  int v12; // r8d
  int v13; // r8d
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  v2 = *(unsigned int *)(a1 + 308);
  Length = *a2;
  IoStatusBlock = 0LL;
  if ( (_DWORD)v2 )
  {
    v6 = *(unsigned int *)(a1 + 220);
    v7 = *(_DWORD *)(a1 + 12);
    if ( Length * v6 >= v2 * ((-(__int64)((v7 & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000) )
    {
      if ( (v7 & 2) != 0 )
      {
        *(_QWORD *)(a1 + 232) = *(unsigned int *)(a1 + 4);
        *(_DWORD *)(a1 + 220) = 1;
      }
      else
      {
        if ( (v7 & 8) == 0 )
        {
          v8 = -1073741432;
          if ( (*(_DWORD *)(a1 + 832) & 0x100) == 0 )
          {
            _InterlockedOr((volatile signed __int32 *)(a1 + 832), 0x100u);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_MAX_FILE_SIZE_REACHED) )
              EtwpEventWriteTemplateMaxFileSize(a1 + 168, v11, v12, a1 + 152, a1 + 168);
          }
          goto LABEL_16;
        }
        if ( (*(_DWORD *)(a1 + 836) & 1) == 0 )
        {
          EtwpGenerateFileName(a1 + 184, a1 + 312, a1 + 200);
          _InterlockedOr((volatile signed __int32 *)(a1 + 836), 1u);
        }
      }
    }
  }
  v8 = ZwWriteFile(*(HANDLE *)(a1 + 816), 0LL, 0LL, 0LL, &IoStatusBlock, a2, Length, (PLARGE_INTEGER)(a1 + 232), 0LL);
  if ( v8 < 0 )
  {
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_WRITE_FAILED) )
      EtwpEventWriteTemplateAdmin(
        a1 + 168,
        (unsigned int)&ETW_EVENT_WRITE_FAILED,
        v13,
        a1 + 152,
        a1 + 168,
        v8,
        *(_DWORD *)(a1 + 12));
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 1080);
    *(_QWORD *)(a1 + 232) += Length;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 4128), Length);
  }
  if ( v8 >= 0 )
  {
    ++*(_DWORD *)(a1 + 264);
    ++*(_DWORD *)(a1 + 220);
    return (unsigned int)v8;
  }
LABEL_16:
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 268));
  if ( v8 == -1073741670 )
    return 0;
  return (unsigned int)v8;
}
