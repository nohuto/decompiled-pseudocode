/*
 * XREFs of ?ConfirmDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x18004B490
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800491B4 (-SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800499F4 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 *     ?ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ @ 0x18011F710 (-ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x18004B664 (-ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006ABC0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006B59C (memset_0.c)
 *     memcpy_0 @ 0x180074B4F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::ConfirmDeviceFormat(
        CEndpointCharacteristics *this,
        const struct tWAVEFORMATEX *a2,
        struct _GUID *a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        int a5)
{
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // edi
  GUID *v13; // rax
  GUID *v14; // rbx
  int CanRenderFormat; // eax
  int v16; // ebx
  int v18; // [rsp+20h] [rbp-30h]
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  int v20[2]; // [rsp+38h] [rbp-18h] BYREF
  struct _GUID v21; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  if ( a4 != eKeywordDetectorConnector && !*((_DWORD *)this + 8) && !*((_BYTE *)this + 8734) )
  {
    v9 = *((_QWORD *)this + 2);
    v19 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v9 + 24LL))(
            v9,
            &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
            23LL);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x203A,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v10,
        (int)&v19);
    }
    else
    {
      v12 = a2->cbSize + 82;
      v13 = (GUID *)operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
      v14 = v13;
      *(_QWORD *)&v21.Data1 = v13;
      if ( v13 )
      {
        memset_0(v13, 0, v12);
        v14->Data1 = v12;
        v14[1] = GUID_73647561_0000_0010_8000_00aa00389b71;
        v14[3] = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
        if ( a2->wFormatTag == 0xFFFE )
        {
          v14[2] = *(GUID *)((char *)&a2[1].nSamplesPerSec + 2);
        }
        else
        {
          v14[2] = GUID_00000000_0000_0010_8000_00aa00389b71;
          v14[2].Data1 = a2->wFormatTag;
        }
        memcpy_0(&v14[4], a2, a2->cbSize + 18LL);
        *(_QWORD *)v20 = 0LL;
        if ( !(*(unsigned int (__fastcall **)(__int64, GUID *, _QWORD, _QWORD))(*(_QWORD *)v19 + 24LL))(
                v19,
                v14,
                v14->Data1,
                0LL) )
        {
          operator delete(v14, (const struct std::nothrow_t *)0x52);
          if ( v19 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          goto LABEL_11;
        }
        v11 = -2004287480;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x205E,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)0x88890008LL,
          (int)v20);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v20);
      }
      else
      {
        v11 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2046,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)0x8007000ELL,
          (int)&v19);
      }
      if ( v14 )
        operator delete(v14, (const struct std::nothrow_t *)0x52);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
    return v11;
  }
LABEL_11:
  v21 = *a3;
  CanRenderFormat = CEndpointCharacteristics::ConfirmDeviceCanRenderFormat(this, a2, &v21, a4, a5);
  v16 = CanRenderFormat;
  if ( CanRenderFormat == -2005139389 || CanRenderFormat <= -2005139360 && CanRenderFormat > -2005139365 )
    v16 = 0;
  if ( v16 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x206B,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v16,
    v18);
  return (unsigned int)v16;
}
