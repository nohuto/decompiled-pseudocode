/*
 * XREFs of ?GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE@@IPEAI@Z @ 0x1C0010160
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EEBC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0010D40 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0010FA0 (-GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 */

char __fastcall CCompositionFrame::GetSurfaceUpdates(
        char **this,
        struct CSM_SURFACE_UPDATE *a2,
        int a3,
        unsigned int *a4)
{
  unsigned int v4; // ebp
  unsigned int *v5; // r14
  CCompositionFrame *v8; // rbx
  char *v9; // rcx
  CCompositionFrame *v10; // rdx
  char result; // al
  CCompositionFrame *v12; // rdi
  CCompositionFrame *v13; // rcx
  char v14; // si
  unsigned int v15; // ecx
  __int64 v16; // rax
  unsigned int v17; // edx
  bool v18; // cf
  __int64 v19; // r13
  unsigned __int8 (**v20)(void); // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  CPushLock *v23; // r13
  __int64 v24; // r14
  __int64 v25; // rbx
  bool v26; // zf
  __int128 v27; // xmm0
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned __int64 v30; // rdi
  _QWORD *v31; // rsi
  int SurfaceUpdate; // edi
  _QWORD *v33; // rcx
  _DWORD *v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned int v37; // edi
  struct DXGGLOBAL *Global; // rax
  CCompositionFrame *v39; // rcx
  int v40; // [rsp+20h] [rbp-68h]
  CPushLock *v41; // [rsp+28h] [rbp-60h]
  __int64 v42; // [rsp+30h] [rbp-58h] BYREF
  __int64 v43; // [rsp+38h] [rbp-50h]
  __int64 v44; // [rsp+48h] [rbp-40h]

  v4 = 0;
  v5 = a4;
  v8 = (CCompositionFrame *)this;
  if ( *((_BYTE *)this + 138) )
    goto LABEL_6;
  v9 = this[15];
  if ( !v9 )
  {
    v10 = (CCompositionFrame *)*((_QWORD *)v8 + 18);
    if ( v10 != (CCompositionFrame *)((char *)v8 + 144) )
    {
      v9 = (char *)v10 - 8;
      *((_BYTE *)v8 + 136) = 1;
      *((_QWORD *)v8 + 15) = (char *)v10 - 8;
    }
  }
  result = *((_BYTE *)v8 + 136);
  if ( !result )
  {
LABEL_6:
    v12 = (CCompositionFrame *)*((_QWORD *)v8 + 16);
    *((_BYTE *)v8 + 138) = 1;
    if ( !v12 )
    {
      v13 = (CCompositionFrame *)*((_QWORD *)v8 + 20);
      if ( v13 != (CCompositionFrame *)((char *)v8 + 160) )
      {
        *((_QWORD *)v8 + 16) = v13;
        v12 = v13;
        *((_BYTE *)v8 + 137) = 1;
      }
    }
    v14 = *((_BYTE *)v8 + 137);
    if ( !v14 )
    {
LABEL_10:
      *((_BYTE *)v8 + 138) = 0;
LABEL_11:
      result = v14;
      goto LABEL_12;
    }
    while ( 1 )
    {
      if ( !a3 )
        goto LABEL_11;
      v15 = *((_DWORD *)v12 + 20);
      v16 = 0LL;
      v17 = *((_DWORD *)v12 + 16);
      v18 = v15 < v17;
      if ( v15 == v17 )
      {
        v15 = 0;
        *((_DWORD *)v12 + 20) = 0;
        v18 = v17 != 0;
      }
      if ( v18 )
        v16 = *((_QWORD *)v12 + 7) + 32LL * v15;
      if ( v16 )
        break;
LABEL_40:
      v12 = (CCompositionFrame *)**((_QWORD **)v8 + 16);
      if ( v12 == (CCompositionFrame *)((char *)v8 + 160) )
      {
        v12 = 0LL;
        *((_BYTE *)v8 + 137) = 0;
        v14 = 0;
      }
      else
      {
        v14 = *((_BYTE *)v8 + 137);
      }
      *((_QWORD *)v8 + 16) = v12;
      if ( !v14 )
        goto LABEL_10;
    }
    while ( 1 )
    {
      if ( !a3 )
        goto LABEL_11;
      v19 = *(_QWORD *)(v16 + 8);
      v43 = *((_QWORD *)v8 + 10);
      v20 = *(unsigned __int8 (***)(void))(v19 + 48);
      v44 = v19;
      if ( (*v20)() )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v19 + 56, 0LL);
        if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v19 + 48))(v19 + 48) )
        {
          v40 = -1073741823;
          if ( (*(_QWORD *)(v19 + 96) != v43 || !v43) && *(int *)(v19 + 76) > 0 )
          {
            if ( !*(_DWORD *)(v19 + 120) )
              goto LABEL_64;
            v21 = *(_QWORD *)(v19 + 112);
            v22 = v19 + 104;
            if ( v21 == v19 + 104 )
              goto LABEL_64;
            v23 = 0LL;
            v24 = v21;
            v25 = v22;
            do
            {
              if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v24 - 24) + 16LL))(v24 - 24) )
                break;
              v23 = (CPushLock *)(v24 - 24);
              v24 = *(_QWORD *)(v24 + 8);
            }
            while ( v24 != v25 );
            v8 = (CCompositionFrame *)this;
            v26 = v23 == 0LL;
            v5 = a4;
            v41 = v23;
            v19 = v44;
            if ( v26 )
            {
LABEL_64:
              memset((char *)a2 + 4, 0, 0xC4uLL);
              *(_DWORD *)a2 = 200;
              *(_QWORD *)((char *)a2 + 4) = *(_QWORD *)(v19 + 24);
              v40 = 0;
LABEL_32:
              *(_QWORD *)(v19 + 96) = v43;
            }
            else
            {
              v42 = 0LL;
              v40 = (*(__int64 (__fastcall **)(CPushLock *, __int64 *))(*(_QWORD *)v41 + 216LL))(v41, &v42);
              if ( v40 >= 0 )
              {
                *(_DWORD *)a2 = 200;
                *(_QWORD *)((char *)a2 + 4) = *(_QWORD *)(v19 + 24);
                *((_QWORD *)a2 + 2) = *((_QWORD *)v41 + 2);
                *((_DWORD *)a2 + 6) = *(_DWORD *)(v42 + 28);
                *((_DWORD *)a2 + 7) = *((_DWORD *)v41 + 61);
                (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v41 + 31) + 56LL))(
                  *((_QWORD *)v41 + 31),
                  (char *)a2 + 32);
                *(_OWORD *)((char *)a2 + 40) = *((_OWORD *)v41 + 16);
                *((_QWORD *)a2 + 7) = *((_QWORD *)v41 + 34);
                *((_DWORD *)a2 + 16) = *((_DWORD *)v41 + 70);
                v27 = *((_OWORD *)v41 + 3);
                *((_DWORD *)v41 + 64) = 0;
                *((_BYTE *)v41 + 42) = 0;
                *(_OWORD *)((char *)a2 + 72) = v27;
                *(_OWORD *)((char *)a2 + 88) = *((_OWORD *)v41 + 4);
                *(_OWORD *)((char *)a2 + 104) = *((_OWORD *)v41 + 5);
                *(_OWORD *)((char *)a2 + 120) = *((_OWORD *)v41 + 6);
                *(_OWORD *)((char *)a2 + 136) = *((_OWORD *)v41 + 7);
                *(_OWORD *)((char *)a2 + 152) = *((_OWORD *)v41 + 8);
                *(_OWORD *)((char *)a2 + 168) = *((_OWORD *)v41 + 9);
                *((_QWORD *)a2 + 23) = *((_QWORD *)v41 + 20);
                *((_DWORD *)a2 + 48) = (*(__int64 (__fastcall **)(CPushLock *))(*(_QWORD *)v41 + 176LL))(v41);
                goto LABEL_32;
              }
            }
          }
          v28 = v19 + 56;
          if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v19 + 64) )
          {
            *(_QWORD *)(v19 + 64) = 0LL;
            ExReleasePushLockExclusiveEx(v28, 0LL);
          }
          else
          {
            ExReleasePushLockSharedEx(v28, 0LL);
          }
          KeLeaveCriticalRegion();
          if ( v40 >= 0 )
          {
            a2 = (struct CSM_SURFACE_UPDATE *)((char *)a2 + 200);
            --a3;
            ++v4;
          }
          goto LABEL_37;
        }
        CPushLock::ReleaseLock((CPushLock *)(v19 + 48));
      }
