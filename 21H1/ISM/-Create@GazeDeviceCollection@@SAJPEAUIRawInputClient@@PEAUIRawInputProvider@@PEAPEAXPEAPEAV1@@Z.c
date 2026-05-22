/*
 * XREFs of ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180022BBC
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180020728 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180022DE8 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x1800249B8 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002836C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R?$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z @ 0x18008F57C (--R-$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct GazeDeviceCollection **a4)
{
  HIDDeviceCollection *v8; // rbx
  HIDDeviceCollection *v9; // rax
  unsigned int v10; // edx
  unsigned int v11; // r9d
  HIDDeviceCollection *v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  int v15; // edi
  __int64 v17; // rdx
  unsigned int v18; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HIDDeviceCollection *v20; // [rsp+60h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( a1 && a3 && a4 )
  {
    v9 = (HIDDeviceCollection *)RefCountedObject::operator new(0xAC8uLL);
    v12 = v9;
    v20 = v9;
    if ( v9 )
    {
      HIDDeviceCollection::HIDDeviceCollection(v9, a1);
      *(_QWORD *)v12 = &GazeDeviceCollection::`vftable';
      *((_QWORD *)v12 + 3) = a2;
    }
    else
    {
      v12 = 0LL;
    }
    v8 = v12;
    if ( v12 )
    {
      LODWORD(v20) = 1179649;
      v13 = HIDDeviceCollection::Initialize(v12, v10, (struct _RIM_USAGE_ANDPAGE *const)&v20, v11, 0x40u, a3);
      v15 = v13;
      if ( v13 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x48,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
          (const char *)(unsigned int)v13,
          v18);
      else
        v15 = 0;
      if ( v15 >= 0 )
      {
        v8 = 0LL;
        *a4 = v12;
        v15 = 0;
        goto LABEL_11;
      }
      v17 = 38LL;
    }
    else
    {
      v15 = -2147024882;
      v17 = 36LL;
    }
  }
  else
  {
    v15 = -2147024809;
    v17 = 32LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
    (const char *)(unsigned int)v15,
    v18);
LABEL_11:
  if ( v8 )
    std::default_delete<SpatialRimDeviceCollection>::operator()(v14, v8);
  return (unsigned int)v15;
}
