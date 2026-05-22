/*
 * XREFs of ?Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180099168
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x1800207B8 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x1800283FC (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R?$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z @ 0x18008F01C (--R-$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z.c)
 *     ??0ConsumerControlDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z @ 0x180099044 (--0ConsumerControlDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@@Z.c)
 *     ?Initialize@ConsumerControlDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800994D8 (-Initialize@ConsumerControlDeviceCollection@@IEAAJPEAPEAX@Z.c)
 */

__int64 __fastcall ConsumerControlDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct ConsumerControlDeviceCollection **a4)
{
  __int64 v8; // rbx
  ConsumerControlDeviceCollection *v9; // rax
  ConsumerControlDeviceCollection *v10; // rsi
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
    v12 = 30LL;
    goto LABEL_13;
  }
  v9 = (ConsumerControlDeviceCollection *)RefCountedObject::operator new(0xB08uLL);
  if ( v9 )
    v10 = ConsumerControlDeviceCollection::ConsumerControlDeviceCollection(v9, a1, a2);
  else
    v10 = 0LL;
  v8 = (__int64)v10;
  if ( !v10 )
  {
    v11 = -2147024882;
    v12 = 34LL;
LABEL_13:
    v15 = v11;
    goto LABEL_14;
  }
  v13 = ConsumerControlDeviceCollection::Initialize(v10, a3);
  v11 = v13;
  if ( v13 >= 0 )
  {
    v8 = 0LL;
    *a4 = v10;
    v11 = 0;
    goto LABEL_15;
  }
  v15 = (unsigned int)v13;
  v12 = 36LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
    (const char *)v15);
LABEL_15:
  if ( v8 )
    std::default_delete<SpatialRimDeviceCollection>::operator()(v14, v8);
  return v11;
}
