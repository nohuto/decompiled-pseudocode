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

int __fastcall RtlpUpdateTEBLanguage(int a1, int a2, int a3)
{
  int v3; // edi
  int *UserPrefLanguages; // esi
  struct _TEB *v6; // eax
  int v8; // [esp+10h] [ebp-4h]

  v3 = 0;
  v8 = a2;
  if ( NtCurrentTeb()->UserPrefLanguages )
  {
    UserPrefLanguages = (int *)NtCurrentTeb()->UserPrefLanguages;
  }
  else
  {
    UserPrefLanguages = (int *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 8);
    if ( !UserPrefLanguages )
      return -1073741801;
    v6 = NtCurrentTeb();
    a2 = v8;
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
        *(_DWORD *)(a1 + 32) = *(_DWORD *)(*UserPrefLanguages + 32);
        RtlpMuiRegFreeLanguageList((_BYTE *)*UserPrefLanguages);
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
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, UserPrefLanguages[1]);
    a2 = v8;
  }
  UserPrefLanguages[1] = a2;
  return v3;
}
