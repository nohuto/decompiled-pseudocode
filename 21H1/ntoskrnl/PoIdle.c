/*
 * XREFs of PoIdle @ 0x14026FDE0
 * Callers:
 *     KiIdleLoop @ 0x1403F9910 (KiIdleLoop.c)
 * Callees:
 *     MmGetNextNode @ 0x140241930 (MmGetNextNode.c)
 *     PpmIdleExecuteTransition @ 0x1402702D0 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x140272D80 (PpmIdlePrepare.c)
 *     KeAddProcessorAffinityEx @ 0x140277170 (KeAddProcessorAffinityEx.c)
 *     PpmEventIdleStateChange @ 0x140300338 (PpmEventIdleStateChange.c)
 *     HalRequestIpi @ 0x140359720 (HalRequestIpi.c)
 *     PpmIdleSelectStates @ 0x140392080 (PpmIdleSelectStates.c)
 *     PpmResetProcessorIdleAccounting @ 0x1403C0A44 (PpmResetProcessorIdleAccounting.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HalProcessorIdle @ 0x1403F1C30 (HalProcessorIdle.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PpmSetPlatformIdleDurationHint @ 0x140561C58 (PpmSetPlatformIdleDurationHint.c)
 */

__int64 __fastcall PoIdle(ULONG_PTR BugCheckParameter4)
{
  unsigned __int16 v1; // bx
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // r10
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned __int64 *v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned int v14; // edi
  int v15; // ecx
  int v16; // edx
  __int64 v18; // r12
  unsigned __int16 v19; // dx
  char v20; // si
  unsigned __int16 v21; // cx
  struct _KPRCB *CurrentPrcb; // r8
  _KNODE *ParentNode; // r9
  int v24; // edi
  int NextNode; // eax
  __int64 v26; // r10
  char v27; // [rsp+40h] [rbp-C0h] BYREF
  char v28[3]; // [rsp+41h] [rbp-BFh] BYREF
  unsigned int v29; // [rsp+44h] [rbp-BCh] BYREF
  int v30; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v36[44]; // [rsp+80h] [rbp-80h] BYREF

  v1 = 0;
  v28[0] = 0;
  v31 = 0LL;
  v33 = 0LL;
  v35 = 0LL;
  v27 = 0;
  v30 = 0;
  v29 = 0;
  memset(&v36[2], 0, 0xA0uLL);
  result = dword_140C23ECC;
  if ( BYTE5(PpmCurrentProfile[342 * dword_140C23ECC + 23]) )
    return result;
  v4 = *(_QWORD *)(BugCheckParameter4 + 0x8000);
  v5 = *(_QWORD *)(BugCheckParameter4 + 32776);
  v6 = 0LL;
  v34 = 0LL;
  if ( !v4 )
    return HalProcessorIdle();
  *(_DWORD *)(v4 + 796) = 0;
  v7 = *(_QWORD *)(BugCheckParameter4 + 0x8000);
  if ( *(_BYTE *)(v7 + 5) )
  {
    v8 = *(_QWORD *)(BugCheckParameter4 + 32784);
    *(_QWORD *)(BugCheckParameter4 + 32784) = 0LL;
    v9 = *(unsigned int *)(v7 + 20);
    *(_QWORD *)(BugCheckParameter4 + 32792) += v8;
    v10 = *(_QWORD *)(BugCheckParameter4 + 32776) + 1000 * v9;
    *(_QWORD *)(v10 + 40) += v8;
    if ( *(_DWORD *)(v7 + 68) == 3 )
    {
      if ( *(int *)(v7 + 64) < 0 )
      {
        ++*(_DWORD *)(v10 + 52);
      }
      else
      {
        ++*(_DWORD *)(v10 + 56);
        v11 = (unsigned __int64 *)&PpmIdleIntervalLimits;
        v12 = 0;
        while ( v8 >= *v11 )
        {
          if ( v8 < v11[3] )
          {
            ++v12;
            break;
          }
          v11 += 6;
          v12 += 2;
          if ( v12 >= 0x1A )
            goto LABEL_58;
        }
        if ( v12 >= 0x1A )
        {
LABEL_58:
          ++*(_DWORD *)(v10 + 60);
          goto LABEL_17;
        }
        v13 = 32LL * v12;
        *(_QWORD *)(v13 + v10 + 208) += v8;
        ++*(_DWORD *)(v13 + v10 + 232);
        if ( v8 < *(_QWORD *)(v13 + v10 + 216) )
          *(_QWORD *)(v13 + v10 + 216) = v8;
        if ( v8 > *(_QWORD *)(v13 + v10 + 224) )
          *(_QWORD *)(v13 + v10 + 224) = v8;
LABEL_17:
        if ( v8 < *(_QWORD *)(v10 + 64) )
          *(_QWORD *)(v10 + 64) = v8;
        if ( v8 > *(_QWORD *)(v10 + 72) )
          *(_QWORD *)(v10 + 72) = v8;
      }
    }
    else
    {
      ++*(_DWORD *)(v10 + 48);
    }
  }
  *(_DWORD *)(v7 + 64) = 0;
  *(_DWORD *)(v7 + 68) = 3;
  *(_BYTE *)(v7 + 5) = 0;
  *(_BYTE *)(v4 + 5) = 1;
  v36[0] = 1310721;
  memset(&v36[1], 0, 0xA4uLL);
  *(_WORD *)(v4 + 48) = 0;
  if ( !*(_BYTE *)v4 )
  {
    result = PpmIdlePrepare(
               BugCheckParameter4,
               (unsigned int)v28,
               (unsigned int)&v31,
               (unsigned int)&v33,
               (__int64)&v34,
               (__int64)v36);
    v14 = result;
    v29 = result;
    if ( (_DWORD)result != -2 )
    {
      if ( (_DWORD)result == -1 )
      {
        ++*(_DWORD *)(v5 + 12);
        return result;
      }
      v15 = *(_DWORD *)(v4 + 560);
      v30 = v15;
      if ( v15 != -1 )
      {
        **(_DWORD **)(v4 + 808) = v15;
        *(_DWORD *)(v4 + 796) = 1;
      }
      v6 = v34;
      v27 = *(_BYTE *)(248LL * (unsigned int)result + v4 + 1058) == 0;
      goto LABEL_27;
    }
    return HalProcessorIdle();
  }
  if ( PpmIdleVetoBias && *(_BYTE *)(v4 + 8) )
    return HalProcessorIdle();
  PpmIdleSelectStates(
    BugCheckParameter4,
    (unsigned int)&v31,
    (unsigned int)&v33,
    (unsigned int)v28,
    (__int64)&v29,
    (__int64)&v30,
    (__int64)&v35,
    (__int64)&v27);
  v14 = v29;
LABEL_27:
  v16 = *(_DWORD *)(v4 + 16);
  if ( v14 != v16 )
  {
    *(_DWORD *)(v4 + 24) = v16;
    *(_DWORD *)(v4 + 16) = v14;
    PpmEventIdleStateChange(v14);
  }
  if ( (*(_DWORD *)(v5 + 4))++ == -1 )
    PpmResetProcessorIdleAccounting(v5, v31);
  v18 = *(_QWORD *)(BugCheckParameter4 + 0x8000);
  v19 = 0;
  v20 = *(_BYTE *)(248LL * v14 + v4 + 1057);
  v21 = v36[0];
  if ( LOWORD(v36[0]) )
  {
    while ( !*(_QWORD *)&v36[2 * v19 + 2] )
    {
      if ( ++v19 >= LOWORD(v36[0]) )
        goto LABEL_34;
    }
    *(_WORD *)(v18 + 48) |= 0x400u;
    if ( KiSerializeTimerExpiration && v6 )
      PpmSetPlatformIdleDurationHint(v6);
    v21 = v36[0];
  }
LABEL_34:
  if ( !(_BYTE)KiDynamicTickDisableReason
    && !PpmIpiLastClockOwnerDisable
    && !*(_BYTE *)(BugCheckParameter4 + 33)
    && *(_BYTE *)(KiProcessorBlock[(unsigned int)KiClockTimerOwner] + 33)
    && !v20 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v32 = 0;
    ParentNode = CurrentPrcb->ParentNode;
    v24 = ParentNode->Affinity.Reserved[0];
    if ( (ParentNode->DeepIdleSet & ~(1LL << CurrentPrcb->GroupIndex)) == (ParentNode->Affinity.Mask & ~(1LL << (KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number] & 0x3F))) )
    {
      while ( 1 )
      {
        NextNode = MmGetNextNode(v24, &v32);
        if ( NextNode == -1 )
          break;
        if ( *(_QWORD *)(KeNodeBlock[NextNode] + 64) != *(_QWORD *)(KeNodeBlock[NextNode] + 136) )
          goto LABEL_40;
      }
      if ( ((*(_QWORD *)&v36[2 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v26] >> 6) + 2] >> (KiProcessorIndexToNumberMappingTable[v26] & 0x3F)) & 1) == 0 )
      {
        KeAddProcessorAffinityEx(v36, (unsigned int)v26);
        *(_WORD *)(v18 + 48) |= 0x800u;
      }
    }
LABEL_40:
    v21 = v36[0];
  }
  if ( v21 )
  {
    while ( !*(_QWORD *)&v36[2 * v1 + 2] )
    {
      if ( ++v1 >= v21 )
        return PpmIdleExecuteTransition(BugCheckParameter4, v28[0], v31, v33, v27);
    }
    HalRequestIpi(0LL, v36);
  }
  return PpmIdleExecuteTransition(BugCheckParameter4, v28[0], v31, v33, v27);
}
