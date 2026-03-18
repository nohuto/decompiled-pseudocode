/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@Z$1?FreePoolWithTag@?$pool_helpers@PEAU_KEY_BASIC_INFORMATION@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C005CF78
 * Callers:
 *     AdjustCcdDatabasePermissions @ 0x1C02EF9B0 (AdjustCcdDatabasePermissions.c)
 * Callees:
 *     ?FreePoolWithTag@?$pool_helpers@PEAU_ACL@@$0ELGHHIEE@@details@wil@@SAXPEAU_ACL@@@Z @ 0x1C005CF50 (-FreePoolWithTag@-$pool_helpers@PEAU_ACL@@$0ELGHHIEE@@details@wil@@SAXPEAU_ACL@@@Z.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<_KEY_BASIC_INFORMATION *,void (_KEY_BASIC_INFORMATION *),&public: static void wil::details::pool_helpers<_KEY_BASIC_INFORMATION *,1265072196>::FreePoolWithTag(_KEY_BASIC_INFORMATION *),wistd::integral_constant<unsigned __int64,0>,_KEY_BASIC_INFORMATION *,_KEY_BASIC_INFORMATION *,0,std::nullptr_t>>::reset(
        void **a1,
        void *a2)
{
  void *v4; // rcx

  v4 = *a1;
  if ( v4 )
    wil::details::pool_helpers<_ACL *,1265072196>::FreePoolWithTag(v4);
  *a1 = a2;
}
