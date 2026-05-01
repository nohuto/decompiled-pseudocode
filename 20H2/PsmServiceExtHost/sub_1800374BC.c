/*
 * XREFs of sub_1800374BC @ 0x1800374BC
 * Callers:
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 * Callees:
 *     sub_180045BE4 @ 0x180045BE4 (sub_180045BE4.c)
 */

__int64 __fastcall sub_1800374BC(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // eax

  v2 = 0;
  if ( (unsigned __int8)sub_180045BE4() )
  {
    v3 = PackageRundownNotificationForStoreLicense2(
           a1 + 96,
           *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 88LL) + 160LL) + 88LL),
           *(_QWORD *)(a1 + 88) + 228LL);
    if ( v3 >= 0 )
      return 0;
    return (unsigned int)v3;
  }
  return v2;
}
