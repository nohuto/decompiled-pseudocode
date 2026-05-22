/*
 * XREFs of ?OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1800736E0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x1800026CC (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000DA10 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?Free@BaseBamoConnection@Bamo@Microsoft@@AEAAXXZ @ 0x180072860 (-Free@BaseBamoConnection@Bamo@Microsoft@@AEAAXXZ.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnZeroReferenceCount(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 i; // rdi
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // r8
  const char *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  Microsoft::BamoImpl::BamoImplObject *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_DWORD *)this + 42) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      583LL,
      (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      a4);
    __debugbreak();
  }
  if ( *((_QWORD *)this + 11) )
  {
    for ( i = *((_QWORD *)this + 12); i; i = *((_QWORD *)this + 12) )
    {
      v6 = *((_QWORD *)this + 7);
      LOBYTE(a4) = 1;
      *((_QWORD *)this + 12) = *(_QWORD *)(i + 56);
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, const char *, __int64 (__fastcall *)(void *, __int64, __int64, Microsoft::BamoImpl::BamoProxyImpl *), _QWORD))(*(_QWORD *)v6 + 72LL))(
             v6,
             *(unsigned int *)(i + 36),
             0LL,
             a4,
             Microsoft::BamoImpl::BaseBamoConnectionImpl::FreeProxyAtShutdown,
             0LL);
      if ( v7 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          628LL,
          (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
          (const char *)(unsigned int)v7);
        JUMPOUT(0x180073829LL);
      }
      Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected((Microsoft::BamoImpl::BaseBamoPeerImpl *)i, 1, v8, v9);
      (**(void (__fastcall ***)(__int64))i)(i);
    }
    v10 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = *((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v12 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = 0LL;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v13 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = 0LL;
    if ( v14 )
      Microsoft::BamoImpl::BamoImplObject::Release(v14, a2, a3, a4);
  }
  else
  {
    Microsoft::Bamo::BaseBamoConnection::Free(*((Microsoft::Bamo::BaseBamoConnection **)this + 2));
  }
}
