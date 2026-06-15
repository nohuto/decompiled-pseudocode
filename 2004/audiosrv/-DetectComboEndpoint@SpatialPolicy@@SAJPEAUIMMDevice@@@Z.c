/*
 * XREFs of ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x18005E95C
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180058F30 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AB54 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800388A8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180056810 (--2@YAPEAX_K@Z.c)
 *     GetEndpointFormFactor @ 0x18005E7C0 (GetEndpointFormFactor.c)
 *     GetContainerId @ 0x18005EB08 (GetContainerId.c)
 *     IsSpatialComboEndpointDeterminationDisabled @ 0x18005EB94 (IsSpatialComboEndpointDeterminationDisabled.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x180122150 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??_GARM_EVENT@@UEAAPEAXI@Z @ 0x180122210 (--_GARM_EVENT@@UEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall SpatialPolicy::DetectComboEndpoint(struct IMMDevice *a1)
{
  char v2; // di
  int ContainerId; // eax
  unsigned int v4; // ebx
  int EndpointFormFactor; // r14d
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v9; // rdx
  int v10; // eax
  LPVOID v11; // rsi
  __int64 v12; // rdx
  ARM_EVENT *v13; // rbx
  ARM_EVENT *v14; // rdi
  LPVOID pv; // [rsp+20h] [rbp-49h] BYREF
  __int64 v16; // [rsp+28h] [rbp-41h] BYREF
  int v17; // [rsp+30h] [rbp-39h]
  __int128 v18; // [rsp+38h] [rbp-31h]
  _QWORD v19[3]; // [rsp+48h] [rbp-21h] BYREF
  __int64 (__fastcall **v20)(); // [rsp+60h] [rbp-9h] BYREF
  __int128 v21; // [rsp+68h] [rbp-1h]
  __int64 (__fastcall ***v22)(); // [rsp+98h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v2 = 0;
  v17 = 0;
  if ( !(unsigned __int8)IsSpatialComboEndpointDeterminationDisabled() )
  {
    v16 = 0LL;
    ContainerId = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(
                    a1,
                    0LL,
                    &v16);
    v4 = ContainerId;
    if ( ContainerId < 0 )
    {
      v9 = 497LL;
    }
    else
    {
      EndpointFormFactor = GetEndpointFormFactor(v16);
      v6 = (unsigned int)(EndpointFormFactor - 1);
      if ( (v6 & 0xFFFFFFFD) != 0 )
      {
LABEL_8:
        v4 = 0;
LABEL_9:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
        return v4;
      }
      ContainerId = GetContainerId(v6, v16, v19);
      v4 = ContainerId;
      if ( ContainerId >= 0 )
      {
        v7 = v19[0];
        if ( !v19[0] )
          v7 = v19[1] + 1LL;
        if ( !v7 )
        {
          pv = 0LL;
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
            &pv,
            0LL);
          v10 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &pv);
          v4 = v10;
          if ( v10 >= 0 )
          {
            v11 = pv;
            v13 = (ARM_EVENT *)operator new(0x48uLL);
            v19[0] = v13;
            if ( v13 )
            {
              LODWORD(v18) = EndpointFormFactor;
              *((_QWORD *)&v18 + 1) = v11;
              v20 = off_180156F50;
              v21 = v18;
              v22 = &v20;
              v2 = 1;
              v17 = 1;
              *(_QWORD *)v13 = &ARM_EVENT::`vftable';
              *((_QWORD *)v13 + 8) = 0LL;
              std::function<void (void)>::operator=((char *)v13 + 8, &v20);
            }
            else
            {
              v13 = 0LL;
            }
            if ( (v2 & 1) != 0 )
              std::_Func_class<void,>::_Tidy((__int64)&v20, v12);
            v14 = v13;
            if ( v13 && PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v13, 0LL) )
            {
              pv = 0LL;
              v14 = 0LL;
            }
            v4 = 0;
            if ( v14 )
              ARM_EVENT::`scalar deleting destructor'(v14, 1u);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x204,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
              (const char *)(unsigned int)v10);
          }
          if ( pv )
            CoTaskMemFree(pv);
          goto LABEL_9;
        }
        goto LABEL_8;
      }
      v9 = 507LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)ContainerId);
    goto LABEL_9;
  }
  return 0LL;
}
