/*
 * XREFs of NtOpenCompositionSurfaceRealizationInfo @ 0x1C0004AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSwapChainRealizationInfo@CCompositionSurface@@QEBAJ_KPEAIPEAUCSM_REALIZATION_INFO@@@Z @ 0x1C0004F80 (-GetSwapChainRealizationInfo@CCompositionSurface@@QEBAJ_KPEAIPEAUCSM_REALIZATION_INFO@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C00054E8 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0005A8C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C00072FC (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

__int64 __fastcall NtOpenCompositionSurfaceRealizationInfo(
        CCompositionSurface *a1,
        unsigned __int64 *a2,
        _DWORD *a3,
        void *a4)
{
  int v6; // eax
  int SwapChainRealizationInfo; // edi
  struct CSM_REALIZATION_INFO *v8; // rsi
  __int64 Pool2; // r13
  _DWORD *v10; // rcx
  __int64 v11; // r9
  size_t v12; // r12
  struct DXGGLOBAL *Global; // rax
  __int64 v14; // rcx
  char v15; // r8
  int v16; // eax
  void *v17; // rcx
  char v18; // al
  __int64 i; // r14
  __int64 v21; // [rsp+20h] [rbp-568h] BYREF
  int v22; // [rsp+28h] [rbp-560h]
  CCompositionSurface *v23; // [rsp+30h] [rbp-558h] BYREF
  PVOID Object; // [rsp+38h] [rbp-550h] BYREF
  _BYTE *v25; // [rsp+40h] [rbp-548h]
  __int64 v26; // [rsp+48h] [rbp-540h]
  void *v27; // [rsp+50h] [rbp-538h]
  unsigned __int64 v28; // [rsp+58h] [rbp-530h]
  void *v29; // [rsp+60h] [rbp-528h]
  _DWORD *v30; // [rsp+68h] [rbp-520h]
  _BYTE v31[1248]; // [rsp+70h] [rbp-518h] BYREF

  v29 = a4;
  v6 = (int)a1;
  v23 = a1;
  Object = a1;
  v30 = a3;
  v27 = a4;
  SwapChainRealizationInfo = 0;
  v28 = 0LL;
  v8 = 0LL;
  v25 = 0LL;
  Pool2 = 0LL;
  v26 = 0LL;
  HIDWORD(v21) = 0;
  LOBYTE(v6) = 0;
  v22 = v6;
  LOBYTE(v21) = 0;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v28 = *a2;
    v10 = a3;
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      v10 = (_DWORD *)MmUserProbeAddress;
    HIDWORD(v21) = *v10;
  }
  else
  {
    SwapChainRealizationInfo = -1073741811;
  }
  KeEnterCriticalRegion();
  v12 = 0LL;
  if ( SwapChainRealizationInfo >= 0 )
  {
    if ( a4 && HIDWORD(v21) )
    {
      v27 = (void *)((HIDWORD(v21) * (unsigned __int128)0x28u) >> 64);
      v12 = 40LL * HIDWORD(v21);
      if ( is_mul_ok(HIDWORD(v21), 0x28uLL) )
      {
        SwapChainRealizationInfo = 0;
      }
      else
      {
        v12 = -1LL;
        SwapChainRealizationInfo = -1073741675;
      }
      if ( SwapChainRealizationInfo < 0 )
        goto LABEL_26;
      if ( v12 > 0x4D8 )
      {
        Pool2 = ExAllocatePool2(257LL, v12, 1766675267LL, v11);
        v26 = Pool2;
        v8 = (struct CSM_REALIZATION_INFO *)Pool2;
        v25 = (_BYTE *)Pool2;
        if ( !Pool2 )
          SwapChainRealizationInfo = -1073741801;
      }
      else
      {
        v8 = (struct CSM_REALIZATION_INFO *)v31;
        v25 = v31;
      }
    }
    if ( SwapChainRealizationInfo >= 0 )
    {
      Global = DXGGLOBAL_GetGlobal();
      if ( (*(unsigned int (__fastcall **)(__int64))(*((_QWORD *)Global + 38073) + 528LL))(v14) )
      {
        Object = 0LL;
        SwapChainRealizationInfo = CompositionSurfaceObject::ResolveHandle(
                                     v23,
                                     1u,
                                     v15,
                                     (struct CompositionSurfaceObject **)&Object);
        if ( SwapChainRealizationInfo >= 0 )
        {
          v23 = 0LL;
          SwapChainRealizationInfo = CompositionSurfaceObject::LockForRead((CompositionSurfaceObject *)Object, &v23);
          if ( SwapChainRealizationInfo >= 0 )
          {
            SwapChainRealizationInfo = CCompositionSurface::GetSwapChainRealizationInfo(
                                         v23,
                                         v28,
                                         (unsigned int *)&v21 + 1,
                                         v8);
            v16 = (unsigned __int8)v22;
            if ( SwapChainRealizationInfo >= 0 )
              v16 = 1;
            v22 = v16;
            LOBYTE(v21) = v16;
            CCompositionSurface::UnlockAndRelease(v23);
          }
          ObfDereferenceObject(Object);
        }
      }
      else
      {
        SwapChainRealizationInfo = -1073741790;
      }
    }
  }
LABEL_26:
  if ( SwapChainRealizationInfo < 0 )
  {
    v18 = v22;
  }
  else
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = HIDWORD(v21);
    if ( v8 )
    {
      v17 = v29;
      if ( (unsigned __int64)v29 + v12 > MmUserProbeAddress || (char *)v29 + v12 <= v29 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v17, v8, v12);
    }
    v18 = v22;
  }
  if ( SwapChainRealizationInfo < 0 )
  {
    if ( v18 )
    {
      if ( v8 )
      {
        for ( i = 0LL; (unsigned int)i < HIDWORD(v21); i = (unsigned int)(i + 1) )
          ObCloseHandle(*((HANDLE *)v8 + 5 * i + 1), 1);
      }
    }
  }
  if ( Pool2 )
    ExFreePool2(Pool2, 1766675267LL, 0LL, 0LL, v21);
  KeLeaveCriticalRegion();
  return (unsigned int)SwapChainRealizationInfo;
}
