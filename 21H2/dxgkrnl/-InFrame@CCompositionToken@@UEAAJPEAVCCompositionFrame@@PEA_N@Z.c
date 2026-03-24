/*
 * XREFs of ?InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0016640
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EEBC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x1C00667A0 (-AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z.c)
 */

__int64 __fastcall CCompositionToken::InFrame(CCompositionToken *this, struct CCompositionFrame *a2, bool *a3)
{
  unsigned int v3; // edi
  bool *v4; // r15
  unsigned int (__fastcall *v7)(__int64, _QWORD); // rbx
  __int64 v8; // rax
  int v9; // r14d
  unsigned int v10; // r12d
  _QWORD *v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbp
  int v14; // ebx
  _QWORD *v15; // r15
  _QWORD *i; // rax
  _QWORD *v17; // rbp
  __int64 v18; // rcx
  __int64 v20; // rax
  __int64 v21; // [rsp+60h] [rbp+8h]

  v3 = 0;
  v4 = a3;
  if ( *((_DWORD *)this + 6) != 2 )
    return v3;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v20 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v20 + 24) = 2238LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v7 = *(unsigned int (__fastcall **)(__int64, _QWORD))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 48LL);
  v8 = (*(__int64 (__fastcall **)(struct CCompositionFrame *))(*(_QWORD *)a2 + 72LL))(a2);
  if ( v7(v8, *((_QWORD *)this + 10)) )
  {
    ++*((_DWORD *)this + 7);
    *v4 = 0;
    return v3;
  }
  *((_DWORD *)this + 6) = 3;
  v9 = 0;
  v10 = 0;
  if ( !*((_DWORD *)this + 18) )
    goto LABEL_33;
  do
  {
    v11 = (_QWORD *)(*((_QWORD *)this + 8) + 32LL * v10);
    v12 = v11[1];
    v21 = v11[3];
    if ( !v21 )
      goto LABEL_31;
    v13 = v11[2];
    v14 = 0;
    if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(v12 + 48))(v12 + 48) )
      goto LABEL_37;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v12 + 56, 0LL);
    *(_QWORD *)(v12 + 64) = KeGetCurrentThread();
    if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(v12 + 48))(v12 + 48) )
    {
      CPushLock::ReleaseLock((CPushLock *)(v12 + 48));
LABEL_37:
      v14 = -1073741816;
    }
    if ( v14 >= 0 )
    {
      v14 = -1073741275;
      v15 = 0LL;
      if ( *(_DWORD *)(v12 + 120) )
      {
        for ( i = *(_QWORD **)(v12 + 104); i != (_QWORD *)(v12 + 104); i = (_QWORD *)*i )
        {
          if ( *(i - 1) == v13 )
          {
            v15 = i - 3;
            v14 = 0;
            break;
          }
        }
      }
      if ( v14 >= 0 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v15 + 80LL))(v15) )
        {
          v17 = 0LL;
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v15 + 80LL))(v15) )
            v17 = v15;
          if ( *((_DWORD *)v17 + 87) == -1 )
            *((_DWORD *)v17 + 87) = 0;
          *((_DWORD *)v17 + 12) = 1;
          if ( *((_DWORD *)v17 + 64) )
          {
            CCompositionBuffer::AddScrollAsDirty(
              (CCompositionBuffer *)v17,
              (const struct ScrollOptimization *)(v17 + 32));
            *((_DWORD *)v17 + 64) = 0;
            *((_BYTE *)v17 + 42) = 1;
          }
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21) )
          {
            (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v17[31] + 48LL))(v17[31], v21, 2LL);
            *((_BYTE *)v17 + 42) = 1;
          }
        }
        else
        {
          v14 = -1073741811;
        }
      }
      v18 = v12 + 56;
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v12 + 64) )
      {
        *(_QWORD *)(v12 + 64) = 0LL;
        ExReleasePushLockExclusiveEx(v18, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v18, 0LL);
      }
      KeLeaveCriticalRegion();
    }
    if ( v9 >= 0 && v14 < 0 )
      v9 = v14;
LABEL_31:
    ++v10;
  }
  while ( v10 < *((_DWORD *)this + 18) );
  v4 = a3;
LABEL_33:
  v3 = v9;
  *v4 = 1;
  return v3;
}
