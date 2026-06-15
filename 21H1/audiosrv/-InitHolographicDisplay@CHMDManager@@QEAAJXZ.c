/*
 * XREFs of ?InitHolographicDisplay@CHMDManager@@QEAAJXZ @ 0x1800F7668
 * Callers:
 *     s_CreateHolographicDisplay @ 0x1800F78C0 (s_CreateHolographicDisplay.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800F023C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CHMDManager::InitHolographicDisplay(CHMDManager *this)
{
  int ActivationFactory; // eax
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v16 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Graphics.Holographic.HolographicDisplay",
    0x30u,
    0x2Fu);
  v13 = 0LL;
  ActivationFactory = RoGetActivationFactory(v16, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, &v13);
  v3 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v14 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 64LL))(v13, &v14);
    v3 = v4;
    if ( v4 >= 0 )
    {
      v6 = v14;
      if ( !v14 )
      {
        v3 = -2147418113;
        v7 = 2147549183LL;
        v5 = 42LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v5,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp",
          (const char *)v7);
LABEL_22:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
        goto LABEL_23;
      }
      v8 = *((_QWORD *)this + 1);
      *((_QWORD *)this + 1) = 0LL;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 88LL))(v6, (char *)this + 8);
      v3 = v4;
      if ( v4 >= 0 )
      {
        v9 = *((_QWORD *)this + 1);
        v10 = *((_QWORD *)this + 2);
        *((_QWORD *)this + 2) = 0LL;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 96LL))(v9, (char *)this + 16);
        v3 = v4;
        if ( v4 >= 0 )
        {
          v16 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(
            &hstringHeader,
            L"Windows.Perception.PerceptionTimestampHelper",
            0x2Du,
            0x2Cu);
          v11 = *(_QWORD *)this;
          *(_QWORD *)this = 0LL;
          if ( v11 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          v4 = RoGetActivationFactory(v16, &GUID_47a611d4_a9df_4edc_855d_f4d339d967ac, this);
          v3 = v4;
          if ( v4 >= 0 )
          {
            v3 = 0;
            goto LABEL_22;
          }
          v5 = 47LL;
        }
        else
        {
          v5 = 45LL;
        }
      }
      else
      {
        v5 = 44LL;
      }
    }
    else
    {
      v5 = 41LL;
    }
    v7 = (unsigned int)v4;
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x26,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_23:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
  return v3;
}
