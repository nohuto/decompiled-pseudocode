/*
 * XREFs of _xxxRetrievePointerInputMessage@60 @ 0x15A7AB
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     ?DiscardPointerMessage@@YG?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PAUtagTHREADINFO@@PAUtagQMSG@@PAUtagWND@@PAUtagMSG@@@Z @ 0x15ACBC (-DiscardPointerMessage@@YG-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PAUtagTHREADINFO@@PAUtagQMSG@@PAU.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _IsPointerInputMessageWithState@4 @ 0x439B4 (_IsPointerInputMessageWithState@4.c)
 *     _INPUTDEST_FROM_PWND@4 @ 0x9B69A (_INPUTDEST_FROM_PWND@4.c)
 *     ?CheckCrossThreadInput@@YGHQAUtagWND@@PAUtagQMSG@@PAH2PAPAU2@@Z @ 0x9C586 (-CheckCrossThreadInput@@YGHQAUtagWND@@PAUtagQMSG@@PAH2PAPAU2@@Z.c)
 *     _CheckPwndFilter@8 @ 0xA6D84 (_CheckPwndFilter@8.c)
 *     _IsPointerInputNonClientMessage@4 @ 0xAEE74 (_IsPointerInputNonClientMessage@4.c)
 *     ?FindThreadPointerData@@YGPAUtagTHREADPOINTERDATA@@PAU_LIST_ENTRY@@G@Z @ 0x15AD87 (-FindThreadPointerData@@YGPAUtagTHREADPOINTERDATA@@PAU_LIST_ENTRY@@G@Z.c)
 */

