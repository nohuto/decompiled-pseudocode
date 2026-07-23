/*
 * XREFs of _RtlpHpVaMgrCtxAllocatorReference@12 @ 0x4B37AB82
 * Callers:
 *     _RtlpHpRegisterEnvironment@8 @ 0x4B3798A7 (_RtlpHpRegisterEnvironment@8.c)
 *     _RtlpHpVaMgrCtxStart@20 @ 0x4B37AE19 (_RtlpHpVaMgrCtxStart@20.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpVaMgrCtxAllocatorFind@16 @ 0x4B37AB17 (_RtlpHpVaMgrCtxAllocatorFind@16.c)
 *     _RtlpHpVaMgrStart@20 @ 0x4B37B3A5 (_RtlpHpVaMgrStart@20.c)
 */

int __fastcall RtlpHpVaMgrCtxAllocatorReference(_RTL_SRWLOCK *a1, int a2, int a3)
{
  _RTL_SRWLOCK *v5; // ebx
  int v6; // eax
  int v7; // esi
  __int16 v8; // ax
  int v9; // ecx
  int v12; // [esp+10h] [ebp-4h] BYREF

  v5 = a1 + 13;
  RtlAcquireSRWLockExclusive(a1 + 13);
  v6 = RtlpHpVaMgrCtxAllocatorFind((int)a1, a2, 2, &v12);
  v7 = v6;
  if ( v6 )
  {
    v8 = *(_WORD *)(v6 + 22);
    if ( v8 == -1 )
    {
LABEL_3:
      v7 = 0;
      goto LABEL_8;
    }
    *(_WORD *)(v7 + 22) = v8 + 1;
  }
  else
  {
    v9 = v12;
    if ( v12 )
    {
      v7 = v12;
      v12 = 28;
      if ( (int)RtlpHpVaMgrStart(a2, v9, (v9 - (int)a1 - 60) / 28) < 0 )
        goto LABEL_3;
      ++a1[14].Value;
    }
  }
LABEL_8:
  RtlReleaseSRWLockExclusive(v5);
  if ( v7 )
    return *(unsigned __int8 *)(v7 + 24);
  else
    return -1;
}
