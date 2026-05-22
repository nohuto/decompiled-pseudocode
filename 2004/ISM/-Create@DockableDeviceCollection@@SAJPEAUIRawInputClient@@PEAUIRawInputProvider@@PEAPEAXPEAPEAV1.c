/*
 * XREFs of ?Create@DockableDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800233DC
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180020788 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180022E48 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180024A18 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x1800283CC (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R?$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z @ 0x18008F0BC (--R-$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DockableDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct DockableDeviceCollection **a4)
{
  HIDDeviceCollection *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  HIDDeviceCollection *v11; // rdi
  HIDDeviceCollection *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // esi
  __int64 v17; // rdx
  unsigned int v18; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HIDDeviceCollection *v20; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 || !a2 || !a3 || !a4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)0x80070057LL,
      v18);
    return 2147942487LL;
  }
  v8 = (HIDDeviceCollection *)RefCountedObject::operator new(0xAC8uLL);
  v11 = v8;
  v20 = v8;
  if ( v8 )
  {
    HIDDeviceCollection::HIDDeviceCollection(v8, a1);
    *(_QWORD *)v11 = &DockableDeviceCollection::`vftable';
    *((_QWORD *)v11 + 3) = a2;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = v11;
  if ( !v11 )
  {
    v15 = -2147024882;
    v17 = 25LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)(unsigned int)v15,
      v18);
    goto LABEL_12;
  }
  LODWORD(v20) = 65554;
  v13 = HIDDeviceCollection::Initialize(v11, v9, (struct _RIM_USAGE_ANDPAGE *const)&v20, v10, 0x40u, a3);
  v15 = v13;
  if ( v13 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)(unsigned int)v13,
      v18);
  else
    v15 = 0;
  if ( v15 < 0 )
  {
    v17 = 27LL;
    goto LABEL_19;
  }
  v12 = 0LL;
  *a4 = v11;
  v15 = 0;
  v11 = 0LL;
LABEL_12:
  if ( v11 )
    std::default_delete<SpatialRimDeviceCollection>::operator()(v14, v12);
  return (unsigned int)v15;
}
