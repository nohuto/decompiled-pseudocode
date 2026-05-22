/*
 * XREFs of ?Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800219BC
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x1800207B8 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ??0DockDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z @ 0x180021910 (--0DockDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z.c)
 *     ?Initialize@DockDeviceCollection@@IEAAJPEAPEAX@Z @ 0x180021AFC (-Initialize@DockDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x1800283FC (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R?$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z @ 0x18008F01C (--R-$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DockDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct DockDeviceCollection **a4)
{
  DockDeviceCollection *v8; // rax
  DockDeviceCollection *v9; // rdi
  DockDeviceCollection *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // esi
  __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-18h]
  int v18; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a1 || !a2 || !a3 || !a4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
      (const char *)0x80070057LL,
      v17);
    return 2147942487LL;
  }
  v8 = (DockDeviceCollection *)RefCountedObject::operator new(0xB50uLL);
  v18 = (int)v8;
  if ( v8 )
    v9 = DockDeviceCollection::DockDeviceCollection(v8, a1, a2);
  else
    v9 = 0LL;
  v10 = v9;
  if ( !v9 )
  {
    v13 = -2147024882;
    v15 = 2147942414LL;
    v16 = 25LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
      (const char *)v15,
      v18);
    goto LABEL_10;
  }
  v11 = DockDeviceCollection::Initialize(v9, a3);
  v13 = v11;
  if ( v11 < 0 )
  {
    v15 = (unsigned int)v11;
    v16 = 27LL;
    goto LABEL_16;
  }
  v10 = 0LL;
  *a4 = v9;
  v13 = 0;
  v9 = 0LL;
LABEL_10:
  if ( v9 )
    std::default_delete<SpatialRimDeviceCollection>::operator()(v12, v10);
  return v13;
}
