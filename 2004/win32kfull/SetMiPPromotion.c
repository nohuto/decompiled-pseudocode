/*
 * XREFs of SetMiPPromotion @ 0x1C01E271C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserAutoPromoteMouseInPointer @ 0x1C01F7740 (NtUserAutoPromoteMouseInPointer.c)
 *     ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z @ 0x1C0242898 (-xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z.c)
 *     xxxDefPointerProc @ 0x1C02449C0 (xxxDefPointerProc.c)
 * Callees:
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01E17DC (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

unsigned __int64 __fastcall SetMiPPromotion(__int64 a1, int a2)
{
  unsigned __int64 result; // rax
  unsigned int *v5; // rdx
  unsigned int v6; // ecx
  unsigned int v7; // ecx

  result = *(_QWORD *)(a1 + 1272);
  if ( result )
  {
    if ( (*(_DWORD *)result & 4) == 0 )
      SetMiPWakeBit((struct tagTHREADINFO *)a1);
    if ( ((a2 - 578) & 0xFFFFFFFB) != 0 )
    {
      result = (unsigned int)(a2 - 577);
      if ( (unsigned int)result <= 3 || (result = (unsigned int)(a2 - 581), (unsigned int)result <= 0x12) )
      {
        v5 = *(unsigned int **)(a1 + 1272);
        v6 = *v5;
        if ( (v5[9] & 0x1F0) != 0 )
          v7 = v6 & 0xFFFFFFFD;
        else
          v7 = v6 | 2;
        *v5 = v7;
      }
    }
    else
    {
      **(_DWORD **)(a1 + 1272) |= 4u;
      **(_DWORD **)(a1 + 1272) &= ~0x10u;
      result = *(_QWORD *)(a1 + 1272);
      *(_DWORD *)result &= ~2u;
    }
  }
  return result;
}
