/*
 * XREFs of _RtlpHpVaMgrCtxAllocatorDereference@8 @ 0x4B37AAD7
 * Callers:
 *     _RtlpHpRegisterEnvironment@8 @ 0x4B3798A7 (_RtlpHpRegisterEnvironment@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

void __fastcall RtlpHpVaMgrCtxAllocatorDereference(_RTL_SRWLOCK *a1, _DWORD *a2)
{
  _RTL_SRWLOCK *v3; // esi

  v3 = &a1[7 * *a2];
  RtlAcquireSRWLockExclusive(a1 + 13);
  if ( HIWORD(v3[20].Value)-- == 1 )
  {
    memset(&v3[15], 0, 0x1Cu);
    v3[16].Value = 0;
    v3[17].Value = 0;
    --a1[14].Value;
  }
  RtlReleaseSRWLockExclusive(a1 + 13);
}
