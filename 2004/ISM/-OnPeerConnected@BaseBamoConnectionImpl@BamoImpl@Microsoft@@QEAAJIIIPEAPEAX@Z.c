/*
 * XREFs of ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x18000A030
 * Callers:
 *     ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x180009F10 (-OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000DCA0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18003F458 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnected(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        int a2,
        int a3,
        int a4,
        void **a5)
{
  unsigned int v9; // ebp
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v10; // rbx
  const char *v11; // r9
  int v12; // edi
  _QWORD *v13; // rsi
  void (__fastcall *v14)(_QWORD *, struct IMessageCallSendHost *, __int64); // rdi
  __int64 v15; // rax
  Microsoft::BamoImpl::BamoImplObject *v16; // rcx
  __int64 v17; // rcx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v18; // rbx
  const char *v19; // r9
  int v20; // r15d
  void (__fastcall *v21)(_QWORD *, __int64); // rbx
  __int64 v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // r15
  __int64 v25; // rbx
  int v26; // eax
  void (__fastcall ***v27)(_QWORD); // rcx
  struct IMessageCallSendHost *SendHost; // rax
  int v29; // eax
  int v31; // [rsp+20h] [rbp-68h]
  __int64 v32; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v33; // [rsp+38h] [rbp-50h]
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v34; // [rsp+40h] [rbp-48h]
  __int64 v35; // [rsp+48h] [rbp-40h] BYREF
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v36; // [rsp+50h] [rbp-38h]
  __int64 v37; // [rsp+58h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  char v39; // [rsp+90h] [rbp+8h] BYREF

  v9 = 0;
  *a5 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v10 = 0LL;
  v34 = 0LL;
  if ( !*((_DWORD *)this + 43) )
  {
    v10 = this;
    v34 = this;
    if ( *((_DWORD *)this + 42) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x679,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        v11);
      __debugbreak();
    }
    *((_DWORD *)this + 42) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  }
  v12 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, __int64 *))(*(_QWORD *)this + 32LL))(
          this,
          &v35);
  if ( v10 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v10 + 128));
    *((_DWORD *)v10 + 42) = GetCurrentThreadId();
  }
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4EF,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v12,
      v31);
    __debugbreak();
  }
  v13 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
  v14 = (void (__fastcall *)(_QWORD *, struct IMessageCallSendHost *, __int64))v13;
  v33 = v13;
  v15 = *((_QWORD *)this + 11);
  v16 = (Microsoft::BamoImpl::BamoImplObject *)v13[3];
  v13[3] = v15;
  if ( v15 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
    v14 = (void (__fastcall *)(_QWORD *, struct IMessageCallSendHost *, __int64))v33;
  }
  if ( v16 )
    Microsoft::BamoImpl::BamoImplObject::Release(v16);
  *((_DWORD *)v13 + 8) = a2;
  *((_DWORD *)v13 + 9) = a3;
  *((_DWORD *)v13 + 10) = a4;
  v17 = v32;
  v32 = 0LL;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  v18 = 0LL;
  v36 = 0LL;
  if ( !*((_DWORD *)this + 43) )
  {
    v18 = this;
    v36 = this;
    if ( *((_DWORD *)this + 42) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x679,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        v19);
      __debugbreak();
    }
    *((_DWORD *)this + 42) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  }
  v20 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, _QWORD *, char *, __int64 *))(*(_QWORD *)this + 40LL))(
          this,
          v13,
          &v39,
          &v32);
  if ( v18 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v18 + 128));
    *((_DWORD *)v18 + 42) = GetCurrentThreadId();
  }
  if ( v20 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4F9,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v20,
      v31);
    __debugbreak();
  }
  if ( v39 )
  {
    v21 = *(void (__fastcall **)(_QWORD *, __int64))(*v13 + 80LL);
    v22 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2));
    v21(v13, v22);
    if ( v32 )
    {
      v23 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 32LL))(v32);
      v24 = v23;
      v25 = v23[4];
      if ( !v25 )
        goto LABEL_25;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v25 + 40) + 36LL) == *((_DWORD *)v13 + 9) )
          break;
        v25 = *(_QWORD *)(v25 + 48);
      }
      while ( v25 );
      if ( !v25 )
      {
LABEL_25:
        v26 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *, __int64 *))(*v23 + 64LL))(v23, v13, &v37);
        if ( v26 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x20B,
            (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v26,
            v31);
          __debugbreak();
        }
        v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 32LL))(v37);
        *(_QWORD *)(v25 + 24) = v24;
        v27 = *(void (__fastcall ****)(_QWORD))(v25 + 40);
        *(_QWORD *)(v25 + 40) = v13;
        _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
        if ( v27 )
          (**v27)(v27);
        *(_QWORD *)(v25 + 48) = v24[4];
        v24[4] = v25;
        *(_QWORD *)(v25 + 56) = v13[6];
        v13[6] = v25;
      }
      if ( !*(_BYTE *)(v25 + 32) )
      {
        *(_BYTE *)(v25 + 32) = 1;
        v14 = *(void (__fastcall **)(_QWORD *, struct IMessageCallSendHost *, __int64))(*v24 + 56LL);
        SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*(Microsoft::BamoImpl::BaseBamoPeerImpl **)(v25 + 40));
        v14(v24, SendHost, v25);
        v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 40LL))(v25);
        if ( v29 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x13D,
            (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v29,
            v31);
LABEL_44:
          (**(void (__fastcall ***)(void (__fastcall *)(_QWORD *, struct IMessageCallSendHost *, __int64)))v14)(v14);
          return v9;
        }
      }
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 16));
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v13 + 48LL))(v13, *((unsigned int *)v24 + 6));
    }
    v13[7] = *((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = v13;
    v14 = 0LL;
    v33 = 0LL;
    *a5 = v13;
  }
  else
  {
    v9 = -2018375668;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x502,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)0x87B2080CLL,
      v31);
  }
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
  if ( v14 )
    goto LABEL_44;
  return v9;
}
