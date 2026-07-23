/*
 * XREFs of RtlpMUIRegPatchLicenseInfortmation @ 0x18003C098
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18003AA98 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     GetNameFromLangListNode @ 0x18003AC14 (GetNameFromLangListNode.c)
 *     RtlpIsALicensedRegularLanguage @ 0x18003C1F0 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpIsALicensedLIPLanguage @ 0x18003D0B8 (RtlpIsALicensedLIPLanguage.c)
 */

__int64 __fastcall RtlpMUIRegPatchLicenseInfortmation(__int64 a1)
{
  bool v2; // cc
  wchar_t *Heap; // r15
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rax
  int InstalledLanguageIndexByName; // eax
  _UNICODE_STRING v12; // [rsp+20h] [rbp-38h] BYREF
  __int16 v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = 0;
  if ( !a1 )
    return 3221225473LL;
  v2 = *(_WORD *)(a1 + 4) <= 0x40u;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( !v2 )
    return 3221225473LL;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
  if ( !Heap )
    return 3221225495LL;
  v4 = *(unsigned __int16 *)(a1 + 4);
  v5 = v4 - 1;
  if ( (int)v4 - 1 >= 0 )
  {
    v6 = *(unsigned __int16 *)(a1 + 4) - 1LL;
    v7 = 6 * v4 - 6;
    v8 = 6 * v6;
    do
    {
      v9 = *(_QWORD *)(a1 + 24);
      if ( !*(_WORD *)(v7 + v9) )
        goto LABEL_13;
      v12.Buffer = Heap;
      *(_DWORD *)&v12.Length = 11141120;
      if ( (int)GetNameFromLangListNode((__int64)g_RegInfo, (_WORD *)(v8 + v9), &v12) < 0 )
        goto LABEL_13;
      if ( *((_DWORD *)g_RegInfo + 30) < 0x3E8u )
      {
        InstalledLanguageIndexByName = RtlpMuiRegGetInstalledLanguageIndexByName(
                                         (__int64)g_RegInfo,
                                         v12.Buffer,
                                         1,
                                         &v13);
      }
      else
      {
        if ( (int)RtlpIsALicensedRegularLanguage(g_RegInfo, v12.Buffer) >= 0 )
          goto LABEL_12;
        InstalledLanguageIndexByName = RtlpIsALicensedLIPLanguage(g_RegInfo, v12.Buffer);
      }
      if ( InstalledLanguageIndexByName >= 0 )
LABEL_12:
        *(_QWORD *)(a1 + 32) |= 1LL << v6;
LABEL_13:
      LOBYTE(v6) = v6 - 1;
      v8 -= 6LL;
      v7 -= 6LL;
      --v5;
    }
    while ( v5 >= 0 );
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return 0LL;
}
