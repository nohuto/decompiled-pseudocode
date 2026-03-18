/*
 * XREFs of _UmfdQueryFontData@28 @ 0x87310
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z @ 0x87410 (-UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z.c)
 *     ??0QueryFontDataRequest@@QAE@PAUDHPDEV__@@PAU_FONTOBJEX@@KKPAU_GLYPHDATA@@PAXK@Z @ 0x876A6 (--0QueryFontDataRequest@@QAE@PAUDHPDEV__@@PAU_FONTOBJEX@@KKPAU_GLYPHDATA@@PAXK@Z.c)
 */

int __stdcall UmfdQueryFontData(
        struct DHPDEV__ *a1,
        struct _FONTOBJEX *a2,
        unsigned int a3,
        unsigned int a4,
        struct _GLYPHDATA *a5,
        void *a6,
        unsigned int a7)
{
  _BYTE v8[36]; // [esp+0h] [ebp-48h] BYREF
  int v9; // [esp+24h] [ebp-24h]
  int v10; // [esp+34h] [ebp-14h]

  QueryFontDataRequest::QueryFontDataRequest((QueryFontDataRequest *)v8, a1, a2, a3, a4, a5, a6, a7);
  if ( UmfdClientSendAndWaitForCompletion(*(_DWORD *)(*(_DWORD *)(v9 + 20) + 4), v8) < 0 )
    return -1;
  else
    return v10;
}
