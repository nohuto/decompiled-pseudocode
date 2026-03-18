/*
 * XREFs of _GetMonitorTransform@12 @ 0x99CB2
 * Callers:
 *     _GetNewMonitor@12 @ 0x355FC (_GetNewMonitor@12.c)
 *     _UpdateTopLevelWindowDPITransform@8 @ 0x99C12 (_UpdateTopLevelWindowDPITransform@8.c)
 *     _TransformVectorWithInputTargetPrecedence@12 @ 0x14E6DF (_TransformVectorWithInputTargetPrecedence@12.c)
 * Callees:
 *     _GetMonitorRectForDpiContext@8 @ 0x3356A (_GetMonitorRectForDpiContext@8.c)
 *     _IsChildWindowDpiBoundary@4 @ 0x38846 (_IsChildWindowDpiBoundary@4.c)
 */

int __fastcall GetMonitorTransform(int a1, int a2, float *a3)
{
  unsigned int v4; // edx
  int v5; // ebx
  int v6; // eax
  INT *MonitorRectForDpiContext; // eax
  int v8; // esi
  int v9; // ecx
  int result; // eax
  double v12; // st7
  double v13; // st6
  int v14; // eax
  double v15; // st6
  int v16; // eax
  double v17; // st6
  INT v18[4]; // [esp+10h] [ebp-34h] BYREF
  int v19; // [esp+20h] [ebp-24h]
  int v20; // [esp+24h] [ebp-20h]
  INT v21; // [esp+28h] [ebp-1Ch]
  INT v22; // [esp+2Ch] [ebp-18h]
  double v23; // [esp+30h] [ebp-14h]
  int v24; // [esp+3Ch] [ebp-8h]
  float v25; // [esp+4Ch] [ebp+8h]
  float v26; // [esp+4Ch] [ebp+8h]
  float v27; // [esp+4Ch] [ebp+8h]
  int v28; // [esp+4Ch] [ebp+8h]
  float v29; // [esp+4Ch] [ebp+8h]

  v24 = a1;
  HIDWORD(v23) = a2;
  v4 = *(_DWORD *)(*(_DWORD *)(a2 + 20) + 184);
  v5 = (v4 >> 8) & 0x1FF;
  if ( (v4 & 0xF) == 2 && (v4 & 0x20000000) != 0 )
  {
    if ( !a1 )
      return 0;
    LOWORD(v5) = *(_WORD *)(*(_DWORD *)(a1 + 20) + 56);
  }
  if ( !a1 )
    return 0;
  if ( !(_WORD)v5 )
    return 0;
  v6 = *(_DWORD *)(*(_DWORD *)(a2 + 8) + 248);
  if ( !v6 )
    return 0;
  if ( (*(_BYTE *)(**(_DWORD **)(v6 + 4) + 32) & 1) == 0 )
    return 0;
  MonitorRectForDpiContext = GetMonitorRectForDpiContext(a1, v4, v18);
  v19 = *MonitorRectForDpiContext;
  v20 = MonitorRectForDpiContext[1];
  v21 = MonitorRectForDpiContext[2];
  v22 = MonitorRectForDpiContext[3];
  v8 = v24;
  if ( *(_WORD *)(*(_DWORD *)(v24 + 20) + 52) == (_WORD)v5 && !IsChildWindowDpiBoundary((_DWORD *)HIDWORD(v23)) )
  {
    v9 = *(_DWORD *)(v8 + 20);
    if ( *(_DWORD *)(v9 + 16) == v19 && *(_DWORD *)(v9 + 20) == v20 )
      return 0;
  }
  v23 = (double)(unsigned __int16)v5;
  v12 = v23;
  HIDWORD(v23) = *(unsigned __int16 *)(*(_DWORD *)(v8 + 20) + 52);
  v23 = (double)SHIDWORD(v23);
  *((float *)&v23 + 1) = v23 / v12;
  v13 = *((float *)&v23 + 1);
  *a3 = *((float *)&v23 + 1);
  a3[5] = v13;
  a3[10] = 1.0;
  a3[15] = 1.0;
  v14 = *(_DWORD *)(v8 + 20);
  v25 = (float)*(int *)(v14 + 16);
  v15 = v25;
  v23 = (double)*(unsigned __int16 *)(v14 + 52);
  v26 = (float)v19;
  a3[12] = v15 - v23 * v26 / v12;
  v16 = *(_DWORD *)(v8 + 20);
  v27 = (float)*(int *)(v16 + 20);
  v17 = v27;
  v28 = *(unsigned __int16 *)(v16 + 52);
  result = 1;
  v23 = (double)v28;
  v29 = (float)v20;
  a3[13] = v17 - v23 * v29 / v12;
  return result;
}
