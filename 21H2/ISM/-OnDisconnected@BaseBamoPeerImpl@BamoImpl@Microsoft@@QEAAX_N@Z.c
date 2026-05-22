/*
 * XREFs of ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x1800026CC
 * Callers:
 *     ?OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x1800025DC (-OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z.c)
 *     ?OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1800736E0 (-OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this,
        char a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rbx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 i; // rax
  __int64 v11; // rdx
  char v12; // al
  void (__fastcall **v13)(__int64); // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 6);
  *((_BYTE *)this + 45) = 1;
  if ( v4 )
  {
    while ( 2 )
    {
      v7 = *(_QWORD *)(v4 + 24);
      v8 = 0LL;
      v9 = *(_QWORD *)(v4 + 56);
      for ( i = *(_QWORD *)(v7 + 32); i; i = *(_QWORD *)(i + 48) )
      {
        if ( i == v4 )
        {
          v11 = *(_QWORD *)(v4 + 48);
          if ( v8 )
            *(_QWORD *)(v8 + 48) = v11;
          else
            *(_QWORD *)(v7 + 32) = v11;
          *(_QWORD *)(v4 + 48) = 0LL;
          break;
        }
        v8 = i;
      }
      if ( !i )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x243,
          (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
          a4);
        __debugbreak();
      }
      v12 = *(_BYTE *)(v4 + 32);
      *(_BYTE *)(v4 + 32) = 0;
      if ( v12 )
      {
        if ( !a2 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
      }
      v13 = *(void (__fastcall ***)(__int64))v4;
      *(_QWORD *)(v4 + 24) = 0LL;
      (*v13)(v4);
      *((_QWORD *)this + 6) = v9;
      if ( v9 )
      {
        v4 = v9;
        continue;
      }
      break;
    }
  }
}
