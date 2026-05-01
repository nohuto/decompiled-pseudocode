/*
 * XREFs of ??$MakeAndInitialize@VAccessibleElement@@V1@AEAPEAUIWeakReference@WeakReference@@AEAW4AccessibleElementFlags@@AEAJ@Details@WRL@Microsoft@@YAJPEAPEAVAccessibleElement@@AEAPEAUIWeakReference@WeakReference@@AEAW4AccessibleElementFlags@@AEAJ@Z @ 0x1803923F4
 * Callers:
 *     ?AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags@@JAEBU_GUID@@PEAPEAX@Z @ 0x1803927C4 (-AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecuteCommandBase@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18013F044 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecu.c)
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x180155FF8 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 *     ?InternalRelease@?$ComPtr@VAccessibleElement@@@WRL@Microsoft@@IEAAKXZ @ 0x18036E8C8 (-InternalRelease@-$ComPtr@VAccessibleElement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0AccessibleElement@@QEAA@XZ @ 0x1803926F4 (--0AccessibleElement@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AccessibleElement,AccessibleElement,WeakReference::IWeakReference * &,enum AccessibleElementFlags &,long &>(
        __int64 *a1,
        __int64 *a2,
        int *a3,
        int *a4)
{
  unsigned int v6; // ebp
  AccessibleElement *v9; // rax
  AccessibleElement *v10; // rax
  int v11; // edi
  __int64 v12; // rsi
  __int64 v13; // rdx
  int v14; // ebx
  volatile int *v15; // rdx
  AccessibleElement *v17; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  *a1 = 0LL;
  v9 = (AccessibleElement *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v10 = AccessibleElement::AccessibleElement(v9);
    v11 = *a4;
    v12 = (__int64)v10;
    v13 = *a2;
    v14 = *a3;
    v17 = v10;
    Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)v10 + 14, v13);
    *(_DWORD *)(v12 + 120) = v14;
    *(_DWORD *)(v12 + 124) = v11;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLExecuteCommandBase>::InternalAddRef(
      v12,
      v15);
    *a1 = v12;
    Microsoft::WRL::ComPtr<AccessibleElement>::InternalRelease((__int64 *)&v17);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
