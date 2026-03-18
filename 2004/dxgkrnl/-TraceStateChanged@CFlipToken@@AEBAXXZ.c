/*
 * XREFs of ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0010CC0
 * Callers:
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@CTokenBase@@@Z @ 0x1C000E4D0 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0010760 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 *     ?CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C0063E90 (-CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EDCC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipToken::TraceStateChanged(CFlipToken *this, __int64 a2)
{
  int v2; // ebp
  int v4; // r14d
  __int64 v5; // rbx
  unsigned __int8 v6; // bp
  __int64 v7; // r14
  _QWORD *i; // rax
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // r12
  BOOL v12; // r15d
  int v13; // ebx
  void (__fastcall *v14)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64, int); // rdi
  unsigned int v15; // eax
  __int64 v16; // rax
  unsigned int v17; // [rsp+A0h] [rbp+8h]
  __int64 v18; // [rsp+A8h] [rbp+10h]

  v2 = *((_DWORD *)this + 6);
  v4 = 0;
  if ( v2 == 3 )
  {
    v5 = *((_QWORD *)this + 4);
    v6 = 0;
    v7 = *((_QWORD *)this + 5);
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v5 + 48))(v5 + 48) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v5 + 56, 0LL);
      if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v5 + 48))(v5 + 48) )
      {
        if ( *(_DWORD *)(v5 + 120) )
        {
          for ( i = *(_QWORD **)(v5 + 104); i != (_QWORD *)(v5 + 104); i = (_QWORD *)*i )
          {
            if ( *(i - 1) == v7 )
            {
              v6 = (*(__int64 (__fastcall **)(_QWORD *))(*(i - 3) + 32LL))(i - 3);
              break;
            }
          }
        }
        v9 = v5 + 56;
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v5 + 64) )
        {
          *(_QWORD *)(v5 + 64) = 0LL;
          ExReleasePushLockExclusiveEx(v9, 0LL);
        }
        else
        {
          ExReleasePushLockSharedEx(v9, 0LL);
        }
        KeLeaveCriticalRegion();
      }
      else
      {
        CPushLock::ReleaseLock((CPushLock *)(v5 + 48));
      }
    }
    v4 = v6;
    v2 = *((_DWORD *)this + 6);
  }
  v10 = *((_QWORD *)this + 4);
  v11 = *((_QWORD *)this + 5);
  v12 = *((_BYTE *)this + 559) == 0;
  v18 = *(_QWORD *)(v10 + 24);
  v17 = *((_DWORD *)this + 26);
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v16 + 24) = 2238LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v13 = *((unsigned __int8 *)this + 556);
  v14 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64, int))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 120LL);
  v15 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 112LL))(this);
  v14(v10, v17, v15, *((_QWORD *)this + 12), v2, v13, v12, v18, v11, v4);
}
