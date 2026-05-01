/*
 * XREFs of ?RuntimeClassInitialize@CImmersiveWindowManager@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18015F110
 * Callers:
 *     ??$MakeAndInitialize@VCImmersiveWindowManager@@UIImmersiveWindowManager@@AEAPEAUIIAMServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveWindowManager@@AEAPEAUIIAMServiceProvider@@@Z @ 0x18015E23C (--$MakeAndInitialize@VCImmersiveWindowManager@@UIImmersiveWindowManager@@AEAPEAUIIAMServiceProvi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _Init_thread_footer @ 0x18008E588 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18008E5F0 (_Init_thread_header.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18014F674 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 */

__int64 __fastcall CImmersiveWindowManager::RuntimeClassInitialize(
        CImmersiveWindowManager *this,
        struct IIAMServiceProvider *a2)
{
  int v4; // esi
  struct IIAMServiceProvider *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1805CF758 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1805CF758);
    if ( dword_1805CF758 == -1 )
    {
      xmmword_1805CEB50 = IID_IApplicationActivationHistory;
      xmmword_1805CEB60 = 0LL;
      xmmword_1805CEB70 = (__int128)IID_IImmersiveWindowManager;
      xmmword_1805CEB80 = 0LL;
      Init_thread_footer(&dword_1805CF758);
    }
  }
  v4 = CImmersiveShellComponent::RegisterServiceInformation(
         (CImmersiveWindowManager *)((char *)this + 72),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)&xmmword_1805CEB50,
         2LL);
  if ( v4 >= 0 && *((struct IIAMServiceProvider **)this + 32) != a2 )
  {
    v6 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
    v6 = (struct IIAMServiceProvider *)*((_QWORD *)this + 32);
    *((_QWORD *)this + 32) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  }
  return (unsigned int)v4;
}
