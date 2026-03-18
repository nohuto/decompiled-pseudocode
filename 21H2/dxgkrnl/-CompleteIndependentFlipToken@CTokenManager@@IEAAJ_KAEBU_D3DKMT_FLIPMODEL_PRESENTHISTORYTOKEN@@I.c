/*
 * XREFs of ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C0017324
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000AC70 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0005A8C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     DxgkGetPresentStats @ 0x1C01CF460 (DxgkGetPresentStats.c)
 */

__int64 __fastcall CTokenManager::CompleteIndependentFlipToken(
        CTokenManager *this,
        LUID a2,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        unsigned int a4)
{
  void *hCompSurf; // rbx
  __int64 PlaneIndex; // r8
  LUID v8; // rdi
  __int64 VidPnSourceId; // rdx
  __int64 v10; // r8
  __int64 result; // rax
  _QWORD *v12; // r12
  _QWORD *v13; // rax
  _QWORD **v14; // rsi
  char v15; // r15
  _QWORD *v16; // rbx
  char *v17; // rsi
  int v18; // ebx
  char *v19; // rcx
  __int64 **v20; // rcx
  __int64 *i; // rax
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  char *v24; // rcx
  LUID compSurfLuid; // rbx
  CTokenManager *v26; // rdi
  UINT v27; // r12d
  _QWORD *v28; // r14
  CTokenManager *v29; // rax
  CTokenManager **v30; // rcx
  int v31; // eax
  unsigned int v32; // r15d
  struct DXGGLOBAL *Global; // rax
  __int64 v34; // rdi
  __int64 v35; // rbx
  void (__fastcall *v36)(_QWORD, _QWORD, __int64, __int64); // rsi
  unsigned int v37; // eax
  UINT PresentCount; // r12d
  LUID v39; // rax
  _QWORD *v40; // rdi
  LONG PreviousState; // [rsp+30h] [rbp-59h] BYREF
  LUID v42; // [rsp+38h] [rbp-51h]
  PVOID Object; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v44; // [rsp+48h] [rbp-41h]
  __int128 Buffer; // [rsp+50h] [rbp-39h] BYREF
  __int128 v46; // [rsp+60h] [rbp-29h]
  HANDLE Handle; // [rsp+70h] [rbp-19h]
  __int128 v48; // [rsp+78h] [rbp-11h] BYREF
  __int128 v49; // [rsp+88h] [rbp-1h]
  __int64 v50; // [rsp+98h] [rbp+Fh]

  hCompSurf = (void *)a3->hCompSurf;
  PlaneIndex = a3->PlaneIndex;
  Object = 0LL;
  v42 = a2;
  v50 = 0LL;
  v8 = a2;
  Handle = hCompSurf;
  VidPnSourceId = a3->VidPnSourceId;
  v48 = 0LL;
  v49 = 0LL;
  DxgkGetPresentStats(a4, VidPnSourceId, PlaneIndex, &v48);
  result = CompositionSurfaceObject::ResolveHandle(hCompSurf, 2u, v10, (struct CompositionSurfaceObject **)&Object);
  v44 = result;
  if ( (int)result >= 0 )
  {
    v12 = Object;
    Buffer = (unsigned __int64)Object;
    v13 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 200), &Buffer);
    if ( v13 )
    {
      v14 = (_QWORD **)v13[1];
      v15 = 0;
      v16 = *v14;
      if ( *v14 != v14 )
      {
        PresentCount = a3->PresentCount;
        v39 = v8;
        do
        {
          v40 = v16 - 1;
          if ( v16[4] == v39 )
          {
            if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v40 + 112LL))(v16 - 1) <= PresentCount )
              v15 |= (*(__int64 (__fastcall **)(_QWORD *))(*v40 + 160LL))(v16 - 1);
            v39 = v42;
          }
          v16 = (_QWORD *)*v16;
        }
        while ( v16 != v14 );
        v12 = Object;
        if ( v15 )
        {
          PreviousState = 0;
          ZwSetEvent(*((HANDLE *)this + 9), &PreviousState);
        }
        v8 = v42;
      }
    }
    v17 = (char *)(v12 + 6);
    v18 = v50;
    LODWORD(Buffer) = a3->PresentCount;
    DWORD1(Buffer) = DWORD1(v48);
    *((_QWORD *)&Buffer + 1) = (unsigned int)v49;
    *(_QWORD *)&v46 = *((_QWORD *)&v49 + 1);
    *((_QWORD *)&v46 + 1) = *((_QWORD *)&v49 + 1);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v12 + 6, 0LL);
    v19 = (char *)Object;
    v12[7] = KeGetCurrentThread();
    if ( *((_DWORD *)v19 + 32) )
    {
      v20 = (__int64 **)(v19 + 112);
      for ( i = *v20; i != (__int64 *)v20; i = (__int64 *)*i )
      {
        if ( *(i - 1) == v8 )
        {
          v22 = Buffer;
          *((_DWORD *)i + 44) = 0;
          v23 = v46;
          *((_BYTE *)i + 17) = 1;
          *((_OWORD *)i + 12) = v22;
          *((_DWORD *)i + 46) = v18;
          *((_OWORD *)i + 13) = v23;
          *((_DWORD *)i + 56) = 2;
          break;
        }
      }
    }
    v24 = (char *)(v12 + 6);
    if ( KeGetCurrentThread() == (struct _KTHREAD *)v12[7] )
    {
      v12[7] = 0LL;
      ExReleasePushLockExclusiveEx(v24, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v24, 0LL);
    }
    KeLeaveCriticalRegion();
    compSurfLuid = a3->compSurfLuid;
    v26 = (CTokenManager *)*((_QWORD *)this + 41);
    v27 = a3->PresentCount;
    v42 = compSurfLuid;
    while ( v26 != (CTokenManager *)((char *)this + 328) )
    {
      v28 = (_QWORD *)((char *)v26 - 8);
      if ( *(_QWORD *)(*((_QWORD *)v26 + 3) + 24LL) == __PAIR64__(v42.HighPart, compSurfLuid.LowPart)
        && (*(unsigned int (__fastcall **)(__int64))(*v28 + 112LL))((__int64)v26 - 8) == v27 )
      {
        v29 = *(CTokenManager **)v26;
        if ( *(CTokenManager **)(*(_QWORD *)v26 + 8LL) != v26
          || (v30 = (CTokenManager **)*((_QWORD *)v26 + 1), *v30 != v26) )
        {
          __fastfail(3u);
        }
        *v30 = v29;
        *((_QWORD *)v29 + 1) = v30;
        v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*v28 + 136LL))((__int64)v26 - 8, (unsigned int)v49);
        v32 = v31 + 1;
        if ( v31 != -1 )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v17, 0LL);
          *((_QWORD *)v17 + 1) = KeGetCurrentThread();
          *((_DWORD *)Object + 33) = v32;
          if ( KeGetCurrentThread() == *((struct _KTHREAD **)v17 + 1) )
          {
            *((_QWORD *)v17 + 1) = 0LL;
            ExReleasePushLockExclusiveEx(v17, 0LL);
          }
          else
          {
            ExReleasePushLockSharedEx(v17, 0LL);
          }
          KeLeaveCriticalRegion();
          Global = DXGGLOBAL_GetGlobal();
          v34 = v28[5];
          v35 = *(_QWORD *)(v28[4] + 24LL);
          v36 = *(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*((_QWORD *)Global + 38073) + 344LL);
          v37 = (*(__int64 (__fastcall **)(_QWORD *))(*v28 + 112LL))(v28);
          v36(v32, v37, v35, v34);
        }
        (*(void (__fastcall **)(_QWORD *, __int64))*v28)(v28, 1LL);
        break;
      }
      v26 = *(CTokenManager **)v26;
    }
    ObfDereferenceObject(Object);
    ObCloseHandle(Handle, 1);
    return v44;
  }
  return result;
}
