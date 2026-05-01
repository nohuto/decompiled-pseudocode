/*
 * XREFs of ?TransferWindowBetweenGloms@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@1PEBUTransferWindowOptions@@@Z @ 0x180153E60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TransferWindowBetweenGlomsWorker@CApplicationManager@@AEAAJAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@1PEBUTransferWindowOptions@@@Z @ 0x180153EBC (-TransferWindowBetweenGlomsWorker@CApplicationManager@@AEAAJAEBVCTaskWindowFinder@@PEAUIImmersiv.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::TransferWindowBetweenGloms(
        CApplicationManager *this,
        HWND a2,
        struct IImmersiveApplicationInternal *a3,
        struct IImmersiveApplicationInternal *a4,
        const struct TransferWindowOptions *a5)
{
  unsigned int v5; // ebx
  HWND v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h] BYREF
  char v9; // [rsp+40h] [rbp-18h]

  v7 = a2;
  v8 = 0LL;
  v9 = 0;
  v5 = CApplicationManager::TransferWindowBetweenGlomsWorker(
         (CApplicationManager *)((char *)this - 240),
         (const struct CTaskWindowFinder *)&v7,
         a3,
         a4,
         a5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return v5;
}
