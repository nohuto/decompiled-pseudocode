/*
 * XREFs of ?GetIids@SearchAppExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801B83D0
 * Callers:
 *     ?GetIids@CortanaSharedExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800F3990 (-GetIids@CortanaSharedExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SearchAppExperienceManager::GetIids(
        SearchAppExperienceManager *this,
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
    *v6 = GUID_3e90bc6d_f3d9_4e87_94ec_bb0819d7cdbf;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e;
    v6[3] = GUID_5fefbb8e_82c3_4ec4_93a0_05c4b9fcd4cd;
    *a2 = 4;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
