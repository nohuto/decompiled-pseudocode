/*
 * XREFs of UserGetRedirectedWindowOrigin @ 0x1C0091A10
 * Callers:
 *     GreGetRandomRgn @ 0x1C00385F0 (GreGetRandomRgn.c)
 *     GetDCOrgOnScreen @ 0x1C003873C (GetDCOrgOnScreen.c)
 *     NtGdiGetRandomRgn @ 0x1C00A11E0 (NtGdiGetRandomRgn.c)
 *     xxxSetLayeredWindow @ 0x1C00C6608 (xxxSetLayeredWindow.c)
 *     DxgkEngBltViaGDI @ 0x1C02764D0 (DxgkEngBltViaGDI.c)
 * Callees:
 *     GetStyleWindow @ 0x1C00457D0 (GetStyleWindow.c)
 *     IsDesktopWindow @ 0x1C0091BB0 (IsDesktopWindow.c)
 */

__int64 __fastcall UserGetRedirectedWindowOrigin(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 StyleWindow; // rax

  v4 = 0;
  GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 40LL));
  v5 = LookupDC(a1, 1LL);
  if ( v5 && (*(_DWORD *)(v5 + 64) & 0x4000) != 0 )
  {
    if ( (unsigned int)IsDesktopWindow(*(_QWORD *)(v5 + 16)) )
    {
      *(_QWORD *)a2 = 0LL;
      goto LABEL_6;
    }
    StyleWindow = GetStyleWindow(v6, 2848);
    if ( StyleWindow )
    {
      *(_DWORD *)a2 = *(_DWORD *)(*(_QWORD *)(StyleWindow + 40) + 88LL);
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(*(_QWORD *)(StyleWindow + 40) + 92LL);
LABEL_6:
      v4 = 1;
    }
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  return v4;
}
