/*
 * XREFs of Field @ 0x1C0019CE0
 * Callers:
 *     <none>
 * Callees:
 *     CreateNameSpaceObject @ 0x1C0013250 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     ParseFieldList @ 0x1C0015C40 (ParseFieldList.c)
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C0019AC8 (GetNameSpaceObject.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall Field(__int64 a1, _QWORD *a2)
{
  unsigned int NameSpaceObject; // eax
  unsigned __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 *v7; // r14
  _SLIST_ENTRY *v8; // rax
  __int64 v9; // rax
  unsigned __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a2[10] + 32LL), *(_QWORD *)(a1 + 80), (__int64 *)&v11, 0x80000000);
  v5 = v11;
  v6 = NameSpaceObject;
  if ( !NameSpaceObject )
  {
    if ( *(_WORD *)(v11 + 66) == 10 )
    {
      v7 = a2 + 8;
      v6 = CreateNameSpaceObject(
             *(_QWORD *)(a1 + 320),
             0LL,
             *(_QWORD *)(a1 + 80),
             *(struct _EX_RUNDOWN_REF **)(a1 + 88),
             a2 + 8,
             0);
      if ( !v6 )
      {
        *(_WORD *)(*v7 + 66) = 131;
        *(_DWORD *)(*v7 + 88) = 8;
        v8 = HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1329874504, *(_DWORD *)(*v7 + 88));
        *(_QWORD *)(*v7 + 96) = v8;
        if ( v8 )
        {
          memset(*(void **)(*v7 + 96), 0, *(unsigned int *)(*v7 + 88));
          v9 = *(_QWORD *)(*v7 + 96);
          *(_QWORD *)v9 = v5;
          v5 = 0LL;
          v6 = ParseFieldList(
                 a1,
                 a2[5],
                 *v7,
                 *(unsigned int *)(a2[10] + 56LL),
                 *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 96LL) + 8LL));
        }
        else
        {
          v6 = -1073741670;
          LogError(3221225626LL);
          AcpiDiagTraceAmlError(a1, 3221225626LL);
          PrintDebugMessage(51, 0, 0, 0, 0LL);
        }
      }
    }
    else
    {
      v6 = -1072431095;
      LogError(3222536201LL);
      AcpiDiagTraceAmlError(a1, 3222536201LL);
      PrintDebugMessage(52, *(_QWORD *)(a2[10] + 32LL), 0, 0, 0LL);
    }
  }
  if ( v5 )
    DereferenceObjectEx(v5);
  return v6;
}
