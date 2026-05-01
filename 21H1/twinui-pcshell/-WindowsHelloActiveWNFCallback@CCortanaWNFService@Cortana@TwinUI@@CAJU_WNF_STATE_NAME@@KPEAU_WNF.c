/*
 * XREFs of ?WindowsHelloActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1801EFAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?GetNotification@CCortanaWNFService@Cortana@TwinUI@@AEAAJPEAPEAVICortanaWNFNotification@23@@Z @ 0x1801EF16C (-GetNotification@CCortanaWNFService@Cortana@TwinUI@@AEAAJPEAPEAVICortanaWNFNotification@23@@Z.c)
 *     CortanaHelpers::SetWindowsHelloActive_0 @ 0x1801EF4A4 (CortanaHelpers--SetWindowsHelloActive_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TwinUI::Cortana::CCortanaWNFService::WindowsHelloActiveWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        TwinUI::Cortana::CCortanaWNFService *a4,
        struct TwinUI::Cortana::ICortanaWNFNotification *a5,
        unsigned int a6)
{
  int v7; // ebx
  __int64 v8; // rdx

  if ( a5 && a6 == 4 )
  {
    v7 = *(_DWORD *)a5;
    a5 = 0LL;
    if ( a4 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
      if ( (int)TwinUI::Cortana::CCortanaWNFService::GetNotification(a4, (struct IInspectable **)&a5) >= 0 )
      {
        if ( v7 )
          CortanaHelpers::SetWindowsHelloActive_0(v7 != 0);
        LOBYTE(v8) = v7 != 0;
        (*(void (__fastcall **)(struct TwinUI::Cortana::ICortanaWNFNotification *, __int64))(*(_QWORD *)a5 + 80LL))(
          a5,
          v8);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
  }
  return 0LL;
}
