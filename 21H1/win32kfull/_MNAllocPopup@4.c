/*
 * XREFs of _MNAllocPopup@4 @ 0x184482
 * Callers:
 *     _xxxMNStartMenuState@12 @ 0x184D3D (_xxxMNStartMenuState@12.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@@@YGXPAX@Z @ 0xF42A0 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@@@YGXPAX@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??$InitLookAsideRef@UtagPOPUPMENU@@@@YGEPAUtagPOPUPMENU@@@Z @ 0x183D4D (--$InitLookAsideRef@UtagPOPUPMENU@@@@YGEPAUtagPOPUPMENU@@@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@IAEPAXXZ @ 0x183EDD (-Allocate@-$CTypeIsolation@$0EAAA@$0DI@@NSInstrumentation@@IAEPAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
_DWORD *__thiscall MNAllocPopup(void *this)
{
  _DWORD *v1; // esi
  unsigned __int8 *v2; // ecx

  if ( this || (_gdwPUDFlags & 0x800000) != 0 )
  {
    v2 = gpUserTypeIsolation[4];
    if ( v2 )
      v1 = NSInstrumentation::CTypeIsolation<16384,56>::Allocate(v2);
    else
      v1 = 0;
  }
  else
  {
    _gdwPUDFlags |= 0x800000u;
    v1 = _gpopupMenu;
  }
  if ( v1 )
  {
    memset(v1, 0, 0x34u);
    if ( !InitLookAsideRef<tagPOPUPMENU>(v1) )
    {
      UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<16384,56>>(v1);
      return 0;
    }
  }
  return v1;
}
