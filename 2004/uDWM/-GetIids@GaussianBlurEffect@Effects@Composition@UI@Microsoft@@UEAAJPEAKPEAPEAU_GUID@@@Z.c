/*
 * XREFs of ?GetIids@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800C18E0
 * Callers:
 *     ?GetIids@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180056460 (-GetIids@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180056470 (-GetIids@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::UI::Composition::Effects::GaussianBlurEffect::GetIids(
        Microsoft::UI::Composition::Effects::GaussianBlurEffect *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x50uLL);
  if ( v6 )
  {
    *v6 = GUID_cb51c0ce_8fe6_4636_b202_861faa07d8f3;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_2d8f9ddc_4339_4eb9_9216_f9deb75658a2;
    v6[3] = GUID_2fc57384_a068_44d7_a331_30982fcf7177;
    v6[4] = GUID_cc3ff255_a83d_5aed_8187_70f64bbd9e51;
    *a2 = 5;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
