/*
 * XREFs of _UmfdQueryAdvanceWidths@24 @ 0x86F74
 * Callers:
 *     <none>
 * Callees:
 *     ??0QueryAdvanceWidthsRequest@@QAE@PAUDHPDEV__@@PAU_FONTOBJ@@KPAKPAXK@Z @ 0x86FB6 (--0QueryAdvanceWidthsRequest@@QAE@PAUDHPDEV__@@PAU_FONTOBJ@@KPAKPAXK@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z @ 0x87410 (-UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z.c)
 */

int __stdcall UmfdQueryAdvanceWidths(
        struct DHPDEV__ *a1,
        struct _FONTOBJ *a2,
        unsigned int a3,
        unsigned int *a4,
        void *a5,
        unsigned int a6)
{
  _BYTE v7[28]; // [esp+0h] [ebp-40h] BYREF
  int v8; // [esp+1Ch] [ebp-24h]
  int v9; // [esp+30h] [ebp-10h]

  QueryAdvanceWidthsRequest::QueryAdvanceWidthsRequest((QueryAdvanceWidthsRequest *)v7, a1, a2, a3, a4, a5, a6);
  UmfdClientSendAndWaitForCompletion(*(_DWORD *)(*(_DWORD *)(v8 + 20) + 4), v7);
  return v9;
}
