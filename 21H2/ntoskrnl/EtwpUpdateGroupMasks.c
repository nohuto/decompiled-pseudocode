/*
 * XREFs of EtwpUpdateGroupMasks @ 0x1407972F0
 * Callers:
 *     EtwpUpdateLoggerGroupMasks @ 0x14079725C (EtwpUpdateLoggerGroupMasks.c)
 *     EtwSetPerformanceTraceInformation @ 0x140938730 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     EtwpCheckSiloGroupMasks @ 0x1405AA8A4 (EtwpCheckSiloGroupMasks.c)
 *     EtwpMapEnableFlags @ 0x14061F870 (EtwpMapEnableFlags.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     EtwpLogGroupMask @ 0x1407975B8 (EtwpLogGroupMask.c)
 *     EtwpKernelTraceRundown @ 0x14079763C (EtwpKernelTraceRundown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x140798180 (EtwpLogAlwaysPresentRundown.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1407981D0 (EtwpUpdateGlobalGroupMasks.c)
 *     EtwpCCSwapStart @ 0x1407989B0 (EtwpCCSwapStart.c)
 *     EtwpCCSwapStop @ 0x140798A70 (EtwpCCSwapStop.c)
 */

__int64 __fastcall EtwpUpdateGroupMasks(int *a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v4; // r15
  int v6; // eax
  __int64 v7; // rdx
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int updated; // ebp
  __int64 v14; // rax
  char *v15; // r9
  __int64 v16; // rbp
  __int64 v17; // r8
  int *v18; // rdx
  char *v19; // r10
  __int64 v20; // r11
  int v21; // ecx
  int v22; // eax
  char v23; // r12
  __int64 v24; // rax
  int v25; // r9d
  char v26; // al
  __int64 result; // rax
  int v28; // eax
  unsigned int v29; // [rsp+30h] [rbp-88h]
  _OWORD v30[2]; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v31[2]; // [rsp+58h] [rbp-60h] BYREF

  v2 = *a1;
  v4 = *((_QWORD *)a1 + 135);
  memset(v30, 0, sizeof(v30));
  memset(v31, 0, sizeof(v31));
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
    v7 = 256LL;
    v8 = 32LL * *((unsigned __int8 *)a1 + 834);
    v29 = *((unsigned __int8 *)a1 + 834);
    v9 = v8 + *((_QWORD *)a1 + 135) + 4260LL;
    if ( !v9
      || (v10 = *(_DWORD *)(v9 + 4), (v10 & 4) == 0)
      || (v10 & 0x100) == 0
      || a2 && (v28 = *(_DWORD *)(a2 + 4), (v28 & 4) != 0) && (v28 & 0x100) != 0 )
    {
      if ( a2 )
      {
        v11 = *(_DWORD *)(a2 + 4);
        if ( (v11 & 4) != 0 && (v11 & 0x100) != 0 )
        {
          if ( !v9 || (v12 = *(_DWORD *)(v9 + 4), (v12 & 4) == 0) || (v12 & 0x100) == 0 )
          {
            updated = EtwpCCSwapStart((unsigned int)a1[54], 256LL);
            if ( updated < 0 )
            {
LABEL_23:
              v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 88, 0xFFFFFFFFFFFFFFFFuLL);
              if ( (v26 & 2) != 0 && (v26 & 4) == 0 )
                ExfTryToWakePushLock(a1 + 176);
              KeAbPostRelease((ULONG_PTR)(a1 + 176));
              return (unsigned int)updated;
            }
          }
        }
      }
    }
    else
    {
      LOBYTE(v7) = 1;
      EtwpCCSwapStop((unsigned int)a1[54], v7);
    }
    v14 = *((_QWORD *)a1 + 135);
    v15 = (char *)&v30[v8 / 0xFFFFFFFFFFFFFFF0uLL] - v14;
    v16 = v14 + v8;
    v17 = a2 - v8 - v14;
    v18 = (int *)(v14 + v8 + 4260);
    v19 = (char *)&v31[v8 / 0xFFFFFFFFFFFFFFF0uLL] - v14;
    v20 = 8LL;
    do
    {
      v21 = *(int *)((char *)v18 + v17 - 4260);
      *(int *)((char *)v18 + (_QWORD)v15 - 4260) = *v18 & ~v21;
      v22 = *v18++;
      *(int *)((char *)v18 + (_QWORD)v19 - 4264) = v21 & ~v22;
      --v20;
    }
    while ( v20 );
    EtwpLogGroupMask(v4, v2, v16 + 4260, 32LL);
    if ( (a1[3] & 0x400) != 0 )
    {
      v23 = 1;
    }
    else
    {
      v23 = 0;
      EtwpKernelTraceRundown((unsigned int)v30, v4, v2, 0, 0LL, 0);
    }
    v24 = *((_QWORD *)a1 + 135);
    *(_OWORD *)(v24 + v8 + 4260) = *(_OWORD *)a2;
    *(_OWORD *)(v24 + v8 + 4276) = *(_OWORD *)(a2 + 16);
    updated = EtwpUpdateGlobalGroupMasks(v4, v2, v29);
    if ( updated >= 0 )
    {
      EtwpLogGroupMask(v4, v2, a2, 5LL);
      if ( !v23 || (a1[208] & 2) != 0 )
      {
        LOBYTE(v25) = 1;
        EtwpKernelTraceRundown((unsigned int)v31, v4, v2, v25, 0LL, 0);
      }
    }
    EtwpLogAlwaysPresentRundown(v4, v2);
    goto LABEL_23;
  }
  return result;
}
