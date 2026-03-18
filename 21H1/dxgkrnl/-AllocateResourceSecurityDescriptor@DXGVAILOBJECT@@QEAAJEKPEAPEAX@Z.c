/*
 * XREFs of ?AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z @ 0x1C02AFAA4
 * Callers:
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C02B0400 (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000AE64 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?GetHandleProcessSession@DXGVAILOBJECT@@QEAAJPEAK@Z @ 0x1C02B0B84 (-GetHandleProcessSession@DXGVAILOBJECT@@QEAAJPEAK@Z.c)
 *     ?InitializeDWMSid@DXGVAILOBJECT@@QEAAXKPEAX@Z @ 0x1C02B0CA4 (-InitializeDWMSid@DXGVAILOBJECT@@QEAAXKPEAX@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::AllocateResourceSecurityDescriptor(
        DXGVAILOBJECT *this,
        char a2,
        ACCESS_MASK a3,
        void **a4)
{
  int v5; // r12d
  ULONG v6; // r15d
  ULONG v7; // r13d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rax
  NTSTATUS DaclSecurityDescriptor; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  int HandleProcessSession; // eax
  __int64 v21; // rsi
  _QWORD *v22; // rax
  WORD v23; // di
  NTSTATUS OwnerSecurityDescriptor; // eax
  NTSTATUS GroupSecurityDescriptor; // eax
  struct _ACL *v26; // rcx
  NTSTATUS v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  ULONG v31; // eax
  __int64 v32; // rax
  ULONG v33; // r12d
  SIZE_T v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  char *v38; // rdi
  __int64 v39; // r8
  __int64 v40; // rax
  NTSTATUS v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  NTSTATUS v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  NTSTATUS v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  struct _ACL *v55; // r14
  NTSTATUS Acl; // eax
  unsigned __int16 v57; // si
  struct _ACL *v58; // rax
  NTSTATUS v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  NTSTATUS v63; // eax
  __int64 v64; // rax
  NTSTATUS v65; // eax
  NTSTATUS v66; // eax
  __int64 v67; // rax
  unsigned __int8 DaclPresent; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int8 DaclDefaulted; // [rsp+31h] [rbp-38h] BYREF
  unsigned __int8 MemoryAllocated[6]; // [rsp+32h] [rbp-37h] BYREF
  PVOID Ace; // [rsp+38h] [rbp-31h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp-29h] BYREF
  PACL Dacl; // [rsp+48h] [rbp-21h] BYREF
  ACCESS_MASK AccessMask; // [rsp+50h] [rbp-19h]
  PSID Owner; // [rsp+58h] [rbp-11h] BYREF
  PSID Group; // [rsp+60h] [rbp-9h] BYREF
  void **v78; // [rsp+68h] [rbp-1h]
  _BYTE Sid[24]; // [rsp+70h] [rbp+7h] BYREF

  LODWORD(Ace) = -1;
  AccessMask = a3;
  SecurityDescriptor = 0LL;
  Dacl = 0LL;
  MemoryAllocated[0] = 0;
  v5 = 0;
  Owner = 0LL;
  v6 = 0;
  Group = 0LL;
  v7 = 0;
  v78 = a4;
  LODWORD(v11) = ObGetObjectSecurity(this, &SecurityDescriptor, MemoryAllocated);
  if ( !SecurityDescriptor )
  {
    LODWORD(v11) = -1073741786;
    v13 = WdLogNewEntry5_WdWarning(v10, v9, v12);
    *(_QWORD *)(v13 + 24) = -1073741786LL;
    WdLogEvent5_WdWarning(v13);
  }
  if ( (int)v11 >= 0 )
  {
    DaclPresent = 0;
    DaclDefaulted = 0;
    DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, &DaclDefaulted);
    v11 = DaclSecurityDescriptor;
    if ( DaclSecurityDescriptor < 0 )
    {
LABEL_5:
      v18 = WdLogNewEntry5_WdWarning(v16, v15, v17);
      *(_QWORD *)(v18 + 24) = v11;
      WdLogEvent5_WdWarning(v18);
      goto LABEL_54;
    }
    if ( !DaclPresent || DaclDefaulted )
    {
      LODWORD(v11) = -1073741786;
      v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
      *(_QWORD *)(v19 + 24) = -1073741786LL;
      WdLogEvent5_WdWarning(v19);
    }
    if ( (int)v11 >= 0 )
    {
      HandleProcessSession = DXGVAILOBJECT::GetHandleProcessSession(this, (unsigned int *)&Ace);
      v11 = HandleProcessSession;
      if ( HandleProcessSession < 0 )
        goto LABEL_5;
      v21 = (unsigned int)Ace;
      if ( *((_DWORD *)this + 32) != (_DWORD)Ace )
      {
        LODWORD(v11) = -1073741790;
        v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
        v22[3] = -1073741790LL;
        v22[4] = *((unsigned int *)this + 32);
        v22[5] = v21;
        WdLogEvent5_WdWarning(v22);
      }
      v23 = 0;
      if ( (int)v11 >= 0 )
      {
        if ( a2 )
        {
          DaclDefaulted = 0;
          OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, &DaclDefaulted);
          v11 = OwnerSecurityDescriptor;
          if ( OwnerSecurityDescriptor < 0 )
            goto LABEL_5;
          if ( Owner )
            v6 = RtlLengthSid(Owner);
          DaclPresent = 0;
          GroupSecurityDescriptor = RtlGetGroupSecurityDescriptor(SecurityDescriptor, &Group, &DaclPresent);
          v11 = GroupSecurityDescriptor;
          if ( GroupSecurityDescriptor < 0 )
            goto LABEL_5;
          if ( Group )
            v7 = RtlLengthSid(Group);
        }
        v26 = Dacl;
        Ace = 0LL;
        if ( Dacl->AceCount )
        {
          while ( 1 )
          {
            v27 = RtlGetAce(v26, v23, &Ace);
            v11 = v27;
            if ( v27 < 0 )
              break;
            v31 = RtlLengthSid((char *)Ace + 8);
            v26 = Dacl;
            ++v23;
            v5 += v31 + 12;
            if ( v23 >= Dacl->AceCount )
              goto LABEL_26;
          }
          v32 = WdLogNewEntry5_WdWarning(v29, v28, v30);
          *(_QWORD *)(v32 + 24) = v11;
          WdLogEvent5_WdWarning(v32);
        }
LABEL_26:
        if ( (int)v11 >= 0 )
        {
          DXGVAILOBJECT::InitializeDWMSid((DXGVAILOBJECT *)v26, v21, Sid);
          v33 = RtlLengthSid(Sid) + 12 + v5;
          v34 = v33 + v7 + v6 + 48;
          v35 = (unsigned int)v34;
          v38 = (char *)operator new(v34, 0x4B677844u, 1, PagedPool);
          if ( !v38 )
          {
            LODWORD(v11) = -1073741801;
            v40 = WdLogNewEntry5_WdWarning(v37, v36, v39);
            *(_QWORD *)(v40 + 24) = v35;
            *(_QWORD *)(v40 + 32) = -1073741801LL;
            WdLogEvent5_WdWarning(v40);
          }
          if ( (int)v11 < 0 )
            goto LABEL_50;
          v41 = RtlCreateSecurityDescriptor(v38, 1u);
          v11 = v41;
          if ( v41 < 0 )
            goto LABEL_49;
          if ( Owner )
          {
            RtlCopySid(v6, v38 + 40, Owner);
            v45 = RtlSetOwnerSecurityDescriptor(v38, v38 + 40, 0);
            v11 = v45;
            if ( v45 >= 0 )
              goto LABEL_35;
            v49 = WdLogNewEntry5_WdWarning(v47, v46, v48);
            *(_QWORD *)(v49 + 24) = v11;
            WdLogEvent5_WdWarning(v49);
          }
          if ( (int)v11 < 0 )
            goto LABEL_50;
LABEL_35:
          if ( Group )
          {
            RtlCopySid(v7, &v38[v6 + 40], Group);
            v50 = RtlSetGroupSecurityDescriptor(v38, &v38[v6 + 40], 0);
            v11 = v50;
            if ( v50 >= 0 )
            {
LABEL_39:
              v55 = (struct _ACL *)&v38[v6 + 40 + v7];
              Acl = RtlCreateAcl(v55, v33, 4u);
              v57 = 0;
              v11 = Acl;
              if ( Acl >= 0 )
              {
                v58 = Dacl;
                Ace = 0LL;
                if ( Dacl->AceCount )
                {
                  while ( 1 )
                  {
                    v59 = RtlGetAce(v58, v57, &Ace);
                    v11 = v59;
                    if ( v59 < 0 )
                      break;
                    v63 = RtlAddAce(v55, 4u, 0, Ace, *((unsigned __int16 *)Ace + 1));
                    v11 = v63;
                    if ( v63 < 0 )
                      break;
                    v58 = Dacl;
                    if ( ++v57 >= Dacl->AceCount )
                      goto LABEL_46;
                  }
                  v64 = WdLogNewEntry5_WdWarning(v61, v60, v62);
                  *(_QWORD *)(v64 + 24) = v11;
                  WdLogEvent5_WdWarning(v64);
                }
LABEL_46:
                if ( (int)v11 < 0 )
                  goto LABEL_50;
                v65 = RtlAddAccessAllowedAce(v55, 4u, AccessMask, Sid);
                v11 = v65;
                if ( v65 >= 0 )
                {
                  v66 = RtlSetDaclSecurityDescriptor(v38, 1u, v55, 0);
                  v11 = v66;
                  if ( v66 >= 0 )
                    goto LABEL_50;
                }
              }
LABEL_49:
              v67 = WdLogNewEntry5_WdWarning(v43, v42, v44);
              *(_QWORD *)(v67 + 24) = v11;
              WdLogEvent5_WdWarning(v67);
LABEL_50:
              if ( v38 )
              {
                if ( (int)v11 < 0 )
                  operator delete[](v38);
                else
                  *v78 = v38;
              }
              goto LABEL_54;
            }
            v54 = WdLogNewEntry5_WdWarning(v52, v51, v53);
            *(_QWORD *)(v54 + 24) = v11;
            WdLogEvent5_WdWarning(v54);
          }
          if ( (int)v11 < 0 )
            goto LABEL_50;
          goto LABEL_39;
        }
      }
    }
  }
LABEL_54:
  if ( SecurityDescriptor )
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated[0]);
  return (unsigned int)v11;
}
