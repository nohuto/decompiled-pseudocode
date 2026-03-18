/*
 * XREFs of ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXI@Z @ 0x1C011BE38
 * Callers:
 *     ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x1C011BD30 (-DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z @ 0x1C0007488 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z.c)
 */

void __fastcall DXGADAPTER::ProcessVSyncPhaseTimer(DXGADAPTER *this, unsigned int a2)
{
  char *v2; // rbx
  __int64 v3; // rsi
  _DWORD *v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // r9d
  bool v8; // al

  v2 = (char *)this + 3936;
  v3 = a2;
  DXGPUSHLOCK::AcquireExclusive((DXGADAPTER *)((char *)this + 3936));
  v5 = (_DWORD *)*((_QWORD *)this + 486);
  v6 = *((_DWORD *)this + 642) & 0x10;
  if ( (*((_DWORD *)this + 642) & 0x10) != 0 )
  {
    v8 = v5[v3] == 1;
  }
  else
  {
    if ( *v5 == 1 )
      goto LABEL_3;
    v8 = 0;
  }
  if ( !v8 )
  {
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    return;
  }
LABEL_3:
  v7 = -3;
  if ( (_DWORD)v6 )
    v7 = v3;
  LOBYTE(v6) = 1;
  DXGADAPTER::DdiControlInterrupt2(this, (struct _DXGKARG_CONTROLINTERRUPT2)0x200000003LL, v6, v7);
}
