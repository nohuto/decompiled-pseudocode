/*
 * XREFs of ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18001DE50
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18001C5C0 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AB54 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GetEndpointFormFactor @ 0x18005E6C0 (GetEndpointFormFactor.c)
 *     GetContainerId @ 0x18005EA08 (GetContainerId.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18006ADE0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18006AE48 (_Init_thread_header.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006CEBC (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ReconsiderSpatialOnComboEndpoints @ 0x1801227A0 (ReconsiderSpatialOnComboEndpoints.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialPolicy::OnPropertyChange(struct IMMDevice *a1, const struct _tagpropertykey *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int EndpointFormFactor; // esi
  __int64 v10; // rcx
  int ContainerId; // eax
  __int64 v12; // rax
  int v13; // eax
  int pdwType; // [rsp+20h] [rbp-58h]
  LPVOID pv; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+48h] [rbp-30h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp-28h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( dword_18019FE2C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18019FE2C);
    if ( dword_18019FE2C == -1 )
    {
      xmmword_18019F4B0 = (__int128)GUID_00000000_0000_0000_0000_000000000000;
      dword_18019F4C0 = 0;
      Init_thread_footer(&dword_18019FE2C);
    }
  }
  v4 = xmmword_18019F4B0 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( (_QWORD)xmmword_18019F4B0 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v4 = *((_QWORD *)&xmmword_18019F4B0 + 1) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v4 )
  {
    xmmword_18019F4B0 = PKEY_SpatialAudio_Signaling_Key;
    dword_18019F4C0 = 2;
  }
  if ( dword_18019E884 == -1 )
  {
    dword_18019E884 = 1;
    if ( !(unsigned __int8)IsGetDefaultSpatialRenderingModePresent()
      || (unsigned int)IsSpatialSpeakerProtectionCheckRequired() )
    {
      pcbData = 4;
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
        L"DisableSpatialOnComboEndpoints",
        0x18u,
        0LL,
        &dword_18019E884,
        &pcbData);
    }
  }
  if ( dword_18019E884 )
    return 0LL;
  v5 = *(_QWORD *)&a2->fmtid.Data1 - xmmword_18019F4B0;
  if ( *(_QWORD *)&a2->fmtid.Data1 == (_QWORD)xmmword_18019F4B0 )
    v5 = *(_QWORD *)a2->fmtid.Data4 - *((_QWORD *)&xmmword_18019F4B0 + 1);
  if ( v5 || a2->pid != dword_18019F4C0 )
    return 0LL;
  v16 = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, &v16);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x239,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v7,
      pdwType);
  }
  else
  {
    EndpointFormFactor = GetEndpointFormFactor(v16);
    v10 = EndpointFormFactor - 1;
    if ( (v10 & 0xFFFFFFFD) != 0 )
    {
      v8 = 0;
    }
    else
    {
      ContainerId = GetContainerId(v10, v16, v18);
      v8 = ContainerId;
      if ( ContainerId < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x243,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
          (const char *)(unsigned int)ContainerId,
          pdwType);
      }
      else
      {
        v12 = v18[0];
        if ( !v18[0] )
          v12 = v18[1] + 1LL;
        if ( v12 )
        {
          v8 = 0;
        }
        else
        {
          pv = 0LL;
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
            &pv,
            0LL);
          v13 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &pv);
          v8 = v13;
          if ( v13 >= 0 )
          {
            ReconsiderSpatialOnComboEndpoints(EndpointFormFactor, pv);
            v8 = 0;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x24C,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
              (const char *)(unsigned int)v13,
              pdwType);
          }
          if ( pv )
            CoTaskMemFree(pv);
        }
      }
    }
  }
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return v8;
}
