/*
 * XREFs of ?HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z @ 0x180080748
 * Callers:
 *     ?HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18007A004 (-HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18007A21C (-HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 * Callees:
 *     ?HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x18000374C (-HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180025DE8 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     CemRcObjectDereference @ 0x1800273B0 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180027468 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 */

__int64 __fastcall HampPkgGetInterruptiveUIState(struct _HAM_PACKAGE *a1, wchar_t *String2)
{
  unsigned int InterruptiveUIState; // edi
  struct _HAM_APPLICATION *First; // rbx
  int v7[4]; // [rsp+20h] [rbp-C8h] BYREF
  wchar_t String1[72]; // [rsp+30h] [rbp-B8h] BYREF

  memset_0(String1, 0, 0x82uLL);
  InterruptiveUIState = 0;
  First = HamRcNodeGetFirst(a1, 1);
  if ( First )
  {
    do
    {
      if ( !String2
        || (v7[0] = 130, PsmGetApplicationNameFromKey((char *)First + 96, String1, v7), !_wcsicmp(String1, String2)) )
      {
        InterruptiveUIState = HampAppGetInterruptiveUIState(First);
        if ( InterruptiveUIState )
          break;
      }
      First = HamRcNodeGetSuccessor(a1, First);
    }
    while ( First );
    if ( First )
      CemRcObjectDereference(First);
  }
  return InterruptiveUIState;
}
