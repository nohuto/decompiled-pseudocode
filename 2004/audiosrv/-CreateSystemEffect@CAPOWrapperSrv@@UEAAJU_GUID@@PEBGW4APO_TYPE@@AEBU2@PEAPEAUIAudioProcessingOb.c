/*
 * XREFs of ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x18012F0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180058274 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800BD27C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x1801307E4 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 */

__int64 __fastcall CAPOWrapperSrv::CreateSystemEffect(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 *a6)
{
  unsigned int v9; // r12d
  int v10; // eax
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct IUnknown **); // rbx
  int v12; // eax
  __int64 v13; // rcx
  char *v15; // [rsp+28h] [rbp-81h]
  struct IUnknown *v16; // [rsp+80h] [rbp-29h] BYREF
  __int64 v17; // [rsp+88h] [rbp-21h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, struct IUnknown **); // [rsp+90h] [rbp-19h] BYREF
  __int128 v19; // [rsp+98h] [rbp-11h]
  __int128 v20; // [rsp+A8h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+4Fh]

  v19 = *a2;
  v20 = v19;
  EtwEventActivityIdControl(4LL, &v20);
  *a6 = 0LL;
  if ( a4 )
  {
    v18 = 0LL;
    v15 = (char *)&v18;
    v10 = CSystemEffectWrapper::Create(a5, 0LL, a3, a4);
    v11 = v18;
    v9 = v10;
    if ( v10 >= 0 )
    {
      v16 = 0LL;
      v12 = (**v18)(v18, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, &v16);
      v9 = v12;
      if ( v12 >= 0 )
      {
        v17 = 0LL;
        if ( v16
          && (((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v16->lpVtbl->QueryInterface)(
                v16,
                &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
                &v17),
              v17) )
        {
          if ( *(struct IUnknown **)(a1 + 88) != v16 )
            ATL::AtlComPtrAssign((struct IUnknown **)(a1 + 88), v16);
          v13 = (a1 + 8) & -(__int64)(a1 != 0);
          *a6 = v13;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
          v9 = 0;
        }
        else
        {
          v9 = -2147467262;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x34,
            (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
            (const char *)0x80004002LL);
        }
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x31,
          (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
          (const char *)(unsigned int)v12);
      }
      if ( v16 )
        ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->Release)(v16);
    }
    else
    {
      LODWORD(v15) = *(_DWORD *)a5;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x2E,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
        (const char *)(unsigned int)v10,
        (int)"APO CLSID {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        v15,
        *(unsigned __int16 *)(a5 + 4),
        *(unsigned __int16 *)(a5 + 6),
        *(unsigned __int8 *)(a5 + 8),
        *(unsigned __int8 *)(a5 + 9),
        *(unsigned __int8 *)(a5 + 10),
        *(unsigned __int8 *)(a5 + 11),
        *(unsigned __int8 *)(a5 + 12),
        *(unsigned __int8 *)(a5 + 13),
        *(unsigned __int8 *)(a5 + 14),
        *(unsigned __int8 *)(a5 + 15));
    }
    if ( v11 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **)))(*v11)[2])(v11);
  }
  else
  {
    v9 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
      (const char *)0x80070057LL);
  }
  EtwEventActivityIdControl(4LL, &v20);
  return v9;
}
