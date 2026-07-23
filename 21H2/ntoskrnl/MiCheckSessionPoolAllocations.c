/*
 * XREFs of MiCheckSessionPoolAllocations @ 0x1407786B0
 * Callers:
 *     MiDereferenceSessionFinal @ 0x1407784E0 (MiDereferenceSessionFinal.c)
 * Callees:
 *     ExPoolCleanupExpansionTable @ 0x1403898E0 (ExPoolCleanupExpansionTable.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void MiCheckSessionPoolAllocations()
{
  __int64 v0; // rax
  __int64 v2; // rcx
  __int64 v3; // r9
  ULONG_PTR *v4; // rbx
  __int64 *v5; // rcx
  __int64 v6; // rdx
  __int64 i; // r8
  void *v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-18h]
  ULONG_PTR v12; // [rsp+38h] [rbp-10h]

  v9 = qword_140C4DE20 + 4096;
  v0 = 292LL;
  if ( _BitScanReverse64((unsigned __int64 *)&v2, 0x124uLL) )
    v0 = 1LL << v2;
  v10 = v0;
  v3 = 2LL;
  v4 = (ULONG_PTR *)KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
  v5 = &v10;
  BugCheckParameter3 = v4[122];
  v12 = v4[123];
  do
  {
    v6 = *(v5 - 1);
    if ( v6 )
    {
      for ( i = *v5; i; --i )
        v6 += 56LL;
    }
    v5 += 2;
    --v3;
  }
  while ( v3 );
  if ( BugCheckParameter3 )
  {
    ExPoolCleanupExpansionTable(BugCheckParameter3, (56 * v12 + 4095) & 0xFFFFFFFFFFFFF000uLL);
    v4[122] = 0LL;
    v4[123] = 0LL;
  }
  v8 = (void *)v4[124];
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    v4[124] = 0LL;
  }
}
