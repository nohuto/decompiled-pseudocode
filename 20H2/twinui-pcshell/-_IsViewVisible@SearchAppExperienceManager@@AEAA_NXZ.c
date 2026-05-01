/*
 * XREFs of ?_IsViewVisible@SearchAppExperienceManager@@AEAA_NXZ @ 0x18007A330
 * Callers:
 *     ?_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180027E44 (-_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Found.c)
 *     ?_OnDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x18007A1C8 (-_OnDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

char __fastcall SearchAppExperienceManager::_IsViewVisible(SearchAppExperienceManager *this)
{
  __int64 v1; // rcx
  char v2; // bl
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 64);
  v2 = 0;
  v4 = 0;
  if ( (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 80LL))(v1, &v4) >= 0 )
    return v4 != 0;
  return v2;
}
