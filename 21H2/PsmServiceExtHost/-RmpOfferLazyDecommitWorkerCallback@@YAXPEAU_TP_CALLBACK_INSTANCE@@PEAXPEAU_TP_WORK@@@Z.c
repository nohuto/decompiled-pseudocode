/*
 * XREFs of ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180073A90
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18000FFE0 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026480 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800354C0 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x18006B7F8 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800737BC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall RmpOfferLazyDecommitWorkerCallback(struct _TP_CALLBACK_INSTANCE *a1, _QWORD *a2, struct _TP_WORK *a3)
{
  unsigned __int64 v4; // r14
  int v5; // r15d
  _QWORD **v6; // r12
  _QWORD *v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rcx
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  bool v16; // cc
  DWORD v17; // ebx
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v23[64]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v26; // [rsp+C8h] [rbp-38h]
  __int64 v27; // [rsp+D0h] [rbp-30h]
  _BYTE v28[144]; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+170h] [rbp+70h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v28);
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 17LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B31E0,
      (unsigned __int8 *)dword_18009D7D5,
      0LL,
      0LL,
      2u,
      &v29);
  RtlQueryUnbiasedInterruptTime(&v20);
  v4 = 0LL;
  v5 = 0;
  RmpAcquireGlobalLock();
  v6 = (_QWORD **)(a2 + 1);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == v6 )
      break;
    v8 = *v7;
    v9 = v7 - 159;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v10 = (_QWORD *)v7[1], (_QWORD *)*v10 != v7) )
      __fastfail(3u);
    *v10 = v8;
    *(_QWORD *)(v8 + 8) = v10;
    *(_OWORD *)v7 = 0LL;
    if ( *((int *)v9 + 6) >= 0 && (*(_BYTE *)(v9[6] + 2712LL) & 1) == 0 )
    {
      if ( (*((_BYTE *)v9 + 1244) & 0x10) != 0 )
        *((_DWORD *)v7 - 8) |= 4u;
      v27 = 0LL;
      v26 = 0LL;
      v25 = -1LL;
      LODWORD(v27) = (*((_DWORD *)v9 + 311) & 0x10 | 0x20u) >> 4;
      RmpReleaseGlobalLock();
      if ( (int)RmpActivityHostDecommitOfferedMemory(
                  (struct _RM_ACTIVITY_HOST *)(v7 - 159),
                  (struct _RM_OFFERED_DECOMMIT_INFO *)&v25) >= 0 )
      {
        v4 += v26;
        ++v5;
        RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)v9[7], (struct _RM_SYSTEM_MEMORY_METRICS *)v23);
        *(v7 - 6) = v24;
      }
      RmpAcquireGlobalLock();
      v11 = *((_DWORD *)v7 - 8);
      if ( (v11 & 4) != 0 )
      {
        *((_DWORD *)v7 - 8) = v11 & 0xFFFFFFFB;
        RmpActivityHostCheckQueueWork((struct _RM_ACTIVITY_HOST *)(v7 - 159));
      }
    }
    RmpObjectRelease((char *)v7 - 1272);
  }
  RtlQueryUnbiasedInterruptTime(&v19);
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 25LL) )
  {
    v21 = v19 - v20;
    v18 = v5;
    v22 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1800B31E0,
      byte_18009D82A,
      v12,
      v13,
      (__int64)&v22,
      (__int64)&v18,
      (__int64)&v21);
  }
  a2[7] += v4;
  v14 = v4;
  v15 = v19;
  if ( v4 >= a2[8] )
    v14 = a2[8];
  v16 = v4 <= a2[9];
  a2[8] = v14;
  if ( v16 )
    v4 = a2[9];
  a2[10] += v15 - v20;
  *((_DWORD *)a2 + 22) += v5;
  ++*((_DWORD *)a2 + 23);
  *((_DWORD *)a2 + 6) &= ~1u;
  a2[9] = v4;
  a2[4] = v15;
  RmpReleaseGlobalLock();
  v17 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v17, 0LL);
  }
}
