/*
 * XREFs of ?HitTargetAndMonitorFromPoint@@YGHUtagPOINT@@QBU_MOVESIZEDATA@@PAPAUtagMONITOR@@PAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1715B3
 * Callers:
 *     ?ComputeMoveOutcome@@YG?AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QBU_MOVESIZEDATA@@PAPAUtagMONITOR@@PAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x170D2A (-ComputeMoveOutcome@@YG-AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QBU_MOVESIZEDATA@@PAPAUtagMONITOR@@PA.c)
 *     ?ComputeSizeOutcome@@YG?AW4_MOUSE_SIZE_OUTCOME@@UtagPOINT@@QBU_MOVESIZEDATA@@PAPAUtagMONITOR@@PAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x170E05 (-ComputeSizeOutcome@@YG-AW4_MOUSE_SIZE_OUTCOME@@UtagPOINT@@QBU_MOVESIZEDATA@@PAPAUtagMONITOR@@PA.c)
 *     _xxxInitializeMoveSizeData@20 @ 0x176FCC (_xxxInitializeMoveSizeData@20.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YGXQBU_MOVESIZEDATA@@PAUtagPOINT@@PAPAUtagMONITOR@@PAUtagRECT@@@Z @ 0x170EAA (-ComputeSourceRectAndMonitorWithPrecision@@YGXQBU_MOVESIZEDATA@@PAUtagPOINT@@PAPAUtagMONITOR@@PA.c)
 *     ?PtInRectSpace@@YGHPBUtagRECT@@UtagPOINT@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x171FF4 (-PtInRectSpace@@YGHPBUtagRECT@@UtagPOINT@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     _WPP_RECORDER_SF_qd@28 @ 0x176592 (_WPP_RECORDER_SF_qd@28.c)
 */

int __userpurge HitTargetAndMonitorFromPoint@<eax>(
        LONG *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagPOINT a3,
        const struct _MOVESIZEDATA *a4,
        struct tagMONITOR **a5,
        enum eTHRESHOLD_MARGIN_DIRECTION *a6)
{
  unsigned int v6; // esi
  unsigned int v7; // esi
  BOOL v8; // edi
  LONG v9; // ebx
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // ch
  unsigned __int8 v12; // dh
  unsigned __int8 v13; // cl
  int v14; // esi
  struct tagPOINT *v15; // ecx
  LONG v16; // eax
  int v17; // ecx
  LONG y; // [esp-8h] [ebp-4Ch]
  const struct _MOVESIZEDATA *v20; // [esp-4h] [ebp-48h]
  struct tagMONITOR **v21; // [esp+0h] [ebp-44h]
  struct tagRECT *v22; // [esp+4h] [ebp-40h]
  struct tagPOINT v23; // [esp+Ch] [ebp-38h] BYREF
  LONG v24; // [esp+14h] [ebp-30h]
  int v25; // [esp+18h] [ebp-2Ch]
  int v26; // [esp+1Ch] [ebp-28h]
  struct tagPOINT v27; // [esp+20h] [ebp-24h] BYREF
  LONG v28; // [esp+28h] [ebp-1Ch]
  int v29; // [esp+2Ch] [ebp-18h]
  LONG v30; // [esp+30h] [ebp-14h] BYREF
  LONG *v31; // [esp+34h] [ebp-10h]
  unsigned __int8 v32; // [esp+39h] [ebp-Bh]
  unsigned __int8 v33; // [esp+3Ah] [ebp-Ah]
  unsigned __int8 v34; // [esp+3Bh] [ebp-9h]

  v6 = a2[46];
  v30 = 0;
  v23.x = 0;
  v7 = (v6 >> 15) & 7;
  v31 = a1;
  v23.y = 0;
  v24 = 0;
  v25 = 0;
  v8 = *(_DWORD *)*_gpDispInfo > 1u && v7 < 6;
  ComputeSourceRectAndMonitorWithPrecision(&a3.y, a2, (const struct _MOVESIZEDATA *)&v30, &v23, v21, v22);
  v9 = v30;
  v10 = *(_BYTE *)(v30 + 4 * v7 + 130);
  v11 = *(_BYTE *)(v30 + 4 * v7 + 128);
  v12 = *(_BYTE *)(v30 + 4 * v7 + 131);
  v13 = *(_BYTE *)(v30 + 4 * v7 + 129);
  v34 = v10;
  v33 = v11;
  v32 = v12;
  if ( v8 )
  {
    if ( !v13 )
      v13 = gWinArrGlobal[dword_25137C[4 * v7]];
    if ( !v10 )
      v34 = gWinArrGlobal[dword_251380[4 * v7]];
    if ( !v11 )
      v33 = gWinArrGlobal[dword_251378[4 * v7]];
    if ( !v12 )
      v32 = gWinArrGlobal[dword_251384[4 * v7]];
  }
  v27 = v23;
  v30 = v13 + v23.x;
  v29 = v25;
  v28 = v30;
  v14 = 1;
  if ( PtInRectSpace(&v27, 1, a3.y, a4)
    || (v26 = v34, v27.y = v23.y, v28 = v24, v29 = v25, v14 = 2, v27.x = v24 - v34, PtInRectSpace(&v27, 2, a3.y, a4)) )
  {
    *(_DWORD *)a3.x = v14;
LABEL_21:
    *v31 = v9;
    return 1;
  }
  v16 = v30;
  v20 = a4;
  y = a3.y;
  *v15 = v23;
  v15[1].x = v24;
  v15[1].y = v25;
  v27.x = v16;
  v29 = v27.y + v33;
  v28 -= v26;
  if ( PtInRectSpace(v15, 0, y, v20) )
  {
    *(_DWORD *)a3.x = 0;
    goto LABEL_21;
  }
  v29 = v25;
  v27.x = v30;
  v28 = v24 - v26;
  v27.y = v25 - v32;
  if ( PtInRectSpace(&v27, 3, a3.y, a4) )
  {
    *(_DWORD *)a3.x = 3;
    goto LABEL_21;
  }
  *(_DWORD *)a3.x = 4;
  *v31 = v9;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      v17,
      11,
      &WPP_44fe173a72dc32ad3264e41cf6895406_Traceguids,
      v9,
      *(_WORD *)(*(_DWORD *)(v9 + 20) + 52));
  return 0;
}
