/*
 * XREFs of ?RmpUtilCreateSecurityDescriptorForApplicationWnf@@YAJPEAT_RM_SID@@PEAPEAX@Z @ 0x18002E620
 * Callers:
 *     ?RmpUtilCreateWnfStateNameForApplicationClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z @ 0x18002E57C (-RmpUtilCreateWnfStateNameForApplicationClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     RmpWnfGetPublisherSid @ 0x18002FD7C (RmpWnfGetPublisherSid.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpUtilCreateSecurityDescriptorForApplicationWnf(PSID pSid, void **a2)
{
  NTSTATUS PublisherSid; // ebx
  PVOID Heap; // rax
  void *v6; // rdi
  DWORD LastError; // eax
  unsigned __int8 *v9; // rdx
  struct _EVENT_DATA_DESCRIPTOR *v10; // rax
  DWORD v11; // eax
  ULONG BufferLength; // [rsp+30h] [rbp-D0h] BYREF
  DWORD cbSid; // [rsp+34h] [rbp-CCh] BYREF
  DWORD v14; // [rsp+38h] [rbp-C8h] BYREF
  DWORD v15; // [rsp+3Ch] [rbp-C4h] BYREF
  PSID Sid; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE Owner[80]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v19[80]; // [rsp+C0h] [rbp-40h] BYREF
  _ACL Acl; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+250h] [rbp+150h] BYREF
  DWORD *v22; // [rsp+270h] [rbp+170h]
  int v23; // [rsp+278h] [rbp+178h]
  int v24; // [rsp+27Ch] [rbp+17Ch]
  char v25; // [rsp+280h] [rbp+180h] BYREF
  DWORD *v26; // [rsp+2A0h] [rbp+1A0h]
  int v27; // [rsp+2A8h] [rbp+1A8h]
  int v28; // [rsp+2ACh] [rbp+1ACh]

  Sid = 0LL;
  PublisherSid = RmpWnfGetPublisherSid(Owner);
  if ( PublisherSid < 0 )
    goto LABEL_17;
  PublisherSid = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( PublisherSid < 0 )
    goto LABEL_17;
  PublisherSid = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, 1u);
  if ( PublisherSid < 0 )
    goto LABEL_17;
  PublisherSid = RtlCreateAcl(&Acl, 0x138u, 2u);
  if ( PublisherSid < 0 )
    goto LABEL_17;
  PublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x10000000u, Owner);
  if ( PublisherSid < 0 )
    goto LABEL_17;
  cbSid = 68;
  if ( !CreateWellKnownSid(WinBuiltinAnyPackageSid, 0LL, v19, &cbSid) )
  {
    if ( (unsigned int)dword_1800B31E0 <= 4 || !tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
      goto LABEL_25;
    LastError = GetLastError();
    v24 = 0;
    v9 = (unsigned __int8 *)&unk_18009ABC5;
    v14 = LastError;
    v22 = &v14;
    v10 = &v21;
    v23 = 4;
    goto LABEL_24;
  }
  PublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, v19);
  if ( PublisherSid < 0 )
    goto LABEL_17;
  if ( !ConvertStringSidToSidW(
          L"S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-3968301570-1997628692-1435953622",
          &Sid) )
  {
    if ( (unsigned int)dword_1800B31E0 <= 4 || !tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
      goto LABEL_25;
    v11 = GetLastError();
    v28 = 0;
    v9 = (unsigned __int8 *)&dword_18009ABF9;
    v15 = v11;
    v26 = &v15;
    v10 = (struct _EVENT_DATA_DESCRIPTOR *)&v25;
    v27 = 4;
LABEL_24:
    tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800B31E0, v9, 0LL, 0LL, 3u, v10);
LABEL_25:
    PublisherSid = -1073741823;
    goto LABEL_17;
  }
  PublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, Sid);
  if ( PublisherSid >= 0 )
  {
    PublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, pSid);
    if ( PublisherSid >= 0 )
    {
      PublisherSid = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
      if ( PublisherSid >= 0 )
      {
        BufferLength = 0;
        RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, 0LL, &BufferLength);
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, BufferLength);
        v6 = Heap;
        if ( Heap )
        {
          PublisherSid = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, Heap, &BufferLength);
          if ( PublisherSid >= 0 )
          {
            *a2 = v6;
            v6 = 0LL;
            PublisherSid = 0;
          }
          if ( v6 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
        }
        else
        {
          PublisherSid = -1073741801;
        }
      }
    }
  }
LABEL_17:
  if ( Sid )
    LocalFree(Sid);
  return (unsigned int)PublisherSid;
}
