/*
 * XREFs of InitializeGreCSRSS @ 0x1C000DCB0
 * Callers:
 *     Win32kBaseUserInitialize @ 0x1C0015790 (Win32kBaseUserInitialize.c)
 * Callees:
 *     ?vCheckIsSetupRunning@@YAXXZ @ 0x1C000DF94 (-vCheckIsSetupRunning@@YAXXZ.c)
 *     vConvertCodePageToCharSet @ 0x1C000E0B0 (vConvertCodePageToCharSet.c)
 *     ?GetLanguageID@@YAGXZ @ 0x1C000E100 (-GetLanguageID@@YAGXZ.c)
 *     DrvNotifySessionStateChange @ 0x1C000E250 (DrvNotifySessionStateChange.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 InitializeGreCSRSS()
{
  int v0; // ebx
  int v1; // eax
  _DWORD *v2; // rsi
  USHORT *v3; // rbp
  USHORT *v4; // rdi
  USHORT v5; // r8
  BOOL v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax

  DrvNotifySessionStateChange(0LL);
  v0 = -1073741637;
  if ( qword_1C0258D28 )
    v1 = qword_1C0258D28();
  else
    v1 = -1073741637;
  if ( v1 )
    return 0LL;
  gcTrueTypeFonts = 0;
  gulFontInformation = 0;
  gusLanguageID = GetLanguageID();
  if ( qword_1C0257408 )
    v2 = (_DWORD *)qword_1C0257408();
  else
    v2 = 0LL;
  if ( qword_1C02573E8 )
    v3 = (USHORT *)qword_1C02573E8();
  else
    v3 = 0LL;
  if ( qword_1C02573F8 )
    v4 = (USHORT *)qword_1C02573F8();
  else
    v4 = 0LL;
  RtlGetDefaultCodePage(v4, v3);
  vConvertCodePageToCharSet(*v4);
  v5 = *v4;
  if ( *v4 == 936 || v5 == 949 || v5 == 950 )
  {
    *v2 = 3;
    v5 = *v4;
  }
  v6 = v5 == 932 || v5 == 949 || v5 == 950 || v5 == 936;
  gbDBCSCodePage = v6;
  if ( qword_1C0257410 )
    v7 = qword_1C0257410(949LL, 950LL);
  else
    v7 = -1073741637;
  if ( v7 >= 0 && qword_1C0257418 )
    qword_1C0257418();
  vCheckIsSetupRunning();
  if ( qword_1C0257440 )
    v8 = qword_1C0257440();
  else
    v8 = -1073741637;
  if ( v8 >= 0 && qword_1C0257448 )
    qword_1C0257448();
  v9 = qword_1C0257518 ? qword_1C0257518() : -1073741637;
  if ( v9 < 0 )
    return 0LL;
  v10 = qword_1C0257450 ? qword_1C0257450() : -1073741637;
  if ( v10 >= 0 )
  {
    v11 = (int)qword_1C0257458;
    if ( qword_1C0257458 )
      v11 = qword_1C0257458();
    if ( !v11 )
      return 0LL;
  }
  v12 = qword_1C0257460 ? qword_1C0257460() : -1073741637;
  if ( v12 >= 0 )
  {
    v13 = (int)qword_1C0257468;
    if ( qword_1C0257468 )
      v13 = qword_1C0257468();
    if ( !v13 )
      return 0LL;
  }
  if ( qword_1C0257470 )
    v14 = qword_1C0257470();
  else
    v14 = -1073741637;
  if ( v14 >= 0 && qword_1C0257478 )
    qword_1C0257478();
  if ( qword_1C0257480 )
    v15 = qword_1C0257480();
  else
    v15 = -1073741637;
  if ( v15 >= 0 && qword_1C0257488 )
    qword_1C0257488();
  if ( qword_1C0257490 )
    v16 = qword_1C0257490();
  else
    v16 = -1073741637;
  if ( v16 >= 0 && qword_1C02574A8 )
    qword_1C02574A8();
  if ( qword_1C0257498 )
    v0 = qword_1C0257498();
  if ( v0 < 0 )
    return 1LL;
  v17 = (int)qword_1C02574A0;
  if ( qword_1C02574A0 )
    v17 = qword_1C02574A0();
  return v17 != 0;
}
