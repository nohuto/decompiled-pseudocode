/*
 * XREFs of ?SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C0285F5C
 * Callers:
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C0285228 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C02858DC (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001A110 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C005DA54 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 */

void __fastcall DXGVIRTUALMACHINE::SetVailObject(DXGVIRTUALMACHINE *this, struct DXGVAILOBJECT *a2)
{
  DxgkCompositionObject *v4; // rcx

  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 64));
  v4 = (DxgkCompositionObject *)*((_QWORD *)this + 36);
  if ( a2 != v4 )
  {
    if ( v4 )
    {
      DxgkCompositionObject::Release(v4);
      *((_QWORD *)this + 36) = 0LL;
    }
    if ( a2 )
    {
      DxgkCompositionObject::AddRef(a2);
      *((_QWORD *)this + 36) = a2;
    }
  }
  *((_QWORD *)this + 9) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 64, 0LL);
  KeLeaveCriticalRegion();
}
