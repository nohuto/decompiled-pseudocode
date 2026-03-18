/*
 * XREFs of ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0004090
 * Callers:
 *     <none>
 * Callees:
 *     ?SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z @ 0x1C0003F78 (-SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z.c)
 *     ?GetIndependentFlipState@CompositionSurfaceObject@@QEBA?AW4IndependentFlipState@@_K@Z @ 0x1C0004004 (-GetIndependentFlipState@CompositionSurfaceObject@@QEBA-AW4IndependentFlipState@@_K@Z.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0004618 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0004688 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?Feature_Servicing_2103c_29815990__private_IsEnabled@@YAHXZ @ 0x1C0026188 (-Feature_Servicing_2103c_29815990__private_IsEnabled@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipToken::InFrame(CFlipToken *this, struct CCompositionFrame *a2, bool *a3)
{
  unsigned int v3; // edi
  int v4; // ebp
  CompositionSurfaceObject *v7; // rcx
  bool v8; // zf
  CompositionSurfaceObject *v9; // rcx
  __int64 v10; // rbx
  unsigned __int8 v11; // bp
  __int64 v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // r12
  int v17; // r15d
  __int64 v18; // r13
  BOOL v19; // ebp
  __int64 v20; // rax
  int v21; // ebx
  void (__fastcall *v22)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64, int); // rdi
  unsigned int v23; // eax
  __int64 v24; // rdi
  _QWORD *v25; // rbx
  _QWORD *v26; // rax
  _QWORD *v27; // rbx
  _QWORD *v28; // rax
  void (__fastcall ***v29)(_QWORD, __int64); // rcx
  _QWORD *v30; // r8
  _QWORD *v31; // rdx
  __int64 v32; // rcx
  int v33; // edi
  __int64 v34; // rbx
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // r14
  __int64 v38; // rbx
  __int64 v39; // rdi
  _QWORD *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rdi
  _QWORD *v44; // rax
  __int64 v45; // rcx
  bool v47; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v48; // [rsp+64h] [rbp-44h]
  char v50; // [rsp+C0h] [rbp+18h] BYREF
  int v51; // [rsp+C8h] [rbp+20h] BYREF

  v3 = *((_DWORD *)a2 + 12);
  v4 = 0;
  *a3 = 0;
  if ( !(unsigned int)Feature_Servicing_2103c_29815990__private_IsEnabled() )
  {
    if ( *((_DWORD *)this + 6) != 2 )
      goto LABEL_15;
    if ( (unsigned int)CompositionSurfaceObject::GetIndependentFlipState(*((_QWORD *)this + 4), *((_QWORD *)this + 5)) == 2 )
      goto LABEL_15;
    v9 = (CompositionSurfaceObject *)*((_QWORD *)this + 4);
    v47 = 0;
    v4 = CompositionSurfaceObject::SyncIntervalSatisfied(v9, v3, &v47);
    if ( v4 < 0 )
      goto LABEL_15;
    v8 = !v47;
    goto LABEL_12;
  }
  if ( *((_DWORD *)this + 6) == 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 144LL))(this) )
    {
      *a3 = *((_BYTE *)this + 560);
      goto LABEL_15;
    }
    if ( (unsigned int)CompositionSurfaceObject::GetIndependentFlipState(*((_QWORD *)this + 4), *((_QWORD *)this + 5)) != 2 )
    {
      v7 = (CompositionSurfaceObject *)*((_QWORD *)this + 4);
      LOBYTE(v51) = 0;
      v4 = CompositionSurfaceObject::SyncIntervalSatisfied(v7, v3, (bool *)&v51);
      if ( v4 >= 0 )
      {
        v8 = (_BYTE)v51 == 0;
LABEL_12:
        if ( !v8 || !*((_DWORD *)this + 28) )
          *a3 = 1;
      }
    }
  }
LABEL_15:
  if ( v4 >= 0 && *a3 )
  {
    v10 = *((_QWORD *)this + 4);
    v11 = 0;
    v12 = *((_QWORD *)this + 5);
    *((_DWORD *)this + 6) = 3;
    if ( (int)CPushLock::AcquireLockShared((CPushLock *)(v10 + 48)) >= 0 )
    {
      if ( *(_DWORD *)(v10 + 120) )
      {
        v13 = *(_QWORD **)(v10 + 104);
        if ( v13 != (_QWORD *)(v10 + 104) )
        {
          while ( *(v13 - 1) != v12 )
          {
            v13 = (_QWORD *)*v13;
            if ( v13 == (_QWORD *)(v10 + 104) )
              goto LABEL_24;
          }
          v11 = (*(__int64 (__fastcall **)(_QWORD *))(*(v13 - 3) + 32LL))(v13 - 3);
        }
      }
LABEL_24:
      v14 = v10 + 56;
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v10 + 64) )
      {
        *(_QWORD *)(v10 + 64) = 0LL;
        ExReleasePushLockExclusiveEx(v14, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v14, 0LL);
      }
      KeLeaveCriticalRegion();
    }
    v15 = *((_QWORD *)this + 4);
    v16 = *((_QWORD *)this + 5);
    v17 = v11;
    v18 = *(_QWORD *)(v15 + 24);
    v19 = *((_BYTE *)this + 559) == 0;
    v51 = *((_DWORD *)this + 6);
    v48 = *((_DWORD *)this + 26);
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v20 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v20 + 24) = 2219LL;
      WdLogEvent5_WdAssertion(v20);
    }
    v21 = *((unsigned __int8 *)this + 556);
    v22 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64, int))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38033) + 120LL);
    v23 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 112LL))(this);
    v22(v15, v48, v23, *((_QWORD *)this + 12), v51, v21, v19, v18, v16, v17);
    v24 = *((_QWORD *)this + 4);
    v50 = 0;
    v4 = CPushLock::AcquireLockExclusive((CPushLock *)(v24 + 48));
    if ( v4 >= 0 )
    {
      v25 = 0LL;
      v4 = -1073741275;
      if ( *(_DWORD *)(v24 + 120) )
      {
        v26 = *(_QWORD **)(v24 + 104);
        if ( v26 != (_QWORD *)(v24 + 104) )
        {
          while ( *(v26 - 1) != *((_QWORD *)this + 5) )
          {
            v26 = (_QWORD *)*v26;
            if ( v26 == (_QWORD *)(v24 + 104) )
              goto LABEL_37;
          }
          v25 = v26 - 3;
          v4 = 0;
        }
      }
LABEL_37:
      if ( v4 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD *, CFlipToken *, char *))(*v25 + 120LL))(v25, this, &v50);
        if ( v4 >= 0 )
        {
          if ( v50 )
          {
            v27 = (_QWORD *)v25[3];
            while ( v27 != (_QWORD *)(v24 + 104) )
            {
              v28 = (_QWORD *)*v27;
              v29 = (void (__fastcall ***)(_QWORD, __int64))(v27 - 3);
              v30 = v27;
              v27 = v28;
              if ( (_QWORD *)v28[1] != v30 || (v31 = (_QWORD *)v30[1], (_QWORD *)*v31 != v30) )
                __fastfail(3u);
              *v31 = v28;
              v28[1] = v31;
              --*(_DWORD *)(v24 + 120);
              if ( v29 )
                (**v29)(v29, 1LL);
            }
          }
        }
      }
      v32 = v24 + 56;
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v24 + 64) )
      {
        *(_QWORD *)(v24 + 64) = 0LL;
        ExReleasePushLockExclusiveEx(v32, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v32, 0LL);
      }
      KeLeaveCriticalRegion();
    }
    if ( v4 >= 0 )
    {
      *((_BYTE *)this + 88) = v50;
      v33 = (*(__int64 (__fastcall **)(CFlipToken *, _QWORD))(*(_QWORD *)this + 136LL))(
              this,
              *((unsigned int *)a2 + 12));
      if ( v33 )
      {
        v34 = *((_QWORD *)this + 4);
        if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v34 + 48)) >= 0 )
        {
          *(_DWORD *)(v34 + 124) = v33;
          v35 = v34 + 56;
          if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v34 + 64) )
          {
            *(_QWORD *)(v34 + 64) = 0LL;
            ExReleasePushLockExclusiveEx(v35, 0LL);
          }
          else
          {
            ExReleasePushLockSharedEx(v35, 0LL);
          }
          KeLeaveCriticalRegion();
        }
      }
      if ( !*((_BYTE *)this + 48) )
      {
        v36 = *((_QWORD *)this + 12);
        if ( v36 > 1 )
        {
          v37 = v36 - 1;
          v38 = *((_QWORD *)this + 4);
          v39 = *((_QWORD *)this + 5);
          if ( (int)CPushLock::AcquireLockShared((CPushLock *)(v38 + 48)) >= 0 )
          {
            if ( *(_DWORD *)(v38 + 120) )
            {
              v40 = *(_QWORD **)(v38 + 104);
              if ( v40 != (_QWORD *)(v38 + 104) )
              {
                while ( *(v40 - 1) != v39 )
                {
                  v40 = (_QWORD *)*v40;
                  if ( v40 == (_QWORD *)(v38 + 104) )
                    goto LABEL_67;
                }
                (*(void (__fastcall **)(_QWORD *, unsigned __int64, _QWORD))(*(v40 - 3) + 104LL))(v40 - 3, v37, 0LL);
              }
            }
LABEL_67:
            v41 = v38 + 56;
            if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v38 + 64) )
            {
              *(_QWORD *)(v38 + 64) = 0LL;
              ExReleasePushLockExclusiveEx(v41, 0LL);
            }
            else
            {
              ExReleasePushLockSharedEx(v41, 0LL);
            }
            KeLeaveCriticalRegion();
          }
        }
      }
      v8 = *((_BYTE *)this + 89) == 0;
      *((_QWORD *)this + 12) = 0LL;
      if ( v8 )
      {
        v42 = *((_QWORD *)this + 4);
        v43 = *((_QWORD *)this + 5);
        *((_BYTE *)this + 89) = 1;
        if ( (int)CPushLock::AcquireLockShared((CPushLock *)(v42 + 48)) >= 0 )
        {
          if ( *(_DWORD *)(v42 + 120) )
          {
            v44 = *(_QWORD **)(v42 + 104);
            if ( v44 != (_QWORD *)(v42 + 104) )
            {
              while ( *(v44 - 1) != v43 )
              {
                v44 = (_QWORD *)*v44;
                if ( v44 == (_QWORD *)(v42 + 104) )
                  goto LABEL_79;
              }
              (*(void (__fastcall **)(_QWORD *))(*(v44 - 3) + 112LL))(v44 - 3);
            }
          }
LABEL_79:
          v45 = v42 + 56;
          if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v42 + 64) )
          {
            *(_QWORD *)(v42 + 64) = 0LL;
            ExReleasePushLockExclusiveEx(v45, 0LL);
          }
          else
          {
            ExReleasePushLockSharedEx(v45, 0LL);
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
  return (unsigned int)v4;
}
