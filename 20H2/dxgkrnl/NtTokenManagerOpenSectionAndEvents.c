/*
 * XREFs of NtTokenManagerOpenSectionAndEvents @ 0x1C000DA80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkGetSessionTokenManager @ 0x1C000E0C0 (DxgkGetSessionTokenManager.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtTokenManagerOpenSectionAndEvents(HANDLE *a1, _QWORD *a2, HANDLE *a3, HANDLE *a4)
{
  _QWORD *v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGGLOBAL *Global; // rax
  int SessionTokenManager; // esi
  __int64 v12; // rbx
  HANDLE Handle; // [rsp+38h] [rbp-40h] BYREF
  HANDLE v15; // [rsp+40h] [rbp-38h] BYREF
  HANDLE v16; // [rsp+48h] [rbp-30h] BYREF
  __int64 v17; // [rsp+50h] [rbp-28h] BYREF
  __int64 v18; // [rsp+58h] [rbp-20h] BYREF

  v6 = a2;
  v16 = (HANDLE)-1LL;
  v18 = 0LL;
  v15 = (HANDLE)-1LL;
  Handle = (HANDLE)-1LL;
  KeEnterCriticalRegion();
  Global = DXGGLOBAL::GetGlobal(v9, v8);
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38048) + 296LL))() )
  {
    v17 = 0LL;
    SessionTokenManager = DxgkGetSessionTokenManager(&v17);
    if ( SessionTokenManager >= 0 )
    {
      v12 = v17;
      SessionTokenManager = (*(__int64 (__fastcall **)(__int64, HANDLE *, __int64 *, HANDLE *, HANDLE *))(*(_QWORD *)v17 + 48LL))(
                              v17,
                              &v16,
                              &v18,
                              &v15,
                              &Handle);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      v6 = a2;
    }
  }
  else
  {
    SessionTokenManager = -1073741790;
  }
  if ( a1 && v6 && a3 && a4 )
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a1 = v16;
    if ( v6 + 1 < v6 || (unsigned __int64)(v6 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *v6 = v18;
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = v15;
    if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a4 = Handle;
  }
  else
  {
    SessionTokenManager = -1073741811;
  }
  if ( SessionTokenManager < 0 )
  {
    if ( Handle != (HANDLE)-1LL )
      ObCloseHandle(Handle, 1);
    if ( v15 != (HANDLE)-1LL )
      ObCloseHandle(v15, 1);
    if ( v16 != (HANDLE)-1LL )
      ObCloseHandle(v16, 1);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)SessionTokenManager;
}
