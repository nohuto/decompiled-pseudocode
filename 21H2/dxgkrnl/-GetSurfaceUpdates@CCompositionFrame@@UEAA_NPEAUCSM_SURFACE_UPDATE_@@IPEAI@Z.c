/*
 * XREFs of ?GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE_@@IPEAI@Z @ 0x1C0005FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z @ 0x1C00062B0 (-GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionFrame::GetSurfaceUpdates(
        CCompositionFrame *this,
        struct CSM_SURFACE_UPDATE_ *a2,
        int a3,
        unsigned int *a4)
{
  unsigned int v4; // r12d
  int v6; // esi
  struct CSM_SURFACE_UPDATE_ *v7; // rbp
  char *v9; // rcx
  CCompositionFrame *v10; // rdx
  __int64 result; // rax
  CCompositionFrame *v12; // r14
  CCompositionFrame *v13; // rcx
  unsigned __int8 v14; // r15
  unsigned __int64 v15; // rdi
  __int64 v16; // r15
  int SurfaceUpdate; // edi
  __int64 v18; // rcx
  unsigned int *v19; // rdi
  struct DXGGLOBAL *Global; // rax
  CCompositionFrame *v21; // rcx
  unsigned int v22; // ecx
  __int64 v23; // rax
  unsigned int v24; // edx
  bool v25; // cf
  __int64 v26; // rdi
  unsigned __int64 v27; // rsi
  int v28; // eax
  CPushLock *v29; // rcx
  __int64 v30; // rcx
  struct CSM_SURFACE_UPDATE_ *v31; // [rsp+68h] [rbp+10h]
  int v32; // [rsp+70h] [rbp+18h]

  v32 = a3;
  v31 = a2;
  v4 = 0;
  v6 = a3;
  v7 = a2;
  if ( *((_BYTE *)this + 138) )
    goto LABEL_6;
  v9 = (char *)*((_QWORD *)this + 15);
  if ( !v9 )
  {
    v10 = (CCompositionFrame *)*((_QWORD *)this + 18);
    if ( v10 != (CCompositionFrame *)((char *)this + 144) )
    {
      v9 = (char *)v10 - 8;
      *((_BYTE *)this + 136) = 1;
      *((_QWORD *)this + 15) = (char *)v10 - 8;
    }
  }
  result = *((unsigned __int8 *)this + 136);
  if ( (_BYTE)result )
  {
    while ( v6 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v9 + 72LL))(v9) )
      {
        v15 = *((_QWORD *)this + 10);
        v16 = *(_QWORD *)(*((_QWORD *)this + 15) + 32LL);
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v16 + 48, 0LL);
        SurfaceUpdate = CCompositionSurface::GetSurfaceUpdate((CCompositionSurface *)(v16 + 40), v15, v7);
        v18 = v16 + 48;
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v16 + 56) )
        {
          *(_QWORD *)(v16 + 56) = 0LL;
          ExReleasePushLockExclusiveEx(v18, 0LL);
        }
        else
        {
          ExReleasePushLockSharedEx(v18, 0LL);
        }
        KeLeaveCriticalRegion();
        if ( SurfaceUpdate >= 0 )
        {
          v19 = (unsigned int *)*((_QWORD *)this + 15);
          if ( (*(unsigned int (__fastcall **)(unsigned int *))(*(_QWORD *)v19 + 64LL))(v19) == 1 )
          {
            Global = DXGGLOBAL_GetGlobal();
            (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)Global + 38073) + 64LL))(v16, v19[26]);
          }
          v7 = (struct CSM_SURFACE_UPDATE_ *)((char *)v7 + 224);
          --v6;
          v31 = v7;
          ++v4;
          v32 = v6;
        }
      }
      v21 = *(CCompositionFrame **)(*((_QWORD *)this + 15) + 8LL);
      if ( v21 == (CCompositionFrame *)((char *)this + 144) )
      {
        *((_BYTE *)this + 136) = 0;
        *((_QWORD *)this + 15) = 0LL;
        goto LABEL_6;
      }
      result = *((unsigned __int8 *)this + 136);
      v9 = (char *)v21 - 8;
      *((_QWORD *)this + 15) = v9;
      if ( !(_BYTE)result )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    v12 = (CCompositionFrame *)*((_QWORD *)this + 16);
    *((_BYTE *)this + 138) = 1;
    if ( !v12 )
    {
      v13 = (CCompositionFrame *)*((_QWORD *)this + 20);
      if ( v13 != (CCompositionFrame *)((char *)this + 160) )
      {
        *((_QWORD *)this + 16) = v13;
        v12 = v13;
        *((_BYTE *)this + 137) = 1;
      }
    }
    v14 = *((_BYTE *)this + 137);
    if ( v14 )
    {
      while ( v6 )
      {
        v22 = *((_DWORD *)v12 + 16);
        v23 = 0LL;
        v24 = *((_DWORD *)v12 + 12);
        v25 = v22 < v24;
        if ( v22 == v24 )
        {
          v22 = 0;
          *((_DWORD *)v12 + 16) = 0;
          v25 = v24 != 0;
        }
        if ( v25 )
          v23 = *((_QWORD *)v12 + 5) + 32LL * v22;
        if ( v23 )
        {
          while ( v6 )
          {
            v26 = *(_QWORD *)(v23 + 8);
            v27 = *((_QWORD *)this + 10);
            KeEnterCriticalRegion();
            ExAcquirePushLockSharedEx(v26 + 48, 0LL);
            v28 = CCompositionSurface::GetSurfaceUpdate((CCompositionSurface *)(v26 + 40), v27, v31);
            v29 = (CPushLock *)(v26 + 48);
            LODWORD(v26) = v28;
            CPushLock::ReleaseLock(v29);
            v6 = v32;
            if ( (int)v26 >= 0 )
            {
              v31 = (struct CSM_SURFACE_UPDATE_ *)((char *)v31 + 224);
              v6 = --v32;
              ++v4;
            }
            ++*((_DWORD *)v12 + 16);
            v23 = 0LL;
            v30 = *((unsigned int *)v12 + 16);
            if ( (unsigned int)v30 < *((_DWORD *)v12 + 12) )
              v23 = *((_QWORD *)v12 + 5) + 32 * v30;
            if ( !v23 )
              goto LABEL_35;
          }
          break;
        }
LABEL_35:
        v12 = (CCompositionFrame *)**((_QWORD **)this + 16);
        if ( v12 == (CCompositionFrame *)((char *)this + 160) )
        {
          *((_BYTE *)this + 137) = 0;
          v14 = 0;
          *((_QWORD *)this + 16) = 0LL;
          goto LABEL_10;
        }
        v14 = *((_BYTE *)this + 137);
        *((_QWORD *)this + 16) = v12;
        if ( !v14 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      *((_BYTE *)this + 138) = 0;
    }
    result = v14;
  }
  *a4 = v4;
  return result;
}
