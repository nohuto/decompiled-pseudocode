/*
 * XREFs of ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F0B48
 * Callers:
 *     PrepareSentPointerMessageForClient @ 0x1C01EF4A0 (PrepareSentPointerMessageForClient.c)
 *     TranslateSentPointerMessageForClient @ 0x1C01EF654 (TranslateSentPointerMessageForClient.c)
 * Callees:
 *     ?MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F0C24 (-MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAP.c)
 */

__int64 __fastcall MakePointerMessage(
        unsigned __int64 a1,
        unsigned int a2,
        void *a3,
        unsigned __int64 *a4,
        __int64 *a5,
        unsigned __int16 *a6,
        unsigned int *a7,
        int *a8,
        HWND *a9)
{
  const struct tagPOINTER_INFO *PointerMessage; // rax
  int v14; // [rsp+78h] [rbp+Fh] BYREF
  int v15; // [rsp+7Ch] [rbp+13h] BYREF
  int v16; // [rsp+80h] [rbp+17h] BYREF
  struct tagPOINT v17; // [rsp+88h] [rbp+1Fh] BYREF

  v17 = 0LL;
  v16 = 0;
  v15 = 0;
  v14 = 0;
  PointerMessage = CTouchProcessor::PrepareMakePointerMessage(gpTouchProcessor, a1, &v17, &v16, &v15, &v14);
  return MakePointerMessageWorker(PointerMessage, v17, v16, v15, v14, a2, a3, a4, a5, a6, a7, a8, a9);
}
