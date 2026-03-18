/*
 * XREFs of ?Stop@LongPowerButtonHoldListener@@QEAAXXZ @ 0x1C004FA6C
 * Callers:
 *     ?Initialize@DisplayDiagnostics@@QEAAXXZ @ 0x1C0022938 (-Initialize@DisplayDiagnostics@@QEAAXXZ.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0266F70 (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall LongPowerButtonHoldListener::Stop(LongPowerButtonHoldListener *this)
{
  if ( *(_QWORD *)this )
  {
    ExUnsubscribeWnfStateChange();
    *(_QWORD *)this = 0LL;
  }
}
