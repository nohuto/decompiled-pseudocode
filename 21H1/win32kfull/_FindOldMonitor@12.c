/*
 * XREFs of _FindOldMonitor@12 @ 0x153AA
 * Callers:
 *     _xxxDeferWindowPosAndCheckPoint@28 @ 0x14AF0 (_xxxDeferWindowPosAndCheckPoint@28.c)
 *     ?xxxProcessDesktopRecalc@@YGXPAUtagASYNCDTOPRECALC@@@Z @ 0x150D2 (-xxxProcessDesktopRecalc@@YGXPAUtagASYNCDTOPRECALC@@@Z.c)
 *     _xxxComputeProposedPerMonRect@12 @ 0x15354 (_xxxComputeProposedPerMonRect@12.c)
 * Callees:
 *     _GetMonitorRectForDpi@8 @ 0x15588 (_GetMonitorRectForDpi@8.c)
 *     ?Reset@PlaceHolderMonitor@@QAEXPAUtagMONITORPOS@@@Z @ 0x156AE (-Reset@PlaceHolderMonitor@@QAEXPAUtagMONITORPOS@@@Z.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall FindOldMonitor(int a1, _DWORD *a2, int *a3)
{
  unsigned int v3; // ebx
  int *v4; // esi
  int *v5; // esi
  struct tagMONITORPOS *v6; // edx
  _DWORD *MonitorRectForDpi; // eax
  int v8; // eax
  int v9; // ecx
  int v11; // eax
  unsigned int v12; // eax
  char v13[20]; // [esp+10h] [ebp-17Ch] BYREF
  _DWORD v14[4]; // [esp+24h] [ebp-168h] BYREF
  int v15; // [esp+34h] [ebp-158h]
  int v16; // [esp+38h] [ebp-154h]
  int v17; // [esp+3Ch] [ebp-150h]
  int v18; // [esp+40h] [ebp-14Ch]
  int v19; // [esp+44h] [ebp-148h]
  int v20; // [esp+48h] [ebp-144h]
  int v21; // [esp+4Ch] [ebp-140h]
  int v22; // [esp+50h] [ebp-13Ch]
  int v23; // [esp+54h] [ebp-138h]
  int v24; // [esp+58h] [ebp-134h]
  _DWORD *v25; // [esp+5Ch] [ebp-130h]
  _DWORD *v26; // [esp+60h] [ebp-12Ch]
  int v27; // [esp+64h] [ebp-128h]
  int v28; // [esp+68h] [ebp-124h]
  int v29; // [esp+6Ch] [ebp-120h]
  _DWORD v30[69]; // [esp+70h] [ebp-11Ch] BYREF

  v3 = 0;
  v25 = a2;
  v19 = a1;
  memset(v30, 0, 272);
  v24 = -1;
  v4 = a3;
  v30[24] = v30;
  if ( !a3 )
    v4 = (int *)(*(_DWORD *)(a1 + 20) + 52);
  v20 = *v4;
  v5 = v4 + 1;
  v21 = *v5++;
  v22 = *v5;
  v23 = v5[1];
  v28 = v22 - v20;
  v27 = v23 - v21;
  if ( v22 == v20 )
  {
    v28 = 1;
    ++v22;
  }
  if ( v23 == v21 )
  {
    v27 = 1;
    ++v23;
  }
  v29 = 0;
  v6 = (struct tagMONITORPOS *)(v25 + 1);
  v26 = v25 + 1;
  if ( (int)*v25 > 0 )
  {
    do
    {
      PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v30, v6);
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      MonitorRectForDpi = (_DWORD *)GetMonitorRectForDpi(v13);
      v14[0] = *MonitorRectForDpi;
      v14[1] = MonitorRectForDpi[1];
      v14[2] = MonitorRectForDpi[2];
      v14[3] = MonitorRectForDpi[3];
      if ( !IntersectRect(v14) )
        goto LABEL_12;
      v8 = v17 - v15;
      v9 = v18 - v16;
      v17 = v8;
      v18 -= v16;
      if ( v8 == v28 && v9 == v27 )
        return v29;
      v12 = v9 * v8;
      if ( v12 > v3 )
      {
        v3 = v12;
        v11 = v29;
        v24 = v29;
      }
      else
      {
LABEL_12:
        v11 = v29;
      }
      v6 = (struct tagMONITORPOS *)(v26 + 10);
      v26 += 10;
      v29 = v11 + 1;
    }
    while ( v11 + 1 < *v25 );
  }
  return v24;
}
