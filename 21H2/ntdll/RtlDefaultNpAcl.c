/*
 * XREFs of RtlDefaultNpAcl @ 0x1800D6A60
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpAddKnownAce @ 0x1800375C4 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x18003A450 (RtlCreateAcl.c)
 *     RtlInitializeSid @ 0x180040070 (RtlInitializeSid.c)
 *     RtlGetAppContainerParent @ 0x180043E10 (RtlGetAppContainerParent.c)
 *     RtlGetAppContainerSidType @ 0x180044680 (RtlGetAppContainerSidType.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x18009DA20 (NtQueryInformationToken.c)
 */

NTSTATUS __cdecl RtlDefaultNpAcl(PACL *Acl)
{
  PVOID v2; // rdi
  void *ProcessHeap; // rcx
  PVOID Heap; // r14
  int AppContainerParent; // ebx
  int v6; // edx
  ULONG v7; // ebx
  ACL *v8; // rax
  ACL *v9; // rcx
  ACL *v10; // rcx
  ACL *v11; // rcx
  ACL *v12; // rcx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+30h] [rbp-40h] BYREF
  _SID_IDENTIFIER_AUTHORITY v15; // [rsp+38h] [rbp-38h] BYREF
  int TokenInformation; // [rsp+40h] [rbp-30h] BYREF
  ULONG ReturnLength; // [rsp+44h] [rbp-2Ch] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+48h] [rbp-28h] BYREF
  PSID AppContainerSidParent; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int8 Sid[8]; // [rsp+58h] [rbp-18h] BYREF
  int v21; // [rsp+60h] [rbp-10h]
  int v22; // [rsp+64h] [rbp-Ch]

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *Acl = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v2 = 0LL;
  *(_DWORD *)v15.Value = 0;
  *(_WORD *)&v15.Value[4] = 256;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  AppContainerSidParent = 0LL;
  AppContainerSidType = NotAppContainerSidType;
  Heap = RtlAllocateHeap(ProcessHeap, 0, 0x4CuLL);
  if ( Heap )
  {
    AppContainerParent = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 4u, Heap, 0x4Cu, &ReturnLength);
    if ( AppContainerParent < 0 )
      goto LABEL_27;
    TokenInformation = 0;
    if ( NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 0x1Du, &TokenInformation, 4u, &ReturnLength) < 0
      || !TokenInformation )
    {
      goto LABEL_12;
    }
    v2 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x4CuLL);
    if ( !v2 )
    {
      AppContainerParent = -1073741801;
      goto LABEL_27;
    }
    AppContainerParent = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 0x1Fu, v2, 0x4Cu, &ReturnLength);
    if ( AppContainerParent >= 0 )
    {
      AppContainerParent = RtlGetAppContainerSidType(*(PSID *)v2, &AppContainerSidType);
      if ( AppContainerParent >= 0 )
      {
        if ( AppContainerSidType != ChildAppContainerSidType
          || (AppContainerParent = RtlGetAppContainerParent(*(PSID *)v2, &AppContainerSidParent), AppContainerParent >= 0) )
        {
LABEL_12:
          v6 = 52;
          if ( v2 )
            v6 = 4 * *(unsigned __int8 *)(*(_QWORD *)v2 + 1LL) + 68;
          if ( AppContainerSidParent )
            v6 += 4 * *((unsigned __int8 *)AppContainerSidParent + 1) + 16;
          v7 = v6 + 4 * (*(unsigned __int8 *)(*(_QWORD *)Heap + 1LL) + 14);
          v8 = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
          *Acl = v8;
          if ( v8 )
          {
            RtlCreateAcl(v8, v7, 2u);
            RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
            v9 = *Acl;
            v21 = 18;
            RtlpAddKnownAce(v9, 2u, 0, 0x10000000, Sid, 0);
            RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
            v10 = *Acl;
            v21 = 32;
            v22 = 544;
            RtlpAddKnownAce(v10, 2u, 0, 0x10000000, Sid, 0);
            if ( v2 )
              RtlpAddKnownAce(*Acl, 2u, 0, 0x10000000, *(unsigned __int8 **)v2, 0);
            if ( AppContainerSidParent )
              RtlpAddKnownAce(*Acl, 2u, 0, 0x10000000, (unsigned __int8 *)AppContainerSidParent, 0);
            RtlpAddKnownAce(*Acl, 2u, 0, 0x10000000, *(unsigned __int8 **)Heap, 0);
            RtlInitializeSid(Sid, &v15, 1u);
            v11 = *Acl;
            v21 = 0;
            RtlpAddKnownAce(v11, 2u, 0, 0x80000000, Sid, 0);
            RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
            v12 = *Acl;
            v21 = 7;
            RtlpAddKnownAce(v12, 2u, 0, 0x80000000, Sid, 0);
            AppContainerParent = 0;
          }
          else
          {
            AppContainerParent = -1073741801;
          }
        }
      }
    }
    if ( v2 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    if ( AppContainerSidParent )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, AppContainerSidParent);
LABEL_27:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    if ( AppContainerParent >= 0 )
      return AppContainerParent;
    goto LABEL_28;
  }
  AppContainerParent = -1073741801;
LABEL_28:
  if ( *Acl )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *Acl);
    *Acl = 0LL;
  }
  return AppContainerParent;
}
