/*
 * XREFs of NtBindCompositionSurface @ 0x1C0004600
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C0003660 (DxgkGetSessionTokenManager.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0004208 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N11PEA_K@Z @ 0x1C0004950 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N11PEA_K@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C00054E8 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0005A8C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0007E48 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall NtBindCompositionSurface(void *a1, int a2, unsigned int a3, char *a4, _QWORD *a5)
{
  int SessionTokenManager; // edi
  __int64 v7; // rsi
  PVOID v8; // r12
  CCompositionSurface *v9; // r15
  char v10; // r13
  char v11; // r8
  struct DXGGLOBAL *Global; // rax
  bool v13; // r9
  struct DXGGLOBAL *v15; // rax
  __int64 v16; // [rsp+38h] [rbp-AC0h] BYREF
  unsigned int v17; // [rsp+40h] [rbp-AB8h]
  unsigned int v18; // [rsp+48h] [rbp-AB0h]
  PVOID Object; // [rsp+50h] [rbp-AA8h] BYREF
  struct CCompositionSurface *v20; // [rsp+58h] [rbp-AA0h] BYREF
  void *v21; // [rsp+60h] [rbp-A98h]
  unsigned __int64 v22[3]; // [rsp+68h] [rbp-A90h] BYREF
  _BYTE Src[1312]; // [rsp+80h] [rbp-A78h] BYREF
  _QWORD v24[164]; // [rsp+5A0h] [rbp-558h] BYREF

  v17 = a3;
  v21 = a1;
  v22[1] = (unsigned __int64)a1;
  v18 = a3;
  v22[2] = (unsigned __int64)a5;
  SessionTokenManager = 0;
  memset(v24, 0, sizeof(v24));
  v22[0] = 0LL;
  v7 = 0LL;
  v16 = 0LL;
  v8 = 0LL;
  Object = 0LL;
  v9 = 0LL;
  v20 = 0LL;
  if ( a4 )
  {
    if ( a4 + 1312 < a4 || (unsigned __int64)(a4 + 1312) > MmUserProbeAddress )
      a4 = (char *)MmUserProbeAddress;
    memmove(Src, a4, 0x520uLL);
    memmove(v24, Src, 0x520uLL);
    if ( a5 + 1 < a5 || (unsigned __int64)(a5 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a5 = 0LL;
    v10 = 0;
  }
  else
  {
    SessionTokenManager = -1073741811;
    v10 = 0;
  }
  KeEnterCriticalRegion();
  if ( SessionTokenManager >= 0 )
  {
    SessionTokenManager = CompositionSurfaceObject::ResolveHandle(
                            v21,
                            2u,
                            v11,
                            (struct CompositionSurfaceObject **)&Object);
    v8 = Object;
    if ( SessionTokenManager >= 0 )
    {
      Global = DXGGLOBAL_GetGlobal();
      if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 38073) + 528LL))() )
      {
        SessionTokenManager = DxgkGetSessionTokenManager(&v16);
        v7 = v16;
        if ( SessionTokenManager >= 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16);
      }
      if ( SessionTokenManager >= 0 )
      {
        SessionTokenManager = CompositionSurfaceObject::LockForWrite(v8, &v20);
        v9 = v20;
        if ( SessionTokenManager >= 0 )
        {
          if ( v7 && !*((_QWORD *)v20 + 13) )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
            v7 = 0LL;
            v16 = 0LL;
          }
          SessionTokenManager = CCompositionSurface::Bind(v9, (const struct CSM_BUFFER_INFO *)v24, a2 != 0, v13, 0, v22);
        }
      }
    }
  }
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v16 = 0LL;
  }
  if ( SessionTokenManager < 0 )
    goto LABEL_39;
  v10 = 1;
  if ( v24[145] )
  {
    v15 = DXGGLOBAL_GetGlobal();
    if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, void *))(*((_QWORD *)v15 + 38073) + 520LL))(
            v24[145],
            v17,
            v21) )
      SessionTokenManager = -1073741790;
  }
  if ( SessionTokenManager < 0 )
  {
LABEL_39:
    if ( v10 )
      CCompositionSurface::UnBind(v9, 0);
  }
  if ( v9 )
    CCompositionSurface::UnlockAndRelease(v9);
  if ( v8 )
    ObfDereferenceObject(v8);
  KeLeaveCriticalRegion();
  if ( a5 )
  {
    if ( a5 + 1 < a5 || (unsigned __int64)(a5 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a5 = v22[0];
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)SessionTokenManager;
}
