/*
 * XREFs of ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Z @ 0x180173F78
 * Callers:
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x180174D30 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 * Callees:
 *     ?RuntimeClassInitialize@CApplicationFrameWrapper@@QEAAJPEAUIApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Z @ 0x180044508 (-RuntimeClassInitialize@CApplicationFrameWrapper@@QEAAJPEAUIApplicationFrameService@@PEAUIApplic.c)
 *     ??0CApplicationFrameWrapper@@QEAA@XZ @ 0x180044660 (--0CApplicationFrameWrapper@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x180083FBC (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180140B30 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?Attach@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@QEAAXPEAVCApplicationFrameWrapper@@@Z @ 0x180174CF4 (-Attach@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@QEAAXPEAVCApplicationFrameWrapper@@@.c)
 *     ?Initialize@CApplicationFrameWrapper@@QEAAJPEBGK@Z @ 0x180175B80 (-Initialize@CApplicationFrameWrapper@@QEAAJPEBGK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameWrapper,CApplicationFrameWrapper,CApplicationFrameService *,IApplicationFrameManager *,IApplicationFrame *,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,unsigned long const &>(
        volatile signed __int64 **a1,
        _QWORD *a2,
        struct IApplicationFrameManager **a3,
        struct IApplicationFrame **a4,
        const unsigned __int16 **a5,
        unsigned int *a6)
{
  unsigned int v10; // edi
  CApplicationFrameWrapper *v11; // rax
  CApplicationFrameWrapper *v12; // rax
  unsigned int v13; // ebp
  const unsigned __int16 *v14; // r14
  struct IApplicationFrame *v15; // r9
  volatile signed __int64 *v16; // rbx
  int v17; // eax
  volatile int *v18; // rdx
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  CApplicationFrameWrapper *v22; // [rsp+60h] [rbp+8h] BYREF

  v10 = 0;
  *a1 = 0LL;
  v11 = (CApplicationFrameWrapper *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v12 = CApplicationFrameWrapper::CApplicationFrameWrapper(v11);
    v22 = 0LL;
    Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::Attach(&v22, v12);
    v13 = *a6;
    v14 = *a5;
    v15 = *a4;
    v16 = (volatile signed __int64 *)v22;
    v17 = CApplicationFrameWrapper::RuntimeClassInitialize(
            v22,
            (struct IApplicationFrameService *)((*a2 + 40LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*a2 >> 64)),
            *a3,
            v15);
    if ( v17 < 0 || (v17 = CApplicationFrameWrapper::Initialize((CApplicationFrameWrapper *)v16, v14, v13), v17 < 0) )
    {
      v10 = v17;
    }
    else
    {
      if ( v16 )
      {
        v19 = *((_QWORD *)v16 + 8);
        while ( v19 >= 0 )
        {
          if ( (_DWORD)v19 != 0x7FFFFFFF )
          {
            v20 = v19;
            v19 = _InterlockedCompareExchange64(v16 + 8, v19 + 1, v19);
            if ( v20 != v19 )
              continue;
          }
          goto LABEL_12;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
          (Microsoft::WRL::Details *)(2 * v19 + 16),
          v18);
LABEL_12:
        v16 = (volatile signed __int64 *)v22;
      }
      *a1 = v16;
    }
    Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease((__int64 *)&v22);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v10;
}
