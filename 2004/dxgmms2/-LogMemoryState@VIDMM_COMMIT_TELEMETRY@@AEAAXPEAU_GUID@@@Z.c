/*
 * XREFs of ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00C1588
 * Callers:
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C00C12B0 (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00C13DC (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00C1824 (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00C1B90 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001A10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0026368 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@55@Z @ 0x1C00267BC (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U3@U3@@.c)
 *     _tlgKeywordOn @ 0x1C0026C04 (_tlgKeywordOn.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C0064AD4 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogMemoryState(VIDMM_COMMIT_TELEMETRY *this, struct _GUID *a2)
{
  int v2; // r12d
  __int64 v4; // r8
  __int64 v5; // r9
  const char *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // rdi
  unsigned int i; // esi
  struct VIDMM_PARTITION *v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  unsigned __int16 *v15; // r11
  const char *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r10
  unsigned __int16 *v20; // r11
  const char *v21; // rax
  const char *v22; // [rsp+50h] [rbp-10h] BYREF
  const char *v23; // [rsp+58h] [rbp-8h] BYREF
  const char *v24; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int16 *v25; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+58h] BYREF

  v2 = (int)a2;
  if ( *((_BYTE *)this + 24) )
  {
    if ( (unsigned int)dword_1C0051048 > 5 && tlgKeywordOn((__int64)&dword_1C0051048, 0x10000LL) )
    {
      v6 = "Discrete";
      if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40216) + 536LL) & 2) == 0 )
        v6 = "Integrated";
      v24 = v6;
      v25 = *(unsigned __int16 **)(*(_QWORD *)(v4 + 24) + 1496LL);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>>(
        (__int64)v25,
        (int)&unk_1C0043BEB,
        v2,
        v5,
        &v25,
        (void **)&v24);
    }
    if ( DXGPROCESS::GetCurrent() && (v7 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) != 0 )
      v8 = *(_QWORD *)(v7 + 8);
    else
      v8 = 0LL;
    v9 = *(_QWORD *)this;
    for ( i = 0; i < *(_DWORD *)(v9 + 7000); ++i )
    {
      VIDMM_GLOBAL::GetSegmentGroupState(
        (VIDMM_GLOBAL *)v9,
        i,
        D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL,
        *(struct VIDMM_PARTITION **)(v8 + 288));
      VIDMM_GLOBAL::GetSegmentGroupState((VIDMM_GLOBAL *)v9, i, D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL, v11);
      v12 = v9;
      if ( (unsigned int)dword_1C0051048 > 5 && tlgKeywordOn((__int64)&dword_1C0051048, 0x10000LL) )
      {
        v16 = 0LL;
        v25 = v15;
        v26 = v14;
        if ( v13 > 0 )
          v16 = (const char *)v13;
        v24 = v16;
        v22 = "Local";
        v23 = *(const char **)(*(_QWORD *)(v9 + 24) + 1496LL);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          (__int64)v23,
          (int)&unk_1C0043B6C,
          v2,
          v13,
          (unsigned __int16 **)&v23,
          (void **)&v22,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v24);
        v12 = *(_QWORD *)this;
      }
      v9 = v12;
      if ( (*(_BYTE *)(1584LL * i + *(_QWORD *)(v12 + 40216) + 536) & 2) != 0
        && (unsigned int)dword_1C0051048 > 5
        && tlgKeywordOn((__int64)&dword_1C0051048, 0x10000LL) )
      {
        v21 = 0LL;
        v25 = v20;
        v26 = v19;
        if ( v18 > 0 )
          v21 = (const char *)v18;
        v24 = v21;
        v23 = "NonLocal";
        v22 = *(const char **)(*(_QWORD *)(v17 + 24) + 1496LL);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          (__int64)v22,
          (int)&unk_1C0043B6C,
          v2,
          v18,
          (unsigned __int16 **)&v22,
          (void **)&v23,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v24);
        v9 = *(_QWORD *)this;
      }
    }
  }
}
