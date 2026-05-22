/*
 * XREFs of ?UpdateEdgyControllerServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180009200
 * Callers:
 *     ?SendMaterializeProxy@BamoInputSystemPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180007650 (-SendMaterializeProxy@BamoInputSystemPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAV.c)
 *     ?UpdateEdgyControllerServerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800F07C0 (-UpdateEdgyControllerServerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoS.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18003F3F8 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18006446C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateEdgyControllerServerRemoteCache(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // rbx
  _DWORD *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  int v11; // eax
  int v12; // eax
  void (__fastcall ***v13)(_QWORD); // rcx
  Microsoft::BamoImpl::BaseBamoPeerImpl *v14; // rcx
  void (__fastcall *v15)(_DWORD *, struct IMessageCallSendHost *, __int64); // rdi
  struct IMessageCallSendHost *SendHost; // rax
  int v17; // eax
  unsigned int *v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rbx
  struct IMessageCallSendHost *v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // eax
  int v24; // [rsp+20h] [rbp-48h]
  int v25; // [rsp+20h] [rbp-48h]
  _QWORD v26[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v28; // [rsp+70h] [rbp+8h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 56LL) )
  {
    v4 = *((_QWORD *)this + 8);
    if ( v4 )
    {
      v6 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 16LL);
      v7 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      v9 = *((_QWORD *)v7 + 4);
      v10 = v8;
      v11 = *(_DWORD *)(v8 + 36);
      if ( !v9 )
        goto LABEL_8;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v9 + 40) + 36LL) == v11 )
          break;
        v9 = *(_QWORD *)(v9 + 48);
      }
      while ( v9 );
      if ( !v9 )
      {
LABEL_8:
        v12 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64 *))(*(_QWORD *)v7 + 64LL))(v7, v10, &v28);
        if ( v12 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x20B,
            (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v12,
            v24);
          __debugbreak();
        }
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28);
        *(_QWORD *)(v9 + 24) = v7;
        v13 = *(void (__fastcall ****)(_QWORD))(v9 + 40);
        *(_QWORD *)(v9 + 40) = v10;
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
        if ( v13 )
          (**v13)(v13);
        *(_QWORD *)(v9 + 48) = *((_QWORD *)v7 + 4);
        *((_QWORD *)v7 + 4) = v9;
        *(_QWORD *)(v9 + 56) = *(_QWORD *)(v10 + 48);
        *(_QWORD *)(v10 + 48) = v9;
      }
      if ( !*(_BYTE *)(v9 + 32) )
      {
        v14 = *(Microsoft::BamoImpl::BaseBamoPeerImpl **)(v9 + 40);
        *(_BYTE *)(v9 + 32) = 1;
        v15 = *(void (__fastcall **)(_DWORD *, struct IMessageCallSendHost *, __int64))(*(_QWORD *)v7 + 56LL);
        SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(v14);
        v15(v7, SendHost, v9);
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9);
        if ( v17 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x13D,
            (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v17,
            v24);
          __debugbreak();
        }
      }
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 16));
      v5 = v7[6];
    }
    else
    {
      v5 = 0;
    }
    v18 = (unsigned int *)*((_QWORD *)a2 + 5);
    v19 = *((unsigned int *)this + 6);
    v20 = v18[9];
    v21 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v18);
    v26[0] = v20;
    v26[1] = v19;
    v22 = CoreUICallSend(v21, v26, 2LL, 43LL, 3, &unk_1801C019A, v5);
    if ( (int)(v22 + 0x80000000) >= 0 && v22 != -2018375675 )
    {
      v23 = wil::verify_hresult<long>(v22);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x9F01,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v23,
        v25);
      JUMPOUT(0x180009425LL);
    }
  }
}
