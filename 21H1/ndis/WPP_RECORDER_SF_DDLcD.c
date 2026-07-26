/*
 * XREFs of WPP_RECORDER_SF_DDLcD @ 0x1C005DF18
 * Callers:
 *     ?ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z @ 0x1C0059E70 (-ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AAE74 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_DDLcD(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  int v7; // [rsp+20h] [rbp-68h]
  __int64 v8; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  __int64 v10; // [rsp+C0h] [rbp+38h] BYREF
  va_list va1; // [rsp+C0h] [rbp+38h]
  __int64 v12; // [rsp+C8h] [rbp+40h] BYREF
  va_list va2; // [rsp+C8h] [rbp+40h]
  __int64 v14; // [rsp+D0h] [rbp+48h] BYREF
  va_list va3; // [rsp+D0h] [rbp+48h]
  va_list va4; // [rsp+D8h] [rbp+50h] BYREF

  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v12 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v14 = va_arg(va4, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(
      (const struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
      0x1Bu,
      va,
      4LL,
      va1,
      4LL,
      va2,
      4LL,
      va3,
      1LL,
      va4,
      4LL,
      0LL);
  LOWORD(v7) = 27;
  return WppAutoLogTrace(a1, 4LL, 14LL, WPP_dafd92df180233d1e8f46c99921014e6_Traceguids, v7, (__int64 *)va);
}
