/*
 * XREFs of EtwpUpdateGroupMasks @ 0x14078CD40
 * Callers:
 *     EtwpUpdateLoggerGroupMasks @ 0x14078CCAC (EtwpUpdateLoggerGroupMasks.c)
 *     EtwSetPerformanceTraceInformation @ 0x14093AD90 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     EtwpCheckSiloGroupMasks @ 0x1405A8C44 (EtwpCheckSiloGroupMasks.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     EtwpMapEnableFlags @ 0x140712098 (EtwpMapEnableFlags.c)
 *     EtwpCCSwapStop @ 0x14078CB3C (EtwpCCSwapStop.c)
 *     EtwpCCSwapStart @ 0x14078CBB4 (EtwpCCSwapStart.c)
 *     EtwpLogGroupMask @ 0x14078D008 (EtwpLogGroupMask.c)
 *     EtwpKernelTraceRundown @ 0x14078D08C (EtwpKernelTraceRundown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x14078DBD0 (EtwpLogAlwaysPresentRundown.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x14078E1F8 (EtwpUpdateGlobalGroupMasks.c)
 */

__int64 __fastcall EtwpUpdateGroupMasks(int *a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v4; // r15
  int v6; // eax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int updated; // ebp
  __int64 v13; // rax
  char *v14; // r9
  __int64 v15; // rbp
  __int64 v16; // r8
  int *v17; // rdx
  char *v18; // r10
  __int64 v19; // r11
  int v20; // ecx
  int v21; // eax
  char v22; // r12
  __int64 v23; // rax
  int v24; // r9d
  char v25; // al
  __int64 result; // rax
  int v27; // eax
  unsigned int v28; // [rsp+30h] [rbp-88h]
  _OWORD v29[2]; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v30[2]; // [rsp+58h] [rbp-60h] BYREF

  v2 = *a1;
  v4 = *((_QWORD *)a1 + 135);
  memset(v29, 0, sizeof(v29));
  memset(v30, 0, sizeof(v30));
  EtwpMapEnableFlags(a2, 1);
  if ( a2 )
  {
    v6 = *(_DWORD *)(a2 + 4);
    if ( (v6 & 1) != 0 || (v6 & 0x10) != 0 )
      *(_DWORD *)a2 |= 0x200u;
  }
  if ( *((_QWORD *)a1 + 135) == EtwpHostSiloState || (result = EtwpCheckSiloGroupMasks((char *)a2), (int)result >= 0) )
  {
    if ( a2
      && (*(_DWORD *)(a2 + 4) & 0x402) != 0
      && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
    {
      return 3221225569LL;
    }
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 176), 0LL);
    v7 = 32LL * *((unsigned __int8 *)a1 + 834);
    v28 = *((unsigned __int8 *)a1 + 834);
    v8 = v7 + *((_QWORD *)a1 + 135) + 4260LL;
    if ( !v8
      || (v9 = *(_DWORD *)(v8 + 4), (v9 & 4) == 0)
      || (v9 & 0x100) == 0
      || a2 && (v27 = *(_DWORD *)(a2 + 4), (v27 & 4) != 0) && (v27 & 0x100) != 0 )
    {
      if ( a2 )
      {
        v10 = *(_DWORD *)(a2 + 4);
        if ( (v10 & 4) != 0 && (v10 & 0x100) != 0 )
        {
          if ( !v8 || (v11 = *(_DWORD *)(v8 + 4), (v11 & 4) == 0) || (v11 & 0x100) == 0 )
          {
            updated = EtwpCCSwapStart(a1[54]);
            if ( updated < 0 )
            {
LABEL_23:
              v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 88, 0xFFFFFFFFFFFFFFFFuLL);
              if ( (v25 & 2) != 0 && (v25 & 4) == 0 )
                ExfTryToWakePushLock((volatile signed __int64 *)a1 + 88);
              KeAbPostRelease((ULONG_PTR)(a1 + 176));
              return (unsigned int)updated;
            }
          }
        }
      }
    }
    else
    {
      EtwpCCSwapStop(a1[54], 1);
    }
    v13 = *((_QWORD *)a1 + 135);
    v14 = (char *)&v29[v7 / 0xFFFFFFFFFFFFFFF0uLL] - v13;
    v15 = v13 + v7;
    v16 = a2 - v7 - v13;
    v17 = (int *)(v13 + v7 + 4260);
    v18 = (char *)&v30[v7 / 0xFFFFFFFFFFFFFFF0uLL] - v13;
    v19 = 8LL;
    do
    {
      v20 = *(int *)((char *)v17 + v16 - 4260);
      *(int *)((char *)v17 + (_QWORD)v14 - 4260) = *v17 & ~v20;
      v21 = *v17++;
      *(int *)((char *)v17 + (_QWORD)v18 - 4264) = v20 & ~v21;
      --v19;
    }
    while ( v19 );
    EtwpLogGroupMask(v4, v2, v15 + 4260, 32LL);
    if ( (a1[3] & 0x400) != 0 )
    {
      v22 = 1;
    }
    else
    {
      v22 = 0;
      EtwpKernelTraceRundown((unsigned int)v29, v4, v2, 0, 0LL, 0);
    }
    v23 = *((_QWORD *)a1 + 135);
    *(_OWORD *)(v23 + v7 + 4260) = *(_OWORD *)a2;
    *(_OWORD *)(v23 + v7 + 4276) = *(_OWORD *)(a2 + 16);
    updated = EtwpUpdateGlobalGroupMasks(v4, v2, v28);
    if ( updated >= 0 )
    {
      EtwpLogGroupMask(v4, v2, a2, 5LL);
      if ( !v22 || (a1[208] & 2) != 0 )
      {
        LOBYTE(v24) = 1;
        EtwpKernelTraceRundown((unsigned int)v30, v4, v2, v24, 0LL, 0);
      }
    }
    EtwpLogAlwaysPresentRundown(v4, v2);
    goto LABEL_23;
  }
  return result;
}
