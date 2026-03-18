/*
 * XREFs of PpmPerfResizeHistory @ 0x1408E1A08
 * Callers:
 *     PpmRegisterPerfStates @ 0x1407A4940 (PpmRegisterPerfStates.c)
 *     PpmPerfResizeHistoryAll @ 0x1408E1AE4 (PpmPerfResizeHistoryAll.c)
 * Callees:
 *     PpmGetPerfPolicyClass @ 0x1402F47EC (PpmGetPerfPolicyClass.c)
 *     PpmPerfResetHistory @ 0x1403BF484 (PpmPerfResetHistory.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmPerfResizeHistory(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned __int8 PerfPolicyClass; // al
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  int v6; // edi
  int v7; // r14d
  SIZE_T v8; // rbp
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rdi

  v2 = 0;
  PerfPolicyClass = PpmGetPerfPolicyClass((_BYTE *)a1);
  v5 = *(_DWORD **)(v4 + 32);
  v6 = *((unsigned __int8 *)&PpmCurrentProfile[342 * dword_140C23ECC + 8] + PerfPolicyClass);
  v7 = v6;
  if ( v5 )
  {
    if ( *v5 == v6 )
      return v2;
    ExFreePoolWithTag(v5, 0x704D5050u);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  if ( (unsigned __int8)v6 > 1u )
  {
    v8 = (unsigned int)(10 * v6 + 32);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x704D5050u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v8);
      *v10 = v7;
      *(_QWORD *)(a1 + 32) = v10;
      PpmPerfResetHistory(a1);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
