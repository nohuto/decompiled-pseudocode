/*
 * XREFs of WPP_RECORDER_SF_qDdZ @ 0x1C00729E4
 * Callers:
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x1C0070A68 (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AB4A4 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qDdZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        unsigned __int16 *a9)
{
  __int64 v10; // rdx
  const wchar_t *v11; // rcx
  const wchar_t *v12; // rax
  int v14; // [rsp+20h] [rbp-78h]

  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a9 )
      v10 = *a9;
    else
      v10 = 8LL;
    if ( a9 && *a9 )
      v11 = (const wchar_t *)*((_QWORD *)a9 + 1);
    else
      v11 = L"NULL";
    v12 = a9;
    if ( !a9 )
      v12 = L"\b";
    ndisWppFastTraceMessage(
      &WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
      0x4Cu,
      &a6,
      8LL,
      &a7,
      4LL,
      &a8,
      4LL,
      v12,
      2LL,
      v11,
      v10,
      0LL);
  }
  LOWORD(v14) = 76;
  return WppAutoLogTrace(a1, 4LL, 9LL, &WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids, v14, &a6);
}
