/*
 * XREFs of _GetClientRect @ 0x1C0025248
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00216DC (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxSendSizeMessage @ 0x1C00251C0 (xxxSendSizeMessage.c)
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1C002F570 (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     EtwTraceLayoutChangeStop @ 0x1C0113130 (EtwTraceLayoutChangeStop.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F41D4 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C024A8BC (xxxMNUpdateShownMenu.c)
 * Callees:
 *     GetPrimaryMonitorRect @ 0x1C0105720 (GetPrimaryMonitorRect.c)
 */

__int64 __fastcall GetClientRect(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  int v5; // edx
  int v6; // ecx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v3 + 31) & 0x20) == 0 || (*(_BYTE *)(v3 + 21) & 2) != 0 )
  {
    if ( (*(_WORD *)(v3 + 42) & 0x3FFF) == 0x29D )
    {
      result = GetPrimaryMonitorRect(v7);
      *(_OWORD *)a2 = *(_OWORD *)result;
    }
    else
    {
      *(_OWORD *)a2 = *(_OWORD *)(v3 + 104);
      result = *(_QWORD *)(a1 + 40);
      v5 = *(_DWORD *)(result + 108);
      v6 = *(_DWORD *)(result + 104);
      *(_DWORD *)a2 -= v6;
      *(_DWORD *)(a2 + 8) -= v6;
      *(_DWORD *)(a2 + 12) -= v5;
      *(_DWORD *)(a2 + 4) -= v5;
    }
  }
  else
  {
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(gpsi + 2124LL);
    result = gpsi;
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(gpsi + 2128LL);
  }
  return result;
}
