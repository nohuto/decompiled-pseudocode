/*
 * XREFs of IndexField @ 0x1C0023590
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x1C00039E4 (DereferenceObjectEx.c)
 *     CreateNameSpaceObject @ 0x1C0006360 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C0008A70 (HeapAlloc.c)
 *     GetNameSpaceObject @ 0x1C00215DC (GetNameSpaceObject.c)
 *     ParseFieldList @ 0x1C00219D8 (ParseFieldList.c)
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     memset @ 0x1C0032180 (memset.c)
 */

__int64 __fastcall IndexField(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  unsigned int NameSpaceObject; // eax
  unsigned __int64 v7; // r15
  unsigned int v8; // ebx
  __int64 *v9; // r14
  __int64 v10; // rax
  unsigned __int64 *v11; // rcx
  unsigned __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = 0LL;
  v4 = a2[10];
  v5 = 0LL;
  v13 = 0LL;
  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(v4 + 32), *(_QWORD *)(a1 + 80), (__int64 *)&v14, 0x80000000);
  v7 = v14;
  v8 = NameSpaceObject;
  if ( NameSpaceObject )
    goto LABEL_11;
  v8 = GetNameSpaceObject(*(_BYTE **)(a2[10] + 72), *(_QWORD *)(a1 + 80), (__int64 *)&v13, 0x80000000);
  if ( v8 )
    goto LABEL_10;
  if ( *(_WORD *)(v7 + 66) != 5 )
  {
    v8 = -1072431095;
    LogError(3222536201LL);
    AcpiDiagTraceAmlError(a1, 3222536201LL);
    PrintDebugMessage(64, *(_QWORD *)(a2[10] + 32), 0, 0, 0LL);
LABEL_10:
    v5 = v13;
    goto LABEL_11;
  }
  v5 = v13;
  if ( *(_WORD *)(v13 + 66) == 5 )
  {
    v9 = (__int64 *)(a2 + 8);
    v8 = CreateNameSpaceObject(
           *(_QWORD *)(a1 + 320),
           0LL,
           *(_QWORD *)(a1 + 80),
           *(struct _EX_RUNDOWN_REF **)(a1 + 88),
           a2 + 8,
           0);
    if ( !v8 )
    {
      *(_WORD *)(*v9 + 66) = 132;
      *(_DWORD *)(*v9 + 88) = 16;
      v10 = HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1180191048, *(_DWORD *)(*v9 + 88));
      *(_QWORD *)(*v9 + 96) = v10;
      if ( v10 )
      {
        memset(*(void **)(*v9 + 96), 0, *(unsigned int *)(*v9 + 88));
        v11 = *(unsigned __int64 **)(*v9 + 96);
        *v11 = v7;
        v11[1] = v5;
        v8 = ParseFieldList(a1, a2[5], *v9, *(unsigned int *)(a2[10] + 96), 0xFFFFFFFF);
        if ( !v8 )
          return v8;
      }
      else
      {
        v8 = -1073741670;
        LogError(3221225626LL);
        AcpiDiagTraceAmlError(a1, 3221225626LL);
        PrintDebugMessage(63, 0, 0, 0, 0LL);
      }
    }
  }
  else
  {
    v8 = -1072431095;
    LogError(3222536201LL);
    AcpiDiagTraceAmlError(a1, 3222536201LL);
    PrintDebugMessage(62, *(_QWORD *)(a2[10] + 72), 0, 0, 0LL);
  }
LABEL_11:
  if ( v7 )
    DereferenceObjectEx(v7);
  if ( v5 )
    DereferenceObjectEx(v5);
  return v8;
}
