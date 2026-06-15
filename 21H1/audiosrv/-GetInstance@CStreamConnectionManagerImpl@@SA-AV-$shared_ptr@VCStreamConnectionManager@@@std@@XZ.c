/*
 * XREFs of ?GetInstance@CStreamConnectionManagerImpl@@SA?AV?$shared_ptr@VCStreamConnectionManager@@@std@@XZ @ 0x180061ABC
 * Callers:
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x180064080 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052DD0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180056710 (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj@VCStreamConnectionManagerImpl@@@std@@QEAA@XZ @ 0x180061C00 (--$-0$$V@-$_Ref_count_obj@VCStreamConnectionManagerImpl@@@std@@QEAA@XZ.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x180061D9C (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180069B20 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
std::_Ref_count_base **__fastcall CStreamConnectionManagerImpl::GetInstance(std::_Ref_count_base **a1)
{
  __int64 v2; // rdx
  std::_Ref_count_base *v3; // rsi
  LPVOID v4; // rax
  __int64 v5; // rdi
  CMonitorManager *v6; // rcx
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v8; // rbx
  std::_Ref_count_base *v9; // rcx
  signed __int32 v11; // eax
  std::_Ref_count_base *v12[2]; // [rsp+20h] [rbp-20h]

  AcquireSRWLockExclusive(&CStreamConnectionManagerImpl::s_instanceLock);
  *(_OWORD *)v12 = 0LL;
  v2 = *((_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf + 1);
  if ( *((_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf + 1) )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(v2 + 8);
      if ( !v11 )
        break;
      if ( v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v11 + 1, v11) )
      {
        *(_OWORD *)v12 = CStreamConnectionManagerImpl::s_weakSelf;
        break;
      }
    }
  }
  v3 = v12[0];
  if ( v12[0] )
  {
    v8 = v12[1];
  }
  else
  {
    v4 = operator new(0x20uLL);
    if ( v4 )
      v5 = std::_Ref_count_obj<CStreamConnectionManagerImpl>::_Ref_count_obj<CStreamConnectionManagerImpl>(v4);
    else
      v5 = 0LL;
    v6 = *(CMonitorManager **)(v5 + 24);
    if ( v6 && (int)CMonitorManager::Initialize(v6, 0x12u, 9uLL, &dword_18015D940) >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v3 = (std::_Ref_count_base *)(v5 + 16);
      v12[0] = (std::_Ref_count_base *)(v5 + 16);
      v7 = v12[1];
      v8 = (std::_Ref_count_base *)v5;
      v12[1] = (std::_Ref_count_base *)v5;
      if ( v7 )
        std::_Ref_count_base::_Decref(v7);
    }
    else
    {
      v8 = v12[1];
    }
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v8 + 3);
      v8 = v12[1];
      v3 = v12[0];
    }
    *(_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf = v3;
    v9 = (std::_Ref_count_base *)*((_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf + 1);
    *((_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf + 1) = v8;
    if ( v9 )
      std::_Ref_count_base::_Decwref(v9);
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  }
  *a1 = v3;
  a1[1] = v8;
  ReleaseSRWLockExclusive(&CStreamConnectionManagerImpl::s_instanceLock);
  return a1;
}
