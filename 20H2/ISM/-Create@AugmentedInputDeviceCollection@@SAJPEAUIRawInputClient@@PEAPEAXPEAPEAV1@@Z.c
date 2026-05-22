/*
 * XREFs of ?Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x18002297C
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x1800207B8 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Initialize@AugmentedInputDeviceCollection@@IEAAJPEAPEAX@Z @ 0x180022A28 (-Initialize@AugmentedInputDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ??0AugmentedInputDeviceCollection@@IEAA@PEAUIRawInputClient@@@Z @ 0x180024B08 (--0AugmentedInputDeviceCollection@@IEAA@PEAUIRawInputClient@@@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x1800283FC (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R?$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z @ 0x18008F01C (--R-$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AugmentedInputDeviceCollection::Create(
        struct IRawInputClient *a1,
        void **a2,
        struct AugmentedInputDeviceCollection **a3)
{
  AugmentedInputDeviceCollection *v6; // rbx
  AugmentedInputDeviceCollection *v7; // rax
  AugmentedInputDeviceCollection *v8; // rsi
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = 0LL;
  if ( !a1 || !a2 || !a3 )
  {
    v11 = -2147024809;
    v13 = 32LL;
    goto LABEL_16;
  }
  v7 = (AugmentedInputDeviceCollection *)RefCountedObject::operator new(0xAE0uLL);
  if ( v7 )
    v8 = AugmentedInputDeviceCollection::AugmentedInputDeviceCollection(v7, a1);
  else
    v8 = 0LL;
  v6 = v8;
  if ( !v8 )
  {
    v11 = -2147024882;
    v13 = 36LL;
LABEL_16:
    v14 = v11;
    goto LABEL_17;
  }
  v9 = AugmentedInputDeviceCollection::Initialize(v8, a2);
  v11 = v9;
  if ( v9 >= 0 )
  {
    v6 = 0LL;
    *a3 = v8;
    v11 = 0;
    goto LABEL_9;
  }
  v14 = (unsigned int)v9;
  v13 = 38LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
    (const char *)v14,
    v15);
LABEL_9:
  if ( v6 )
    std::default_delete<SpatialRimDeviceCollection>::operator()(v10, v6);
  return v11;
}
