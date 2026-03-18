/*
 * XREFs of ?jMapCharset@@YGEEAAVPFEOBJ@@@Z @ 0x4AF54
 * Callers:
 *     ?bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z @ 0x4A670 (-bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z.c)
 *     ?bFilteredOut@PFEOBJ@@QAEHPAU_EFFILTER_INFO@@@Z @ 0x88D68 (-bFilteredOut@PFEOBJ@@QAEHPAU_EFFILTER_INFO@@@Z.c)
 * Callees:
 *     ?pGetLinkedFontList@PFEOBJ@@QAEPAU_LIST_ENTRY@@XZ @ 0x1F4F3D (-pGetLinkedFontList@PFEOBJ@@QAEPAU_LIST_ENTRY@@XZ.c)
 */

unsigned __int8 __fastcall jMapCharset(unsigned __int8 a1, PFEOBJ *a2)
{
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  char *v7; // eax
  char v8; // bh
  char *v9; // esi
  struct _LIST_ENTRY *LinkedFontList; // eax
  struct _LIST_ENTRY *v12; // edx
  struct _LIST_ENTRY *Blink; // eax
  struct _LIST_ENTRY *Flink; // ecx
  _BYTE *v15; // eax
  _BYTE *v16; // esi

  v4 = *(_DWORD *)a2;
  v5 = *(_DWORD *)(v4 + 20);
  v6 = *(_DWORD *)(v5 + 40);
  if ( !v6 )
    return *(_BYTE *)(v5 + 44);
  if ( a1 == 1 )
    a1 = MAPPER::DefaultCharset;
  if ( a1 == 0xFE )
    return -2;
  v7 = (char *)(v6 + v5);
  v8 = *v7;
  v9 = v7 + 16;
  while ( v7 < v9 )
  {
    if ( *v7 == a1 )
      return a1;
    if ( *v7 == 1 )
      break;
    ++v7;
  }
  if ( *(_DWORD *)(v4 + 76) )
  {
    while ( 1 )
    {
      LinkedFontList = PFEOBJ::pGetLinkedFontList(a2);
      if ( v12 == LinkedFontList )
        break;
      Blink = v12[3].Flink[2].Blink;
      Flink = Blink[5].Flink;
      if ( Flink )
      {
        v15 = (char *)Blink + (_DWORD)Flink;
        v16 = v15 + 16;
        while ( v15 < v16 )
        {
          if ( *v15 == a1 )
            return a1;
          if ( *v15 == 1 )
            break;
          ++v15;
        }
      }
      else if ( LOBYTE(Blink[5].Blink) == a1 )
      {
        return a1;
      }
    }
  }
  return v8;
}
