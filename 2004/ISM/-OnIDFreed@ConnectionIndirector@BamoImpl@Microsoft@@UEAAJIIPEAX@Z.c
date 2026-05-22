/*
 * XREFs of ?OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z @ 0x1800045E0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDisconnectedCallout@BamoProxy@Bamo@Microsoft@@AEAAJXZ @ 0x1800046E0 (-OnDisconnectedCallout@BamoProxy@Bamo@Microsoft@@AEAAJXZ.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800064C0 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000DCA0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnIDFreed(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rdi
  Microsoft::Bamo::BamoProxy *v7; // rdi
  int v8; // eax
  void (__fastcall ***v9)(_QWORD); // rax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int32 *v13; // [rsp+30h] [rbp+8h]

  v5 = (volatile signed __int32 *)((char *)this - 16);
  v13 = 0LL;
  v6 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v6 + 168) == GetCurrentThreadId() )
  {
    v5 = 0LL;
  }
  else
  {
    v13 = v5;
    _InterlockedIncrement(v5 + 2);
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 128));
    *(_DWORD *)(v6 + 168) = GetCurrentThreadId();
  }
  if ( a4 )
  {
    a4[29] = 1;
    v7 = (Microsoft::Bamo::BamoProxy *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a4 + 48LL))(a4);
    _InterlockedIncrement((volatile signed __int32 *)((*(__int64 (__fastcall **)(Microsoft::Bamo::BamoProxy *))(*(_QWORD *)v7 + 48LL))(v7)
                                                    + 8));
    v8 = Microsoft::Bamo::BamoProxy::OnDisconnectedCallout(v7);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2DE,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoProxy.inl",
        (const char *)(unsigned int)v8,
        v11);
      __debugbreak();
    }
    v9 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(Microsoft::Bamo::BamoProxy *))(*(_QWORD *)v7 + 48LL))(v7);
    (**v9)(v9);
  }
  if ( v5 )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(*((Microsoft::BamoImpl::BaseBamoConnectionImpl **)v13 + 4));
    Microsoft::BamoImpl::BamoImplObject::Release((Microsoft::BamoImpl::BamoImplObject *)v5);
  }
  return 0LL;
}
