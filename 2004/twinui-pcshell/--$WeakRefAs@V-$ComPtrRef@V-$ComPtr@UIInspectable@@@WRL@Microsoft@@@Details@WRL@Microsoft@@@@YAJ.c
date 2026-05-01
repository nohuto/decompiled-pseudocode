/*
 * XREFs of ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18018B698
 * Callers:
 *     ?OnActivationEnd@CSplashScreen@@UEAAJJ_K@Z @ 0x18018BB50 (-OnActivationEnd@CSplashScreen@@UEAAJJ_K@Z.c)
 *     _lambda_afa766b05c8b85e15a4aa8e998e375f4_::operator() @ 0x1802595E4 (_lambda_afa766b05c8b85e15a4aa8e998e375f4_--operator().c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001340C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IInspectable>>>(
        Microsoft::WRL::WeakRef *a1,
        __int64 *a2)
{
  int v3; // ebx
  struct IInspectable *v4; // rbx
  HRESULT (__stdcall *QueryInterface)(IInspectable *, const IID *const, void **); // rsi
  struct IInspectable *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>(a1, &v7);
  if ( v3 >= 0 )
  {
    v4 = v7;
    if ( v7 )
    {
      QueryInterface = v7->lpVtbl->QueryInterface;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
      v3 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, __int64 *))QueryInterface)(
             v4,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             a2);
    }
    else
    {
      v3 = -2147467259;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  return (unsigned int)v3;
}
