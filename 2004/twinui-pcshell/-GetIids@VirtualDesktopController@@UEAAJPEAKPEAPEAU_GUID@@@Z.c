/*
 * XREFs of ?GetIids@VirtualDesktopController@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180377410
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopController2@5678@UIVirtualDesktopControllerInternal@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800FC5C0 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopCo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopController::GetIids(
        VirtualDesktopController *this,
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
    *v6 = _uuidof__AUIVirtualDesktopController_Multitasking_ComposableShell_Internal_Windows__;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_45736833_b342_4e3e_805c_96b9f5f79247;
    v6[3] = GUID_0e5cbed4_2860_48f0_a7bb_38614ac683ad;
    *a2 = 4;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
