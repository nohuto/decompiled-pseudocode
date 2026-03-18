/*
 * XREFs of ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1801C67E0
 * Callers:
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x180230E88 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1802330C0 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ @ 0x1800DC604 (-IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1801C51E4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Add@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInteraction@@@Z @ 0x1801C5444 (-Add@-$CArray@PEAVCInteraction@@V-$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInteract.c)
 */

void __fastcall CInteraction::UpdateDefaultInteractionForCurrentMC(CInteraction *this)
{
  bool IsDefaultInteractionStateLocked; // al
  __int64 v3; // rcx
  char v4; // r9
  char v5; // r8
  unsigned __int8 v6; // al
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ecx
  __int64 v10; // rcx
  CInteraction *v11; // [rsp+40h] [rbp-18h] BYREF
  CInteraction *v12; // [rsp+70h] [rbp+18h] BYREF
  int v13; // [rsp+78h] [rbp+20h] BYREF

  IsDefaultInteractionStateLocked = CInteraction::IsDefaultInteractionStateLocked(this);
  v5 = 0;
  if ( !IsDefaultInteractionStateLocked )
  {
    v6 = *(_BYTE *)(v3 + 184);
    if ( !v4 )
      v5 = v6 >> 3;
    v12 = this;
    *(_BYTE *)(v3 + 184) = v6 ^ (v6 ^ (16 * v5)) & 0x10;
    CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::Add(v3, &v12);
    if ( (unsigned int)dword_180341E80 > 4 && (qword_180341E90 & 2) != 0 && (qword_180341E98 & 2) == qword_180341E98 )
    {
      v9 = *((unsigned __int8 *)this + 184);
      v11 = this;
      LODWORD(v12) = (v9 >> 3) & 1;
      v10 = (v9 >> 4) & 1;
      v13 = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v10,
        byte_1802E5A2D,
        v7,
        v8,
        (__int64)&v11,
        (__int64)&v13,
        (__int64)&v12);
    }
  }
}
