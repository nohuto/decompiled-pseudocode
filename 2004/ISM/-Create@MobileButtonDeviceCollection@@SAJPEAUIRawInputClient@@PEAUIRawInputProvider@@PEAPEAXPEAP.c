/*
 * XREFs of ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180097938
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180020788 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x1800283CC (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R?$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z @ 0x18008F0BC (--R-$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z.c)
 *     ??0MobileButtonDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z @ 0x1800975C0 (--0MobileButtonDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z.c)
 *     ?Initialize@MobileButtonDeviceCollection@@IEAAJPEAPEAX@Z @ 0x180097C3C (-Initialize@MobileButtonDeviceCollection@@IEAAJPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MobileButtonDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct MobileButtonDeviceCollection **a4)
{
  __int64 v8; // rbx
  MobileButtonDeviceCollection *v9; // rax
  MobileButtonDeviceCollection *v10; // rsi
  unsigned int v11; // edi
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  unsigned __int64 v15; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = 0LL;
  if ( !a1 || !a3 || !a4 )
  {
    v11 = -2147024809;
    v12 = 38LL;
    goto LABEL_13;
  }
  v9 = (MobileButtonDeviceCollection *)RefCountedObject::operator new(0xB50uLL);
  if ( v9 )
    v10 = MobileButtonDeviceCollection::MobileButtonDeviceCollection(v9, a1, a2);
  else
    v10 = 0LL;
  v8 = (__int64)v10;
  if ( !v10 )
  {
    v11 = -2147024882;
    v12 = 42LL;
LABEL_13:
    v15 = v11;
    goto LABEL_14;
  }
  v13 = MobileButtonDeviceCollection::Initialize(v10, a3);
  v11 = v13;
  if ( v13 >= 0 )
  {
    v8 = 0LL;
    *a4 = v10;
    v11 = 0;
    goto LABEL_15;
  }
  v15 = (unsigned int)v13;
  v12 = 44LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
    (const char *)v15);
LABEL_15:
  if ( v8 )
    std::default_delete<SpatialRimDeviceCollection>::operator()(v14, v8);
  return v11;
}
