/*
 * XREFs of ?TmpGetLock@CBaseInput@@QEAAAEAUCInpPushLock@@XZ @ 0x1C0045B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CInpPushLock *__fastcall CBaseInput::TmpGetLock(CBaseInput *this)
{
  return (struct CInpPushLock *)&CBaseInput::_sLock;
}
