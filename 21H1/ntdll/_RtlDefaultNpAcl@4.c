/*
 * XREFs of _RtlDefaultNpAcl@4 @ 0x4B335F90
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpAddKnownAce@24 @ 0x4B2D363E (_RtlpAddKnownAce@24.c)
 *     _RtlCreateAcl@12 @ 0x4B2D7BF0 (_RtlCreateAcl@12.c)
 *     _RtlInitializeSid@12 @ 0x4B2D82C0 (_RtlInitializeSid@12.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlGetAppContainerParent@8 @ 0x4B3462F0 (_RtlGetAppContainerParent@8.c)
 *     _RtlGetAppContainerSidType@8 @ 0x4B3463A0 (_RtlGetAppContainerSidType@8.c)
 */

NTSTATUS __cdecl RtlDefaultNpAcl(PACL *Acl)
{
  PVOID *v1; // ebx
  PVOID v2; // edi
  PVOID Heap; // eax
  int AppContainerParent; // esi
  int v5; // ecx
  ULONG v6; // esi
  ACL *v7; // eax
  PSID v8; // ebx
  ACL *v9; // ecx
  ACL *v10; // ecx
  PACL *v11; // esi
  ACL *v12; // ecx
  SIZE_T v14; // [esp-4h] [ebp-4Ch]
  SIZE_T v15; // [esp-4h] [ebp-4Ch]
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [esp+Ch] [ebp-3Ch] BYREF
  ULONG ReturnLength; // [esp+10h] [ebp-38h] BYREF
  int TokenInformation; // [esp+14h] [ebp-34h] BYREF
  PVOID BaseAddress; // [esp+18h] [ebp-30h]
  _SID_IDENTIFIER_AUTHORITY v20; // [esp+1Ch] [ebp-2Ch] BYREF
  PACL *v21; // [esp+24h] [ebp-24h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [esp+28h] [ebp-20h] BYREF
  PSID AppContainerSidParent; // [esp+30h] [ebp-18h] BYREF
  unsigned __int8 Sid[8]; // [esp+34h] [ebp-14h] BYREF
  int v25; // [esp+3Ch] [ebp-Ch]
  int v26; // [esp+40h] [ebp-8h]

  v1 = (PVOID *)Acl;
  LODWORD(v14) = 72;
  *Acl = 0;
  v2 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v20.Value = 0;
  AppContainerSidParent = 0;
  AppContainerSidType = NotAppContainerSidType;
  v21 = Acl;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_WORD *)&v20.Value[4] = 256;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
  BaseAddress = Heap;
  if ( Heap )
  {
    AppContainerParent = ZwQueryInformationToken((HANDLE)0xFFFFFFFA, 4u, Heap, 0x48u, &ReturnLength);
    if ( AppContainerParent < 0 )
      goto LABEL_29;
    TokenInformation = 0;
    if ( ZwQueryInformationToken((HANDLE)0xFFFFFFFA, 0x1Du, &TokenInformation, 4u, &ReturnLength) < 0
      || !TokenInformation )
    {
      goto LABEL_12;
    }
    LODWORD(v15) = 72;
    v2 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
    if ( !v2 )
    {
      AppContainerParent = -1073741801;
      goto LABEL_29;
    }
    AppContainerParent = ZwQueryInformationToken((HANDLE)0xFFFFFFFA, 0x1Fu, v2, 0x48u, &ReturnLength);
    if ( AppContainerParent >= 0 )
    {
      AppContainerParent = RtlGetAppContainerSidType(*(PSID *)v2, &AppContainerSidType);
      if ( AppContainerParent >= 0 )
      {
        if ( AppContainerSidType != ChildAppContainerSidType
          || (AppContainerParent = RtlGetAppContainerParent(*(PSID *)v2, &AppContainerSidParent), AppContainerParent >= 0) )
        {
LABEL_12:
          v5 = 52;
          if ( v2 )
            v5 = 4 * *(unsigned __int8 *)(*(_DWORD *)v2 + 1) + 68;
          if ( AppContainerSidParent )
            v5 += 4 * *((unsigned __int8 *)AppContainerSidParent + 1) + 16;
          v6 = v5 + 4 * (*(unsigned __int8 *)(*(_DWORD *)BaseAddress + 1) + 14);
          LODWORD(v15) = v6;
          v7 = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
          *Acl = v7;
          if ( v7 )
          {
            RtlCreateAcl(v7, v6, 2u);
            RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
            v9 = *Acl;
            v25 = 18;
            RtlpAddKnownAce(v9, 2u, 0, 0x10000000, Sid, 0);
            RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
            v10 = *Acl;
            v25 = 32;
            v26 = 544;
            RtlpAddKnownAce(v10, 2u, 0, 0x10000000, Sid, 0);
            if ( v2 )
              RtlpAddKnownAce(*Acl, 2u, 0, 0x10000000, *(unsigned __int8 **)v2, 0);
            v8 = AppContainerSidParent;
            v11 = v21;
            if ( AppContainerSidParent )
              RtlpAddKnownAce(*v21, 2u, 0, 0x10000000, (unsigned __int8 *)AppContainerSidParent, 0);
            RtlpAddKnownAce(*v11, 2u, 0, 0x10000000, *(unsigned __int8 **)BaseAddress, 0);
            RtlInitializeSid(Sid, &v20, 1u);
            v25 = 0;
            RtlpAddKnownAce(*v11, 2u, 0, 0x80000000, Sid, 0);
            RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
            v12 = *v11;
            v25 = 7;
            RtlpAddKnownAce(v12, 2u, 0, 0x80000000, Sid, 0);
            AppContainerParent = 0;
            goto LABEL_24;
          }
          AppContainerParent = -1073741801;
        }
      }
    }
    v8 = AppContainerSidParent;
LABEL_24:
    if ( v2 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
      v8 = AppContainerSidParent;
    }
    if ( v8 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    v1 = (PVOID *)v21;
LABEL_29:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    if ( AppContainerParent >= 0 )
      return AppContainerParent;
    goto LABEL_30;
  }
  AppContainerParent = -1073741801;
LABEL_30:
  if ( *v1 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *v1);
    *v1 = 0;
  }
  return AppContainerParent;
}
