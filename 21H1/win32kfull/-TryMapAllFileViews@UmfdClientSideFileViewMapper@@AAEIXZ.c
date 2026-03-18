/*
 * XREFs of ?TryMapAllFileViews@UmfdClientSideFileViewMapper@@AAEIXZ @ 0xD315A
 * Callers:
 *     ??0UmfdClientSideFileViewMapper@@QAE@AAVPFFOBJ@@@Z @ 0xD3126 (--0UmfdClientSideFileViewMapper@@QAE@AAVPFFOBJ@@@Z.c)
 * Callees:
 *     _EngMapFontFileFDInternal@16 @ 0x8BDE8 (_EngMapFontFileFDInternal@16.c)
 */

unsigned int __thiscall UmfdClientSideFileViewMapper::TryMapAllFileViews(UmfdClientSideFileViewMapper *this)
{
  unsigned int v2; // esi
  int i; // eax
  int v4; // ecx
  _DWORD *v5; // ecx
  int v7; // [esp+10h] [ebp-8h] BYREF
  int v8; // [esp+14h] [ebp-4h] BYREF

  v2 = 0;
  for ( i = *(_DWORD *)this; v2 < *(_DWORD *)(*(_DWORD *)this + 20); ++v2 )
  {
    v4 = *(_DWORD *)(i + 120);
    v8 = 0;
    v5 = *(_DWORD **)(v4 + 4 * v2);
    v7 = 0;
    if ( !EngMapFontFileFDInternal(v5, &v8, &v7, 0) )
      break;
    i = *(_DWORD *)this;
  }
  return v2;
}
