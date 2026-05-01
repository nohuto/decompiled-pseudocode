/*
 * XREFs of ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002FE58
 * Callers:
 *     ??$?0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z @ 0x18004F15C (--$-0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z.c)
 *     ??$?0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z @ 0x1800E0938 (--$-0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x18019BDD4 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z @ 0x1801CE388 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z.c)
 *     ?UpdateTabDisplayName@TabViewManager@@AEAAJPEAUHWND__@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802803FC (-UpdateTabDisplayName@TabViewManager@@AEAAJPEAUHWND__@@PEAUIShellTab@Tabs@ComposableShell@Intern.c)
 *     ?LaunchNewTabPage@@YAJAEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@AEBU_GUID@@@Z @ 0x180292534 (-LaunchNewTabPage@@YAJAEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@AEBU_GUID@@@Z.c)
 *     ??$?0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z @ 0x18037BBB8 (--$-0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18014F208 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Wrappers::HStringReference::AddOne(unsigned int a1, int a2, unsigned int a3)
{
  __int64 result; // rax

  result = a1 + 1;
  if ( (unsigned int)result < a1 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, a2, a3);
    JUMPOUT(0x180105374LL);
  }
  return result;
}
