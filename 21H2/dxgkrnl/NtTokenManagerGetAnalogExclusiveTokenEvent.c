/*
 * XREFs of NtTokenManagerGetAnalogExclusiveTokenEvent @ 0x1C00757C0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C0003660 (DxgkGetSessionTokenManager.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtTokenManagerGetAnalogExclusiveTokenEvent(HANDLE *a1)
{
  struct DXGGLOBAL *Global; // rax
  int SessionTokenManager; // edi
  __int64 v4; // rbx
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  Handle = (HANDLE)-1LL;
  KeEnterCriticalRegion();
  Global = DXGGLOBAL_GetGlobal();
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38073) + 528LL))() )
  {
    v7 = 0LL;
    SessionTokenManager = DxgkGetSessionTokenManager(&v7);
    if ( SessionTokenManager >= 0 )
    {
      v4 = v7;
      SessionTokenManager = (*(__int64 (__fastcall **)(__int64, HANDLE *))(*(_QWORD *)v7 + 112LL))(v7, &Handle);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
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
