/*
 * XREFs of _TransferWakeBit@8 @ 0xA255A
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     _UpdateRawMouseMode@4 @ 0x448A8 (_UpdateRawMouseMode@4.c)
 *     _CalcWakeMask@12 @ 0x69C20 (_CalcWakeMask@12.c)
 */

int __fastcall TransferWakeBit(int a1, unsigned int a2)
{
  int result; // eax
  __int16 v4; // bx
  int v5; // esi
  int i; // ecx
  int v7; // eax
  int v8; // esi

  result = CalcWakeMask(a2, a2, 0);
  v4 = result & 0x1C07;
  if ( (*(_WORD *)(*(_DWORD *)(a1 + 244) + 6) & result & 0x1C07) == 0 )
  {
    v5 = *(_DWORD *)(a1 + 236);
    for ( i = 3; i; --i )
      v5 += 4;
    v7 = *(_DWORD *)(a1 + 236);
    if ( (v4 & 1) != 0 )
    {
      v8 = *(_DWORD *)(v7 + 52);
      *(_DWORD *)(v7 + 52) = a1;
    }
    else
    {
      v8 = *(_DWORD *)(v7 + 48);
      *(_DWORD *)(v7 + 48) = a1;
      UpdateRawMouseMode(*(_DWORD **)(a1 + 236));
    }
    *(_WORD *)(*(_DWORD *)(v8 + 244) + 6) &= ~v4;
    *(_WORD *)(*(_DWORD *)(a1 + 244) + 6) |= v4;
    result = *(_DWORD *)(a1 + 244);
    *(_WORD *)(result + 4) |= v4;
  }
  return result;
}
