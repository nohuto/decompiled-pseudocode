/*
 * XREFs of NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x1C00629B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkGetSessionTokenManager @ 0x1C000E060 (DxgkGetSessionTokenManager.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtTokenManagerGetAnalogExclusiveTokenEvent(HANDLE *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  int SessionTokenManager; // edi
  __int64 v7; // rbx
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  Handle = (HANDLE)-1LL;
  KeEnterCriticalRegion();
  Global = DXGGLOBAL::GetGlobal(v3, v2);
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38048) + 296LL))() )
  {
    v10 = 0LL;
    SessionTokenManager = DxgkGetSessionTokenManager(&v10, v5);
    if ( SessionTokenManager >= 0 )
    {
      v7 = v10;
      SessionTokenManager = (*(__int64 (__fastcall **)(__int64, HANDLE *))(*(_QWORD *)v10 + 104LL))(v10, &Handle);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  else
  {
    SessionTokenManager = -1073741790;
  }
  if ( SessionTokenManager < 0 )
    goto LABEL_13;
  if ( Handle == (HANDLE)-1LL )
  {
    SessionTokenManager = -1073741811;
  }
  else
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a1 = Handle;
  }
  if ( SessionTokenManager < 0 )
  {
LABEL_13:
    if ( Handle != (HANDLE)-1LL )
      ObCloseHandle(Handle, 1);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)SessionTokenManager;
}
