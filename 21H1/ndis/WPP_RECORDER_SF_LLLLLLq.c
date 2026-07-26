/*
 * XREFs of WPP_RECORDER_SF_LLLLLLq @ 0x1C00A1810
 * Callers:
 *     ?ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z @ 0x1C00A097C (-ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AAE74 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_LLLLLLq(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  int v7; // [rsp+28h] [rbp-79h]
  int v8; // [rsp+A8h] [rbp+7h] BYREF
  int v9; // [rsp+B0h] [rbp+Fh] BYREF
  __int64 v10; // [rsp+F0h] [rbp+4Fh] BYREF
  va_list va; // [rsp+F0h] [rbp+4Fh]
  __int64 v12; // [rsp+F8h] [rbp+57h] BYREF
  va_list va1; // [rsp+F8h] [rbp+57h]
  __int64 v14; // [rsp+100h] [rbp+5Fh]
  __int64 v15; // [rsp+108h] [rbp+67h] BYREF
  va_list va2; // [rsp+108h] [rbp+67h]
  __int64 v17; // [rsp+110h] [rbp+6Fh]
  __int64 v18; // [rsp+118h] [rbp+77h] BYREF
  va_list va3; // [rsp+118h] [rbp+77h]
  va_list va4; // [rsp+120h] [rbp+7Fh] BYREF

  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  v14 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v15 = va_arg(va3, _QWORD);
  v17 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v18 = va_arg(va4, _QWORD);
  v8 = 52;
  v9 = 16;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x400) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
    ndisWppFastTraceMessage(
      &WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      0x69u,
      va,
      4LL,
      va1,
      4LL,
      &v9,
      4LL,
      va2,
      4LL,
      &v8,
      4LL,
      va3,
      4LL,
      va4,
      8LL,
      0LL);
  LOWORD(v7) = 105;
  return WppAutoLogTrace(a1, 5LL, 11LL, &WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids, v7, (__int64 *)va);
}
