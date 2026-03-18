/*
 * XREFs of ?SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03BFF78
 * Callers:
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03C0EA4 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 * Callees:
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1C0025FEC (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     SmmClearPageManager @ 0x1C006D7E8 (SmmClearPageManager.c)
 *     SmmDetachDomainFromAllDevices @ 0x1C03C0024 (SmmDetachDomainFromAllDevices.c)
 *     SmmIommuDeleteDomain @ 0x1C03C01B0 (SmmIommuDeleteDomain.c)
 */

void __fastcall SmmDeinitializeIommu(struct SYSMM_ADAPTER *a1)
{
  struct _MDL *v2; // rcx

  if ( (*((_DWORD *)a1 + 5) & 1) == 0 )
  {
    if ( *((_QWORD *)a1 + 12) )
    {
      SmmDetachDomainFromAllDevices();
      if ( !*((_DWORD *)a1 + 23) )
        SmmIommuDeleteDomain(*((_QWORD *)a1 + 12));
      *((_QWORD *)a1 + 12) = 0LL;
    }
    SmmClearPageManager((volatile LONG *)a1 + 28);
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)a1 + 128));
    v2 = (struct _MDL *)*((_QWORD *)a1 + 28);
    if ( v2 != (struct _MDL *)((char *)a1 + 232) )
      IoFreeMdl(v2);
    if ( SmmUseIommuV2Interface() && (*((_DWORD *)a1 + 5) & 4) != 0 )
      ((void (__fastcall *)(_QWORD, _QWORD))qword_1C0130AC8)(SmmDomainTypeStateChangeCallback, **((_QWORD **)a1 + 45));
  }
}
