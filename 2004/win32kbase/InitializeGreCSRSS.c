/*
 * XREFs of InitializeGreCSRSS @ 0x1C0022BF0
 * Callers:
 *     Win32kBaseUserInitialize @ 0x1C002BEF0 (Win32kBaseUserInitialize.c)
 * Callees:
 *     ?vCheckIsSetupRunning@@YAXXZ @ 0x1C0022ED4 (-vCheckIsSetupRunning@@YAXXZ.c)
 *     vConvertCodePageToCharSet @ 0x1C0022FF0 (vConvertCodePageToCharSet.c)
 *     ?GetLanguageID@@YAGXZ @ 0x1C0023040 (-GetLanguageID@@YAGXZ.c)
 *     DrvNotifySessionStateChange @ 0x1C0023190 (DrvNotifySessionStateChange.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
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
  if ( qword_1C0252D68 )
    v1 = qword_1C0252D68();
  else
    v1 = -1073741637;
  if ( v1 )
    return 0LL;
  gcTrueTypeFonts = 0;
  gulFontInformation = 0;
  gusLanguageID = GetLanguageID();
  if ( qword_1C0251448 )
    v2 = (_DWORD *)qword_1C0251448();
  else
    v2 = 0LL;
  if ( qword_1C0251428 )
    v3 = (USHORT *)qword_1C0251428();
  else
    v3 = 0LL;
  if ( qword_1C0251438 )
    v4 = (USHORT *)qword_1C0251438();
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
  if ( qword_1C0251450 )
    v7 = qword_1C0251450(949LL, 950LL);
  else
    v7 = -1073741637;
  if ( v7 >= 0 && qword_1C0251458 )
    qword_1C0251458();
  vCheckIsSetupRunning();
  if ( qword_1C0251480 )
    v8 = qword_1C0251480();
  else
    v8 = -1073741637;
  if ( v8 >= 0 && qword_1C0251488 )
    qword_1C0251488();
  v9 = qword_1C0251558 ? qword_1C0251558() : -1073741637;
  if ( v9 < 0 )
    return 0LL;
  v10 = qword_1C0251490 ? qword_1C0251490() : -1073741637;
  if ( v10 >= 0 )
  {
    v11 = (int)qword_1C0251498;
    if ( qword_1C0251498 )
      v11 = qword_1C0251498();
    if ( !v11 )
      return 0LL;
  }
  v12 = qword_1C02514A0 ? qword_1C02514A0() : -1073741637;
  if ( v12 >= 0 )
  {
    v13 = (int)qword_1C02514A8;
    if ( qword_1C02514A8 )
      v13 = qword_1C02514A8();
    if ( !v13 )
      return 0LL;
  }
  if ( qword_1C02514B0 )
    v14 = qword_1C02514B0();
  else
    v14 = -1073741637;
  if ( v14 >= 0 && qword_1C02514B8 )
    qword_1C02514B8();
  if ( qword_1C02514C0 )
    v15 = qword_1C02514C0();
  else
    v15 = -1073741637;
  if ( v15 >= 0 && qword_1C02514C8 )
    qword_1C02514C8();
  if ( qword_1C02514D0 )
    v16 = qword_1C02514D0();
  else
    v16 = -1073741637;
  if ( v16 >= 0 && qword_1C02514E8 )
    qword_1C02514E8();
  if ( qword_1C02514D8 )
    v0 = qword_1C02514D8();
  if ( v0 < 0 )
    return 1LL;
  v17 = (int)qword_1C02514E0;
  if ( qword_1C02514E0 )
    v17 = qword_1C02514E0();
  return v17 != 0;
}
