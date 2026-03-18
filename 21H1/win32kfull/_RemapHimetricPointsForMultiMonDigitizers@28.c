/*
 * XREFs of _RemapHimetricPointsForMultiMonDigitizers@28 @ 0x151698
 * Callers:
 *     _PointerInfoCopyOutHelperInternal@28 @ 0x15BB5F (_PointerInfoCopyOutHelperInternal@28.c)
 * Callees:
 *     _GetMonitorRect@4 @ 0xB49BE (_GetMonitorRect@4.c)
 *     _GetScreenRect@0 @ 0xCB540 (_GetScreenRect@0.c)
 *     _VirtualizeMultiMonDigitizerSize@4 @ 0x151D24 (_VirtualizeMultiMonDigitizerSize@4.c)
 */

int __fastcall RemapHimetricPointsForMultiMonDigitizers(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        INT a4,
        int a5,
        INT b,
        INT a7)
{
  INT *v8; // esi
  int *v9; // esi
  int *MonitorRect; // eax
  int *ScreenRect; // eax
  INT v12; // esi
  INT v13; // edi
  INT v14; // ebx
  INT v15; // esi
  INT v16; // edi
  int result; // eax
  INT c; // [esp+10h] [ebp-58h]
  INT ca; // [esp+10h] [ebp-58h]
  INT v21; // [esp+18h] [ebp-50h]
  INT v22; // [esp+18h] [ebp-50h]
  INT v23; // [esp+1Ch] [ebp-4Ch]
  INT v24; // [esp+20h] [ebp-48h]
  INT v25; // [esp+24h] [ebp-44h]
  int v26; // [esp+28h] [ebp-40h] BYREF
  int v27; // [esp+2Ch] [ebp-3Ch]
  int v28; // [esp+30h] [ebp-38h]
  int v29; // [esp+34h] [ebp-34h]
  INT v30; // [esp+38h] [ebp-30h] BYREF
  int v31; // [esp+3Ch] [ebp-2Ch]
  INT v32; // [esp+40h] [ebp-28h]
  INT v33; // [esp+44h] [ebp-24h]
  int v34; // [esp+48h] [ebp-20h]
  int v35; // [esp+4Ch] [ebp-1Ch]
  int v36; // [esp+50h] [ebp-18h]
  int v37; // [esp+54h] [ebp-14h]
  _DWORD v38[4]; // [esp+58h] [ebp-10h] BYREF

  v8 = (INT *)(a1[5] + 16);
  v30 = *v8++;
  v31 = *v8++;
  v32 = *v8;
  v33 = v8[1];
  v9 = (int *)(*_gpDispInfo + 12);
  v26 = *v9++;
  v27 = *v9++;
  v28 = *v9;
  v29 = v9[1];
  v25 = EngMulDiv(v30 - v26, b, v28 - v26);
  v23 = EngMulDiv(v31 - v27, a7, v29 - v27);
  v21 = EngMulDiv(v32 - v26, b, v28 - v26);
  c = EngMulDiv(v33 - v27, a7, v29 - v27);
  v30 = a4;
  v31 = a5;
  v32 = b;
  v33 = a7;
  VirtualizeMultiMonDigitizerSize(&v30);
  MonitorRect = GetMonitorRect(a1, &v26);
  v34 = *MonitorRect;
  v35 = MonitorRect[1];
  v36 = MonitorRect[2];
  v37 = MonitorRect[3];
  ScreenRect = GetScreenRect(v38);
  v26 = *ScreenRect;
  v27 = ScreenRect[1];
  v28 = ScreenRect[2];
  v29 = ScreenRect[3];
  v12 = v28 - v26;
  v13 = v29 - v27;
  v14 = EngMulDiv(v34 - v26, v32, v28 - v26);
  v24 = EngMulDiv(v35 - v27, v33, v13);
  ca = c - v23;
  v15 = EngMulDiv(v36 - v26, v32, v12) - v14;
  v16 = EngMulDiv(v37 - v27, v33, v13) - v24;
  v22 = v21 - v25;
  *a2 = v14 + EngMulDiv(*a2 - v25, v15, v22);
  a2[1] = v24 + EngMulDiv(a2[1] - v23, v16, ca);
  *a3 = v14 + EngMulDiv(*a3 - v25, v15, v22);
  result = v24 + EngMulDiv(a3[1] - v23, v16, ca);
  a3[1] = result;
  return result;
}
