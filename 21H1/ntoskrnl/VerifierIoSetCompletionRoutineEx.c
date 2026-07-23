/*
 * XREFs of VerifierIoSetCompletionRoutineEx @ 0x1409C6710
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilFreePoolCheckIRQL @ 0x14036F910 (VfUtilFreePoolCheckIRQL.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D15B0 (VeAllocatePoolWithTagPriority.c)
 *     VfFaultsInjectResourceFailure @ 0x1409D97BC (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierIoSetCompletionRoutineEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7)
{
  int v12; // ebx
  _OWORD *PoolWithTagPriority; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)VfFaultsInjectResourceFailure(0LL) )
    return 3221225626LL;
  v12 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, char, char, char))pXdvIoSetCompletionRoutineEx)(
          a1,
          a2,
          a3,
          a4,
          a5,
          a6,
          a7);
  if ( v12 >= 0 )
  {
    PoolWithTagPriority = (_OWORD *)VeAllocatePoolWithTagPriority(
                                      (POOL_TYPE)640,
                                      0x20uLL,
                                      0x73556656u,
                                      HighPoolPriority,
                                      retaddr);
    if ( PoolWithTagPriority )
    {
      v14 = *(_QWORD *)(a2 + 184);
      v15 = *(_QWORD *)(v14 - 8);
      *PoolWithTagPriority = *(_OWORD *)v15;
      PoolWithTagPriority[1] = *(_OWORD *)(v15 + 16);
      *(_QWORD *)(v14 - 8) = PoolWithTagPriority;
      VfUtilFreePoolCheckIRQL((_SLIST_ENTRY *)v15);
    }
  }
  return (unsigned int)v12;
}
