/*
 * XREFs of ??1Lockable@@UEAA@XZ @ 0x1C02E417C
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C0059270 (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ??_ELockable@@UEAAPEAXI@Z @ 0x1C005B6C0 (--_ELockable@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C00114C8 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 */

void __fastcall Lockable::~Lockable(Lockable *this, __int64 a2)
{
  struct _KTHREAD **v3; // rcx

  *(_QWORD *)this = &Lockable::`vftable';
  v3 = (struct _KTHREAD **)*((_QWORD *)this + 3);
  if ( v3[2] == KeGetCurrentThread() )
  {
    DXGFASTMUTEX::Release(v3, a2);
    v3 = (struct _KTHREAD **)*((_QWORD *)this + 3);
  }
  if ( v3 )
    DXGFASTMUTEX::`scalar deleting destructor'((DXGFASTMUTEX *)v3, a2);
}
