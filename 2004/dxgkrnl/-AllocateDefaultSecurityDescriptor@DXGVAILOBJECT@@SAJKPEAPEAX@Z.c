/*
 * XREFs of ?AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z @ 0x1C02B3DFC
 * Callers:
 *     ?Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z @ 0x1C02B45D8 (-Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z.c)
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C02B4940 (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 */

__int64 __fastcall DXGVAILOBJECT::AllocateDefaultSecurityDescriptor(ACCESS_MASK AccessMask, struct _ACL **a2)
{
  struct _ACL *v4; // rdi
  ULONG v5; // r14d
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rax
  ULONG v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  NTSTATUS SecurityDescriptor; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  NTSTATUS Acl; // eax
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  __int64 v25; // rax
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-20h] BYREF
  _BYTE Sid[16]; // [rsp+28h] [rbp-18h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v4 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v5 = 0;
  v6 = RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
  v10 = v6;
  if ( v6 >= 0 )
  {
    *RtlSubAuthoritySid(Sid, 0) = 83;
    *RtlSubAuthoritySid(Sid, 1u) = 0;
    v12 = RtlLengthSid(Sid);
    v5 = v12 + 20;
    v4 = (struct _ACL *)operator new(v12 + 60, 0x4B677844u, 1, PagedPool);
    if ( !v4 )
    {
      LODWORD(v10) = -1073741801;
      v17 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
      *(_QWORD *)(v17 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v17);
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v11 + 24) = v10;
    WdLogEvent5_WdWarning(v11);
  }
  if ( (int)v10 >= 0 )
  {
    SecurityDescriptor = RtlCreateSecurityDescriptor(v4, 1u);
    v10 = SecurityDescriptor;
    if ( SecurityDescriptor >= 0
      && (Acl = RtlCreateAcl(v4 + 5, v5, 4u), v10 = Acl, Acl >= 0)
      && (v23 = RtlAddAccessAllowedAce(v4 + 5, 4u, AccessMask, Sid), v10 = v23, v23 >= 0)
      && (v24 = RtlSetDaclSecurityDescriptor(v4, 1u, v4 + 5, 0), v10 = v24, v24 >= 0) )
    {
      *a2 = v4;
      v4 = 0LL;
    }
    else
    {
      v25 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(_QWORD *)(v25 + 24) = v10;
      WdLogEvent5_WdWarning(v25);
    }
  }
  if ( v4 )
    operator delete[](v4);
  return (unsigned int)v10;
}
