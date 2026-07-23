/*
 * XREFs of _LdrpSetThreadPreferredLangList@0 @ 0x4B2BA5F0
 * Callers:
 *     _LdrLoadAlternateResourceModule@16 @ 0x4B2AA250 (_LdrLoadAlternateResourceModule@16.c)
 *     _LdrResFallbackLangList@20 @ 0x4B2BA2A0 (_LdrResFallbackLangList@20.c)
 *     _LdrpLoadResourceFromAlternativeModule@20 @ 0x4B2BB980 (_LdrpLoadResourceFromAlternativeModule@20.c)
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 * Callees:
 *     _RtlpMuiRegCreateAndLoadRegistryInfo@4 @ 0x4B2AC270 (_RtlpMuiRegCreateAndLoadRegistryInfo@4.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlGetThreadPreferredUILanguages@16 @ 0x4B2D2D80 (_RtlGetThreadPreferredUILanguages@16.c)
 *     _RtlpInitMuiCriticalSection@8 @ 0x4B2D5E84 (_RtlpInitMuiCriticalSection@8.c)
 */

bool __stdcall LdrpSetThreadPreferredLangList()
{
  _DWORD *v0; // ecx
  int RegistryInfo; // esi
  struct _TEB *v2; // eax
  int WowTebOffset; // ecx
  struct _TEB *v4; // ecx
  int v5; // edx
  bool v6; // zf
  struct _TEB *v7; // eax
  int v8; // ecx
  void *MuiImpersonation; // eax
  NTSTATUS ThreadPreferredUILanguages; // eax
  _DWORD *MergedPrefLanguages; // eax
  ULONG NumberOfLanguages; // [esp+8h] [ebp-8h] BYREF
  ULONG ReturnLength; // [esp+Ch] [ebp-4h] BYREF

  if ( NtCurrentTeb()->MergedPrefLanguages && *((char *)NtCurrentTeb()->MergedPrefLanguages + 32) >= 0 )
  {
    v0 = g_RegInfo;
    RegistryInfo = 0;
    if ( !g_RegInfo )
    {
      RtlpInitMuiCriticalSection();
      RtlEnterCriticalSection(&RegistryInfoCritSect);
      RegistryInfo = 0;
      if ( !g_RegInfo )
        RegistryInfo = RtlpMuiRegCreateAndLoadRegistryInfo(&g_RegInfo);
      RtlLeaveCriticalSection(&RegistryInfoCritSect);
      if ( RegistryInfo >= 0 )
        v0 = g_RegInfo;
      else
        v0 = 0;
    }
    if ( RegistryInfo < 0 || !v0 )
      return 0;
    if ( !*((_DWORD *)NtCurrentTeb()->MergedPrefLanguages + 3)
      || *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->MergedPrefLanguages + 3) + 12) == MEMORY[0x7FFE03A4]
      && NtCurrentTeb()->MuiGeneration == v0[4] )
    {
      v2 = NtCurrentTeb();
      WowTebOffset = v2->WowTebOffset;
      if ( WowTebOffset < 0 )
        v2 = (struct _TEB *)((char *)v2 + WowTebOffset);
      v4 = NtCurrentTeb();
      v5 = v4->WowTebOffset;
      if ( v5 < 0 )
        v4 = (struct _TEB *)((char *)v4 + v5);
      v6 = v2 == (struct _TEB *)v4->NtTib.Self;
      v7 = NtCurrentTeb();
      v8 = v7->WowTebOffset;
      if ( v6 )
      {
        if ( v8 < 0 )
          v7 = (struct _TEB *)((char *)v7 + v8);
        MuiImpersonation = (void *)v7->MuiImpersonation;
      }
      else
      {
        if ( v8 < 0 )
          v7 = (struct _TEB *)((char *)v7 + v8);
        MuiImpersonation = v7[1].glDispatchTable[9];
      }
      if ( MuiImpersonation )
        return 1;
    }
    else
    {
      MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
      MergedPrefLanguages[8] |= 0x80u;
    }
  }
  ReturnLength = 0;
  ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, 0, &ReturnLength);
  return (ThreadPreferredUILanguages >= 0 || ThreadPreferredUILanguages == -1073741789)
      && NtCurrentTeb()->MergedPrefLanguages;
}
