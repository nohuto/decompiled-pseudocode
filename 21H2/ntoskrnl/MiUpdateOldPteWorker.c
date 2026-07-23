/*
 * XREFs of MiUpdateOldPteWorker @ 0x14053C968
 * Callers:
 *     MiUpdateOldPagesEPTCallback @ 0x14053C6C0 (MiUpdateOldPagesEPTCallback.c)
 *     MiUpdateOldPte @ 0x14053C7F0 (MiUpdateOldPte.c)
 * Callees:
 *     MiLockSetPfnPriority @ 0x14020900C (MiLockSetPfnPriority.c)
 *     MiGetPfnPriority @ 0x1402BCED0 (MiGetPfnPriority.c)
 *     MiEmptyWorkingSetHelper @ 0x140311284 (MiEmptyWorkingSetHelper.c)
 */

__int64 __fastcall MiUpdateOldPteWorker(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  _DWORD *v6; // r9
  __int64 v7; // r11
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
