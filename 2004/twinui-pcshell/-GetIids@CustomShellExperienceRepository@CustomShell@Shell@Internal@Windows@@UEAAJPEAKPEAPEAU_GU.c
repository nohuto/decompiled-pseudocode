/*
 * XREFs of ?GetIids@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18019AAE0
 * Callers:
 *     ?GetIids@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800F15C0 (-GetIids@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@WDA@EAAJPEAKPEAPEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::GetIids(
        Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_24c002a6_7ad5_5f1d_bfb2_89e6ce87e67a;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
