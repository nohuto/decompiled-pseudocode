/*
 * XREFs of ?VideoProcessorBlt@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIAEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@0II2@Z @ 0x1802408F8
 * Callers:
 *     ?VideoProcessorBlt@CRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x18019B880 (-VideoProcessorBlt@CRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBU.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025290 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?EnsureVideoProcessor@CD3DDevice@@AEAAJIIII@Z @ 0x18023F404 (-EnsureVideoProcessor@CD3DDevice@@AEAAJIIII@Z.c)
 */

__int64 __fastcall CD3DDevice::VideoProcessorBlt(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        unsigned int a11,
        unsigned int a12,
        __int64 a13)
{
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // edx
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v35; // [rsp+40h] [rbp-B1h] BYREF
  __int64 v36; // [rsp+48h] [rbp-A9h] BYREF
  __int64 v37; // [rsp+50h] [rbp-A1h] BYREF
  __int64 v38; // [rsp+58h] [rbp-99h]
  __int128 v39; // [rsp+60h] [rbp-91h] BYREF
  _DWORD v40[8]; // [rsp+70h] [rbp-81h] BYREF
  __int64 v41; // [rsp+90h] [rbp-61h]
  __int64 v42; // [rsp+C0h] [rbp-31h] BYREF
  unsigned int v43; // [rsp+C8h] [rbp-29h]
  unsigned int v44; // [rsp+CCh] [rbp-25h]
  __int128 v45; // [rsp+D0h] [rbp-21h] BYREF

  v35 = a7;
  v38 = a13;
  v37 = 0LL;
  v36 = 0LL;
  v45 = 0LL;
  v39 = 0LL;
  memset_0(v40, 0, 0x48uLL);
  v43 = a11;
  v44 = a12;
  v42 = 0LL;
  v17 = CD3DDevice::EnsureVideoProcessor((CD3DDevice *)a1, a5, a6, a11, a12);
  v19 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xA1Fu, 0LL);
    goto LABEL_23;
  }
  v20 = *(_QWORD *)(a1 + 1024);
  HIDWORD(v45) = a3;
  DWORD1(v45) = 1;
  v21 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int128 *, __int64 *))(*(_QWORD *)v20 + 64LL))(
          v20,
          a2,
          *(_QWORD *)(a1 + 1040),
          &v45,
          &v37);
  v19 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xA27u, 0LL);
    goto LABEL_23;
  }
  v23 = *(_QWORD *)(a1 + 1024);
  LODWORD(v39) = 1;
  v24 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int128 *, __int64 *))(*(_QWORD *)v23 + 72LL))(
          v23,
          a10,
          *(_QWORD *)(a1 + 1040),
          &v39,
          &v36);
  v19 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xA2Eu, 0LL);
    goto LABEL_23;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(a1 + 1032) + 240LL))(
    *(_QWORD *)(a1 + 1032),
    *(_QWORD *)(a1 + 1048),
    0LL,
    1LL,
    v35);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(a1 + 1032) + 248LL))(
    *(_QWORD *)(a1 + 1032),
    *(_QWORD *)(a1 + 1048),
    0LL,
    1LL,
    v38);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 1032) + 104LL))(
    *(_QWORD *)(a1 + 1032),
    *(_QWORD *)(a1 + 1048),
    1LL,
    &v42);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 1032) + 592LL))(
    *(_QWORD *)(a1 + 1032),
    *(_QWORD *)(a1 + 1048),
    0LL,
    a4);
  if ( a8 != 1 )
  {
    if ( (*(_BYTE *)(a1 + 988) & 0x40) == 0 )
    {
      v19 = -2003292287;
      MilInstrumentationCheckHR_MaybeFailFast(a8, 0LL, 0, -2003292287, 0xA4Du, 0LL);
      goto LABEL_23;
    }
    v26 = 0;
    switch ( a8 )
    {
      case 2u:
        v26 = 1;
        break;
      case 3u:
        v26 = 2;
        break;
      case 4u:
        v26 = 3;
        break;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int))(**(_QWORD **)(a1 + 1032) + 504LL))(
      *(_QWORD *)(a1 + 1032),
      *(_QWORD *)(a1 + 1048),
      0LL,
      1LL,
      v26);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 1032) + 296LL))(
    *(_QWORD *)(a1 + 1032),
    *(_QWORD *)(a1 + 1048),
    0LL,
    0LL);
  if ( a9 )
  {
    v27 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 1032);
    v35 = 0LL;
    v28 = (**v27)(v27, &GUID_c4e7374c_6243_4d1b_ae87_52b4f740e261, &v35);
    v19 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xA58u, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v35);
      goto LABEL_23;
    }
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int, __int64))(*(_QWORD *)v35 + 648LL))(
      v35,
      *(_QWORD *)(a1 + 1048),
      0LL,
      1LL,
      28,
      a9);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v35);
  }
  v30 = *(_QWORD *)(a1 + 1032);
  v41 = v37;
  v31 = *(_QWORD *)(a1 + 1048);
  v40[0] = 1;
  v32 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, _DWORD *))(*(_QWORD *)v30 + 424LL))(
          v30,
          v31,
          v36,
          0LL,
          1,
          v40);
  v19 = v32;
  if ( v32 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0xA68u, 0LL);
LABEL_23:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v36);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v37);
  return v19;
}
