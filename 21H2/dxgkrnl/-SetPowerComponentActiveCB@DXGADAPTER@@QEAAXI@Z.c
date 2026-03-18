/*
 * XREFs of ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z @ 0x1C0025B90
 * Callers:
 *     DxgSetPowerComponentActiveCB @ 0x1C01F4740 (DxgSetPowerComponentActiveCB.c)
 *     ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1C030C958 (-SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z.c)
 * Callees:
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0014D90 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentActiveCB(DXGADAPTER *this, unsigned int a2, __int64 a3)
{
  unsigned int v4; // edi

  v4 = (unsigned __int16)a2 + *((unsigned __int16 *)this + ((unsigned __int64)a2 >> 16) + 1456);
  if ( v4 >= *((_DWORD *)this + 760) )
    WdLogSingleEntry5(0LL, 275LL, 23LL, this, 0LL, 0LL);
  if ( *((_BYTE *)this + 3337) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(520LL * v4 + *((_QWORD *)this + 362) + 348));
    LOBYTE(a3) = 1;
    DXGADAPTER::SetPowerComponentActiveCBWorker(this, v4, a3, 0);
  }
  else
  {
    WdLogSingleEntry5(0LL, 275LL, 23LL, this, 0LL, 0LL);
  }
}