int __fastcall xxxRetrievePointerInputMessage(
        int a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        struct tagQMSG *a7,
        _DWORD *a8,
        _DWORD *a9,
        unsigned int *a10,
        int *a11,
        int *a12,
        struct tagWND *a13,
        int *a14,
        int a15)
{
  int v16; // ecx
  unsigned int v17; // esi
  unsigned int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int result; // eax
  int v23; // eax
  HWND v24; // ecx
  _DWORD *v25; // eax
  _DWORD *v26; // edi
  int v27; // ecx
  struct tagTHREADPOINTERDATA *ThreadPointerData; // eax
  _DWORD *v29; // eax
  unsigned __int16 v30; // dx
  int v31; // ecx
  _DWORD v32[32]; // [esp+11Ch] [ebp-1A4h] BYREF
  unsigned int v33; // [esp+19Ch] [ebp-124h]
  int *v34; // [esp+1A0h] [ebp-120h]
  struct tagQMSG **v35; // [esp+1A4h] [ebp-11Ch]
  int v36; // [esp+1ACh] [ebp-114h] BYREF
  unsigned int v37; // [esp+1B0h] [ebp-110h]
  unsigned int v38; // [esp+1B4h] [ebp-10Ch]
  HWND v39; // [esp+1B8h] [ebp-108h] BYREF
  int v40; // [esp+1BCh] [ebp-104h] BYREF
  int v41; // [esp+1C0h] [ebp-100h]
  unsigned int v42; // [esp+1C4h] [ebp-FCh] BYREF
  int v43; // [esp+1C8h] [ebp-F8h]
  int v44; // [esp+1CCh] [ebp-F4h] BYREF
  unsigned int v45; // [esp+1D0h] [ebp-F0h]
  unsigned int v46; // [esp+1D4h] [ebp-ECh] BYREF
  _DWORD *v47; // [esp+1D8h] [ebp-E8h]
  int v48; // [esp+1DCh] [ebp-E4h] BYREF
  int v49; // [esp+1E0h] [ebp-E0h]
  int v50; // [esp+1E4h] [ebp-DCh] BYREF
  int v51; // [esp+1E8h] [ebp-D8h]
  int v52; // [esp+1ECh] [ebp-D4h]
  _BYTE v53[104]; // [esp+1F0h] [ebp-D0h] BYREF
  _DWORD v54[26]; // [esp+258h] [ebp-68h] BYREF

  v37 = a2;
  v39 = 0;
  v48 = 0;
  v49 = 0;
  v16 = a8[16];
  v17 = a8[3];
  v18 = a8[5];
  v50 = 0;
  v51 = 0;
  v36 = 0;
  v40 = 0;
  v44 = 0;
  v42 = 0;
  v46 = 0;
  v52 = a8[4];
  v43 = (unsigned __int16)v52;
  v19 = *(_DWORD *)(a1 + 688);
  v20 = v16 << 26 >> 31;
  v45 = v17;
  v38 = v18;
  v41 = v20;
  if ( (v19 & 0x100) != 0 )
  {
    *a9 = 0;
    *(_DWORD *)a13 = 0;
    return 2;
  }
  if ( !a6 )
  {
    v33 = v17;
    *(_DWORD *)(a1 + 688) = v19 | 0x100;
    EtwTraceBeginPointerSetTargetWindows(v33);
    v21 = CTouchProcessor::SetPointerFrameTargetWindows(_gpTouchProcessor, (struct tagTHREADINFO *)a1, v38, v17, &v44);
    v33 = v17;
    if ( !v21 )
    {
      EtwTraceEndPointerSetTargetWindows(v33);
      *(_DWORD *)(a1 + 688) &= ~0x100u;
      return (v44 != 0) + 3;
    }
    EtwTraceEndPointerSetTargetWindows(v33);
    v23 = *(_DWORD *)(a1 + 236);
    *(_DWORD *)(a1 + 688) &= ~0x100u;
    if ( *(_DWORD **)(v23 + 44) != a8 )
      return 4;
    v20 = v41;
    v18 = v38;
  }
  if ( v17 == 595 )
  {
    v24 = (HWND)a8[2];
    v39 = v24;
    v40 = 1;
    v36 = 1;
    v42 = 1;
  }
  else
  {
    if ( !CTouchProcessor::GetPointerMessageInfo(_gpTouchProcessor, v18, v20, &v39, &v40, &v36, &v42, &v46) )
      return 3;
    v24 = v39;
  }
  v25 = (_DWORD *)HMValidateHandleNoSecure((unsigned int)v24, 1);
  v47 = v25;
  if ( !v25 )
    return 3;
  if ( !CheckPwndFilter((int)v25, v37) )
    return 4;
  v37 = v17;
  if ( !a5 || v36 == 1 )
    goto LABEL_24;
  switch ( v17 )
  {
    case 0x245u:
      v17 = 577;
      goto LABEL_23;
    case 0x246u:
      v17 = 578;
      goto LABEL_23;
    case 0x247u:
      v17 = 579;
LABEL_23:
      v37 = v17;
      break;
  }
LABEL_24:
  if ( a3 || a4 != -1 )
  {
    if ( a3 <= a4 )
    {
      if ( v17 < a3 || v17 > a4 )
        return 4;
    }
    else if ( v17 >= a4 && v17 <= a3 )
    {
      return 4;
    }
  }
  v26 = v47;
  if ( CheckCrossThreadInput((int)a8, v47, a13, a7, a14, v34, v35) )
  {
LABEL_39:
    *a9 = v26;
    return 2;
  }
  if ( *(_DWORD *)a13 )
  {
    v27 = v26[2];
    if ( *(_DWORD *)(v27 + 236) == *(_DWORD *)(a1 + 236) && ((*(_DWORD *)(v27 + 688) & 0x8000) == 0 || v36 != -2 && v36) )
    {
      if ( (*(_DWORD *)(v27 + 688) & 0x8000) == 0 )
        goto LABEL_39;
      return 4;
    }
    return 3;
  }
  if ( IsPointerInputMessageWithState() )
  {
    v29 = INPUTDEST_FROM_PWND(v26, v54);
    v33 = v45;
    qmemcpy(v53, v29, sizeof(v53));
    v32[31] = *(_DWORD *)a7;
    qmemcpy(v32, v53, 0x68u);
    CTouchProcessor::AdjustCaptureOnRetrieval(
      _gpTouchProcessor,
      v32[0],
      v32[1],
      v32[2],
      v32[3],
      v32[4],
      v32[5],
      v32[6],
      v32[7],
      v32[8],
      v32[9],
      v32[10],
      v32[11],
      v32[12],
      v32[13],
      v32[14],
      v32[15],
      v32[16],
      v32[17],
      v32[18],
      v32[19],
      v32[20],
      v32[21],
      v32[22],
      v32[23],
      v32[24],
      v32[25],
      v46,
      v38,
      v36,
      v40,
      v41,
      v32[31],
      v45);
    qmemcpy(&v32[3], v53, 0x68u);
    if ( !CTouchProcessor::UpdatePointerInfoTarget(
            _gpTouchProcessor,
            v38,
            v32[3],
            v32[4],
            v32[5],
            v32[6],
            v32[7],
            v32[8],
            v32[9],
            v32[10],
            v32[11],
            v32[12],
            v32[13],
            v32[14],
            v32[15],
            v32[16],
            v32[17],
            v32[18],
            v32[19],
            v32[20],
            v32[21],
            v32[22],
            v32[23],
            v32[24],
            v32[25],
            v32[26],
            v32[27],
            v32[28],
            v36,
            v41,
            &v48,
            &v50) )
      return 3;
    if ( v36 == -2 )
      return 3;
    if ( !v36 )
      return 3;
    qmemcpy(&v32[6], v53, 0x68u);
    v17 = v37;
    if ( !CTouchProcessor::AddThreadPointerData(
            _gpTouchProcessor,
            a1 + 612,
            v43,
            v42,
            v38,
            v37,
            v32[6],
            v32[7],
            v32[8],
            v32[9],
            v32[10],
            v32[11],
            v32[12],
            v32[13],
            v32[14],
            v32[15],
            v32[16],
            v32[17],
            v32[18],
            v32[19],
            v32[20],
            v32[21],
            v32[22],
            v32[23],
            v32[24],
            v32[25],
            v32[26],
            v32[27],
            v32[28],
            v32[29],
            v32[30],
            v32[31],
            1) )
      return 3;
    v26 = v47;
  }
  else
  {
    ThreadPointerData = FindThreadPointerData((struct _LIST_ENTRY *)v34, (unsigned __int16)v35);
    if ( ThreadPointerData )
      *((_DWORD *)ThreadPointerData + 7) |= 8u;
  }
  *a9 = v26;
  *a10 = v17;
  if ( IsPointerInputNonClientMessage(v17) )
    v31 = v30 | ((unsigned __int16)v36 << 16);
  else
    v31 = v52;
  *a11 = v31;
  *a12 = (unsigned __int16)v48 | ((unsigned __int16)v49 << 16);
  *(_DWORD *)a13 = 0;
  result = 1;
  *(_DWORD *)(a1 + 728) = v50;
  *(_DWORD *)(a1 + 732) = v51;
  return result;
}
