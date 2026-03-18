/*
 * XREFs of SmmUnlockPages @ 0x1C03C1EB8
 * Callers:
 *     ?SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C03C1928 (-SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 *     SmmLockPagesForAdapter @ 0x1C03C1C80 (SmmLockPagesForAdapter.c)
 *     ?SmmUnlockPagedObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C03C1D6C (-SmmUnlockPagedObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SmmUnlockPages(PMDL Mdl)
{
  _InterlockedExchangeAdd64(&qword_1C0130B28, -(__int64)Mdl->ByteCount);
  MmUnlockPages(Mdl);
  IoFreeMdl(Mdl);
}
