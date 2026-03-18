/*
 * XREFs of RegisterCoreMsgProviderPreferences @ 0x1C0022DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x1C0022E1C (-RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4S.c)
 */

__int64 __fastcall RegisterCoreMsgProviderPreferences(__int64 a1, unsigned int a2)
{
  return InputExtensibilityCallout::RegisterCoreMsgProvider(a1, (unsigned int)a1, a2);
}
