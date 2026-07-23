/*
 * XREFs of PoIdle @ 0x1402C67D0
 * Callers:
 *     KiIdleLoop @ 0x140402B30 (KiIdleLoop.c)
 * Callees:
 *     MmGetNextNode @ 0x140211644 (MmGetNextNode.c)
 *     PpmEventIdleStateChange @ 0x14022E7D0 (PpmEventIdleStateChange.c)
 *     HalRequestIpi @ 0x140268E40 (HalRequestIpi.c)
 *     PpmIdleExecuteTransition @ 0x1402C6DB0 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x1402C9890 (PpmIdlePrepare.c)
 *     KeAddProcessorAffinityEx @ 0x1402CDC80 (KeAddProcessorAffinityEx.c)
 *     KeIdleSpecCtrl @ 0x140365790 (KeIdleSpecCtrl.c)
 *     PpmIdleSelectStates @ 0x1403956D0 (PpmIdleSelectStates.c)
 *     PpmResetProcessorIdleAccounting @ 0x1403C4C04 (PpmResetProcessorIdleAccounting.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HalProcessorIdle @ 0x1403F9E80 (HalProcessorIdle.c)
 *     KeExecuteVerw @ 0x140414000 (KeExecuteVerw.c)
 *     memset @ 0x140414300 (memset.c)
 *     PpmSetPlatformIdleDurationHint @ 0x140567998 (PpmSetPlatformIdleDurationHint.c)
 */

