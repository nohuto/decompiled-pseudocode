/*
 * XREFs of ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1C003868C
 * Callers:
 *     DxgSetPowerComponentIdleCB @ 0x1C0041950 (DxgSetPowerComponentIdleCB.c)
 *     ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1C026A664 (-SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z.c)
 *     ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1C026AC50 (-UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z.c)
 * Callees:
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C00387E0 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentIdleCB(DXGADAPTER *this, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rax

  v3 = (unsigned __int16)a2 + *((unsigned __int16 *)this + ((unsigned __int64)(unsigned int)a2 >> 16) + 1408);
  if ( v3 >= *((_DWORD *)this + 736) )
  {
    v4 = WdLogNewEntry5_WdCriticalError(this, a2);
    *(_QWORD *)(v4 + 24) = 275LL;
    *(_QWORD *)(v4 + 32) = 23LL;
    *(_QWORD *)(v4 + 40) = this;
    *(_OWORD *)(v4 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v4);
  }
  if ( *((_BYTE *)this + 3241) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(520LL * v3 + *((_QWORD *)this + 350) + 348));
    DXGADAPTER::SetPowerComponentIdleCBWorker(this, v3, 0);
  }
  else
  {
    v5 = WdLogNewEntry5_WdCriticalError(this, a2);
    *(_QWORD *)(v5 + 24) = 275LL;
    *(_QWORD *)(v5 + 32) = 23LL;
    *(_QWORD *)(v5 + 40) = this;
    *(_OWORD *)(v5 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v5);
  }
}
