/*
 * XREFs of ?PPIWin32VtcSideBarLayoutItemsReflowed_@TabletModeTelemetry@@QEAAXHI_N@Z @ 0x1800B8440
 * Callers:
 *     ?_ReflowItems@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1800BA098 (-_ReflowItems@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D4A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1801AB5C4 (-Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall TabletModeTelemetry::PPIWin32VtcSideBarLayoutItemsReflowed_(
        TabletModeTelemetry *this,
        int a2,
        int a3,
        char a4)
{
  const struct _tlgProvider_t *v7; // rcx
  __int64 v8; // rcx
  char v9; // [rsp+38h] [rbp-19h] BYREF
  int v10; // [rsp+3Ch] [rbp-15h] BYREF
  int v11; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+48h] [rbp-9h] BYREF
  int *v13; // [rsp+68h] [rbp+17h]
  __int64 v14; // [rsp+70h] [rbp+1Fh]
  int *v15; // [rsp+78h] [rbp+27h]
  __int64 v16; // [rsp+80h] [rbp+2Fh]
  char *v17; // [rsp+88h] [rbp+37h]
  __int64 v18; // [rsp+90h] [rbp+3Fh]

  v7 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v7 > 5u )
  {
    if ( tlgKeywordOn((__int64)v7, 0x200000000000LL) )
    {
      v9 = a4;
      v17 = &v9;
      v10 = a3;
      v15 = &v10;
      v11 = a2;
      v13 = &v11;
      v18 = 1LL;
      v16 = 4LL;
      v14 = 4LL;
      tlgWriteTransfer_EventWriteTransfer(v8, (unsigned __int8 *)dword_1805237C6, 0LL, 0LL, 5u, &v12);
    }
  }
}