__int64 __fastcall PoIdle(ULONG_PTR BugCheckParameter4)
{
  unsigned __int16 v1; // bx
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // r13
  unsigned __int16 v7; // ax
  __int64 v8; // rdx
  unsigned __int16 v9; // bx
  unsigned __int16 v10; // di
  __int64 v11; // rcx
  __int64 v12; // r10
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int64 *v16; // rax
  unsigned int v17; // ecx
  unsigned int v18; // edi
  unsigned __int16 v19; // ax
  __int64 v20; // rdx
  unsigned __int16 v21; // bx
  unsigned __int16 v22; // di
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // ecx
  int v26; // edx
  unsigned __int16 v28; // dx
  char v29; // r12
  unsigned __int16 v30; // cx
  __int64 v31; // rsi
  struct _KPRCB *CurrentPrcb; // r8
  _KNODE *ParentNode; // r9
  int v34; // r10d
  int NextNode; // eax
  __int64 v36; // r11
  char v37; // [rsp+40h] [rbp-C0h] BYREF
  char v38[3]; // [rsp+41h] [rbp-BFh] BYREF
  unsigned int v39; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v40; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v41; // [rsp+4Ch] [rbp-B4h] BYREF
  int v42; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+58h] [rbp-A8h] BYREF
  int v44; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+68h] [rbp-98h] BYREF
  __int64 v46; // [rsp+70h] [rbp-90h] BYREF
  __int64 v47; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v48[44]; // [rsp+80h] [rbp-80h] BYREF

  v1 = 0;
  v38[0] = 0;
  v43 = 0LL;
  v45 = 0LL;
  v47 = 0LL;
  v37 = 0;
  v42 = 0;
  v39 = 0;
  memset(&v48[2], 0, 0xA0uLL);
  result = dword_140C2332C;
  if ( BYTE5(PpmCurrentProfile[342 * dword_140C2332C + 23]) )
    return result;
  v4 = *(_QWORD *)(BugCheckParameter4 + 0x8000);
  v5 = *(_QWORD *)(BugCheckParameter4 + 32776);
  v6 = 0LL;
  v46 = 0LL;
  if ( !v4 )
  {
    v40 = 0;
    v7 = KeIdleSpecCtrl(BugCheckParameter4, 1LL, &v40, 0LL);
    v9 = v40;
    v10 = v7;
    if ( (_WORD)v40 )
    {
      v8 = 0LL;
      __writemsr(0x48u, 0LL);
    }
    v11 = HIWORD(v40);
    if ( HIWORD(v40) )
      KeExecuteVerw(v11, v8);
    HalProcessorIdle(v11, v8);
    if ( v9 )
      __writemsr(0x48u, v9);
    else
      _mm_lfence();
    return KeIdleSpecCtrl(BugCheckParameter4, 0LL, &v40, v10);
  }
  *(_DWORD *)(v4 + 796) = 0;
  v12 = *(_QWORD *)(BugCheckParameter4 + 0x8000);
  if ( *(_BYTE *)(v12 + 5) )
  {
    v13 = *(_QWORD *)(BugCheckParameter4 + 32784);
    *(_QWORD *)(BugCheckParameter4 + 32784) = 0LL;
    v14 = *(unsigned int *)(v12 + 20);
    *(_QWORD *)(BugCheckParameter4 + 32792) += v13;
    v15 = *(_QWORD *)(BugCheckParameter4 + 32776) + 1000 * v14;
    *(_QWORD *)(v15 + 40) += v13;
    if ( *(_DWORD *)(v12 + 68) == 3 )
    {
      if ( *(int *)(v12 + 64) >= 0 )
      {
        ++*(_DWORD *)(v15 + 56);
        v16 = (unsigned __int64 *)&PpmIdleIntervalLimits;
        v17 = 0;
        while ( v13 >= *v16 )
        {
          if ( v13 < v16[3] )
          {
            ++v17;
            break;
          }
          v16 += 6;
          v17 += 2;
          if ( v17 >= 0x1A )
            goto LABEL_20;
        }
        if ( v17 >= 0x1A )
        {
LABEL_20:
          ++*(_DWORD *)(v15 + 60);
          goto LABEL_21;
        }
        v24 = 32LL * v17;
        *(_QWORD *)(v24 + v15 + 208) += v13;
        ++*(_DWORD *)(v24 + v15 + 232);
        if ( v13 < *(_QWORD *)(v24 + v15 + 216) )
          *(_QWORD *)(v24 + v15 + 216) = v13;
        if ( v13 > *(_QWORD *)(v24 + v15 + 224) )
          *(_QWORD *)(v24 + v15 + 224) = v13;
LABEL_21:
        if ( v13 < *(_QWORD *)(v15 + 64) )
          *(_QWORD *)(v15 + 64) = v13;
        if ( v13 > *(_QWORD *)(v15 + 72) )
          *(_QWORD *)(v15 + 72) = v13;
      }
      else
      {
        ++*(_DWORD *)(v15 + 52);
      }
    }
    else
    {
      ++*(_DWORD *)(v15 + 48);
    }
  }
  *(_DWORD *)(v12 + 64) = 0;
  *(_DWORD *)(v12 + 68) = 3;
  *(_BYTE *)(v12 + 5) = 0;
  *(_BYTE *)(v4 + 5) = 1;
  v48[0] = 1310721;
  memset(&v48[1], 0, 0xA4uLL);
  *(_WORD *)(v4 + 48) = 0;
  if ( *(_BYTE *)v4 )
  {
    if ( PpmIdleVetoBias && *(_BYTE *)(v4 + 8) )
      return ((__int64 (*)(void))HalProcessorIdle)();
    PpmIdleSelectStates(
      BugCheckParameter4,
      (unsigned int)&v43,
      (unsigned int)&v45,
      (unsigned int)v38,
      (__int64)&v39,
      (__int64)&v42,
      (__int64)&v47,
      (__int64)&v37);
    v18 = v39;
  }
  else
  {
    result = PpmIdlePrepare(
               BugCheckParameter4,
               (unsigned int)v38,
               (unsigned int)&v43,
               (unsigned int)&v45,
               (__int64)&v46,
               (__int64)v48);
    v18 = result;
    v39 = result;
    if ( (_DWORD)result == -2 )
    {
      v41 = 0;
      v19 = KeIdleSpecCtrl(BugCheckParameter4, 1LL, &v41, 0LL);
      v21 = v41;
      v22 = v19;
      if ( (_WORD)v41 )
      {
        v20 = 0LL;
        __writemsr(0x48u, 0LL);
      }
      v23 = HIWORD(v41);
      if ( HIWORD(v41) )
        KeExecuteVerw(v23, v20);
      HalProcessorIdle(v23, v20);
      if ( v21 )
        __writemsr(0x48u, v21);
      else
        _mm_lfence();
      return KeIdleSpecCtrl(BugCheckParameter4, 0LL, &v41, v22);
    }
    if ( (_DWORD)result == -1 )
    {
      ++*(_DWORD *)(v5 + 12);
      return result;
    }
    v25 = *(_DWORD *)(v4 + 560);
    v42 = v25;
    if ( v25 != -1 )
    {
      **(_DWORD **)(v4 + 808) = v25;
      *(_DWORD *)(v4 + 796) = 1;
    }
    v6 = v46;
    v37 = *(_BYTE *)(248LL * (unsigned int)result + v4 + 1058) == 0;
  }
  v26 = *(_DWORD *)(v4 + 16);
  if ( v18 != v26 )
  {
    *(_DWORD *)(v4 + 24) = v26;
    *(_DWORD *)(v4 + 16) = v18;
    PpmEventIdleStateChange(v18, v26);
  }
  if ( (*(_DWORD *)(v5 + 4))++ == -1 )
    PpmResetProcessorIdleAccounting(v5, v43);
  v28 = 0;
  v29 = *(_BYTE *)(248LL * v18 + v4 + 1057);
  v30 = v48[0];
  v31 = *(_QWORD *)(BugCheckParameter4 + 0x8000);
  if ( LOWORD(v48[0]) )
  {
    while ( !*(_QWORD *)&v48[2 * v28 + 2] )
    {
      if ( ++v28 >= LOWORD(v48[0]) )
        goto LABEL_62;
    }
    *(_WORD *)(v31 + 48) |= 0x400u;
    if ( KiSerializeTimerExpiration && v6 )
      PpmSetPlatformIdleDurationHint(v6);
    v30 = v48[0];
  }
