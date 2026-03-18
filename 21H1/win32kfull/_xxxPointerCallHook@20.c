/*
 * XREFs of _xxxPointerCallHook@20 @ 0x15A676
 * Callers:
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 * Callees:
 *     _PhkFirstValid@8 @ 0x12974 (_PhkFirstValid@8.c)
 *     ?xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z @ 0x6A7C0 (-xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z.c)
 *     ?PointerMsgIdFromHookCall@@YGKPAUtagTHREADINFO@@IJ@Z @ 0x159F54 (-PointerMsgIdFromHookCall@@YGKPAUtagTHREADINFO@@IJ@Z.c)
 *     _PrepareSentPointerMessageForClient@16 @ 0x15A03D (_PrepareSentPointerMessageForClient@16.c)
 *     ?FreeThreadPointerHookData@@YGXPAUtagTHREADPOINTERDATA@@@Z @ 0x15ADA6 (-FreeThreadPointerHookData@@YGXPAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?MakeThreadPointerHookData@@YGHPAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x15B0D0 (-MakeThreadPointerHookData@@YGHPAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 */

size_t __fastcall xxxPointerCallHook(int a1, struct tagHOOK *a2, struct tagTHREADINFO *a3, int a4, size_t a5)
{
  struct tagTHREADINFO *v5; // esi
  unsigned int v6; // eax
  int ThreadPointerHookData; // eax
  size_t v8; // edi
  unsigned int Valid; // eax
  struct tagHOOK *v11; // [esp-10h] [ebp-44h]
  unsigned int v12; // [esp+0h] [ebp-34h]
  struct tagTHREADINPUTPOINTERLIST *v13; // [esp+0h] [ebp-34h]
  struct tagTHREADPOINTERDATA *v14; // [esp+0h] [ebp-34h]
  int v15; // [esp+4h] [ebp-30h]
  __int16 v16; // [esp+4h] [ebp-30h]
  _BYTE v17[28]; // [esp+Ch] [ebp-28h] BYREF
  int v18; // [esp+28h] [ebp-Ch]
  struct tagHOOK *v19; // [esp+2Ch] [ebp-8h]
  int v20; // [esp+30h] [ebp-4h] BYREF

  v5 = a3;
  v20 = 0;
  v18 = a1;
  memset(v17, 0, sizeof(v17));
  v19 = a2;
  v6 = PointerMsgIdFromHookCall(a4, a3, v12, v15);
  if ( !v6 || CTouchProcessor::IsPointerMsgRedirected(_gpTouchProcessor, v6, &v20) && !v20 )
    return a5;
  switch ( a4 )
  {
    case 3:
      ThreadPointerHookData = MakeThreadPointerHookData(v13, v16);
      if ( ThreadPointerHookData )
      {
        qmemcpy(v17, a3, sizeof(v17));
        v5 = (struct tagTHREADINFO *)v17;
      }
      break;
    case 4:
      ThreadPointerHookData = PrepareSentPointerMessageForClient((_DWORD *)a3 + 2, (unsigned int *)a3 + 1, (int *)a3, 1);
      break;
    case 12:
      ThreadPointerHookData = PrepareSentPointerMessageForClient(
                                (_DWORD *)a3 + 3,
                                (unsigned int *)a3 + 2,
                                (int *)a3 + 1,
                                1);
      break;
    default:
      ThreadPointerHookData = 0;
      break;
  }
  v8 = a5;
  if ( ThreadPointerHookData )
  {
    v11 = v19;
    Valid = PhkFirstValid(_gptiCurrent, a4);
    v8 = xxxCallHook2(v18, Valid, v11, v5, 0, 0, (int *)v13, v16);
    if ( *(_DWORD *)(_gptiCurrent + 624) )
    {
      FreeThreadPointerHookData(v14);
      *(_DWORD *)(_gptiCurrent + 624) = 0;
    }
  }
  return v8;
}
