/*
 * XREFs of WPP_RECORDER_SF_qqZddZ @ 0x1C0029D80
 * Callers:
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012EA30 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AB4A4 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqZddZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        unsigned __int16 *a8,
        char a9,
        char a10,
        unsigned __int16 *a11)
{
  __int64 v13; // r10
  const wchar_t *v14; // r9
  const wchar_t *v15; // rcx
  __int64 v16; // r8
  const wchar_t *v17; // rdx
  const wchar_t *v18; // rax
  int v19; // [rsp+20h] [rbp-B8h]

  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a11 )
      v13 = *a11;
    else
      v13 = 8LL;
    if ( a11 && *a11 )
      v14 = (const wchar_t *)*((_QWORD *)a11 + 1);
    else
      v14 = L"NULL";
    v15 = a11;
    if ( !a11 )
      v15 = L"\b";
    if ( a8 )
      v16 = *a8;
    else
      v16 = 8LL;
    if ( a8 && *a8 )
      v17 = (const wchar_t *)*((_QWORD *)a8 + 1);
    else
      v17 = L"NULL";
    v18 = a8;
    if ( !a8 )
      v18 = L"\b";
    ndisWppFastTraceMessage(
      &WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
      0x29u,
      &a6,
      8LL,
      &a7,
      8LL,
      v18,
      2LL,
      v17,
      v16,
      &a9,
      4LL,
      &a10,
      4LL,
      v15,
      2LL,
      v14,
      v13,
      0LL);
  }
  LOWORD(v19) = 41;
  return WppAutoLogTrace(a1, 4LL, 9LL, &WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids, v19, &a6);
}
