/*
 * XREFs of MiUpdateOldPteWorker @ 0x14053C728
 * Callers:
 *     MiUpdateOldPagesEPTCallback @ 0x14053C480 (MiUpdateOldPagesEPTCallback.c)
 *     MiUpdateOldPte @ 0x14053C5B0 (MiUpdateOldPte.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402185D0 (MiGetPfnPriority.c)
 *     MiLockSetPfnPriority @ 0x14028BE6C (MiLockSetPfnPriority.c)
 *     MiEmptyWorkingSetHelper @ 0x140306534 (MiEmptyWorkingSetHelper.c)
 */

__int64 __fastcall MiUpdateOldPteWorker(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  _DWORD *v7; // r9
  __int64 v8; // r11
  __int64 v9; // rdx

  result = MiGetPfnPriority(a3);
  v9 = (unsigned int)v7[1];
  if ( (*v7 & 2) != 0 )
  {
    if ( (_DWORD)v9 == 8 || (_DWORD)result == (_DWORD)v9 )
      return MiEmptyWorkingSetHelper(a1, v8, (__int64)(v7 + 6), 0);
  }
  else if ( (unsigned int)result > (unsigned int)v9 )
  {
    return MiLockSetPfnPriority(v5, v9, v6, (__int64)v7);
  }
  return result;
}
