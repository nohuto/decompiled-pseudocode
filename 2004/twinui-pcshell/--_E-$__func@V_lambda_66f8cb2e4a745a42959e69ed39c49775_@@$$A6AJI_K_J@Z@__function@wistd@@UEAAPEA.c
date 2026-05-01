/*
 * XREFs of ??_E?$__func@V_lambda_66f8cb2e4a745a42959e69ed39c49775_@@$$A6AJI_K_J@Z@__function@wistd@@UEAAPEAXI@Z @ 0x180099130
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180137300 (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

char *__fastcall wistd::__function::__func<_lambda_66f8cb2e4a745a42959e69ed39c49775_,long (unsigned int,unsigned __int64,__int64)>::`vector deleting destructor'(
        char *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(a1 + 8);
  *(_QWORD *)a1 = &wistd::__function::__base<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *> *)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
