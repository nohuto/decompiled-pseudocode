/*
 * XREFs of ?add_Dismissed@CSplashScreen@@UEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180167EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180013444 (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180013B00 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007AEDC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18011C540 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x18015AB80 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$CreateGitHelper@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@2@PEAPEAU342@@Z @ 0x18016759C (--$CreateGitHelper@U-$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@P.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_639d6738ffd80580db82ce4ed229ae7f___ @ 0x18016769C (Windows--Internal--ComTaskPool--QueueTask__lambda_639d6738ffd80580db82ce4ed229ae7f___.c)
 *     _lambda_639d6738ffd80580db82ce4ed229ae7f_::_lambda_639d6738ffd80580db82ce4ed229ae7f_ @ 0x1801677AC (_lambda_639d6738ffd80580db82ce4ed229ae7f_--_lambda_639d6738ffd80580db82ce4ed229ae7f_.c)
 *     ?_CanSendDismissedEvent@CSplashScreen@@AEBA_NXZ @ 0x180167ED4 (-_CanSendDismissedEvent@CSplashScreen@@AEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSplashScreen::add_Dismissed(CSplashScreen *this, __int64 a2, struct IUnknown **a3)
{
  int v6; // edi
  bool CanSendDismissedEvent; // bl
  volatile int *v8; // rdx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  __int64 *v11; // rax
  __int64 v12; // rcx
  CSplashScreen *v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h] BYREF
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  __int64 v17; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v18; // [rsp+70h] [rbp+30h] BYREF
  struct IUnknown *v19; // [rsp+78h] [rbp+38h] BYREF
  __int64 v20; // [rsp+88h] [rbp+48h] BYREF

  if ( a2 )
  {
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    v6 = Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Windows::Internal::GitPtr>(
           a2,
           &v19);
    if ( v6 >= 0 )
    {
      if ( v19 )
        v6 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
               (__int64)this + 72,
               v19,
               *(void **)(*(_QWORD *)a2 + 24LL),
               a3);
      else
        v6 = -2147024809;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    if ( v6 >= 0 )
    {
      AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      CanSendDismissedEvent = CSplashScreen::_CanSendDismissedEvent(this);
      ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      if ( CanSendDismissedEvent )
      {
        v20 = 0LL;
        v18 = 2;
        v15 = a2;
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v20);
        v6 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
               &v20,
               (__int64)&GUID_7725b2a5_287d_5ed2_a789_2a6a2673c7fe,
               &v15,
               &v18);
        if ( v6 >= 0 )
        {
          v14 = this;
          if ( this )
          {
            v9 = *((_QWORD *)this + 8);
            while ( v9 >= 0 )
            {
              if ( (_DWORD)v9 != 0x7FFFFFFF )
              {
                v10 = v9;
                v9 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 8, v9 + 1, v9);
                if ( v10 != v9 )
                  continue;
              }
              goto LABEL_17;
            }
            Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
              (Microsoft::WRL::Details *)(2 * v9 + 16),
              v8);
          }
LABEL_17:
          v11 = lambda_639d6738ffd80580db82ce4ed229ae7f_::_lambda_639d6738ffd80580db82ce4ed229ae7f_(
                  &v16,
                  &v20,
                  (__int64 *)&v14);
          v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_639d6738ffd80580db82ce4ed229ae7f___(v12, v11);
          Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(&v17);
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v16);
          Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease((__int64 *)&v14);
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v20);
      }
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v6;
}
