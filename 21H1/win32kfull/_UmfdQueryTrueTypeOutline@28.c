/*
 * XREFs of _UmfdQueryTrueTypeOutline@28 @ 0x24A8B3
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z @ 0x87410 (-UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??0QueryTrueTypeOutlineRequest@@QAE@PAUDHPDEV__@@PAU_FONTOBJ@@KHPAU_GLYPHDATA@@KPAUtagTTPOLYGONHEADER@@@Z @ 0x24A683 (--0QueryTrueTypeOutlineRequest@@QAE@PAUDHPDEV__@@PAU_FONTOBJ@@KHPAU_GLYPHDATA@@KPAUtagTTPOLYGONH.c)
 */

int __stdcall UmfdQueryTrueTypeOutline(
        struct DHPDEV__ *a1,
        struct _FONTOBJ *a2,
        unsigned int a3,
        int a4,
        struct _GLYPHDATA *a5,
        unsigned int a6,
        struct tagTTPOLYGONHEADER *a7)
{
  _BYTE v8[28]; // [esp+0h] [ebp-44h] BYREF
  int v9; // [esp+1Ch] [ebp-28h]
  int v10; // [esp+34h] [ebp-10h]

  if ( a5 )
    memset(a5, 0, sizeof(struct _GLYPHDATA));
  QueryTrueTypeOutlineRequest::QueryTrueTypeOutlineRequest(
    (QueryTrueTypeOutlineRequest *)v8,
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7);
  if ( UmfdClientSendAndWaitForCompletion(*(_DWORD *)(*(_DWORD *)(v9 + 20) + 4), (int)v8) >= 0 )
    return v10;
  else
    return -1;
}
