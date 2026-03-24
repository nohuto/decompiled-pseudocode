/*
 * XREFs of ?TokenThread@CTokenManager@@UEAAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C001A050
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0002D70 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ValidateUserEvent@CTokenManager@@CAJPEAXPEAPEAX@Z @ 0x1C001A11C (-ValidateUserEvent@CTokenManager@@CAJPEAXPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTokenManager::TokenThread(
        CTokenManager *this,
        void *a2,
        struct CSM_TOKEN_ADAPTER_INFO *a3,
        unsigned int a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  struct DXGGLOBAL *Global; // rax
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF
  HANDLE v13; // [rsp+38h] [rbp-10h] BYREF

  v13 = 0LL;
  Handle = 0LL;
  v9 = CTokenManager::ValidateUserEvent(a2, &v13);
  if ( v9 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v8, v7);
    v9 = (*(__int64 (__fastcall **)(HANDLE *))(*((_QWORD *)Global + 38048) + 176LL))(&Handle);
    if ( v9 >= 0 )
      v9 = CTokenManager::ProcessTokens(this, v13, Handle, a3, a4);
  }
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( v13 )
    ObCloseHandle(v13, 0);
  return (unsigned int)v9;
}
