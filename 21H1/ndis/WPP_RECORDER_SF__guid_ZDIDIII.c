/*
 * XREFs of WPP_RECORDER_SF__guid_ZDIDIII @ 0x1C00A9938
 * Callers:
 *     ?ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A77C4 (-ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AAE74 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF__guid_ZDIDIII(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned __int16 *a7,
        ...)
{
  __int64 v8; // rdx
  const wchar_t *v9; // rcx
  const wchar_t *v10; // rax
  int v12; // [rsp+28h] [rbp-99h]
  __int64 v13; // [rsp+130h] [rbp+6Fh] BYREF
  va_list va; // [rsp+130h] [rbp+6Fh]
  __int64 v15; // [rsp+138h] [rbp+77h] BYREF
  va_list va1; // [rsp+138h] [rbp+77h]
  __int64 v17; // [rsp+140h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+140h] [rbp+7Fh]
  __int64 v19; // [rsp+148h] [rbp+87h] BYREF
  va_list va3; // [rsp+148h] [rbp+87h]
  __int64 v21; // [rsp+150h] [rbp+8Fh] BYREF
  va_list va4; // [rsp+150h] [rbp+8Fh]
  va_list va5; // [rsp+158h] [rbp+97h] BYREF

  va_start(va5, a7);
  va_start(va4, a7);
  va_start(va3, a7);
  va_start(va2, a7);
  va_start(va1, a7);
  va_start(va, a7);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v19 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v21 = va_arg(va5, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x4000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a7 )
      v8 = *a7;
    else
      v8 = 8LL;
    if ( a7 && *a7 )
      v9 = (const wchar_t *)*((_QWORD *)a7 + 1);
    else
      v9 = L"NULL";
    v10 = a7;
    if ( !a7 )
      v10 = L"\b";
    ndisWppFastTraceMessage(
      (const struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
      0x2Bu,
      a6,
      16LL,
      v10,
      2LL,
      v9,
      v8,
      va,
      4LL,
      va1,
      8LL,
      va2,
      4LL,
      va3,
      8LL,
      va4,
      8LL,
      va5,
      8LL,
      0LL);
  }
  LOWORD(v12) = 43;
  return WppAutoLogTrace(a1, 4LL, 15LL, &WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids, v12, a6);
}
