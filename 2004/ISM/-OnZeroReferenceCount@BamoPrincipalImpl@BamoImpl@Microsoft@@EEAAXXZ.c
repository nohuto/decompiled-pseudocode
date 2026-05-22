/*
 * XREFs of ?OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x18006F660
 * Callers:
 *     <none>
 * Callees:
 *     ??0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x180005040 (--0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?RemovePrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z @ 0x18006F8C8 (-RemovePrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::OnZeroReferenceCount(
        Microsoft::BamoImpl::BamoPrincipalImpl *this)
{
  __int64 v2; // rax
  struct Microsoft::BamoImpl::BaseBamoConnectionImpl *v3; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  __int64 v6; // r9
  _QWORD *v7; // rdx
  _QWORD *i; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 2);
  v3 = *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v2 + 32);
  if ( *((_QWORD *)v3 + 7) )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::RemovePrincipal(
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v2 + 32),
      *((_DWORD *)this + 6));
  v4 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    while ( 2 )
    {
      v5 = (_QWORD *)v4[6];
      v6 = v4[5];
      v7 = 0LL;
      for ( i = *(_QWORD **)(v6 + 48); i; i = (_QWORD *)i[7] )
      {
        if ( i == v4 )
        {
          v9 = v4[7];
          if ( v7 )
            v7[7] = v9;
          else
            *(_QWORD *)(v6 + 48) = v9;
          v4[7] = 0LL;
          break;
        }
        v7 = i;
      }
      if ( !i )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          257LL,
          (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPeer.inl",
          (const char *)v6);
        __debugbreak();
      }
      v10 = *((_QWORD *)this + 4);
      *(_BYTE *)(v10 + 32) = 0;
      *(_QWORD *)(v10 + 24) = 0LL;
      (***((void (__fastcall ****)(_QWORD, _QWORD *))this + 4))(*((_QWORD *)this + 4), v7);
      *((_QWORD *)this + 4) = v5;
      if ( v5 )
      {
        v4 = v5;
        continue;
      }
      break;
    }
  }
  Microsoft::BamoImpl::ConditionalDropAndReacquireLock::ConditionalDropAndReacquireLock(
    (Microsoft::BamoImpl::ConditionalDropAndReacquireLock *)&v14,
    v3);
  v11 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *))(*(_QWORD *)this + 48LL))(this);
  if ( v11 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, 1LL);
  v12 = v14;
  if ( v14 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v14 + 128));
    *(_DWORD *)(v12 + 168) = GetCurrentThreadId();
  }
}
