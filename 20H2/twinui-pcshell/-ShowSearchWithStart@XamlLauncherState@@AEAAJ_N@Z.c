/*
 * XREFs of ?ShowSearchWithStart@XamlLauncherState@@AEAAJ_N@Z @ 0x18005E5C0
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180046B20 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180085220 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 * Callees:
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x18005F5E0 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 */

__int64 __fastcall XamlLauncherState::ShowSearchWithStart(XamlLauncherState *this, char a2)
{
  __int64 v4; // rdx

  if ( IsSearchAndCortanaSplitEnabled() )
    *((_DWORD *)this + 266) = 2;
  LOBYTE(v4) = a2;
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 72LL))(*((_QWORD *)this + 11), v4);
}
