/*
 * XREFs of ??1DXGVIRTUALMACHINE@@QEAA@XZ @ 0x1C0283EE8
 * Callers:
 *     ??_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z @ 0x1C0048A64 (--_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002824 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DXGVIRTUALMACHINE::~DXGVIRTUALMACHINE(void **this, __int64 a2)
{
  _QWORD *v3; // rbx
  struct DXGGLOBAL *Global; // rdi
  __int64 v5; // rax
  _QWORD *v6; // rdx

  v3 = this + 1;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 432));
  v5 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v6 = (_QWORD *)v3[1], (_QWORD *)*v6 != v3) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  --*((_DWORD *)Global + 400);
  *((_QWORD *)Global + 55) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Global + 432, 0LL);
  KeLeaveCriticalRegion();
  operator delete(this[22]);
}
