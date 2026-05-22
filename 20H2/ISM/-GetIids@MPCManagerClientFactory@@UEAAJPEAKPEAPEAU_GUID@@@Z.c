/*
 * XREFs of ?GetIids@MPCManagerClientFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180108120
 * Callers:
 *     ?GetIids@MPCManagerClientFactory@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18004B6E0 (-GetIids@MPCManagerClientFactory@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCManagerClientFactory::GetIids(MPCManagerClientFactory *this, unsigned int *a2, struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x20uLL);
  if ( v6 )
  {
    *v6 = GUID_00000035_0000_0000_c000_000000000046;
    v6[1] = GUID_69eae266_3319_5a9c_992e_0b1b4ad9ecaf;
    *a2 = 2;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
