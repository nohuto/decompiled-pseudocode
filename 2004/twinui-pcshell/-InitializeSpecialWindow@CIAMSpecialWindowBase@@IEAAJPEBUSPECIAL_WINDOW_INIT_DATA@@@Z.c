/*
 * XREFs of ?InitializeSpecialWindow@CIAMSpecialWindowBase@@IEAAJPEBUSPECIAL_WINDOW_INIT_DATA@@@Z @ 0x18015D68C
 * Callers:
 *     ??$MakeAndInitialize@VCIAMSpecialWindow@@V1@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAVCIAMSpecialWindow@@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Z @ 0x18015CE54 (--$MakeAndInitialize@VCIAMSpecialWindow@@V1@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Details@WRL@Micros.c)
 *     ?RuntimeClassInitialize@CFallbackWindow@@QEAAJXZ @ 0x18015DADC (-RuntimeClassInitialize@CFallbackWindow@@QEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180150574 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CIAMSpecialWindowBase::InitializeSpecialWindow(
        CIAMSpecialWindowBase *this,
        const struct SPECIAL_WINDOW_INIT_DATA *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v6; // rcx
  __int64 WindowInBand; // rax
  WNDCLASSEXW v9; // [rsp+70h] [rbp-58h] BYREF

  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 4);
  v3 = 0;
  v4 = *((_QWORD *)a2 + 1);
  v6 = *((_QWORD *)this + 4);
  if ( v6 != v4 )
  {
    if ( v4 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*((_QWORD *)a2 + 1));
      v6 = *((_QWORD *)this + 4);
    }
    *((_QWORD *)this + 4) = v4;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v9.cbSize = 80;
  memset_0(&v9.style, 0, 0x4CuLL);
  v9.style = 512;
  v9.lpfnWndProc = (WNDPROC)CIAMSpecialWindowBase::s_SpecialMsgWndProc;
  v9.lpszClassName = *(LPCWSTR *)a2;
  v9.hInstance = &_ImageBase;
  v9.cbWndExtra = 8;
  RegisterClassExW(&v9);
  WindowInBand = CreateWindowInBand(
                   136314880LL,
                   v9.lpszClassName,
                   0LL,
                   0x80000000LL,
                   0,
                   0,
                   0,
                   0,
                   0LL,
                   0LL,
                   &_ImageBase,
                   this,
                   *((_DWORD *)a2 + 4));
  *((_QWORD *)this + 2) = WindowInBand;
  if ( !WindowInBand )
    return (unsigned int)ResultFromKnownLastError();
  return v3;
}
