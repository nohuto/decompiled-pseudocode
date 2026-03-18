/*
 * XREFs of _SetMiPPromotion@8 @ 0x14E66B
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _NtUserAutoPromoteMouseInPointer@4 @ 0x15FA65 (_NtUserAutoPromoteMouseInPointer@4.c)
 *     ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AAE_NPAUtagWND@@@Z @ 0x19FC53 (-xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AAE_NPAUtagWND@@@Z.c)
 *     _xxxDefPointerProc@16 @ 0x1A1EB4 (_xxxDefPointerProc@16.c)
 * Callees:
 *     ?IsPointerMessage@@YGHI@Z @ 0x14D3CF (-IsPointerMessage@@YGHI@Z.c)
 *     ?SetMiPWakeBit@@YGXPAUtagTHREADINFO@@@Z @ 0x14DB36 (-SetMiPWakeBit@@YGXPAUtagTHREADINFO@@@Z.c)
 */

_BYTE *__fastcall SetMiPPromotion(int a1, char *a2)
{
  _BYTE *result; // eax
  int *v5; // ecx
  int v6; // eax

  result = *(_BYTE **)(a1 + 720);
  if ( result )
  {
    if ( (*result & 4) == 0 )
      SetMiPWakeBit((_BYTE **)a1);
    if ( a2 == (char *)582 || a2 == (char *)578 )
    {
      **(_DWORD **)(a1 + 720) |= 4u;
      **(_DWORD **)(a1 + 720) &= ~0x10u;
      result = *(_BYTE **)(a1 + 720);
      *(_DWORD *)result &= ~2u;
    }
    else
    {
      result = (_BYTE *)IsPointerMessage(a2);
      if ( result )
      {
        v5 = *(int **)(a1 + 720);
        v6 = *v5;
        if ( (v5[7] & 0x1F0) != 0 )
          result = (_BYTE *)(v6 & 0xFFFFFFFD);
        else
          result = (_BYTE *)(v6 | 2);
        *v5 = (int)result;
      }
    }
  }
  return result;
}