LABEL_62:
  if ( !(_BYTE)KiDynamicTickDisableReason
    && !PpmIpiLastClockOwnerDisable
    && !*(_BYTE *)(BugCheckParameter4 + 33)
    && *(_BYTE *)(KiProcessorBlock[(unsigned int)KiClockTimerOwner] + 33)
    && !v29 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v44 = 0;
    ParentNode = CurrentPrcb->ParentNode;
    v34 = ParentNode->Affinity.Reserved[0];
    if ( (ParentNode->DeepIdleSet & ~(1LL << CurrentPrcb->GroupIndex)) == (ParentNode->Affinity.Mask & ~(1LL << (KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number] & 0x3F))) )
    {
      while ( 1 )
      {
        NextNode = MmGetNextNode(v34, &v44);
        if ( NextNode == -1 )
          break;
        if ( *(_QWORD *)(KeNodeBlock[NextNode] + 64) != *(_QWORD *)(KeNodeBlock[NextNode] + 136) )
          goto LABEL_73;
      }
      if ( ((*(_QWORD *)&v48[2 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v36] >> 6) + 2] >> (KiProcessorIndexToNumberMappingTable[v36] & 0x3F)) & 1) == 0 )
      {
        KeAddProcessorAffinityEx(v48, (unsigned int)v36);
        *(_WORD *)(v31 + 48) |= 0x800u;
      }
    }
LABEL_73:
    v30 = v48[0];
  }
  if ( v30 )
  {
    while ( !*(_QWORD *)&v48[2 * v1 + 2] )
    {
      if ( ++v1 >= v30 )
        return PpmIdleExecuteTransition(BugCheckParameter4, v38[0], v43, v45, v37);
    }
    HalRequestIpi(0, (__int64)v48);
  }
  return PpmIdleExecuteTransition(BugCheckParameter4, v38[0], v43, v45, v37);
}
