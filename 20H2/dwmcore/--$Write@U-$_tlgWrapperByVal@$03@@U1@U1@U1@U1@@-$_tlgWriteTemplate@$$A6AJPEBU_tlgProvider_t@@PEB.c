/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333@Z @ 0x1801E5044
 * Callers:
 *     ??$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z @ 0x18001B0D0 (--$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z.c)
 *     ??$PropertyUpdated@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIPEBU_D3DCOLORVALUE@@@Z @ 0x1800B86CC (--$PropertyUpdated@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIPEBU_D3DCOLORVALUE@@@Z.c)
 *     ??$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z @ 0x1800B90EC (--$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z.c)
 *     ??$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B9390 (--$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD.c)
 *     ??$LogValueUpdate@UD2DQuaternion@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2DQuaternion@@@Z @ 0x1801E46D8 (--$LogValueUpdate@UD2DQuaternion@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2DQ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180152660 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-51h] BYREF
  __int64 v11; // [rsp+50h] [rbp-31h]
  __int64 v12; // [rsp+58h] [rbp-29h]
  __int64 v13; // [rsp+60h] [rbp-21h]
  __int64 v14; // [rsp+68h] [rbp-19h]
  __int64 v15; // [rsp+70h] [rbp-11h]
  __int64 v16; // [rsp+78h] [rbp-9h]
  __int64 v17; // [rsp+80h] [rbp-1h]
  __int64 v18; // [rsp+88h] [rbp+7h]
  __int64 v19; // [rsp+90h] [rbp+Fh]
  __int64 v20; // [rsp+98h] [rbp+17h]

  v19 = a9;
  v17 = a8;
  v15 = a7;
  v13 = a6;
  v11 = a5;
  v20 = 4LL;
  v18 = 4LL;
  v16 = 4LL;
  v14 = 4LL;
  v12 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_180341E80, a2, 0LL, 0LL, 7u, &v10);
}
