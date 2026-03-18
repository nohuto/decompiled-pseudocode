/*
 * XREFs of _xxxSetWindowNCMetrics@12 @ 0xDA168
 * Callers:
 *     _xxxInitWindowStation@0 @ 0xD69D6 (_xxxInitWindowStation@0.c)
 *     _UserOnGreTextReady@0 @ 0xD74BA (_UserOnGreTextReady@0.c)
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 *     ?xxxSetAndDrawNCMetrics@@YGHPAU_UNICODE_STRING@@HPAUtagNONCLIENTMETRICSW@@@Z @ 0x145A20 (-xxxSetAndDrawNCMetrics@@YGHPAU_UNICODE_STRING@@HPAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     _CreateBitmapStrip@0 @ 0x8E78C (_CreateBitmapStrip@0.c)
 *     ?GetTWIPSMetricById@@YGHPAU_UNICODE_STRING@@IH@Z @ 0xDA38C (-GetTWIPSMetricById@@YGHPAU_UNICODE_STRING@@IH@Z.c)
 *     _xxxSetNCFonts@8 @ 0xDA4C2 (_xxxSetNCFonts@8.c)
 *     ?SetNCMetrics@@YGXPAUtagNONCLIENTMETRICSW@@@Z @ 0xDB0A6 (-SetNCMetrics@@YGXPAUtagNONCLIENTMETRICSW@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

BOOL __fastcall xxxSetWindowNCMetrics(int a1, _DWORD *a2, int a3)
{
  int TWIPSMetricById; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int SessionDpiServerInfo; // eax
  int v12; // ecx
  int SessionDpiMetrics; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  struct tagNONCLIENTMETRICSW *v20; // [esp+0h] [ebp-214h]
  unsigned int v21; // [esp+0h] [ebp-214h]
  unsigned int v22; // [esp+0h] [ebp-214h]
  unsigned int v23; // [esp+0h] [ebp-214h]
  unsigned int v24; // [esp+0h] [ebp-214h]
  unsigned int v25; // [esp+0h] [ebp-214h]
  unsigned int v26; // [esp+0h] [ebp-214h]
  unsigned int v27; // [esp+0h] [ebp-214h]
  unsigned int v28; // [esp+0h] [ebp-214h]
  unsigned int v29; // [esp+0h] [ebp-214h]
  int v30; // [esp+4h] [ebp-210h]
  int v31; // [esp+4h] [ebp-210h]
  int v32; // [esp+4h] [ebp-210h]
  int v33; // [esp+4h] [ebp-210h]
  int v34; // [esp+4h] [ebp-210h]
  int v35; // [esp+4h] [ebp-210h]
  int v36; // [esp+4h] [ebp-210h]
  int v37; // [esp+4h] [ebp-210h]
  int v38; // [esp+4h] [ebp-210h]
  _DWORD v39[127]; // [esp+10h] [ebp-204h] BYREF

  memset(v39, 0, 0x1F8u);
  if ( !xxxSetNCFonts(a1, a2) )
    return 0;
  if ( !a2 )
  {
    TWIPSMetricById = a3;
    v39[0] = 504;
    if ( a3 < 0 )
      TWIPSMetricById = GetTWIPSMetricById((struct _UNICODE_STRING *)0xFFFFFFF1, (unsigned int)v20, v30);
    v39[1] = TWIPSMetricById;
    v39[2] = GetTWIPSMetricById((struct _UNICODE_STRING *)0xFFFFFF10, (unsigned int)v20, v30);
    v39[3] = GetTWIPSMetricById((struct _UNICODE_STRING *)0xFFFFFF10, v21, v31);
    v39[4] = GetTWIPSMetricById((struct _UNICODE_STRING *)0xFFFFFEF2, v22, v32);
    v39[5] = GetTWIPSMetricById((struct _UNICODE_STRING *)0xFFFFFEF2, v23, v33);
    v39[29] = GetTWIPSMetricById((struct _UNICODE_STRING *)0xFFFFFF3D, v24, v34);
    v39[30] = GetTWIPSMetricById((struct _UNICODE_STRING *)0xFFFFFF3D, v25, v35);
    v39[54] = GetTWIPSMetricById((struct _UNICODE_STRING *)0xFFFFFEF2, v26, v36);
    v39[55] = GetTWIPSMetricById((struct _UNICODE_STRING *)0xFFFFFEF2, v27, v37);
    v39[125] = GetTWIPSMetricById(0, v28, v38);
    a2 = v39;
  }
  v6 = a2[1];
  if ( v6 <= 1 )
    v6 = 1;
  if ( v6 >= 50 )
    v6 = 50;
  a2[1] = v6;
  v7 = a2[125];
  if ( v7 <= 0 )
    v7 = 0;
  if ( v7 >= 100 )
    v7 = 100;
  a2[125] = v7;
  v8 = a2[2];
  if ( v8 <= 8 )
    v8 = 8;
  a2[2] = v8;
  v9 = a2[3];
  if ( v9 <= 8 )
    v9 = 8;
  a2[3] = v9;
  v10 = a2[4];
  if ( v10 <= 8 )
    v10 = 8;
  a2[4] = v10;
  SessionDpiServerInfo = GetSessionDpiServerInfo();
  v12 = a2[5];
  if ( v12 <= *(_DWORD *)(SessionDpiServerInfo + 16) + 2 )
    v12 = *(_DWORD *)(GetSessionDpiServerInfo() + 16) + 2;
  a2[5] = v12;
  SessionDpiMetrics = GetSessionDpiMetrics();
  v14 = a2[29];
  v15 = SessionDpiMetrics;
  if ( v14 <= 8 )
    v14 = 8;
  v16 = a2[30];
  a2[29] = v14;
  if ( v16 <= *(_DWORD *)(v15 + 36) + 2 )
    v16 = *(_DWORD *)(v15 + 36) + 2;
  a2[30] = v16;
  v17 = a2[54];
  if ( v17 <= 8 )
    v17 = 8;
  a2[54] = v17;
  v18 = a2[55];
  if ( v18 <= *(_DWORD *)(v15 + 24) )
    v18 = *(_DWORD *)(v15 + 24);
  a2[55] = v18;
  SetNCMetrics(v20);
  return CreateBitmapStrip(v29) != 0;
}
