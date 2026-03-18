/*
 * XREFs of _AllocateW32Thread@4 @ 0x46666
 * Callers:
 *     _W32pThreadCallout@8 @ 0x464C8 (_W32pThreadCallout@8.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __thiscall AllocateW32Thread(void *this)
{
  _DWORD *PoolWithTag; // eax
  _DWORD *v3; // esi
  void *v4; // eax
  void *v5; // edi

  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x38u, 0x6E747355u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38u);
    v4 = (void *)Win32AllocPoolWithQuota(_W32ThreadSize, 1769239381);
    v5 = v4;
    if ( v4 )
    {
      memset(v4, 0, _W32ThreadSize);
      *(_DWORD *)v5 = this;
      *v3 = v5;
      PsSetThreadWin32Thread(this, v3, 0);
      ObfReferenceObject(*(PVOID *)v5);
      _InterlockedIncrement((volatile signed __int32 *)v5 + 1);
      return 0;
    }
    ExFreePoolWithTag(v3, 0);
  }
  return -1073741801;
}
