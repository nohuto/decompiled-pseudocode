/*
 * XREFs of Processor @ 0x1C00230D0
 * Callers:
 *     <none>
 * Callees:
 *     CreateNameSpaceObject @ 0x1C0006360 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C0008A70 (HeapAlloc.c)
 *     PushScope @ 0x1C00227D8 (PushScope.c)
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0032180 (memset.c)
 */

__int64 __fastcall Processor(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rsi
  unsigned int NameSpaceObject; // ebx
  __int64 v6; // rax
  __int64 v7; // r8

  v2 = a2 + 8;
  NameSpaceObject = CreateNameSpaceObject(
                      *(_QWORD *)(a1 + 320),
                      *(unsigned __int8 **)(a2[10] + 32),
                      *(_QWORD *)(a1 + 80),
                      *(struct _EX_RUNDOWN_REF **)(a1 + 88),
                      a2 + 8,
                      0);
  if ( !NameSpaceObject )
  {
    *(_WORD *)(*v2 + 66) = 12;
    *(_DWORD *)(*v2 + 88) = 12;
    v6 = HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1330794568, *(_DWORD *)(*v2 + 88));
    *(_QWORD *)(*v2 + 96) = v6;
    if ( v6 )
    {
      memset(*(void **)(*v2 + 96), 0, *(unsigned int *)(*v2 + 88));
      v7 = *(_QWORD *)(*v2 + 96);
      *(_BYTE *)(v7 + 8) = *(_BYTE *)(a2[10] + 56);
      *(_DWORD *)v7 = *(_DWORD *)(a2[10] + 96);
      *(_DWORD *)(v7 + 4) = *(_DWORD *)(a2[10] + 136);
      if ( ghCreate )
        ghCreate(12LL, *v2 + 120);
      return (unsigned int)PushScope(
                             a1,
                             *(_QWORD *)(a1 + 120),
                             a2[5],
                             0LL,
                             *v2,
                             *(_QWORD *)(a1 + 88),
                             *(_QWORD *)(a1 + 320),
                             a2[11]);
    }
    else
    {
      NameSpaceObject = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      PrintDebugMessage(151, 0, 0, 0, 0LL);
    }
  }
  return NameSpaceObject;
}
