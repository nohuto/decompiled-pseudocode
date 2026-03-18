/*
 * XREFs of WriteField @ 0x1C0017D20
 * Callers:
 *     AccFieldUnit @ 0x1C0016690 (AccFieldUnit.c)
 *     WriteObject @ 0x1C0017010 (WriteObject.c)
 * Callees:
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C0066810 (GetObjectTypeName.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 *     RawFieldAccess @ 0x1C0069244 (RawFieldAccess.c)
 */

__int64 __fastcall WriteField(struct _SLIST_ENTRY *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  int v9; // edx
  unsigned int v10; // ebp
  _SLIST_ENTRY *v11; // rax
  __int64 v12; // rax
  int v13; // esi
  KIRQL v14; // al
  __int64 i; // rbx
  _SLIST_ENTRY *v16; // rax
  _SLIST_ENTRY *v17; // rcx
  __int64 result; // rax
  int v19; // edx
  int ObjectTypeName; // eax
  _SLIST_ENTRY *v21; // [rsp+70h] [rbp+18h]

  v5 = (unsigned int)(*(_DWORD *)(a3 + 8) + 7) >> 3;
  if ( (*(_DWORD *)(a3 + 12) & 0xFu) > 4 )
  {
    if ( *(_WORD *)(a2 + 2) == 5 )
    {
      return RawFieldAccess(a1, 1LL, a2);
    }
    else
    {
      LogError(3222536209LL);
      AcpiDiagTraceAmlError(a1, 3222536209LL);
      PrintDebugMessage(213, *(_DWORD *)(a3 + 12), 0, 0, 0LL);
      return 3222536209LL;
    }
  }
  else
  {
    v9 = *(unsigned __int16 *)(a4 + 2);
    if ( v9 == 1 )
    {
      v10 = 8;
      v11 = (_SLIST_ENTRY *)(a4 + 16);
      if ( v5 < 8 )
        v10 = (unsigned int)(*(_DWORD *)(a3 + 8) + 7) >> 3;
    }
    else
    {
      v19 = v9 - 2;
      if ( v19 )
      {
        if ( v19 != 1 )
        {
          LogError(3222536201LL);
          AcpiDiagTraceAmlError(a1, 3222536201LL);
          ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a4 + 2));
          PrintDebugMessage(214, ObjectTypeName, 0, 0, 0LL);
          return 3222536201LL;
        }
        v10 = *(_DWORD *)(a4 + 24);
        v11 = *(_SLIST_ENTRY **)(a4 + 32);
      }
      else
      {
        v11 = *(_SLIST_ENTRY **)(a4 + 32);
        v10 = *(_DWORD *)(a4 + 24) - 1;
      }
    }
    v21 = v11;
    if ( *(_WORD *)(a2 + 2) != 5 )
      goto LABEL_11;
    v12 = **(_QWORD **)(a2 + 32);
    if ( *(_WORD *)(v12 + 66) != 131 )
      goto LABEL_11;
    v13 = *(unsigned __int8 *)(*(_QWORD *)(**(_QWORD **)(v12 + 96) + 96LL) + 12LL);
    v14 = ExAcquireSpinLockShared(&RSAccessLock);
    for ( i = gpRSAccessHead; i; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 8) == v13 )
        break;
    }
    ExReleaseSpinLockShared(&RSAccessLock, v14);
    if ( i && *(_QWORD *)(i + 32) && !*(_QWORD *)(i + 16) )
    {
      return RawFieldAccess(a1, 1LL, a2);
    }
    else
    {
LABEL_11:
      v16 = HeapAlloc(a1 + 30, 1297237576, 0x40u);
      v17 = v16;
      if ( v16 )
      {
        *((_QWORD *)&v16->Next + 1) = a1[26].Next;
        a1[26].Next = v16;
        *((_QWORD *)&v16[1].Next + 1) = WriteFieldLoop;
        result = 0LL;
        LODWORD(v17->Next) = 1279677015;
        v17[2].Next = (_SLIST_ENTRY *)a2;
        *((_QWORD *)&v17[2].Next + 1) = a3;
        v17[3].Next = v21;
        *((_DWORD *)&v17[3].Next + 2) = v10;
        *((_DWORD *)&v17[3].Next + 3) = v5;
      }
      else
      {
        LogError(3222536194LL);
        AcpiDiagTraceAmlError(a1, 3222536194LL);
        PrintDebugMessage(153, 0, 0, 0, 0LL);
        return 3222536194LL;
      }
    }
  }
  return result;
}
