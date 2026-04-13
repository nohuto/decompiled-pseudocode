/*
 * XREFs of ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UILaunchManager@ContentManagement@@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800157D0
 * Callers:
 *     ?GetIids@LaunchManager@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18000F6A0 (-GetIids@LaunchManager@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UILaunchManager@ContentManagement@@@Details@WRL@Microsoft@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180023E60 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmB_ea_180023E60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::ILaunchManager>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_3cb33ed0_2338_4892_aa4c_c96803309c9a;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
