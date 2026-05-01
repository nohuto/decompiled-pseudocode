/*
 * XREFs of ??1?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAA@XZ @ 0x1800B7AB0
 * Callers:
 *     _KioskPositioner::GetUserSidString_::_1_::dtor$3 @ 0x1800B7D69 (_KioskPositioner--GetUserSidString_--_1_--dtor$3.c)
 *     _KioskPositioner::GetUserSidString_::_1_::dtor$0 @ 0x1800B7D90 (_KioskPositioner--GetUserSidString_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>::~unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>(
        __int64 a1)
{
  return wistd::unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>::reset(a1, 0LL);
}
