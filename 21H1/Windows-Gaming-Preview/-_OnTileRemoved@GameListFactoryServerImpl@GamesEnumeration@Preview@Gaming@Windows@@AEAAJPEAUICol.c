/*
 * XREFs of ?_OnTileRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18001C530
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InvokeDelegates@V_lambda_ce9d1159d0cf1e81b765b7b316455b47_@@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_ce9d1159d0cf1e81b765b7b316455b47_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18001FB18 (--$InvokeDelegates@V_lambda_ce9d1159d0cf1e81b765b7b316455b47_@@UIGameListChangedEventHandler@Gam.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800267A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnTileRemoved(
        RTL_SRWLOCK *this,
        struct WindowsInternal::Shell::UnifiedTile::ICollectionTile *a2)
{
  int v4; // eax
  int v5; // edi
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  _DWORD *Ptr; // rbx
  signed __int32 v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  HSTRING v15[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  HSTRING string; // [rsp+68h] [rbp+38h] BYREF
  __int64 v18; // [rsp+70h] [rbp+40h] BYREF
  __int64 v19; // [rsp+78h] [rbp+48h] BYREF

  if ( !a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x175,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v19 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::ICollectionTile *, __int64 *))(*(_QWORD *)a2 + 64LL))(
         a2,
         &v19);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v18 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 48LL))(v19, &v18);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v6);
      goto LABEL_20;
    }
    string = 0LL;
    v7 = v18;
    WindowsDeleteString(0LL);
    string = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v7 + 56LL))(v7, &string);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v15[0] = string;
      v5 = 0;
      Ptr = 0LL;
      AcquireSRWLockExclusive(this + 14);
      if ( this[13].Ptr )
      {
        Ptr = this[13].Ptr;
        do
          v12 = Ptr[3];
        while ( v12 != 0x7FFFFFFF && v12 != _InterlockedCompareExchange(Ptr + 3, v12 + 1, v12) );
      }
      if ( this != (RTL_SRWLOCK *)-112LL )
        ReleaseSRWLockExclusive(this + 14);
      if ( !Ptr )
        goto LABEL_19;
      v5 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_ce9d1159d0cf1e81b765b7b316455b47_,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>(
             v15,
             Ptr,
             &this[13]);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(Ptr);
      if ( v5 >= 0 )
        goto LABEL_19;
      v9 = (unsigned int)v5;
      v10 = 384LL;
    }
    else
    {
      v9 = (unsigned int)v8;
      v10 = 382LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)v9);
LABEL_19:
    WindowsDeleteString(string);
    string = 0LL;
LABEL_20:
    v13 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x178,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
    (const char *)(unsigned int)v4);
LABEL_22:
  v14 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)v5;
}
