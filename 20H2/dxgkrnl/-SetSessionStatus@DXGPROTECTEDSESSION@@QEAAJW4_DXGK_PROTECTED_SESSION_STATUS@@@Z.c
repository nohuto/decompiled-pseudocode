/*
 * XREFs of ?SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z @ 0x1C0047EE0
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C021386C (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C0287640 (-Stop@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 *     DxgkSetProtectedSessionStatusCB @ 0x1C0288F50 (DxgkSetProtectedSessionStatusCB.c)
 * Callees:
 *     ?QueueSignal@DXGPROTECTEDSESSION@@QEAAJXZ @ 0x1C02873F0 (-QueueSignal@DXGPROTECTEDSESSION@@QEAAJXZ.c)
 */

__int64 __fastcall DXGPROTECTEDSESSION::SetSessionStatus(
        DXGPROTECTEDSESSION *this,
        enum _DXGK_PROTECTED_SESSION_STATUS a2)
{
  __int64 result; // rax
  bool v3; // zf

  result = 0LL;
  if ( *((_DWORD *)this + 35) != a2 )
  {
    v3 = *((_DWORD *)this + 6) == 1;
    *((_DWORD *)this + 35) = a2;
    if ( v3 )
      return DXGPROTECTEDSESSION::QueueSignal(this);
  }
  return result;
}
