/*
 * XREFs of NtTokenManagerConfirmOutstandingAnalogToken @ 0x1C0061100
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C0001E90 (DxgkGetSessionTokenManager.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 NtTokenManagerConfirmOutstandingAnalogToken()
{
  int SessionTokenManager; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned int v4; // edi
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  KeEnterCriticalRegion();
  SessionTokenManager = DxgkGetSessionTokenManager(&v7);
  v3 = v7;
  v4 = SessionTokenManager;
  if ( SessionTokenManager >= 0
    && (Global = DXGGLOBAL::GetGlobal(v2, v1), (*(unsigned int (**)(void))(*((_QWORD *)Global + 38033) + 296LL))()) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 128LL))(v3);
  }
  else
  {
    v4 = -1073741790;
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  KeLeaveCriticalRegion();
  return v4;
}
