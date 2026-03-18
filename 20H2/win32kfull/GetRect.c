/*
 * XREFs of GetRect @ 0x1C005E0AC
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     ParkIcon @ 0x1C001893C (ParkIcon.c)
 *     _GetWindowPlacement @ 0x1C003A648 (_GetWindowPlacement.c)
 *     UpdateCheckpoint @ 0x1C003A968 (UpdateCheckpoint.c)
 *     xxxDrawWindowFrame @ 0x1C003EDF8 (xxxDrawWindowFrame.c)
 *     xxxScrollWindowEx @ 0x1C0040D0C (xxxScrollWindowEx.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004596C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     CalcSBStuff @ 0x1C005DF24 (CalcSBStuff.c)
 *     xxxGetScrollBarInfo @ 0x1C005E624 (xxxGetScrollBarInfo.c)
 *     xxxDrawCaptionBar @ 0x1C0079538 (xxxDrawCaptionBar.c)
 *     UT_GetParentDCClipBox @ 0x1C00CF94C (UT_GetParentDCClipBox.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0101ED0 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     InternalGetRealClientRect @ 0x1C01093C8 (InternalGetRealClientRect.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020AA68 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     SBCtlSetup @ 0x1C024511C (SBCtlSetup.c)
 * Callees:
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00F9BFC (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00F9C40 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall GetRect(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  int v6; // esi
  __int128 v7; // xmm0
  __int64 v8; // rdx
  __int64 result; // rax
  int v10; // r8d
  __int64 v11; // rbp
  __int64 v12; // r8
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  int v15; // ecx
  int v16; // edx
  unsigned int *v17; // rdx
  unsigned int v18; // ecx
  __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // edx
  __int128 v22; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  v6 = a3 & 2;
  if ( (a3 & 2) != 0 )
    v7 = *(_OWORD *)(v3 + 88);
  else
    v7 = *(_OWORD *)(v3 + 104);
  v22 = v7;
  *(_OWORD *)a2 = v7;
  v8 = *(_QWORD *)(a1 + 40);
  result = *(_WORD *)(v8 + 42) & 0x2FFF;
  if ( (_DWORD)result == 669 )
    return result;
  v10 = a3 & 0x70;
  switch ( v10 )
  {
    case 32:
      v17 = (unsigned int *)(v8 + 88);
LABEL_18:
      v18 = v17[1];
      result = *v17;
      *(_DWORD *)a2 -= result;
      *(_DWORD *)(a2 + 8) -= result;
      *(_DWORD *)(a2 + 12) -= v18;
      *(_DWORD *)(a2 + 4) -= v18;
      return result;
    case 16:
      v17 = (unsigned int *)(v8 + 104);
      goto LABEL_18;
    case 64:
      v11 = *(_QWORD *)(a1 + 104);
      v12 = *(_QWORD *)(v11 + 40);
      result = *(_WORD *)(v12 + 42) & 0x2FFF;
      if ( (_DWORD)result != 669 )
      {
        v13 = *(_DWORD *)(v8 + 288);
        v14 = *(_DWORD *)(v12 + 288);
        if ( (((unsigned __int16)(v13 >> 8) ^ (unsigned __int16)(v14 >> 8)) & 0x1FF) != 0 )
          goto LABEL_26;
        v15 = 1;
        v16 = (v13 & 0xF) == 2 && (v13 & 0x20000000) != 0;
        if ( (v14 & 0xF) != 2 || (v14 & 0x20000000) == 0 )
          v15 = 0;
        if ( v16 != v15 )
        {
LABEL_26:
          v19 = *(_QWORD *)(a1 + 104);
          v22 = *(_OWORD *)(v12 + 104);
          LogicalToPhysicalInPlaceRectWithSubpixel(v19, &v22, 0LL);
          PhysicalToLogicalInPlaceRectWithSubpixel(a1, &v22, 0LL);
          v12 = *(_QWORD *)(v11 + 40);
          v17 = (unsigned int *)&v22;
        }
        else
        {
          v17 = (unsigned int *)(v12 + 104);
        }
        if ( (*(_BYTE *)(v12 + 26) & 0x40) != 0 && v6 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x40) != 0 )
        {
          v20 = v17[1];
          v21 = v17[2];
          *(_DWORD *)(a2 + 12) -= v20;
          *(_DWORD *)(a2 + 4) -= v20;
          result = v21 - *(_DWORD *)(a2 + 8);
          *(_DWORD *)(a2 + 8) = v21 - *(_DWORD *)a2;
          *(_DWORD *)a2 = result;
          return result;
        }
        goto LABEL_18;
      }
      break;
  }
  return result;
}
