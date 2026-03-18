/*
 * XREFs of ?CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x1801CA048
 * Callers:
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x180200624 (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionSurfaceInfo@@@Z @ 0x1800259BC (--0-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCComposition.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x1800A2F98 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@44@Z @ 0x1801C892C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x180213294 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 */

void __fastcall CInteractionTracker::CheckTargetsForInteractionSource(
        struct ExpressionReferenceInfo *a1,
        struct CResource *a2,
        struct CResource *a3)
{
  __int64 v6; // rax
  CVisual *v7; // rbx
  struct CInteraction *InteractionInternal; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct CInteraction *v12; // r10
  struct CInteraction *v13; // [rsp+40h] [rbp-20h] BYREF
  struct CResource *v14; // [rsp+48h] [rbp-18h] BYREF
  CVisual *v15; // [rsp+50h] [rbp-10h] BYREF
  struct CResource *v16; // [rsp+58h] [rbp-8h] BYREF
  CVisual *v17; // [rsp+88h] [rbp+28h] BYREF

  if ( (unsigned int)dword_180342EF0 > 4
    && (qword_180342F00 & 2) != 0
    && (qword_180342F08 & 2) == qword_180342F08
    && a2
    && a3
    && (unsigned int)(*(_DWORD *)a1 - 1) <= 1
    && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 195LL)
    && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a3 + 56LL))(a3, 88LL) )
  {
    wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
      &v17,
      (__int64)a2);
    v6 = *(_QWORD *)a3;
    v16 = a3;
    (*(void (__fastcall **)(struct CResource *))(v6 + 8))(a3);
    v7 = v17;
    *((_BYTE *)v17 + 264) |= 4u;
    if ( InteractionSourceManager::TryGetActiveChainingHelper((struct CResource *)((char *)a3 + 192)) )
    {
      if ( CVisual::GetInteractionInternal(v7) )
      {
        InteractionInternal = CVisual::GetInteractionInternal(v7);
        if ( InteractionInternal == v12
          && (unsigned int)dword_180342EF0 > 4
          && (qword_180342F00 & 2) != 0
          && (qword_180342F08 & 2) == qword_180342F08 )
        {
          LODWORD(v17) = *(_DWORD *)a1;
          v13 = v12;
          v14 = a3;
          v15 = v7;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v9,
            byte_1802E6CD7,
            v10,
            v11,
            (__int64)&v17,
            (__int64)&v15,
            (__int64)&v14,
            (__int64)&v13);
        }
      }
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
    (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v7 + 16LL))(v7);
  }
}
