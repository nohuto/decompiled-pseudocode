/*
 * XREFs of ?GetView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@I@Z @ 0x1800BDCC0
 * Callers:
 *     ?GetPresentationModeFromViewId@ViewHelper@@SA?AW4AppModelHolographicPresentationMode@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x180041EE0 (-GetPresentationModeFromViewId@ViewHelper@@SA-AW4AppModelHolographicPresentationMode@WindowManag.c)
 *     ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BCA98 (-GetFrameworkViewTypeFromViewId@ViewHelper@@SA-AW4AppModelFrameworkKind@WindowManagement@Applica.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BCBFC (-GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BCCE4 (-GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800BCEBC (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x1800BD6FC (-GetAllAncestors@ViewHierarchyWithWindowManager@@QEAA-AV-$vector@IV-$allocator@I@std@@@std@@I@Z.c)
 *     ?GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800BDA10 (-GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall ViewHierarchyWithWindowManager::GetView(_QWORD *a1, __int64 *a2, int a3)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 *i; // rax
  __int64 v13; // rcx
  __int64 *v14; // rax
  int v16; // [rsp+40h] [rbp+18h]

  v16 = a3;
  v5 = 0LL;
  v6 = 0xCBF29CE484222325uLL;
  *a2 = 0LL;
  do
  {
    v7 = *((unsigned __int8 *)&v16 + v5++);
    v6 = 0x100000001B3LL * (v7 ^ v6);
  }
  while ( v5 < 4 );
  v8 = (__int64 *)a1[8];
  v9 = v6 & a1[13];
  v10 = a1[10];
  v11 = 2 * v9;
  for ( i = *(__int64 **)(v10 + 8 * v11); ; i = (__int64 *)*i )
  {
    v13 = *(__int64 **)(v10 + 8 * v11) == v8 ? (__int64)v8 : **(_QWORD **)(v10 + 8 * v11 + 8);
    if ( i == (__int64 *)v13 )
      break;
    if ( *((_DWORD *)i + 4) == a3 )
      goto LABEL_11;
  }
  i = v8;
LABEL_11:
  if ( i != v8 )
  {
    v14 = i + 3;
    if ( a2 != v14 )
    {
      *a2 = *v14;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(a2);
    }
  }
  return a2;
}
