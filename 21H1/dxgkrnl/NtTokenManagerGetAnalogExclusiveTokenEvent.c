/*
 * XREFs of NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x1C0061930
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C0001E90 (DxgkGetSessionTokenManager.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtTokenManagerGetAnalogExclusiveTokenEvent(HANDLE *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGGLOBAL *Global; // rax
  int SessionTokenManager; // edi
  __int64 v6; // rbx
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  Handle = (HANDLE)-1LL;
  KeEnterCriticalRegion();
  Global = DXGGLOBAL::GetGlobal(v3, v2);
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38033) + 296LL))() )
  {
    v9 = 0LL;
    SessionTokenManager = DxgkGetSessionTokenManager(&v9);
    if ( SessionTokenManager >= 0 )
    {
      v6 = v9;
      SessionTokenManager = (*(__int64 (__fastcall **)(__int64, HANDLE *))(*(_QWORD *)v9 + 104LL))(v9, &Handle);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
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
