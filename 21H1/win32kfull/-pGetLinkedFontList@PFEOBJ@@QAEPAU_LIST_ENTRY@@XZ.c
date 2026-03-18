/*
 * XREFs of ?pGetLinkedFontList@PFEOBJ@@QAEPAU_LIST_ENTRY@@XZ @ 0x1F4F3D
 * Callers:
 *     ?bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z @ 0x4A670 (-bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z.c)
 *     ?jMapCharset@@YGEEAAVPFEOBJ@@@Z @ 0x4AF54 (-jMapCharset@@YGEEAAVPFEOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__thiscall PFEOBJ::pGetLinkedFontList(PFEOBJ *this)
{
  int v1; // eax

  v1 = *(_DWORD *)(*(_DWORD *)this + 76);
  if ( v1 )
    return (struct _LIST_ENTRY *)(v1 + 8);
  else
    return &NullListHead;
}
