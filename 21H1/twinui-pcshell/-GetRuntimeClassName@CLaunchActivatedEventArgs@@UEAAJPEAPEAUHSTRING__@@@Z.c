/*
 * XREFs of ?GetRuntimeClassName@CLaunchActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180089770
 * Callers:
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x1800DA810 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@W7EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800DA820 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800DA830 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WIA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800DA840 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WIA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WII@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800DA850 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WII@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WJA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800DA860 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WJA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WMA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800DA870 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WMA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WNI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800DA880 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WNI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WOA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800DA890 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WOA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CLaunchActivatedEventArgs@@WOI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800DA8A0 (-GetRuntimeClassName@CLaunchActivatedEventArgs@@WOI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CLaunchActivatedEventArgs::GetRuntimeClassName(CLaunchActivatedEventArgs *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.ApplicationModel.Activation.LaunchActivatedEventArgs", 0x3Cu, a2);
}
