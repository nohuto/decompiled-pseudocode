/*
 * XREFs of WPP_RECORDER_SF__guid_ZDDDIDDDIDDDIDDDIDDDIDDDIDDDI @ 0x1C00A997C
 * Callers:
 *     ?ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A7DEC (-ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AB4A4 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF__guid_ZDDDIDDDIDDDIDDDIDDDIDDDIDDDI(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned __int16 *a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        char a26,
        char a27,
        char a28,
        char a29,
        char a30,
        char a31,
        char a32,
        char a33,
        char a34,
        char a35)
{
  __int64 v36; // rdx
  const wchar_t *v37; // rcx
  const wchar_t *v38; // rax
  int v40; // [rsp+28h] [rbp-280h]

  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x4000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a7 )
      v36 = *a7;
    else
      v36 = 8LL;
    if ( a7 && *a7 )
      v37 = (const wchar_t *)*((_QWORD *)a7 + 1);
    else
      v37 = L"NULL";
    v38 = a7;
    if ( !a7 )
      v38 = L"\b";
    ndisWppFastTraceMessage(
      (const struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
      0x2Cu,
      a6,
      16LL,
      v38,
      2LL,
      v37,
      v36,
      &a8,
      4LL,
      &a9,
      4LL,
      &a10,
      4LL,
      &a11,
      8LL,
      &a12,
      4LL,
      &a13,
      4LL,
      &a14,
      4LL,
      &a15,
      8LL,
      &a16,
      4LL,
      &a17,
      4LL,
      &a18,
      4LL,
      &a19,
      8LL,
      &a20,
      4LL,
      &a21,
      4LL,
      &a22,
      4LL,
      &a23,
      8LL,
      &a24,
      4LL,
      &a25,
      4LL,
      &a26,
      4LL,
      &a27,
      8LL,
      &a28,
      4LL,
      &a29,
      4LL,
      &a30,
      4LL,
      &a31,
      8LL,
      &a32,
      4LL,
      &a33,
      4LL,
      &a34,
      4LL,
      &a35);
  }
  LOWORD(v40) = 44;
  return WppAutoLogTrace(a1, 4LL, 15LL, &WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids, v40, a6);
}
