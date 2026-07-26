/*
 * XREFs of WPP_RECORDER_SF_qqqqq @ 0x1C007F278
 * Callers:
 *     ?ndisOidPostPDOpenProvider@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007CE80 (-ndisOidPostPDOpenProvider@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPrePDQueryConfig@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007CF80 (-ndisOidPrePDQueryConfig@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPrePDCloseProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C011C6B0 (-ndisOidPrePDCloseProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C011CA40 (-ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AAE74 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qqqqq(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-68h]
  __int64 v9; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  __int64 v11; // [rsp+C0h] [rbp+38h] BYREF
  va_list va1; // [rsp+C0h] [rbp+38h]
  __int64 v13; // [rsp+C8h] [rbp+40h] BYREF
  va_list va2; // [rsp+C8h] [rbp+40h]
  __int64 v15; // [rsp+D0h] [rbp+48h] BYREF
  va_list va3; // [rsp+D0h] [rbp+48h]
  va_list va4; // [rsp+D8h] [rbp+50h] BYREF

  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v13 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v15 = va_arg(va4, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10000000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(
      &WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
      a4,
      va,
      8LL,
      va1,
      8LL,
      va2,
      8LL,
      va3,
      8LL,
      va4,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 4LL, 29LL, &WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids, v8, (__int64 *)va);
}
