/*
 * XREFs of ?xxxForceSizeRecToDockTarget@@YGHPAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAUtagMONITOR@@PAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z @ 0x174294
 * Callers:
 *     ?xxxEvaluateDestRectForMonitorMigration@@YG_NW4_WARR_STATES@@PAU_MOVESIZEDATA@@PAUtagWND@@PAUtagMONITOR@@H@Z @ 0x174001 (-xxxEvaluateDestRectForMonitorMigration@@YG_NW4_WARR_STATES@@PAU_MOVESIZEDATA@@PAUtagWND@@PAUtag.c)
 *     ?xxxProgrammaticSemiMaximize@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1750AE (-xxxProgrammaticSemiMaximize@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@.c)
 * Callees:
 *     _GetMonitorWorkRectForWindow@8 @ 0x71F30 (_GetMonitorWorkRectForWindow@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z @ 0x175333 (-xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z.c)
 */

int __fastcall xxxForceSizeRecToDockTarget(
        int a1,
        int a2,
        int a3,
        struct _MOVESIZEDATA *a4,
        unsigned int a5,
        unsigned int *a6)
{
  _DWORD *v7; // edx
  int *MonitorWorkRectForWindow; // eax
  int v9; // eax
  int v10; // eax
  char *v11; // edi
  _BYTE *v12; // ecx
  int v13; // ebx
  char *v14; // edx
  int v15; // esi
  char v16; // al
  char *v17; // eax
  int v18; // ecx
  int result; // eax
  char *v20; // edx
  char v21; // cl
  struct tagRECT *v22; // [esp+0h] [ebp-58h]
  struct tagCHECKPOINT **v23; // [esp+4h] [ebp-54h]
  _DWORD v24[4]; // [esp+10h] [ebp-48h] BYREF
  struct _MOVESIZEDATA *v25; // [esp+20h] [ebp-38h]
  unsigned int v26; // [esp+24h] [ebp-34h]
  unsigned int *v27; // [esp+28h] [ebp-30h]
  int v28; // [esp+2Ch] [ebp-2Ch]
  int v29; // [esp+30h] [ebp-28h]
  int v30; // [esp+34h] [ebp-24h]
  int v31; // [esp+38h] [ebp-20h]
  int v32; // [esp+3Ch] [ebp-1Ch]
  int v33; // [esp+40h] [ebp-18h]
  int v34; // [esp+44h] [ebp-14h]
  int v35; // [esp+48h] [ebp-10h]
  _BYTE v36[8]; // [esp+4Ch] [ebp-Ch] BYREF

  v25 = a4;
  v26 = a5;
  v27 = a6;
  v7 = *(_DWORD **)(a1 + 8);
  v28 = a1;
  v29 = a3;
  MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(a3, v7, v24);
  v30 = *MonitorWorkRectForWindow;
  v31 = MonitorWorkRectForWindow[1];
  v32 = MonitorWorkRectForWindow[2];
  v33 = MonitorWorkRectForWindow[3];
  if ( a2 == 2 )
  {
    v9 = (unsigned __int16)(v32 - 1);
LABEL_3:
    v35 = v9;
    v10 = (unsigned __int16)(v31 + (v33 - v31) / 2);
    goto LABEL_8;
  }
  if ( a2 == 1 )
  {
    v9 = (unsigned __int16)v30;
    goto LABEL_3;
  }
  if ( a2 )
    return 0;
  v35 = (unsigned __int16)(v30 + (v32 - v30) / 2);
  v10 = (unsigned __int16)v31;
LABEL_8:
  v34 = v10;
  v11 = (char *)(v29 + a2 + 128);
  v12 = v36;
  v13 = 7;
  v14 = v11;
  v15 = 7;
  do
  {
    v16 = *v14;
    v14 += 4;
    *v12++ = v16;
    --v15;
  }
  while ( v15 );
  v17 = v11;
  v18 = 7;
  do
  {
    *v17 = 1;
    v17 += 4;
    --v18;
  }
  while ( v18 );
  result = xxxSizeOrMoveRect(v25, v26, v27, v22, v23);
  v20 = v36;
  do
  {
    v21 = *v20++;
    *v11 = v21;
    v11 += 4;
    --v13;
  }
  while ( v13 );
  return result;
}
