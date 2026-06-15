/*
 * XREFs of ?BuildSecurityDescriptor@@YAPEAXKK@Z @ 0x180063A90
 * Callers:
 *     ?InitializePnpInfo@@YAHXZ @ 0x18006369C (-InitializePnpInfo@@YAHXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1800BC030 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800BC05C (WPP_SF_d.c)
 */

__int64 __fastcall BuildSecurityDescriptor()
{
  unsigned __int64 v0; // rsi
  struct _ACL *v1; // rbx
  char v2; // r15
  void *v3; // rax
  void *v4; // rdi
  DWORD LengthSid; // ebx
  DWORD v6; // r14d
  struct _ACL *v7; // rax
  void *v8; // rax
  CAudioSessionManager *v10; // rcx
  __int64 v11; // rdx
  DWORD LastError; // eax
  __int64 v13; // rdx
  PSID pSid; // [rsp+60h] [rbp-20h] BYREF
  DWORD dwBufferLength; // [rsp+68h] [rbp-18h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY pIdentifierAuthority; // [rsp+6Ch] [rbp-14h] BYREF

  pSid = 0LL;
  v0 = 0LL;
  *(_DWORD *)pIdentifierAuthority.Value = 0;
  v1 = 0LL;
  *(_WORD *)&pIdentifierAuthority.Value[4] = 256;
  v2 = 0;
  v3 = HeapAlloc(hHeap, 0, 0x28uLL);
  v4 = v3;
  if ( !v3 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    v11 = 10LL;
LABEL_24:
    WPP_SF_(*((_QWORD *)v10 + 2), v11, &WPP_609dd533b8aa311af52d5b9794abf855_Traceguids);
    goto LABEL_12;
  }
  if ( !InitializeSecurityDescriptor(v3, 1u) )
  {
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    LastError = GetLastError();
    v13 = 11LL;
LABEL_33:
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), v13, &WPP_609dd533b8aa311af52d5b9794abf855_Traceguids, LastError);
    goto LABEL_12;
  }
  if ( !AllocateAndInitializeSid(&pIdentifierAuthority, 1u, 0, 0, 0, 0, 0, 0, 0, 0, &pSid) )
  {
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    LastError = GetLastError();
    v13 = 12LL;
    goto LABEL_33;
  }
  LengthSid = GetLengthSid(AudiosrvSid);
  v6 = LengthSid + GetLengthSid(pSid) + 24;
  v7 = (struct _ACL *)HeapAlloc(hHeap, 0, v6);
  v1 = v7;
  if ( !v7 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    v11 = 13LL;
    goto LABEL_24;
  }
  if ( !InitializeAcl(v7, v6, 2u) )
  {
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    LastError = GetLastError();
    v13 = 14LL;
    goto LABEL_33;
  }
  if ( !AddAccessAllowedAce(v1, 2u, 0xF001Fu, AudiosrvSid) )
  {
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    LastError = GetLastError();
    v13 = 15LL;
    goto LABEL_33;
  }
  if ( !AddAccessAllowedAce(v1, 2u, 4u, pSid) )
  {
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    LastError = GetLastError();
    v13 = 16LL;
    goto LABEL_33;
  }
  if ( !SetSecurityDescriptorDacl(v4, 1, v1, 0) )
  {
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    LastError = GetLastError();
    v13 = 17LL;
    goto LABEL_33;
  }
  dwBufferLength = GetSecurityDescriptorLength(v4);
  v8 = HeapAlloc(hHeap, 0, dwBufferLength);
  v0 = (unsigned __int64)v8;
  if ( !v8 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    v11 = 18LL;
    goto LABEL_24;
  }
  if ( MakeSelfRelativeSD(v4, v8, &dwBufferLength) )
  {
    v2 = 1;
    goto LABEL_12;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LastError = GetLastError();
    v13 = 19LL;
    goto LABEL_33;
  }
LABEL_12:
  if ( pSid )
    FreeSid(pSid);
  if ( v1 )
    HeapFree(hHeap, 0, v1);
  if ( v4 )
    HeapFree(hHeap, 0, v4);
  if ( !v2 && v0 )
    HeapFree(hHeap, 0, (LPVOID)v0);
  return v0 & -(__int64)(v2 != 0);
}
