/*
 * XREFs of ?CreateInputAttemptedDeliveryClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18000440C
 * Callers:
 *     ?Materialize_BamoInputAttemptedDeliveryClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x180004370 (-Materialize_BamoInputAttemptedDeliveryClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEA.c)
 * Callees:
 *     ?CreateInputAttemptedDeliveryClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputAttemptedDeliveryClientProxy@@@Z @ 0x1800044E4 (-CreateInputAttemptedDeliveryClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputAt.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoImpl::CreateInputAttemptedDeliveryClientProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  BamoImpl *v6; // rbx
  const char *v7; // r9
  int v8; // eax
  const char *v9; // r9
  wil::details::in1diag3 *v10; // rcx
  struct BamoInputAttemptedDeliveryClientProxy *v11; // rax
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct BamoInputAttemptedDeliveryClientProxy *v14; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)a3 = 0LL;
  v6 = 0LL;
  if ( !*((_DWORD *)this + 43) )
  {
    v6 = this;
    if ( *((_DWORD *)this + 42) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x679,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        v7);
      goto LABEL_10;
    }
    *((_DWORD *)v6 + 42) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 128));
  }
  v8 = CreateInputAttemptedDeliveryClientProxy(a2, &v14);
  v10 = retaddr;
  if ( v8 < 0 )
  {
LABEL_10:
    wil::details::in1diag3::FailFast_Hr(
      v10,
      (void *)0x4E0B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v12);
    goto LABEL_11;
  }
  if ( v6 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 128));
    *((_DWORD *)v6 + 42) = GetCurrentThreadId();
  }
  v11 = v14;
  *(_QWORD *)a3 = v14;
  if ( !v11 )
  {
LABEL_11:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4E10,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      v9);
    __debugbreak();
  }
}
