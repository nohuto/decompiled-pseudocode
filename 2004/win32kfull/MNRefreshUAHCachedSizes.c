/*
 * XREFs of MNRefreshUAHCachedSizes @ 0x1C0121738
 * Callers:
 *     MNClearCachedPopupSizes @ 0x1C01216B8 (MNClearCachedPopupSizes.c)
 *     xxxMNOpenHierarchy @ 0x1C023A484 (xxxMNOpenHierarchy.c)
 * Callees:
 *     MNUpdateUAHMaxPopupWidths @ 0x1C0121788 (MNUpdateUAHMaxPopupWidths.c)
 */

__int64 __fastcall MNRefreshUAHCachedSizes(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  __int64 v3; // r11

  v1 = 0;
  *(_OWORD *)(a1 + 128) = 0LL;
  result = *(_QWORD *)(a1 + 40);
  v3 = a1;
  if ( *(_DWORD *)(result + 44) )
  {
    do
    {
      MNUpdateUAHMaxPopupWidths(v3, *(_QWORD *)(v3 + 88) + 96LL * (int)v1);
      result = *(_QWORD *)(v3 + 40);
      ++v1;
    }
    while ( v1 < *(_DWORD *)(result + 44) );
  }
  return result;
}
