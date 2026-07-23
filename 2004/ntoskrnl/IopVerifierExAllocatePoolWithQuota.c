/*
 * XREFs of IopVerifierExAllocatePoolWithQuota @ 0x14028F420
 * Callers:
 *     IopXxxControlFile @ 0x140674CF0 (IopXxxControlFile.c)
 *     IopTrackLink @ 0x1406D3810 (IopTrackLink.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14088F32C (IopSetEaOrQuotaInformationFile.c)
 *     IopValidateJunctionTarget @ 0x14088FE34 (IopValidateJunctionTarget.c)
 * Callees:
 *     ExGetHeapFromVA @ 0x14025327C (ExGetHeapFromVA.c)
 *     ExAllocatePoolWithTagPriority @ 0x14028C680 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     PspExpandQuota @ 0x14034CA78 (PspExpandQuota.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403CA72C (ExpHpIsSpecialPoolHeap.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x14055F888 (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall IopVerifierExAllocatePoolWithQuota(POOL_TYPE a1, SIZE_T a2)
{
  unsigned int v2; // ebx
  int v3; // edi
  POOL_TYPE v4; // ecx
  POOL_TYPE v5; // ebx
  PEPROCESS Process; // rbp
  ULONG_PTR PoolWithTag; // rax
  _WORD *v8; // r14
  __int16 v9; // cx
  unsigned __int64 v10; // r15
  __int64 v11; // rdx
  char *v12; // rdi
  __int64 v13; // r12
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r10
  __int64 v18; // rcx
  char v19; // r8
  unsigned __int64 *v20; // rbx
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  bool v24; // zf
  signed __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  signed __int64 BugCheckParameter4; // rsi
  _WORD *result; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  __int64 HeapFromVA; // rax
  __int64 v36; // rdx
  NTSTATUS v37; // ebx
  signed __int32 v38[8]; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v39; // [rsp+30h] [rbp-58h] BYREF
  __int64 v40; // [rsp+38h] [rbp-50h]
  __int64 v41; // [rsp+40h] [rbp-48h]
  char v42; // [rsp+A0h] [rbp+18h]
  int v43; // [rsp+A8h] [rbp+20h]

  v2 = a1;
  if ( !ViVerifierEnabled
    || (VfRuleClasses & 0xFFAFFFFF) == 0 && (VfRuleClasses & 0x200000000LL) == 0 && (VfRuleClasses & 0x400000000LL) == 0 )
  {
    v43 = 1;
    v3 = 1;
    if ( (a1 & 8) != 0 )
    {
      v3 = 0;
      v43 = 0;
      v2 = a1 & 0xFFFFFFF7;
    }
    v4 = v2;
    v5 = v2 + 8;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process == PsInitialSystemProcess )
      v5 = v4;
    PoolWithTag = (ULONG_PTR)ExAllocatePoolWithTag(v5, a2, 0x20206F49u);
    v8 = (_WORD *)PoolWithTag;
    if ( (PoolWithTag & 0xFFF) != 0 )
    {
      if ( !ExpSpecialAllocations
        || (HeapFromVA = ExGetHeapFromVA(PoolWithTag), !(unsigned int)ExpHpIsSpecialPoolHeap(HeapFromVA, v36)) )
      {
        if ( (v5 & 8) != 0 )
        {
          v9 = *(v8 - 7);
          v10 = (unsigned __int64)(v8 - 8);
          v11 = ExpPoolQuotaCookie;
          v12 = 0LL;
          v13 = (unsigned __int8)v9;
          *((_QWORD *)v8 - 1) = (unsigned __int64)(v8 - 8) ^ ExpPoolQuotaCookie;
          if ( (v9 & 0x400) != 0 )
          {
            v12 = (char *)(v10 - 16LL * (unsigned __int8)*(_WORD *)v10);
            v13 = (unsigned __int8)*((_WORD *)v12 + 1);
            *((_QWORD *)v12 + 1) = (unsigned __int64)v12 ^ v11;
          }
          v14 = 16 * v13;
          if ( Process == PsInitialSystemProcess )
          {
LABEL_21:
            v29 = ExpPoolQuotaCookie;
            *(_QWORD *)(v10 + 8) = (unsigned __int64)Process ^ v10 ^ ExpPoolQuotaCookie;
            if ( v12 )
              *((_QWORD *)v12 + 1) = (unsigned __int64)Process ^ (unsigned __int64)v12 ^ v29;
            if ( ObpTraceFlags )
              ObpPushStackInfo((_DWORD)Process - 48);
            BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)&Process[-1].EndPadding[2]);
            if ( BugCheckParameter4 <= 1 )
              KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Process, 0x10uLL, BugCheckParameter4);
          }
          else
          {
            v15 = Process[1].AffinityPadding[7];
            v16 = v5 & 1;
            v17 = (unsigned int)v16;
            v40 = (unsigned int)v16;
            v18 = 8 * v16;
            v19 = PspResourceFlags[8 * v16];
            v20 = (unsigned __int64 *)(v15 + (v16 << 7));
            v42 = PspResourceFlags[v18];
            v41 = v18;
            _m_prefetchw(v20);
            v21 = *v20;
            _InterlockedOr(v38, 0);
LABEL_13:
            v22 = v20[8];
LABEL_14:
            v39 = v22;
            while ( 1 )
            {
              v23 = v14 + v21;
              if ( v14 + v21 < v21 )
                break;
              if ( v23 <= v22 )
              {
                v25 = _InterlockedCompareExchange64((volatile signed __int64 *)v20, v23, v21);
                v24 = v21 == v25;
                v21 = v25;
                if ( !v24 )
                  goto LABEL_13;
                _m_prefetchw(v20 + 1);
                v26 = v20[1];
                if ( v23 > v26 )
                {
                  do
                  {
                    v33 = v26;
                    v26 = _InterlockedCompareExchange64((volatile signed __int64 *)v20 + 1, v23, v26);
                  }
                  while ( v26 != v33 && v23 > v26 );
                }
                if ( (v19 & 4) != 0 )
                {
                  v27 = v14
                      + _InterlockedExchangeAdd64(
                          (volatile signed __int64 *)&Process[1].ThreadListHead.Blink + v17,
                          v14);
                  _m_prefetchw(&Process[1].DeepFreezeStartTime + v17);
                  v28 = *(&Process[1].DeepFreezeStartTime + v17);
                  if ( v27 > v28 )
                  {
                    do
                    {
                      v32 = v28;
                      v28 = _InterlockedCompareExchange64(
                              (volatile signed __int64 *)&Process[1].DeepFreezeStartTime + v17,
                              v27,
                              v28);
                    }
                    while ( v28 != v32 && v27 > v28 );
                  }
                }
                goto LABEL_21;
              }
              if ( (v19 & 1) == 0 || !v20[10] )
                break;
              v34 = _InterlockedExchange64((volatile __int64 *)v20 + 9, 0LL);
              if ( v34 )
              {
                v22 = v34 + _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 8, v34);
                goto LABEL_14;
              }
              if ( !(unsigned __int8)PspExpandQuota(v17, (_DWORD)v20, v21, v14, (__int64)&v39) )
                break;
              v22 = v39;
              v17 = v40;
              v19 = v42;
            }
            v37 = *(_DWORD *)&PspResourceFlags[v41 + 4];
            if ( v37 >= 0 )
              goto LABEL_21;
            ExFreePoolWithTag(v8, 0x20206F49u);
            if ( v43 )
              RtlRaiseStatus(v37);
            return 0LL;
          }
        }
      }
    }
    else if ( !PoolWithTag && v3 )
    {
LABEL_55:
      RtlRaiseStatus(-1073741670);
    }
    return v8;
  }
  result = ExAllocatePoolWithTagPriority(a1, a2, 0x20206F49u, (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  if ( !result )
    goto LABEL_55;
  return result;
}
