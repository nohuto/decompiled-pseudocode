/*
 * XREFs of _TppAdjustRunningThreadGoalWithLock@4 @ 0x4B384257
 * Callers:
 *     _TppGetCurrentThreadNumaNode@12 @ 0x4B2B49C9 (_TppGetCurrentThreadNumaNode@12.c)
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 *     _TppWorkerFindTask@12 @ 0x4B2B6930 (_TppWorkerFindTask@12.c)
 *     _TpPostTask@16 @ 0x4B2C1C3F (_TpPostTask@16.c)
 *     _TpStartAsyncIoOperation@4 @ 0x4B2E70A0 (_TpStartAsyncIoOperation@4.c)
 *     _TpSetPoolThreadCpuSets@12 @ 0x4B383E50 (_TpSetPoolThreadCpuSets@12.c)
 * Callees:
 *     _TppPoolUpdateNodeRelation@4 @ 0x4B2B36E2 (_TppPoolUpdateNodeRelation@4.c)
 *     _ZwSetInformationWorkerFactory@16 @ 0x4B2F4370 (_ZwSetInformationWorkerFactory@16.c)
 */

int __thiscall TppAdjustRunningThreadGoalWithLock(int this)
{
  int result; // eax
  unsigned int v2; // edi
  int v3; // ecx
  __int16 v4; // di
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // esi
  signed __int64 v8; // rax
  int v9; // edi
  void *v10; // [esp-18h] [ebp-38h]
  int WorkerFactoryInformation; // [esp+8h] [ebp-18h] BYREF
  unsigned int v13; // [esp+Ch] [ebp-14h]
  volatile signed __int64 *v14; // [esp+10h] [ebp-10h]
  unsigned int v15; // [esp+14h] [ebp-Ch]
  int v16; // [esp+18h] [ebp-8h]
  unsigned int v17; // [esp+1Ch] [ebp-4h]

  result = this;
  if ( !this || (v2 = *(_DWORD *)(this + 272), (v15 = v2) == 0) )
  {
    v2 = MEMORY[0x7FFE03C0];
    v15 = MEMORY[0x7FFE03C0];
  }
  v3 = *(_DWORD *)(this + 256);
  if ( v2 != v3 )
  {
    *(_DWORD *)(result + 256) = v2;
    v16 = v2 - v3;
    v4 = v2 - v3;
    v14 = (volatile signed __int64 *)(result + 8);
    v5 = *(_DWORD *)(result + 8);
    v6 = *(_DWORD *)(result + 12);
    v17 = v6;
    do
    {
      v7 = v5;
      v13 = v6;
      v8 = _InterlockedCompareExchange64(
             v14,
             __SPAIR64__(v17, v5 ^ (unsigned __int16)(v5 ^ (v5 + v4))),
             __SPAIR64__(v6, v5));
      v4 = v16;
      v5 = v8;
      v6 = HIDWORD(v8);
      v17 = HIDWORD(v8);
    }
    while ( __PAIR64__(v5, HIDWORD(v8)) != __PAIR64__(v7, v13) );
    if ( v15 < 4 )
      v9 = 4;
    else
      v9 = v15 + 1;
    v10 = *(void **)(this + 36);
    WorkerFactoryInformation = v9;
    ZwSetInformationWorkerFactory(v10, WorkerFactoryAdjustThreadGoal, &WorkerFactoryInformation, 4u);
    return TppPoolUpdateNodeRelation((void **)this);
  }
  return result;
}
