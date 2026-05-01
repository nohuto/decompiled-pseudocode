/*
 * XREFs of ?RmpActivityHostAggregateMemUtilMetricsByProcess@@YAXPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@KPEAU_MEMUTIL_PROCESS_METRICS@@G@Z @ 0x180032DBC
 * Callers:
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x180032C44 (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 * Callees:
 *     ?RmpCopyMemUtilHostMetrics@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x180032F18 (-RmpCopyMemUtilHostMetrics@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44333@Z @ 0x18006B324 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U1@@-$_tlgWriteTemplate@$.c)
 */

void __fastcall RmpActivityHostAggregateMemUtilMetricsByProcess(
        struct _RM_PROCESS_ID_HOST_METRICS_PAIR *a1,
        unsigned int a2,
        struct _MEMUTIL_PROCESS_METRICS *a3,
        __int16 a4)
{
  __int64 v4; // rbx
  int v8; // r9d
  __int64 v9; // rsi
  int v10; // ecx
  int v11; // edx
  __int16 v12; // bx
  char *v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rcx
  int v16; // [rsp+60h] [rbp-59h]
  int v17; // [rsp+64h] [rbp-55h] BYREF
  int v18; // [rsp+68h] [rbp-51h] BYREF
  int v19; // [rsp+6Ch] [rbp-4Dh] BYREF
  __int64 v20; // [rsp+70h] [rbp-49h]
  __int64 v21; // [rsp+78h] [rbp-41h] BYREF
  __int64 v22; // [rsp+80h] [rbp-39h] BYREF
  __int64 v23; // [rsp+88h] [rbp-31h] BYREF
  __int64 v24; // [rsp+90h] [rbp-29h] BYREF
  _BYTE v25[16]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-9h]
  __int64 v27; // [rsp+B8h] [rbp-1h]
  __int64 v28; // [rsp+C0h] [rbp+7h]
  __int16 v29; // [rsp+DEh] [rbp+25h]

  v4 = a2;
  memset_0(v25, 0, 0x40uLL);
  v8 = 4;
  v9 = 0LL;
  v10 = (2 * (a4 & 4)) | 1;
  if ( (a4 & 8) == 0 )
    v10 = 2 * (a4 & 4);
  v11 = v10 | 0x40;
  if ( (a4 & 0x20) == 0 )
    v11 = v10;
  v16 = v11;
  if ( (_DWORD)v4 )
  {
    v20 = v4;
    v12 = v29;
    v13 = (char *)a3 + 4;
    do
    {
      v14 = *(_QWORD *)a1;
      if ( *(_QWORD *)a1 != v9 )
      {
        if ( v9 )
        {
          RmpCopyMemUtilHostMetrics((struct _RM_ACTIVITY_HOST_METRICS *)v9, (struct _RM_ACTIVITY_HOST_METRICS *)v25);
          v14 = *(_QWORD *)a1;
        }
        memset_0(v25, 0, 0x40uLL);
        v11 = v16;
        v12 = a4;
        v29 = a4;
        v9 = v14;
      }
      if ( (unsigned int)dword_1800B31E0 > 5 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
      {
        v15 = *(_QWORD *)(*(_QWORD *)(v9 + 48) + 32LL);
        v21 = *(_QWORD *)(v13 + 44);
        v22 = *(_QWORD *)(v13 + 20);
        v23 = *(_QWORD *)(v13 + 12);
        v17 = *(_DWORD *)v13;
        v19 = *((_DWORD *)v13 - 1);
        v18 = v11;
        v24 = v15;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v15,
          (unsigned int)&unk_18009C38A,
          0,
          v8,
          (__int64)&v24,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v23,
          (__int64)&v22,
          (__int64)&v21);
      }
      if ( (a4 & 4) != 0 )
      {
        if ( (*v13 & 8) != 0 )
        {
          v26 += *(_QWORD *)(v13 + 20);
        }
        else
        {
          v12 &= ~4u;
          v29 = v12;
        }
      }
      if ( (a4 & 8) != 0 )
      {
        if ( (*v13 & 1) != 0 )
        {
          v27 += *(_QWORD *)(v13 + 12);
        }
        else
        {
          v12 &= ~8u;
          v29 = v12;
        }
      }
      if ( (a4 & 0x20) != 0 )
      {
        if ( (*v13 & 0x40) != 0 )
        {
          v28 += *(_QWORD *)(v13 + 44);
        }
        else
        {
          v12 &= ~0x20u;
          v29 = v12;
        }
      }
      v11 = v16;
      a1 = (struct _RM_PROCESS_ID_HOST_METRICS_PAIR *)((char *)a1 + 16);
      v13 += 64;
      --v20;
    }
    while ( v20 );
  }
  RmpCopyMemUtilHostMetrics((struct _RM_ACTIVITY_HOST_METRICS *)v9, (struct _RM_ACTIVITY_HOST_METRICS *)v25);
}
