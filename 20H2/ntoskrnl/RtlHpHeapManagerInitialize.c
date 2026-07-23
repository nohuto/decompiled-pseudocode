/*
 * XREFs of RtlHpHeapManagerInitialize @ 0x14039E0FC
 * Callers:
 *     ExInitializeSessionHeapManager @ 0x14039D984 (ExInitializeSessionHeapManager.c)
 *     RtlHpKInitializeHeapManager @ 0x1403C3688 (RtlHpKInitializeHeapManager.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     CmSiRWLockInitialize @ 0x14078B1F0 (CmSiRWLockInitialize.c)
 */

void __fastcall RtlHpHeapManagerInitialize(_RTL_RUN_ONCE *a1, _RTL_RUN_ONCE *a2)
{
  __int64 v4; // rax
  _RTL_RUN_ONCE *v5; // rdi
  _RTL_RUN_ONCE *v6; // rbx
  __int64 v7; // rdi

  memset(a1, 0, 0x38D0uLL);
  a1->Value = (unsigned __int64)&RtlpHpHeapGlobals;
  memset(&a1[2], 0, 0x48uLL);
  a1[6].Value = -1LL;
  *((_DWORD *)&a1[8].2 + 1) = 16;
  memset(&a1[11], 0, 0x3840uLL);
  memset(&a1[13], 0, 0x50uLL);
  memset(&a1[15], 0, 0x840uLL);
  a1[19].Value = -1LL;
  v4 = 255LL;
  *((_DWORD *)&a1[21].2 + 1) = 2056;
  v5 = a1 + 282;
  do
  {
    v5[-1].Value = 0LL;
    v5[2].Value = 0LL;
    v5[3].Value = 0LL;
    v5[4].Value = 0LL;
    v5->Value = 0LL;
    v5[1].Value = 0LL;
    v5 += 6;
    --v4;
  }
  while ( v4 );
  v6 = a1 + 1812;
  a1[1817].Ptr = a2->Ptr;
  v7 = 3LL;
  do
  {
    CmSiRWLockInitialize(v6);
    v6 += 2;
    --v7;
  }
  while ( v7 );
}
