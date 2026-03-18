/*
 * XREFs of ?LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z @ 0x1C00C0D74
 * Callers:
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C00C12D0 (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00C1844 (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00C1BB0 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@55555@Z @ 0x1C0026918 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@.c)
 *     _tlgKeywordOn @ 0x1C0026C84 (_tlgKeywordOn.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogAllocationInformation(
        VIDMM_COMMIT_TELEMETRY *this,
        struct VIDMM_ALLOC *a2,
        __int64 a3,
        struct _GUID *a4)
{
  int v4; // r8d
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  unsigned int v8; // ecx
  __int64 v9; // rcx
  int v10; // [rsp+60h] [rbp+27h] BYREF
  int v11; // [rsp+64h] [rbp+2Bh] BYREF
  int v12; // [rsp+68h] [rbp+2Fh] BYREF
  int v13; // [rsp+6Ch] [rbp+33h] BYREF
  int v14; // [rsp+70h] [rbp+37h] BYREF
  __int64 v15; // [rsp+78h] [rbp+3Fh] BYREF
  unsigned __int16 *v16; // [rsp+80h] [rbp+47h] BYREF
  int v17; // [rsp+A0h] [rbp+67h] BYREF

  if ( *((_BYTE *)this + 24)
    && *((_QWORD *)this + 2)
    && (unsigned int)dword_1C0051048 > 5
    && tlgKeywordOn((__int64)&dword_1C0051048, 0x10000LL) )
  {
    v8 = *(_DWORD *)(v7 + 72);
    v14 = v4;
    v17 = HIBYTE(v8) & 0x1F;
    v10 = (v8 >> 18) & 0x1F;
    v11 = (v8 >> 12) & 0x1F;
    v13 = v8 & 0x1F;
    v12 = (v8 >> 6) & 0x1F;
    v15 = *(_QWORD *)(v7 + 16);
    v9 = *(_QWORD *)(*(_QWORD *)v6 + 24LL);
    v16 = *(unsigned __int16 **)(v9 + 1496);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      (int)&unk_1C0043AB6,
      v5,
      v5,
      &v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v17);
  }
}
