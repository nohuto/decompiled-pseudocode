/*
 * XREFs of ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140009F20
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x14000A4C0 (-Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x14000AEE0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ??0CSystemEffectWrapper@@QEAA@XZ @ 0x14000AF5C (--0CSystemEffectWrapper@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14001CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x140047CE4 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOWrapperSrv::CreateSystemEffect(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rbx
  void *v10; // rdx
  CSystemEffectWrapper *v11; // rax
  CSystemEffectWrapper *v12; // rax
  __int64 v13; // r8
  int v14; // r15d
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rcx
  int v20; // [rsp+20h] [rbp-E8h]
  char *v21; // [rsp+28h] [rbp-E0h]
  __int64 (__fastcall ****v22)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-D8h]
  __int64 v23; // [rsp+80h] [rbp-88h] BYREF
  __int64 v24; // [rsp+88h] [rbp-80h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // [rsp+90h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+98h] [rbp-70h] BYREF
  __int128 v27; // [rsp+A0h] [rbp-68h]
  __int128 v28; // [rsp+B0h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  v27 = *a2;
  v28 = v27;
  EtwEventActivityIdControl(4LL, &v28);
  *a6 = 0LL;
  if ( !a4 )
  {
    v14 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
      (const char *)0x80070057LL,
      v20);
    goto LABEL_25;
  }
  v9 = 0LL;
  v25 = 0LL;
  if ( InitOnceExecuteOnce(&gRTHeapInitOnce, AERTMemoryInitOnce, 0LL, &Context) )
    v10 = Context;
  else
    v10 = 0LL;
  v11 = (CSystemEffectWrapper *)AERTAllocate(0xE8uLL, v10);
  if ( v11 && (v12 = CSystemEffectWrapper::CSystemEffectWrapper(v11)) != 0LL )
  {
    v22 = &v25;
    v14 = CSystemEffectWrapper::Init(v12, a5, v13, a3);
    v9 = v25;
    if ( v14 >= 0 )
    {
      v23 = 0LL;
      v15 = (**v25)(v25, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, &v23);
      v14 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x31,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
          (const char *)(unsigned int)v15,
          a4);
      }
      else
      {
        v24 = 0LL;
        if ( v23
          && ((**(void (__fastcall ***)(__int64, GUID *, __int64 *))v23)(
                v23,
                &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
                &v24),
              v24) )
        {
          v16 = *(_QWORD *)(a1 + 88);
          v17 = v23;
          if ( v16 != v23 )
          {
            if ( v23 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
              v16 = *(_QWORD *)(a1 + 88);
            }
            if ( v16 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
            *(_QWORD *)(a1 + 88) = v17;
          }
          if ( a1 )
            v18 = a1 + 8;
          else
            v18 = 0LL;
          *a6 = v18;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
          v14 = 0;
        }
        else
        {
          v14 = -2147467262;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x34,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
            (const char *)0x80004002LL,
            a4);
        }
        if ( v24 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      goto LABEL_23;
    }
  }
  else
  {
    v14 = -2147024882;
  }
  LODWORD(v22) = *(unsigned __int16 *)(a5 + 4);
  LODWORD(v21) = *(_DWORD *)a5;
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x2E,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
    (const char *)(unsigned int)v14,
    (int)"APO CLSID {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    v21,
    v22,
    *(unsigned __int16 *)(a5 + 6),
    *(unsigned __int8 *)(a5 + 8),
    *(unsigned __int8 *)(a5 + 9),
    *(unsigned __int8 *)(a5 + 10),
    *(unsigned __int8 *)(a5 + 11),
    *(unsigned __int8 *)(a5 + 12),
    *(unsigned __int8 *)(a5 + 13),
    *(unsigned __int8 *)(a5 + 14),
    *(unsigned __int8 *)(a5 + 15));
LABEL_23:
  if ( v9 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v9)[2])(v9);
LABEL_25:
  EtwEventActivityIdControl(4LL, &v28);
  return (unsigned int)v14;
}
