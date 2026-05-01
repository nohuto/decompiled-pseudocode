/*
 * XREFs of ??$MakeAndInitialize@VIamAccess@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVIamAccess@@@Z @ 0x1802284E0
 * Callers:
 *     ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowGroupingOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x18022A1F4 (-InitializePrivilegedOperations@-$PrivilegedOperationsServiceBase@VPrivilegedWindowGroupingOpera.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18000CED0 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B3E8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180146064 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18014D830 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18014D830.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<IamAccess,IamAccess,>(Microsoft::WRL::FtmBase **a1)
{
  Microsoft::WRL::FtmBase *v2; // rax
  Microsoft::WRL::FtmBase *v3; // rbx
  int LastError; // edi
  volatile int *v5; // rdx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL::FtmBase *v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (Microsoft::WRL::FtmBase *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>(v2);
    *((_QWORD *)v3 + 6) = 0LL;
    *(_QWORD *)v3 = &IamAccess::`vftable';
    *((_QWORD *)v3 + 5) = 0LL;
    v9 = v3;
    if ( (unsigned int)AcquireIAMKey() )
      LastError = 0;
    else
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x48,
                    (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                    v6);
    if ( LastError >= 0 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(
        (__int64)v3,
        v5);
      LastError = 0;
      *a1 = v3;
    }
    Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease((__int64 *)&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)LastError;
}
