/*
 * XREFs of ?InitializeResourceManagerSid@DXGGLOBAL@@AEAAXXZ @ 0x1C0213440
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0210BEC (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 */

void __fastcall DXGGLOBAL::InitializeResourceManagerSid(DXGGLOBAL *this)
{
  ULONG v2; // eax
  __int64 v3; // r9
  void *v4; // rax
  NTSTATUS v5; // eax
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-18h] BYREF

  v2 = RtlLengthRequiredSid(6u);
  v4 = (void *)operator new[](v2, 0x4B677844u, 256LL, v3);
  *((_QWORD *)this + 38063) = v4;
  if ( v4 )
  {
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
    v5 = RtlInitializeSid(v4, &IdentifierAuthority, 6u);
    if ( v5 < 0 )
    {
      WdLogSingleEntry1(3LL, v5);
      operator delete[](*((void **)this + 38063));
      *((_QWORD *)this + 38063) = 0LL;
    }
    else
    {
      *RtlSubAuthoritySid(*((PSID *)this + 38063), 0) = 80;
      *RtlSubAuthoritySid(*((PSID *)this + 38063), 1u) = 1988685059;
      *RtlSubAuthoritySid(*((PSID *)this + 38063), 2u) = 1921232356;
      *RtlSubAuthoritySid(*((PSID *)this + 38063), 3u) = 378231328;
      *RtlSubAuthoritySid(*((PSID *)this + 38063), 4u) = -1590824699;
      *RtlSubAuthoritySid(*((PSID *)this + 38063), 5u) = 890457928;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, 6906LL);
  }
}
