/*
 * XREFs of ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0010850
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EEBC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0010CC4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0010D40 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0010DB0 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0010F60 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipToken::InFrame(CFlipToken *this, struct CCompositionFrame *a2, bool *a3)
{
  int v3; // edi
  unsigned int v4; // r12d
  __int64 v8; // rsi
  __int64 v9; // rbp
  _QWORD *v10; // rax
  int v11; // ebp
  __int64 v12; // rcx
  __int64 v13; // rsi
  char v14; // bp
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rsi
  _QWORD *v18; // r14
  _QWORD *v19; // rcx
  _QWORD *v20; // r14
  __int64 v21; // rcx
  int v22; // ebp
  __int64 v23; // rsi
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rbp
  _QWORD *v27; // rsi
  unsigned __int64 v28; // r14
  _QWORD *v29; // rcx
  bool v30; // zf
  __int64 v31; // rsi
  __int64 v32; // rbx
  _QWORD *v33; // rdx
  __int64 v34; // rcx
  _QWORD *v36; // rdx
  void (__fastcall ***v37)(_QWORD, __int64); // rcx
  _QWORD *v38; // r8
  _QWORD *v39; // rax
  char v40; // [rsp+60h] [rbp+8h] BYREF
  struct CCompositionBuffer *v41; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  v4 = *((_DWORD *)a2 + 12);
  *a3 = 0;
  if ( *((_DWORD *)this + 6) != 2 )
    goto LABEL_24;
  v8 = *((_QWORD *)this + 4);
  v9 = *((_QWORD *)this + 5);
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(v8 + 48))(v8 + 48) )
    goto LABEL_11;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v8 + 56, 0LL);
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(v8 + 48))(v8 + 48) )
  {
    CPushLock::ReleaseLock((CPushLock *)(v8 + 48));
    goto LABEL_11;
  }
  if ( !*(_DWORD *)(v8 + 120) || (v10 = *(_QWORD **)(v8 + 104), v10 == (_QWORD *)(v8 + 104)) )
  {
LABEL_67:
    v11 = 0;
  }
  else
  {
    while ( *(v10 - 1) != v9 )
    {
      v10 = (_QWORD *)*v10;
      if ( v10 == (_QWORD *)(v8 + 104) )
        goto LABEL_67;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD *))(*(v10 - 3) + 176LL))(v10 - 3);
  }
  v12 = v8 + 56;
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v8 + 64) )
  {
    *(_QWORD *)(v8 + 64) = 0LL;
    ExReleasePushLockExclusiveEx(v12, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v12, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v11 != 2 )
  {
LABEL_11:
    v13 = *((_QWORD *)this + 4);
    v14 = 1;
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v13 + 48))(v13 + 48) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v13 + 56, 0LL);
      if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v13 + 48))(v13 + 48) )
      {
        v15 = *(_DWORD *)(v13 + 124);
        v14 = 0;
        if ( !v15 || v4 > v15 || v15 - v4 > 4 || *(_QWORD *)(v13 + 136) )
          v14 = 1;
        v16 = v13 + 56;
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v13 + 64) )
        {
          *(_QWORD *)(v13 + 64) = 0LL;
          ExReleasePushLockExclusiveEx(v16, 0LL);
        }
        else
        {
          ExReleasePushLockSharedEx(v16, 0LL);
        }
        KeLeaveCriticalRegion();
        goto LABEL_20;
      }
      CPushLock::ReleaseLock((CPushLock *)(v13 + 48));
    }
    v3 = -1073741816;
LABEL_20:
    if ( v3 >= 0 && (v14 || !*((_DWORD *)this + 28)) )
      *a3 = 1;
  }
LABEL_24:
  if ( v3 >= 0 && *a3 )
  {
    *((_DWORD *)this + 6) = 3;
    CFlipToken::TraceStateChanged(this);
    v17 = *((_QWORD *)this + 4);
    v40 = 0;
    v3 = CPushLock::AcquireLockExclusive((CPushLock *)(v17 + 48));
    if ( v3 >= 0 )
    {
      v18 = 0LL;
      v3 = -1073741275;
      if ( *(_DWORD *)(v17 + 120) )
      {
        v19 = *(_QWORD **)(v17 + 104);
        if ( v19 != (_QWORD *)(v17 + 104) )
        {
          while ( *(v19 - 1) != *((_QWORD *)this + 5) )
          {
            v19 = (_QWORD *)*v19;
            if ( v19 == (_QWORD *)(v17 + 104) )
              goto LABEL_31;
          }
          v18 = v19 - 3;
          v3 = 0;
        }
      }
LABEL_31:
      if ( v3 >= 0 )
      {
        v3 = (*(__int64 (__fastcall **)(_QWORD *, CFlipToken *, char *))(*v18 + 120LL))(v18, this, &v40);
        if ( v3 >= 0 )
        {
          if ( v40 )
          {
            v20 = (_QWORD *)v18[3];
            while ( v20 != (_QWORD *)(v17 + 104) )
            {
              v36 = (_QWORD *)*v20;
              v37 = (void (__fastcall ***)(_QWORD, __int64))(v20 - 3);
              v38 = v20;
              v20 = v36;
              if ( (_QWORD *)v36[1] != v38 || (v39 = (_QWORD *)v38[1], (_QWORD *)*v39 != v38) )
                __fastfail(3u);
              *v39 = v36;
              v36[1] = v39;
              --*(_DWORD *)(v17 + 120);
              if ( v37 )
                (**v37)(v37, 1LL);
            }
          }
        }
      }
      v21 = v17 + 56;
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v17 + 64) )
      {
        *(_QWORD *)(v17 + 64) = 0LL;
        ExReleasePushLockExclusiveEx(v21, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v21, 0LL);
      }
      KeLeaveCriticalRegion();
    }
    if ( v3 >= 0 )
    {
      *((_BYTE *)this + 88) = v40;
      v22 = (*(__int64 (__fastcall **)(CFlipToken *, _QWORD))(*(_QWORD *)this + 136LL))(
              this,
              *((unsigned int *)a2 + 12));
      if ( v22 )
      {
        v23 = *((_QWORD *)this + 4);
        if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v23 + 48)) >= 0 )
        {
          *(_DWORD *)(v23 + 124) = v22;
          v24 = v23 + 56;
          if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v23 + 64) )
          {
            *(_QWORD *)(v23 + 64) = 0LL;
            ExReleasePushLockExclusiveEx(v24, 0LL);
          }
          else
          {
            ExReleasePushLockSharedEx(v24, 0LL);
          }
          KeLeaveCriticalRegion();
        }
      }
      if ( !*((_BYTE *)this + 48) )
      {
        v25 = *((_QWORD *)this + 12);
        if ( v25 > 1 )
        {
          v26 = v25 - 1;
          v27 = (_QWORD *)*((_QWORD *)this + 4);
          v28 = *((_QWORD *)this + 5);
          if ( (int)CPushLock::AcquireLockShared((CPushLock *)(v27 + 6)) >= 0 )
          {
            v41 = 0LL;
            if ( (int)CCompositionSurface::FindBuffer((CCompositionSurface *)(v27 + 5), v28, &v41) >= 0 )
              (*(void (__fastcall **)(struct CCompositionBuffer *, unsigned __int64, _QWORD))(*(_QWORD *)v41 + 104LL))(
                v41,
                v26,
                0LL);
            v29 = v27 + 7;
            if ( KeGetCurrentThread() == (struct _KTHREAD *)v27[8] )
            {
              v27[8] = 0LL;
              ExReleasePushLockExclusiveEx(v29, 0LL);
            }
            else
            {
              ExReleasePushLockSharedEx(v29, 0LL);
            }
            KeLeaveCriticalRegion();
          }
        }
      }
      v30 = *((_BYTE *)this + 89) == 0;
      *((_QWORD *)this + 12) = 0LL;
      if ( v30 )
      {
        v31 = *((_QWORD *)this + 5);
        *((_BYTE *)this + 89) = 1;
        v32 = *((_QWORD *)this + 4);
        if ( (int)CPushLock::AcquireLockShared((CPushLock *)(v32 + 48)) >= 0 )
        {
          if ( *(_DWORD *)(v32 + 120) )
          {
            v33 = *(_QWORD **)(v32 + 104);
            if ( v33 != (_QWORD *)(v32 + 104) )
            {
              while ( *(v33 - 1) != v31 )
              {
                v33 = (_QWORD *)*v33;
                if ( v33 == (_QWORD *)(v32 + 104) )
                  goto LABEL_58;
              }
              (*(void (__fastcall **)(_QWORD *))(*(v33 - 3) + 112LL))(v33 - 3);
            }
          }
LABEL_58:
          v34 = v32 + 56;
          if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v32 + 64) )
          {
            *(_QWORD *)(v32 + 64) = 0LL;
            ExReleasePushLockExclusiveEx(v34, 0LL);
          }
          else
          {
            ExReleasePushLockSharedEx(v34, 0LL);
          }
          KeLeaveCriticalRegion();
        }
      }
    }
  }
  else
  {
    ++*((_DWORD *)this + 7);
  }
  return (unsigned int)v3;
}
