/*
 * XREFs of LdrpSetThreadPreferredLangList @ 0x180036318
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180033BCC (LdrpSearchResourceSection_U.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1800356C0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrResFallbackLangList @ 0x180057BE8 (LdrResFallbackLangList.c)
 *     LdrLoadAlternateResourceModule @ 0x18007E4B0 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180036490 (RtlpCreateProcessRegistryInfo.c)
 */

char LdrpSetThreadPreferredLangList()
{
  char v0; // bl
  int v1; // eax
  __int64 v2; // r8
  struct _TEB *v3; // rdx
  int WowTebOffset; // eax
  struct _TEB *v5; // r8
  __int64 v6; // rax
  struct _TEB *v7; // rcx
  __int64 v8; // rax
  unsigned int MuiImpersonation; // eax
  NTSTATUS ThreadPreferredUILanguages; // ecx
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF
  ULONG NumberOfLanguages; // [rsp+38h] [rbp+10h] BYREF
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v0 = 0;
  if ( NtCurrentTeb()->MergedPrefLanguages && *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) >= 0 )
  {
    v14 = 0LL;
    v1 = RtlpCreateProcessRegistryInfo(&v14);
    v2 = 0LL;
    if ( v1 >= 0 )
      v2 = v14;
    if ( !v2 )
      return 0;
    if ( !*((_QWORD *)NtCurrentTeb()->MergedPrefLanguages + 2)
      || *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->MergedPrefLanguages + 2) + 12LL) == MEMORY[0x7FFE03A4]
      && NtCurrentTeb()->MuiGeneration == *(_DWORD *)(v2 + 16) )
    {
      v3 = NtCurrentTeb();
      WowTebOffset = v3->WowTebOffset;
      if ( WowTebOffset < 0 )
        LODWORD(v3) = WowTebOffset + (_DWORD)v3;
      v5 = NtCurrentTeb();
      v6 = v5->WowTebOffset;
      if ( (int)v6 < 0 )
        v5 = (struct _TEB *)((char *)v5 + v6);
      v7 = NtCurrentTeb();
      v8 = v7->WowTebOffset;
      if ( (_DWORD)v3 == LODWORD(v5->NtTib.SubSystemTib) )
      {
        if ( (int)v8 < 0 )
          v7 = (struct _TEB *)((char *)v7 + v8);
        MuiImpersonation = HIDWORD(v7->glDispatchTable[186]);
      }
      else
      {
        if ( (int)v8 < 0 )
          v7 = (struct _TEB *)((char *)v7 + v8);
        MuiImpersonation = v7->MuiImpersonation;
      }
      if ( MuiImpersonation )
        return 1;
    }
    else
    {
      *((_DWORD *)NtCurrentTeb()->MergedPrefLanguages + 10) = *((_DWORD *)NtCurrentTeb()->MergedPrefLanguages + 10) | 0x80;
    }
  }
  ReturnLength = 0;
  ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, 0LL, &ReturnLength);
  if ( (int)(ThreadPreferredUILanguages + 0x80000000) < 0 || ThreadPreferredUILanguages == -1073741789 )
  {
    if ( NtCurrentTeb()->MergedPrefLanguages )
      return 1;
  }
  return v0;
}
