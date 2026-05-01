/*
 * XREFs of ?ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z @ 0x18032DB14
 * Callers:
 *     ?Show@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z @ 0x18032DB80 (-Show@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z @ 0x18032F220 (-Toggle@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18003B8F8 (-IsPPIEdition@@YA_NXZ.c)
 *     wcscmp_0 @ 0x1800F03CF (wcscmp_0.c)
 */

char __fastcall XamlLauncher::ShouldLaunchCortanaOnPPI(XamlLauncher *this, HSTRING a2)
{
  char v3; // bl
  const wchar_t *StringRawBuffer; // rax

  v3 = 1;
  if ( IsPPIEdition() )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
    return wcscmp_0(StringRawBuffer, L"ms-cortana://StartMode=Settings&QuerySource=Settings/") == 0;
  }
  return v3;
}
