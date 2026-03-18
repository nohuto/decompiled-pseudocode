/*
 * XREFs of ?IsPolicySet@CWindowGroupManager@@QEBA_NAEBUWINDOW_GROUP_ID@@W4GROUP_WINDOW_MANAGEMENT_POLICY@@@Z @ 0x1C02402E4
 * Callers:
 *     _anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_3029ce1d0d0873684df583e6396a0ba0___ @ 0x1C023F474 (_anonymous_namespace_--TryExecuteIfPolicyAllows__lambda_3029ce1d0d0873684df583e6396a0ba0___.c)
 * Callees:
 *     _anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_&__lambda_f391ddf1cf56839542dcbc253db2f01b___ @ 0x1C023F370 (_anonymous_namespace_--FindObject_CWindowGroup_WINDOW_GROUP_ID_const_-__lambda_f391ddf1cf5683954.c)
 */

bool __fastcall CWindowGroupManager::IsPolicySet(__int64 a1, _DWORD *a2)
{
  __int64 Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b; // rax
  signed int v3; // ecx

  Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b = anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b___(
                                                                                           (__int64)`anonymous namespace'::g_windowGroupManager
                                                                                         + 16,
                                                                                           (unsigned int)*a2,
                                                                                           a2);
  if ( Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b )
    v3 = (*(_DWORD *)(Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b + 20) & 1) == 0
       ? 0xC0000272
       : 0;
  else
    v3 = -1073741275;
  return v3 >= 0;
}
