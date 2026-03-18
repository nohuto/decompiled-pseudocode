/*
 * XREFs of __IsChild@8 @ 0xAEE18
 * Callers:
 *     _xxxDoPaint@8 @ 0x6BD40 (_xxxDoPaint@8.c)
 *     _DoTimer@4 @ 0x742FA (_DoTimer@4.c)
 *     __SelectPalette@12 @ 0x9AAF6 (__SelectPalette@12.c)
 *     _CheckPwndFilter@8 @ 0xA6D84 (_CheckPwndFilter@8.c)
 *     _xxxMNLoop@16 @ 0x195C44 (_xxxMNLoop@16.c)
 * Callees:
 *     <none>
 */

int __fastcall _IsChild(int a1, int a2)
{
  while ( a2 && (*(_BYTE *)(*(_DWORD *)(a2 + 20) + 23) & 0xC0) == 0x40 )
  {
    a2 = *(_DWORD *)(a2 + 56);
    if ( a1 == a2 )
      return 1;
  }
  return 0;
}
