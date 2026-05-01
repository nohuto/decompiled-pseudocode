/*
 * XREFs of ?GetIids@ShellFeedsExperienceManagerImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18009C080
 * Callers:
 *     ?GetIids@ShellFeedsExperienceManagerImpl@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800F4970 (-GetIids@ShellFeedsExperienceManagerImpl@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::GetIids(
        ShellFeedsExperienceManagerImpl *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x40uLL);
  if ( v6 )
  {
    *v6 = GUID_8617eebb_3124_4776_bded_a0bde75455bb;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270;
    v6[3] = GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e;
    *a2 = 4;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
