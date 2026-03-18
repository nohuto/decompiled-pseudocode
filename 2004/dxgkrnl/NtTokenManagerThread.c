/*
 * XREFs of NtTokenManagerThread @ 0x1C000DE20
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkGetSessionTokenManager @ 0x1C000E060 (DxgkGetSessionTokenManager.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 */

__int64 __fastcall NtTokenManagerThread(ULONG64 a1)
{
  _BYTE *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  int SessionTokenManager; // ebx
  unsigned int v8; // r14d
  size_t v9; // r8
  const void *v10; // rdx
  SIZE_T v12; // rax
  __int64 v13; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-E0h]
  _BYTE *v15; // [rsp+40h] [rbp-D8h]
  void *Src[2]; // [rsp+48h] [rbp-D0h]
  __int64 v17; // [rsp+58h] [rbp-C0h]
  __int128 v18; // [rsp+60h] [rbp-B8h]
  __int64 v19; // [rsp+70h] [rbp-A8h]
  _BYTE P[128]; // [rsp+80h] [rbp-98h] BYREF

  *(_OWORD *)Src = 0LL;
  v17 = 0LL;
  memset(P, 0, 0x78uLL);
  v2 = P;
  v15 = P;
  v3 = 0LL;
  v13 = 0LL;
  Global = DXGGLOBAL::GetGlobal(v5, v4);
  SessionTokenManager = 0;
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Global + 38048) + 296LL))() )
    SessionTokenManager = -1073741790;
  if ( SessionTokenManager >= 0 && a1 )
  {
    if ( a1 + 24 < a1 || a1 + 24 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v18 = *(_OWORD *)a1;
    v19 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)Src = v18;
    v17 = v19;
  }
  else
  {
    SessionTokenManager = -1073741811;
  }
  if ( SessionTokenManager >= 0 && !(_DWORD)v17 )
    SessionTokenManager = -1073741811;
  KeEnterCriticalRegion();
  v8 = EtwpDisableStackWalkApc();
  v14 = v8;
  if ( SessionTokenManager >= 0 )
  {
    SessionTokenManager = DxgkGetSessionTokenManager(&v13);
    v3 = v13;
    if ( SessionTokenManager >= 0 )
    {
      if ( (unsigned int)v17 > 5 )
      {
        v12 = 24LL * (unsigned int)v17;
        if ( !is_mul_ok((unsigned int)v17, 0x18uLL) )
          v12 = -1LL;
        v2 = operator new[](v12, 0x62634D54u, PagedPool);
        v15 = v2;
      }
      if ( v2 )
      {
        v9 = 24LL * (unsigned int)v17;
        v10 = Src[1];
        if ( (char *)Src[1] + v9 < Src[1] || (char *)Src[1] + v9 > (void *)MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v2, v10, v9);
      }
      else
      {
        SessionTokenManager = -1073741801;
      }
      if ( SessionTokenManager >= 0 )
        SessionTokenManager = (*(__int64 (__fastcall **)(__int64, void *, _BYTE *, _QWORD))(*(_QWORD *)v3 + 64LL))(
                                v3,
                                Src[0],
                                v2,
                                (unsigned int)v17);
    }
  }
  if ( v2 && v2 != P )
    ExFreePoolWithTag(v2, 0);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  EtwpReenableStackWalkApc(v8);
  KeLeaveCriticalRegion();
  return (unsigned int)SessionTokenManager;
}
