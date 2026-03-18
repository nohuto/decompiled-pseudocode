/*
 * XREFs of ?IsPrimaryClonePath@DMMVIDPNPRESENTPATH@@QEBAJPEAE@Z @ 0x1C01665CC
 * Callers:
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0005924 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017DF8 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C0123CE0 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::IsPrimaryClonePath(DMMVIDPNPRESENTPATH *this, bool *a2)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  unsigned int v6; // ebp
  __int64 Container; // rax
  __int64 result; // rax
  __int64 v9; // rax
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = -1;
  v3 = *((_QWORD *)this + 11);
  v5 = *(_QWORD *)(v3 + 40);
  v6 = *(_DWORD *)(v3 + 24);
  if ( !v5 )
  {
    v9 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v9);
    v5 = *(_QWORD *)(v3 + 40);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer(v5 + 64, (__int64)a2);
  result = GetMostImportantVidPnPathTargetsFromSource((const struct DMMVIDPNTOPOLOGY *)(Container + 96), v6, &v10);
  if ( (int)result >= 0 )
    *a2 = v10 == *(_DWORD *)(*((_QWORD *)this + 12) + 24LL);
  return result;
}
