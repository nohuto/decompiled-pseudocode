/*
 * XREFs of ?CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x180219F48
 * Callers:
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x18025008C (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCVisual@@@Z @ 0x1800458B4 (--0-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCVisual@@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180049584 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@44@Z @ 0x1802185C8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x180264F84 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 */

void __fastcall CInteractionTracker::CheckTargetsForInteractionSource(
        struct ExpressionReferenceInfo *a1,
        struct CResource *a2,
        struct CResource *a3)
{
  __int64 v6; // rax
  CVisual *v7; // rbx
  struct CInteraction *InteractionInternal; // rax
  struct CInteraction *v9; // r10
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  CVisual *v14; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h] BYREF
  struct CResource *v16; // [rsp+50h] [rbp-20h] BYREF
  CVisual *v17; // [rsp+58h] [rbp-18h] BYREF
  struct CResource *v18; // [rsp+60h] [rbp-10h] BYREF
  int v19; // [rsp+98h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1803D0EF0 > 4
    && tlgKeywordOn((__int64)&dword_1803D0EF0, 2LL)
    && a2
    && a3
    && (unsigned int)(*(_DWORD *)a1 - 1) <= 1
    && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 195LL)
    && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a3 + 56LL))(a3, 88LL) )
  {
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::com_ptr_t<CVisual,wil::err_returncode_policy>(&v14, (__int64)a2);
    v6 = *(_QWORD *)a3;
    v18 = a3;
    (*(void (__fastcall **)(struct CResource *))(v6 + 8))(a3);
    v7 = v14;
    *((_BYTE *)v14 + 272) |= 8u;
    if ( InteractionSourceManager::TryGetActiveChainingHelper((struct CResource *)((char *)a3 + 200)) )
    {
      if ( CVisual::GetInteractionInternal(v7) )
      {
        InteractionInternal = CVisual::GetInteractionInternal(v7);
        if ( InteractionInternal == v9 && (unsigned int)dword_1803D0EF0 > 4 )
        {
          if ( tlgKeywordOn((__int64)&dword_1803D0EF0, 2LL) )
          {
            v19 = *(_DWORD *)a1;
            v15 = v13;
            v16 = a3;
            v17 = v7;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
              v10,
              byte_180371393,
              v11,
              v12,
              (__int64)&v19,
              (__int64)&v17,
              (__int64)&v16,
              (__int64)&v15);
          }
        }
      }
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)&v14);
  }
}
