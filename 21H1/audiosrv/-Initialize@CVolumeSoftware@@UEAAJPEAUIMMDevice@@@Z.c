/*
 * XREFs of ?Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x1800C03E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x180060A10 (-Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z @ 0x180068AF0 (-GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?GetFormFactor@@YAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@@Z @ 0x1800BFE88 (-GetFormFactor@@YAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CVolumeSoftware::Initialize(
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 *this,
        struct IMMDevice *a2)
{
  int PolicyConfig; // ebx
  __int64 v5; // rax
  signed int LastError; // eax
  LPVOID pv; // [rsp+50h] [rbp+20h] BYREF
  LPVOID v9; // [rsp+60h] [rbp+30h] BYREF
  struct IPolicyConfig *v10; // [rsp+68h] [rbp+38h] BYREF

  GetFormFactor(a2, this + 74);
  v10 = 0LL;
  PolicyConfig = GetPolicyConfig(&v10);
  if ( PolicyConfig < 0 )
    goto LABEL_13;
  v9 = 0LL;
  PolicyConfig = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &v9);
  if ( PolicyConfig >= 0 )
  {
    pv = 0LL;
    PolicyConfig = (*(__int64 (__fastcall **)(struct IPolicyConfig *, LPVOID, _QWORD, LPVOID *))(*(_QWORD *)v10 + 32LL))(
                     v10,
                     v9,
                     0LL,
                     &pv);
    if ( PolicyConfig >= 0 )
      *((_DWORD *)this + 31) = *((unsigned __int16 *)pv + 1);
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  CoTaskMemFree(v9);
  v9 = 0LL;
  if ( PolicyConfig < 0 )
    goto LABEL_13;
  PolicyConfig = CVolumeControlBase::Initialize((void **)this, (struct IUnknown *)a2);
  if ( PolicyConfig < 0 )
    goto LABEL_13;
  if ( ThreadPool )
  {
    v5 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 *))(*(_QWORD *)ThreadPool + 8LL))(
           ThreadPool,
           CVolumeSoftware::OnPersistState,
           this);
    *((_QWORD *)this + 38) = v5;
    if ( !v5 )
    {
      LastError = GetLastError();
      PolicyConfig = LastError;
      if ( LastError > 0 )
        PolicyConfig = (unsigned __int16)LastError | 0x80070000;
    }
  }
  if ( PolicyConfig < 0 )
LABEL_13:
    AudSrvTraceLoggingErrorHelper("CVolumeSoftware::Initialize", 2127, PolicyConfig);
  if ( v10 )
    (*(void (__fastcall **)(struct IPolicyConfig *))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)PolicyConfig;
}
