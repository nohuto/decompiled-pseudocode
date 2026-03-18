/*
 * XREFs of xxxSetWindowNCMetrics @ 0x1C000B32C
 * Callers:
 *     xxxInitWindowStation @ 0x1C0009574 (xxxInitWindowStation.c)
 *     UserOnGreTextReady @ 0x1C0009D2C (UserOnGreTextReady.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00492E0 (xxxUpdatePerUserSystemParameters.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01D7A98 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x1C000B584 (-GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z.c)
 *     CreateBitmapStrip @ 0x1C000B6D0 (CreateBitmapStrip.c)
 *     xxxSetNCFonts @ 0x1C000B988 (xxxSetNCFonts.c)
 *     ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C000CFF0 (-SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

_BOOL8 __fastcall xxxSetWindowNCMetrics(struct _UNICODE_STRING *a1, struct tagNONCLIENTMETRICSW *a2, int a3)
{
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  __int64 SessionDpiMetrics; // rax
  int v19; // edx
  int v20; // r8d
  __int64 v21; // r9
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  int v25; // edx
  _DWORD v27[128]; // [rsp+20h] [rbp-E0h] BYREF

  memset(v27, 0, 0x1F8uLL);
  if ( !(unsigned int)xxxSetNCFonts(a1, a2) )
    return 0LL;
  if ( !a2 )
  {
    v27[0] = 504;
    if ( a3 >= 0 )
      v27[1] = a3;
    else
      v27[1] = GetTWIPSMetricById(a1, 0x88u, -15);
    v27[2] = GetTWIPSMetricById(a1, 0x98u, -240);
    v27[3] = GetTWIPSMetricById(a1, 0x99u, -240);
    v27[4] = GetTWIPSMetricById(a1, 0x89u, -270);
    v27[5] = GetTWIPSMetricById(a1, 0x8Au, -270);
    v27[29] = GetTWIPSMetricById(a1, 0x8Cu, -195);
    v27[30] = GetTWIPSMetricById(a1, 0x8Du, -195);
    v27[54] = GetTWIPSMetricById(a1, 0x8Fu, -270);
    v27[55] = GetTWIPSMetricById(a1, 0x90u, -270);
    v27[125] = GetTWIPSMetricById(a1, 0x9Eu, 0);
    a2 = (struct tagNONCLIENTMETRICSW *)v27;
  }
  v6 = 1;
  if ( *((int *)a2 + 1) > 1 )
    v6 = *((_DWORD *)a2 + 1);
  v7 = 8;
  v8 = 50;
  if ( v6 < 50 )
    v8 = v6;
  v9 = *((_DWORD *)a2 + 125);
  *((_DWORD *)a2 + 1) = v8;
  v10 = 100;
  if ( v9 <= 0 )
    v9 = 0;
  if ( v9 < 100 )
    v10 = v9;
  v11 = 8;
  *((_DWORD *)a2 + 125) = v10;
  if ( *((int *)a2 + 2) > 8 )
    v11 = *((_DWORD *)a2 + 2);
  v12 = *((_DWORD *)a2 + 3);
  *((_DWORD *)a2 + 2) = v11;
  v13 = 8;
  if ( v12 > 8 )
    v13 = v12;
  v14 = *((_DWORD *)a2 + 4);
  *((_DWORD *)a2 + 3) = v13;
  v15 = 8;
  if ( v14 > 8 )
    v15 = v14;
  *((_DWORD *)a2 + 4) = v15;
  v16 = *(_DWORD *)(GetSessionDpiServerInfo() + 20);
  v17 = *((_DWORD *)a2 + 5);
  if ( v17 <= v16 + 2 )
    v17 = *(_DWORD *)(GetSessionDpiServerInfo() + 20) + 2;
  *((_DWORD *)a2 + 5) = v17;
  SessionDpiMetrics = GetSessionDpiMetrics();
  v19 = 8;
  v20 = *((_DWORD *)a2 + 55);
  v21 = SessionDpiMetrics;
  if ( *((int *)a2 + 29) > 8 )
    v19 = *((_DWORD *)a2 + 29);
  v22 = *((_DWORD *)a2 + 30);
  *((_DWORD *)a2 + 29) = v19;
  v23 = *(_DWORD *)(SessionDpiMetrics + 44);
  v24 = *((_DWORD *)a2 + 54);
  v25 = v23 + 2;
  if ( v22 <= v25 )
    v22 = v25;
  *((_DWORD *)a2 + 30) = v22;
  if ( v24 > 8 )
    v7 = v24;
  *((_DWORD *)a2 + 54) = v7;
  if ( v20 <= *(_DWORD *)(v21 + 28) )
    v20 = *(_DWORD *)(v21 + 28);
  *((_DWORD *)a2 + 55) = v20;
  SetNCMetrics(a2);
  return (unsigned int)CreateBitmapStrip() != 0;
}
