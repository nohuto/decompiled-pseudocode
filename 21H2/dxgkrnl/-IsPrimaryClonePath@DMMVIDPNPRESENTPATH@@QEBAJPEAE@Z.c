/*
 * XREFs of ?IsPrimaryClonePath@DMMVIDPNPRESENTPATH@@QEBAJPEAE@Z @ 0x1C03A7F50
 * Callers:
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C000C7EC (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C01A0358 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::IsPrimaryClonePath(DMMVIDPNPRESENTPATH *this, bool *a2)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  unsigned int v6; // ebp
  __int64 Container; // rax
  __int64 result; // rax
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = -1;
  v3 = *((_QWORD *)this + 11);
  v5 = *(_QWORD *)(v3 + 40);
  v6 = *(_DWORD *)(v3 + 24);
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    v5 = *(_QWORD *)(v3 + 40);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer(v5 + 64);
  result = GetMostImportantVidPnPathTargetsFromSource((const struct DMMVIDPNTOPOLOGY *)(Container + 96), v6, &v9);
  if ( (int)result >= 0 )
    *a2 = v9 == *(_DWORD *)(*((_QWORD *)this + 12) + 24LL);
  return result;
}