LABEL_37:
      ++*((_DWORD *)v12 + 20);
      v16 = 0LL;
      v29 = *((unsigned int *)v12 + 20);
      if ( (unsigned int)v29 < *((_DWORD *)v12 + 16) )
        v16 = *((_QWORD *)v12 + 7) + 32 * v29;
      if ( !v16 )
        goto LABEL_40;
    }
  }
  while ( a3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v9 + 72LL))(v9) )
    {
      v30 = *((_QWORD *)v8 + 10);
      v31 = *(_QWORD **)(*((_QWORD *)v8 + 15) + 32LL);
      if ( (int)CPushLock::AcquireLockShared((CPushLock *)(v31 + 6)) >= 0 )
      {
        SurfaceUpdate = CCompositionSurface::GetSurfaceUpdate((CCompositionSurface *)(v31 + 5), v30, a2);
        v33 = v31 + 7;
        if ( KeGetCurrentThread() == (struct _KTHREAD *)v31[8] )
        {
          v31[8] = 0LL;
          ExReleasePushLockExclusiveEx(v33, 0LL);
        }
        else
        {
          ExReleasePushLockSharedEx(v33, 0LL);
        }
        KeLeaveCriticalRegion();
        if ( SurfaceUpdate >= 0 )
        {
          v34 = (_DWORD *)*((_QWORD *)v8 + 15);
          if ( (*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)v34 + 64LL))(v34) == 1 )
          {
            v37 = v34[26];
            Global = DXGGLOBAL::GetGlobal(v36, v35);
            (*(void (__fastcall **)(_QWORD *, _QWORD))(*((_QWORD *)Global + 38048) + 64LL))(v31, v37);
          }
          a2 = (struct CSM_SURFACE_UPDATE *)((char *)a2 + 200);
          --a3;
          ++v4;
        }
      }
    }
    v39 = *(CCompositionFrame **)(*((_QWORD *)v8 + 15) + 8LL);
    if ( v39 == (CCompositionFrame *)((char *)v8 + 144) )
    {
      v9 = 0LL;
      *((_BYTE *)v8 + 136) = 0;
      result = 0;
    }
    else
    {
      result = *((_BYTE *)v8 + 136);
      v9 = (char *)v39 - 8;
    }
    *((_QWORD *)v8 + 15) = v9;
    if ( !result )
      goto LABEL_6;
  }
LABEL_12:
  *v5 = v4;
  return result;
}
