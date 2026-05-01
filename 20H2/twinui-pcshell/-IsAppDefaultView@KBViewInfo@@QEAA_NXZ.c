/*
 * XREFs of ?IsAppDefaultView@KBViewInfo@@QEAA_NXZ @ 0x18034B9B8
 * Callers:
 *     ?InitializeIds@KBViewInfo@@QEAAXXZ @ 0x18034B2D8 (-InitializeIds@KBViewInfo@@QEAAXXZ.c)
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18034B3F4 (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall KBViewInfo::IsAppDefaultView(KBViewInfo *this)
{
  HSTRING v1; // rcx
  const WCHAR *StringRawBuffer; // rax

  v1 = (HSTRING)*((_QWORD *)this + 14);
  if ( !v1 )
    return 1;
  StringRawBuffer = WindowsGetStringRawBuffer(v1, 0LL);
  return CompareStringOrdinal(StringRawBuffer, -1, L"Windows.Internal.ShellExperience.TopLevelApplication", -1, 1) == 2;
}
