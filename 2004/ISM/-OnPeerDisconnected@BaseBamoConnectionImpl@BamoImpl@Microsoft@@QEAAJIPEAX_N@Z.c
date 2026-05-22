/*
 * XREFs of ?OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x1800025EC
 * Callers:
 *     ?OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z @ 0x180002590 (-OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z.c)
 * Callees:
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x1800026DC (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BE8C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerDisconnected(
        Microsoft::BamoImpl::BaseBamoPeerImpl **this,
        __int64 a2,
        Microsoft::BamoImpl::BaseBamoPeerImpl *a3,
        char a4)
{
  __int64 v7; // r8
  int v8; // ebp
  const char *v9; // r9
  __int64 v10; // rbx
  Microsoft::BamoImpl::BaseBamoPeerImpl *v11; // rcx
  Microsoft::BamoImpl::BaseBamoPeerImpl *i; // rax
  Microsoft::BamoImpl::BaseBamoPeerImpl *v13; // rdx
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(a3, 0);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v17,
    (struct Microsoft::BamoImpl::BaseBamoConnectionImpl *)this);
  LOBYTE(v7) = a4;
  v8 = (*((__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoPeerImpl **, Microsoft::BamoImpl::BaseBamoPeerImpl *, __int64))*this
        + 6))(
         this,
         a3,
         v7);
  v10 = v17;
  if ( v17 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v17 + 128));
    *(_DWORD *)(v10 + 168) = GetCurrentThreadId();
  }
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x55D,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v8,
      v15);
    __debugbreak();
  }
  v11 = 0LL;
  for ( i = this[12]; ; i = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)i + 7) )
  {
    if ( !i )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x5F1,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        v9);
      JUMPOUT(0x1800525FELL);
    }
    if ( i == a3 )
      break;
    v11 = i;
  }
  v13 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)a3 + 7);
  if ( v11 )
    *((_QWORD *)v11 + 7) = v13;
  else
    this[12] = v13;
  *((_QWORD *)a3 + 7) = 0LL;
  (**(void (__fastcall ***)(Microsoft::BamoImpl::BaseBamoPeerImpl *))a3)(a3);
  return 0LL;
}
