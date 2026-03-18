/*
 * XREFs of BankField @ 0x1C0068620
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

__int64 __fastcall BankField(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  unsigned int NameSpaceObject; // eax
  unsigned __int64 v7; // r15
  unsigned int v8; // ebx
  __int64 *v10; // r14
  _SLIST_ENTRY *v11; // rax
  unsigned __int64 *v12; // rdx
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
    goto LABEL_6;
  v8 = GetNameSpaceObject(*(_BYTE **)(a2[10] + 72LL), *(_QWORD *)(a1 + 80), (__int64 *)&v13, 0x80000000);
  if ( v8 )
    goto LABEL_5;
  if ( *(_WORD *)(v7 + 66) != 10 )
  {
    v8 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError(a1, -1072431095);
    PrintDebugMessage(15, *(const void **)(a2[10] + 32LL), 0LL, 0LL, 0LL);
LABEL_5:
    v5 = v13;
    goto LABEL_6;
  }
  v5 = v13;
  if ( *(_WORD *)(v13 + 66) == 5 )
  {
    v10 = a2 + 8;
    v8 = CreateNameSpaceObject(
           *(_QWORD *)(a1 + 320),
           0LL,
           *(_QWORD *)(a1 + 80),
           *(struct _EX_RUNDOWN_REF **)(a1 + 88),
           a2 + 8,
           0);
    if ( !v8 )
    {
      *(_WORD *)(*v10 + 66) = 130;
      *(_DWORD *)(*v10 + 88) = 24;
      v11 = HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1179337288, *(_DWORD *)(*v10 + 88));
      *(_QWORD *)(*v10 + 96) = v11;
      if ( v11 )
      {
        memset(*(void **)(*v10 + 96), 0, *(unsigned int *)(*v10 + 88));
        v12 = *(unsigned __int64 **)(*v10 + 96);
        *v12 = v7;
        v12[1] = v5;
        v12[2] = *(_QWORD *)(a2[10] + 96LL);
        v8 = ParseFieldList(a1, a2[5], *v10, *(unsigned int *)(a2[10] + 136LL), *(_DWORD *)(*(_QWORD *)(v7 + 96) + 8LL));
        if ( !v8 )
          return v8;
      }
      else
      {
        v8 = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError(a1, -1073741670);
        PrintDebugMessage(13, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  else
  {
    v8 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError(a1, -1072431095);
    PrintDebugMessage(15, *(const void **)(a2[10] + 72LL), 0LL, 0LL, 0LL);
  }
LABEL_6:
  if ( v7 )
    DereferenceObjectEx(v7);
  if ( v5 )
    DereferenceObjectEx(v5);
  return v8;
}
