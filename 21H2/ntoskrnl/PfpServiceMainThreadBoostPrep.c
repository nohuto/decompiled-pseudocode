/*
 * XREFs of PfpServiceMainThreadBoostPrep @ 0x140779EF8
 * Callers:
 *     PfpScenCtxScenarioSet @ 0x14099AB98 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140343540 (ObDereferenceObjectDeferDelete.c)
 *     PsLookupThreadByThreadId @ 0x140625630 (PsLookupThreadByThreadId.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfpServiceMainThreadBoostPrep(__int64 a1, _QWORD *a2)
{
  void *v3; // rcx
  NTSTATUS v5; // eax
  PVOID v6; // rdi
  unsigned int v7; // ebx
  PVOID PoolWithTag; // rax
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  Object = 0LL;
  v3 = *(void **)(a1 + 72);
  if ( !v3 )
    return (unsigned int)-2147483614;
  v5 = PsLookupThreadByThreadId(v3, (PETHREAD *)&Object);
  v6 = Object;
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( *((_QWORD *)Object + 134) == *(_QWORD *)(a1 + 80) )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA8uLL, 0x44506650u);
      if ( PoolWithTag )
      {
        *a2 = v6;
        v7 = 0;
        a2[1] = PoolWithTag;
        return v7;
      }
      v7 = -1073741670;
    }
    else
    {
      v7 = -1073741735;
    }
  }
  if ( v6 )
    ObDereferenceObjectDeferDelete(v6);
  return v7;
}
