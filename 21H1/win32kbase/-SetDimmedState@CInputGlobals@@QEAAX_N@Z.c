/*
 * XREFs of ?SetDimmedState@CInputGlobals@@QEAAX_N@Z @ 0x1C01A65F0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 */

void __fastcall CInputGlobals::SetDimmedState(CInputGlobals *this, char a2)
{
  RIMLockExclusive((__int64)this);
  *((_BYTE *)this + 97) = a2;
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
