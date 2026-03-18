/*
 * XREFs of MiUpdateOldPteWorker @ 0x14053AC28
 * Callers:
 *     MiUpdateOldPagesEPTCallback @ 0x14053A980 (MiUpdateOldPagesEPTCallback.c)
 *     MiUpdateOldPte @ 0x14053AAB0 (MiUpdateOldPte.c)
 * Callees:
 *     MiLockSetPfnPriority @ 0x14023AE9C (MiLockSetPfnPriority.c)
 *     MiGetPfnPriority @ 0x140279DB0 (MiGetPfnPriority.c)
 *     MiEmptyWorkingSetHelper @ 0x140310234 (MiEmptyWorkingSetHelper.c)
 */

__int64 __fastcall MiUpdateOldPteWorker(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  _DWORD *v6; // r9
  unsigned __int64 v7; // r11
  unsigned int v8; // edx

  result = MiGetPfnPriority(a3);
  v8 = v6[1];
  if ( (*v6 & 2) != 0 )
  {
    if ( v8 == 8 || (_DWORD)result == v8 )
      return MiEmptyWorkingSetHelper(a1, v7, (__int64)(v6 + 6), 0);
  }
  else if ( (unsigned int)result > v8 )
  {
    return MiLockSetPfnPriority(v5, v8);
  }
  return result;
}
