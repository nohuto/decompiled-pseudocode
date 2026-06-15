/*
 * XREFs of ?AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x140063F90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z @ 0x140061144 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140061F58 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CanCoalesceTimestampMessages@CCrossProcessServerOutputEndpoint@@IEAAIIW4EndpointMessageID@@IPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@@Z @ 0x14006439C (-CanCoalesceTimestampMessages@CCrossProcessServerOutputEndpoint@@IEAAIIW4EndpointMessageID@@IPEA.c)
 *     McTemplateU0pqqqx_EventWriteTransfer @ 0x140064B88 (McTemplateU0pqqqx_EventWriteTransfer.c)
 *     McTemplateU0pqxxxxx_EventWriteTransfer @ 0x140064CD0 (McTemplateU0pqxxxxx_EventWriteTransfer.c)
 *     ?AEWMILOG_DROP@@YAXKPEAXE_K1@Z @ 0x14006E08C (-AEWMILOG_DROP@@YAXKPEAXE_K1@Z.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint::AddTimestampMessage(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        float *a5,
        int a6,
        int a7)
{
  unsigned int v7; // r13d
  unsigned int v9; // ebx
  unsigned int v11; // r14d
  unsigned __int64 v12; // rsi
  unsigned int v13; // ebp
  CCrossProcessBaseEndpoint *v14; // rcx
  __int64 v15; // r9
  unsigned __int8 v16; // r8
  __int32 v17; // ebp
  unsigned int v18; // edx
  unsigned int v19; // eax
  unsigned int v20; // esi
  int CanCoalesceTimestampMessages; // eax
  int v22; // r15d
  __int64 v23; // rcx
  signed __int64 v24; // rdx
  __int64 v25; // r8
  double v26; // xmm1_8
  __int64 v27; // rcx
  double v28; // xmm0_8
  __int64 v29; // r8
  double v30; // xmm0_8
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rsi
  __int64 v34; // rax
  unsigned int v35; // r13d
  CCrossProcessBaseEndpoint *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  bool v39; // zf
  __int32 v40; // eax
  __int32 v41; // edx
  char v43; // [rsp+50h] [rbp-58h]
  unsigned int v44; // [rsp+54h] [rbp-54h]
  char v45; // [rsp+58h] [rbp-50h]
  unsigned int v46; // [rsp+B0h] [rbp+8h]

  v7 = a3;
  v9 = 0;
  v43 = 0;
  v11 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4LL);
  v12 = **(unsigned int **)(a1 + 72);
  v13 = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 132LL);
  v46 = v13;
  if ( !CCrossProcessBaseEndpoint::IsValidQueueIndex((CCrossProcessBaseEndpoint *)a1, v11, v13)
    || !CCrossProcessBaseEndpoint::IsValidQueueIndex(v14, v12, v13) )
  {
    goto LABEL_39;
  }
  v17 = 0;
  v18 = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 132LL);
  if ( v11 + 1 != v18 )
    v17 = v11 + 1;
  if ( v17 == (_DWORD)v12 )
  {
    AEWMILOG_DROP(v11 + 1, (void *)a1, v16, v11, v12);
    v9 = -2005139385;
LABEL_40:
    AudCPTraceLoggingErrorHelper("CCrossProcessServerOutputEndpoint::AddTimestampMessage", 637, v9, v15);
    return v9;
  }
  if ( a7 != 1 || v18 <= 5 )
  {
    v22 = a7 != 1 ? 4 : 0;
    if ( v18 <= 5 )
      v22 |= 8u;
    goto LABEL_21;
  }
  if ( (unsigned int)v12 > v11 )
    v19 = v11 + v18 - v12;
  else
    v19 = v11 - v12;
  if ( v19 < 5 )
  {
    v22 = 2;
LABEL_21:
    LODWORD(v15) = 0;
    goto LABEL_22;
  }
  v20 = v11 - 1;
  if ( !v11 )
    v20 = v18 - 1;
  CanCoalesceTimestampMessages = CCrossProcessServerOutputEndpoint::CanCoalesceTimestampMessages(
                                   a1,
                                   v20,
                                   a2,
                                   v7,
                                   a5,
                                   a6);
  v43 = CanCoalesceTimestampMessages;
  if ( !CanCoalesceTimestampMessages )
  {
    v17 = v11;
    v11 = v20;
  }
  v7 = a3;
  LODWORD(v15) = CanCoalesceTimestampMessages == 0;
  v22 = CanCoalesceTimestampMessages != 0;
LABEL_22:
  v23 = *(_QWORD *)a5;
  v24 = *((_QWORD *)a5 + 1);
  v25 = *((_QWORD *)a5 + 3);
  v26 = a5[8];
  if ( *(_QWORD *)a5 < (unsigned __int64)v24 )
  {
    v24 -= v23;
    if ( v24 < 0 )
    {
      v31 = v24;
      LODWORD(v24) = v24 & 1;
      v30 = (double)(int)(v24 | (v31 >> 1)) + (double)(int)(v24 | (v31 >> 1));
    }
    else
    {
      v30 = (double)(int)v24;
    }
    v29 = (unsigned int)(int)(v30 * 10000000.0 / v26 + 0.5) + v25;
  }
  else
  {
    v27 = v23 - v24;
    if ( v27 < 0 )
      v28 = (double)(int)(v27 & 1 | ((unsigned __int64)v27 >> 1))
          + (double)(int)(v27 & 1 | ((unsigned __int64)v27 >> 1));
    else
      v28 = (double)(int)v27;
    v29 = v25 - (unsigned int)(int)(v28 * 10000000.0 / v26 + 0.5);
  }
  v32 = *(_QWORD *)(a1 + 120);
  v33 = (unsigned __int64)v11 << 6;
  v45 = v29;
  if ( (_DWORD)v15 )
  {
    *(_DWORD *)(v33 + v32 + 56) += a4;
    *(_QWORD *)(v33 + *(_QWORD *)(a1 + 120) + 32) += *((_QWORD *)a5 + 2);
  }
  else
  {
    *(_DWORD *)(v33 + v32) = a2;
    *(_DWORD *)(v33 + *(_QWORD *)(a1 + 120) + 4) = v7;
    *(_DWORD *)(v33 + *(_QWORD *)(a1 + 120) + 56) = a4;
    *(_DWORD *)(v33 + *(_QWORD *)(a1 + 120) + 8) = a6;
    v34 = *(_QWORD *)(a1 + 120);
    *(_OWORD *)(v33 + v34 + 16) = *(_OWORD *)a5;
    *(_OWORD *)(v33 + v34 + 32) = *((_OWORD *)a5 + 1);
    *(_QWORD *)(v33 + v34 + 48) = *((_QWORD *)a5 + 4);
    *(_QWORD *)(v33 + *(_QWORD *)(a1 + 120) + 40) = v29;
  }
  if ( _InterlockedExchange((volatile __int32 *)(a1 + 160), 0) == 1 )
    *(_DWORD *)(v33 + *(_QWORD *)(a1 + 120) + 52) = 1;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 80) + 152LL) != -1 )
  {
    v44 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 12LL);
    v35 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 8LL);
    if ( !CCrossProcessBaseEndpoint::IsValidQueueIndex((CCrossProcessBaseEndpoint *)v44, v44, v46)
      || !CCrossProcessBaseEndpoint::IsValidQueueIndex(v36, v35, v46) )
    {
LABEL_39:
      v9 = -2005139387;
      goto LABEL_40;
    }
    LODWORD(v29) = 0;
    v37 = *(_QWORD *)(a1 + 136);
    if ( v44 + 1 != *(_DWORD *)(*(_QWORD *)(a1 + 80) + 132LL) )
      LODWORD(v29) = v44 + 1;
    v38 = *(_QWORD *)(a1 + 120);
    v24 = (unsigned __int64)v44 << 6;
    v39 = (_DWORD)v29 == v35;
    *(_OWORD *)(v24 + v37) = *(_OWORD *)(v33 + v38);
    *(_OWORD *)(v24 + v37 + 16) = *(_OWORD *)(v33 + v38 + 16);
    *(_OWORD *)(v24 + v37 + 32) = *(_OWORD *)(v33 + v38 + 32);
    *(_OWORD *)(v24 + v37 + 48) = *(_OWORD *)(v33 + v38 + 48);
    v40 = v29;
    LOBYTE(v29) = v45;
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 72) + 12LL), v40);
    if ( v39 )
    {
      v41 = 0;
      if ( v35 + 1 != *(_DWORD *)(*(_QWORD *)(a1 + 80) + 132LL) )
        v41 = v35 + 1;
      LODWORD(v24) = _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 72) + 8LL), v41);
    }
  }
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 72) + 4LL), v17);
  if ( (byte_140090581 & 4) != 0 )
  {
    McTemplateU0pqxxxxx_EventWriteTransfer(
      *(_DWORD *)(v33 + *(_QWORD *)(a1 + 120) + 52),
      v24,
      a1,
      v15,
      *(_DWORD *)(v33 + *(_QWORD *)(a1 + 120) + 52),
      *((_QWORD *)a5 + 2),
      v29,
      *(_QWORD *)a5,
      *((_QWORD *)a5 + 1));
    if ( (byte_140090581 & 4) != 0 )
      McTemplateU0pqqqx_EventWriteTransfer(
        *(_QWORD *)(a1 + 120),
        *(_QWORD *)(v33 + *(_QWORD *)(a1 + 120) + 40),
        a1,
        v22,
        v11,
        v43,
        *(_QWORD *)(v33 + *(_QWORD *)(a1 + 120) + 40));
  }
  return v9;
}
