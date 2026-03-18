/*
 * XREFs of _UmfdQueryGlyphAttrs@8 @ 0x24A82E
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z @ 0x87410 (-UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z @ 0x876FC (--0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z.c)
 *     _FONTOBJ_GetCachedGlyphAttrs@8 @ 0xD0C52 (_FONTOBJ_GetCachedGlyphAttrs@8.c)
 */

int __stdcall UmfdQueryGlyphAttrs(int a1, int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // [esp+Ch] [ebp-2Ch] BYREF
  _DWORD v5[8]; // [esp+10h] [ebp-28h] BYREF
  int v6; // [esp+30h] [ebp-8h]
  int v7; // [esp+34h] [ebp-4h]

  result = FONTOBJ_GetCachedGlyphAttrs(a1, a2);
  if ( !result )
  {
    FontDriverDdiRequest::FontDriverDdiRequest(v5, 7);
    v7 = 0;
    v6 = 0;
    v5[0] = &QueryGlyphAttrsRequest::`vftable';
    v5[6] = a1;
    v5[7] = a2;
    if ( UmfdClientSendAndWaitForCompletion(*(_DWORD *)(*(_DWORD *)(a1 + 20) + 4), (int)v5) >= 0 )
    {
      v3 = v6;
      if ( v6 )
      {
        v4 = 0;
        *(_DWORD *)(a1 + 4 * a2 + 828) = v6;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
      }
      return v3;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
