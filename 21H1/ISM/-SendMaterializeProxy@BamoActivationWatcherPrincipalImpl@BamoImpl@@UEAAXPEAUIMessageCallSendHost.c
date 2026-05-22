/*
 * XREFs of ?SendMaterializeProxy@BamoActivationWatcherPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18000B170
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18003F3F8 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18006446C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

void __fastcall BamoImpl::BamoActivationWatcherPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoActivationWatcherPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // r12
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // r14d
  __int64 v11; // rbx
  _DWORD *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rbx
  int v16; // eax
  void (__fastcall ***v17)(_QWORD); // rcx
  Microsoft::BamoImpl::BaseBamoPeerImpl *v18; // rcx
  void (__fastcall *v19)(_DWORD *, struct IMessageCallSendHost *, __int64); // rbx
  struct IMessageCallSendHost *SendHost; // rax
  int v21; // eax
  unsigned int *v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rbx
  struct IMessageCallSendHost *v25; // rax
  unsigned int v26; // eax
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  unsigned int v30; // eax
  int v31; // [rsp+20h] [rbp-78h]
  int v32; // [rsp+20h] [rbp-78h]
  int v33; // [rsp+30h] [rbp-68h]
  int v34; // [rsp+30h] [rbp-68h]
  _QWORD v35[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v36[2]; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v37[2]; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v39; // [rsp+A0h] [rbp+8h] BYREF

  v3 = *((_QWORD *)a3 + 5);
  if ( *(_BYTE *)(v3 + 44) )
  {
    v7 = (__int64)a2 + 56;
    if ( !a2 )
      v7 = 72LL;
    *(_BYTE *)v7 = 1;
  }
  v33 = *((_DWORD *)this + 6);
  v35[0] = *(unsigned int *)(v3 + 36);
  v35[1] = *(unsigned int *)(v3 + 40);
  v8 = CoreUICallSend(a2, v35, 2LL, 74LL, 5, &unk_1801C019A, v33);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5ADF,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v31);
    __debugbreak();
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 56LL) )
  {
    v9 = *((_QWORD *)this + 5);
    if ( v9 )
    {
      v11 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL);
      v12 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      v14 = *((_QWORD *)v12 + 4);
      v15 = v13;
      if ( !v14 )
        goto LABEL_13;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v14 + 40) + 36LL) == *(_DWORD *)(v13 + 36) )
          break;
        v14 = *(_QWORD *)(v14 + 48);
      }
      while ( v14 );
      if ( !v14 )
      {
LABEL_13:
        v16 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64 *))(*(_QWORD *)v12 + 64LL))(v12, v13, &v39);
        if ( v16 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x20B,
            (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v16,
            v31);
          __debugbreak();
        }
        v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 32LL))(v39);
        *(_QWORD *)(v14 + 24) = v12;
        v17 = *(void (__fastcall ****)(_QWORD))(v14 + 40);
        *(_QWORD *)(v14 + 40) = v15;
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
        if ( v17 )
          (**v17)(v17);
        *(_QWORD *)(v14 + 48) = *((_QWORD *)v12 + 4);
        *((_QWORD *)v12 + 4) = v14;
        *(_QWORD *)(v14 + 56) = *(_QWORD *)(v15 + 48);
        *(_QWORD *)(v15 + 48) = v14;
      }
      if ( !*(_BYTE *)(v14 + 32) )
      {
        v18 = *(Microsoft::BamoImpl::BaseBamoPeerImpl **)(v14 + 40);
        *(_BYTE *)(v14 + 32) = 1;
        v19 = *(void (__fastcall **)(_DWORD *, struct IMessageCallSendHost *, __int64))(*(_QWORD *)v12 + 56LL);
        SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(v18);
        v19(v12, SendHost, v14);
        v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 40LL))(v14);
        if ( v21 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x13D,
            (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v21,
            v31);
          __debugbreak();
        }
      }
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 16));
      v10 = v12[6];
    }
    else
    {
      v10 = 0;
    }
    v22 = (unsigned int *)*((_QWORD *)a3 + 5);
    v23 = *((unsigned int *)this + 6);
    v24 = v22[9];
    v25 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v22);
    v36[0] = v24;
    LOWORD(v31) = 0;
    v36[1] = v23;
    v26 = CoreUICallSend(v25, v36, 2LL, 7LL, v31, &unk_1801C019A, v10);
    if ( (int)(v26 + 0x80000000) >= 0 && v26 != -2018375675 )
    {
      v30 = wil::verify_hresult<long>(v26);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x5B40,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v30,
        v31);
      __debugbreak();
    }
  }
  v27 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 32LL))(a3);
  if ( v27 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5AED,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v27,
      v31);
    __debugbreak();
  }
  if ( *(_BYTE *)(*((_QWORD *)a3 + 5) + 44LL) )
  {
    v28 = (__int64)a2 + 56;
    if ( !a2 )
      v28 = 72LL;
    *(_BYTE *)v28 = 1;
  }
  v34 = *((_DWORD *)this + 6);
  v37[0] = *(unsigned int *)(v3 + 36);
  v37[1] = *(unsigned int *)(v3 + 40);
  LOWORD(v31) = 55;
  v29 = CoreUICallSend(a2, v37, 2LL, 74LL, v31, &unk_1801C019A, v34);
  if ( v29 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5AFE,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v29,
      v32);
    JUMPOUT(0x18000B509LL);
  }
}
