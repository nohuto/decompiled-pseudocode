/*
 * XREFs of ??1DXGVIRTUALMACHINE@@QEAA@XZ @ 0x1C027F734
 * Callers:
 *     ??_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z @ 0x1C0046C04 (--_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGVIRTUALMACHINE::~DXGVIRTUALMACHINE(void **this, __int64 a2)
{
  _QWORD *v3; // rbx
  struct DXGGLOBAL *Global; // rdi
  __int64 v5; // rax
  _QWORD *v6; // rdx

  v3 = this + 1;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 320));
  v5 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v6 = (_QWORD *)v3[1], (_QWORD *)*v6 != v3) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  --*((_DWORD *)Global + 372);
  *((_QWORD *)Global + 41) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Global + 320, 0LL);
  KeLeaveCriticalRegion();
  operator delete(this[22]);
}
