/*
 * XREFs of KiIpiSendRequest @ 0x140359160
 * Callers:
 *     KxFlushEntireTb @ 0x140277720 (KxFlushEntireTb.c)
 *     KiIpiSendRequestEx @ 0x1402932A0 (KiIpiSendRequestEx.c)
 *     KeFlushMultipleRangeTb @ 0x140293520 (KeFlushMultipleRangeTb.c)
 *     KiIpiSendPacket @ 0x140359100 (KiIpiSendPacket.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x14026B1E0 (HalRequestIpiSpecifyVector.c)
 *     KeIsEmptyAffinityEx @ 0x140276350 (KeIsEmptyAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402778F0 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x140277930 (KeCopyAffinityEx.c)
 *     KeSubtractAffinityEx @ 0x1402791F0 (KeSubtractAffinityEx.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402EE940 (EtwGetKernelTraceTimestamp.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x140359624 (KiIpiEnlightenedGuestPriorityKick.c)
 *     HalRequestIpi @ 0x140359720 (HalRequestIpi.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PerfInfoLogIpiSend @ 0x1405A4620 (PerfInfoLogIpiSend.c)
 */

__int64 __fastcall KiIpiSendRequest(__int64 a1, int a2, unsigned __int16 *a3, _OWORD *a4, __int64 a5)
{
  __int64 v8; // r14
  unsigned __int16 *v9; // rsi
  _QWORD *v10; // r15
  unsigned __int16 v11; // ax
  __int64 v12; // rcx
  __int64 v13; // r12
  _OWORD *v14; // rbx
  int v15; // edi
  __int64 v16; // rbx
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  int v19; // ecx
  __int64 result; // rax
  __int64 v21; // r9
  unsigned int v22; // r11d
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdi
  int v26; // r9d
  unsigned __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r10
  signed __int64 *v30; // rdx
  signed __int64 v31; // rax
  signed __int64 v32; // rcx
  unsigned int v33; // ecx
  unsigned int v34; // r8d
  __int64 v35; // rcx
  _QWORD *v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  char v39; // [rsp+30h] [rbp-81h]
  unsigned int v40; // [rsp+34h] [rbp-7Dh]
  int v41; // [rsp+38h] [rbp-79h]
  unsigned int v42; // [rsp+3Ch] [rbp-75h]
  unsigned int v43; // [rsp+40h] [rbp-71h]
  __int64 v44; // [rsp+50h] [rbp-61h]
  unsigned __int16 v45; // [rsp+58h] [rbp-59h]
  signed __int64 v46; // [rsp+68h] [rbp-49h]
  unsigned __int64 v49; // [rsp+88h] [rbp-29h]
  _OWORD v50[3]; // [rsp+98h] [rbp-19h] BYREF

  LODWORD(v46) = 0;
  v8 = a1;
  memset(v50, 0, 32);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x400000) != 0 )
  {
    v39 = 1;
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v50, 0x40400000u);
  }
  else
  {
    v39 = 0;
  }
  v9 = (unsigned __int16 *)(v8 + 12040);
  v10 = (_QWORD *)(v8 + 12208);
  if ( a2 )
  {
    KeCopyAffinityEx(v8 + 12040, (unsigned __int16 *)KeActiveProcessors);
    if ( a2 == 1 )
      KeRemoveProcessorAffinityEx((unsigned __int16 *)(v8 + 12040), *(_DWORD *)(v8 + 36));
    v13 = a5;
    if ( (a5 & 0x80000000) != 0 )
    {
      LODWORD(v13) = a5 & 0x7FFFFFFF;
      if ( !(unsigned int)KeIsEmptyAffinityEx(&KeSleepingProcessors) )
      {
        a2 = 0;
        KeSubtractAffinityEx(
          (unsigned __int16 *)(v8 + 12040),
          (unsigned __int16 *)&KeSleepingProcessors,
          (_BYTE *)(v8 + 12040));
      }
    }
  }
  else
  {
    *v9 = *a3;
    *(_WORD *)(v8 + 12042) = a3[1];
    v11 = 0;
    for ( *(_DWORD *)(v8 + 12044) = 0; v11 < *a3; *(_QWORD *)&v9[4 * v12 + 4] = *(_QWORD *)&a3[4 * v12 + 4] )
      v12 = v11++;
    v13 = a5;
  }
  v14 = a4;
  v15 = (unsigned __int16)KeNumberNodes;
  *(_DWORD *)(v8 + 11652) = (unsigned __int16)KeNumberNodes;
  v16 = v13 & 0xF | ((_QWORD)v14 << 7);
  v43 = *(_DWORD *)(v8 + 36);
  *(_DWORD *)(v8 + 11648) = 1;
  *v10 = 1310721LL;
  memset((void *)(v8 + 12216), 0, 0xA0uLL);
  v42 = 0;
  v19 = 0;
  v41 = 0;
  result = 0LL;
  v40 = 0;
  v21 = 0LL;
  v22 = 0;
  if ( v15 )
  {
    do
    {
      v50[2] = 0LL;
      v23 = KeNodeBlock[v22];
      v24 = *(unsigned __int16 *)(v23 + 144);
      v17 = *(_QWORD *)(v23 + 136);
      if ( *v9 > (unsigned __int16)v24 && (v18 = v17 & *(_QWORD *)&v9[4 * v24 + 4], (v49 = v18) != 0) )
      {
        v25 = 0LL;
        v45 = *(_WORD *)(v23 + 144);
        v26 = v45;
        while ( v18 )
        {
LABEL_12:
          v26 = v45;
          _BitScanForward64(&v27, v18);
          v44 = v18 & ~(1LL << v27);
          v28 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v45 + (unsigned __int8)v27];
          v29 = KiProcessorBlock[v28];
          _m_prefetchw((const void *)(v29 + 35904));
          v30 = (signed __int64 *)(v29 + ((v43 + 699LL) << 6));
          _m_prefetchw(v30);
          if ( !v25 )
          {
            v25 = v30 + 7;
            *((_DWORD *)v30 + 14) = (unsigned int)((0x101010101010101LL
                                                  * ((((v49 - ((v49 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                    + (((v49 - ((v49 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                    + ((((v49 - ((v49 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                      + (((v49 - ((v49 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
          }
          v30[6] = (signed __int64)v25;
          if ( v13 == 5 )
          {
            *((_OWORD *)v30 + 1) = *a4;
            *((_OWORD *)v30 + 2) = a4[1];
            v46 = v30[5];
          }
          v30[1] = v16;
          v31 = *(_QWORD *)(v29 + 35904);
          do
          {
            v32 = v31;
            *v30 = v31;
            v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 35904), (signed __int64)v30, v31);
          }
          while ( v31 != v32 );
          if ( v31 )
          {
            v40 = 1;
          }
          else
          {
            v33 = KiProcessorIndexToNumberMappingTable[v28];
            v34 = v33 & 0x3F;
            v35 = v33 >> 6;
            v41 = 1;
            if ( *(unsigned __int16 *)v10 <= (unsigned int)v35 )
              *(_WORD *)v10 = v35 + 1;
            v36 = &v10[v35];
            v37 = v36[1];
            _bittestandset64(&v37, v34);
            v36[1] = v37;
          }
          v38 = *(_QWORD *)(v29 + 33976);
          if ( v38 )
            _InterlockedIncrement((volatile signed __int32 *)(v38 + 32));
          v18 = v44;
        }
        while ( 1 )
        {
          v17 = ++v45;
          if ( v45 >= (unsigned int)(v26 + 1) )
            break;
          v18 = *(_QWORD *)(8LL * v45 + 8);
          if ( v18 )
            goto LABEL_12;
        }
        v21 = v42;
      }
      else
      {
        v21 = (unsigned int)(v21 + 1);
        v42 = v21;
      }
      ++v22;
    }
    while ( v22 < (unsigned __int16)KeNumberNodes );
    v8 = a1;
    if ( (_DWORD)v21 )
    {
      v21 = (unsigned int)-(int)v21;
      result = (unsigned int)(v21 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 11652), v21));
      if ( !(_DWORD)result )
      {
        *(_DWORD *)(a1 + 11648) = 0;
        return result;
      }
    }
    v19 = v41;
    result = v40;
  }
  if ( v13 != 5 && (_DWORD)result )
  {
    if ( v19 )
    {
      ++*(_DWORD *)(v8 + 34000);
      KiIpiEnlightenedGuestPriorityKick(v10, v17, v18, v21);
      result = HalRequestIpi(0LL, v10);
    }
  }
  else
  {
    if ( (unsigned int)(a2 - 1) <= 1 )
      ++*(_DWORD *)(v8 + 33996);
    else
      ++*(_DWORD *)(v8 + 34000);
    KiIpiEnlightenedGuestPriorityKick(v9, v17, v18, v21);
    result = HalRequestIpiSpecifyVector(a2, v9, 0xE1u);
    if ( (int)result < 0 )
      KeBugCheckEx(0x5Cu, 0x201uLL, HalpInterruptController, (int)result, a2);
  }
  if ( v39 )
    return PerfInfoLogIpiSend((unsigned int)v50, v13, v46, a2, (__int64)v9);
  return result;
}
