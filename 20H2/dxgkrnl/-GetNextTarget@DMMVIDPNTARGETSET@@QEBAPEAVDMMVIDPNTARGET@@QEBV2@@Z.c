/*
 * XREFs of ?GetNextTarget@DMMVIDPNTARGETSET@@QEBAPEAVDMMVIDPNTARGET@@QEBV2@@Z @ 0x1C005BC60
 * Callers:
 *     ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02E5798 (-FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@P.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C02E78F8 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 * Callees:
 *     <none>
 */

struct DMMVIDPNTARGET *__fastcall DMMVIDPNTARGETSET::GetNextTarget(
        DMMVIDPNTARGETSET *this,
        const struct DMMVIDPNTARGET *const a2)
{
  __int64 v4; // rax
  DMMVIDPNTARGETSET *v5; // rdx
  struct DMMVIDPNTARGET *result; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = (DMMVIDPNTARGETSET *)*((_QWORD *)a2 + 1);
  result = (DMMVIDPNTARGETSET *)((char *)v5 - 8);
  if ( v5 == (DMMVIDPNTARGETSET *)((char *)this + 24) )
    return 0LL;
  return result;
}
