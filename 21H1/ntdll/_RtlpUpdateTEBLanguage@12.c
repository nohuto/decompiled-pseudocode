/*
 * XREFs of _RtlpUpdateTEBLanguage@12 @ 0x4B2EA9DE
 * Callers:
 *     _InitializeTEBUserLangList@8 @ 0x4B2D3E35 (_InitializeTEBUserLangList@8.c)
 *     _RtlSetThreadPreferredUILanguages@12 @ 0x4B2D64B0 (_RtlSetThreadPreferredUILanguages@12.c)
 *     _RtlpInitializeUserList@4 @ 0x4B2D6661 (_RtlpInitializeUserList@4.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpMuiRegFreeLanguageList@4 @ 0x4B2D32FD (_RtlpMuiRegFreeLanguageList@4.c)
 */

int __fastcall RtlpUpdateTEBLanguage(_DWORD *a1, void *a2, int a3)
{
  int v3; // edi
  PVOID *UserPrefLanguages; // esi
  struct _TEB *v6; // eax
  SIZE_T v8; // [esp-4h] [ebp-18h]
  void *v9; // [esp+10h] [ebp-4h]

  v3 = 0;
  v9 = a2;
  if ( NtCurrentTeb()->UserPrefLanguages )
  {
    UserPrefLanguages = (PVOID *)NtCurrentTeb()->UserPrefLanguages;
  }
  else
  {
    LODWORD(v8) = 8;
    UserPrefLanguages = (PVOID *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v8);
    if ( !UserPrefLanguages )
      return -1073741801;
    v6 = NtCurrentTeb();
    a2 = v9;
    *UserPrefLanguages = 0;
    UserPrefLanguages[1] = 0;
    v6->UserPrefLanguages = UserPrefLanguages;
  }
  if ( a3 == 4 )
  {
    if ( a1 )
    {
      if ( *UserPrefLanguages )
      {
        a1[8] = *((_DWORD *)*UserPrefLanguages + 8);
        RtlpMuiRegFreeLanguageList(*UserPrefLanguages);
      }
      *UserPrefLanguages = a1;
      return v3;
    }
    return -1073741811;
  }
  if ( a3 != 5 )
    return v3;
  if ( !a2 )
    return -1073741811;
  if ( UserPrefLanguages[1] )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, UserPrefLanguages[1]);
    a2 = v9;
  }
  UserPrefLanguages[1] = a2;
  return v3;
}
