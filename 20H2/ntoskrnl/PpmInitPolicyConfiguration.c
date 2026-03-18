/*
 * XREFs of PpmInitPolicyConfiguration @ 0x140A6E8E4
 * Callers:
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     PpmReleaseLock @ 0x140288880 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14033EE5C (PpmAcquireLock.c)
 *     qsort @ 0x1403D2150 (qsort.c)
 *     PpmBeginProfileAccumulation @ 0x1406E430C (PpmBeginProfileAccumulation.c)
 *     PpmEnableProfile @ 0x1407C1914 (PpmEnableProfile.c)
 */

LONG PpmInitPolicyConfiguration()
{
  char *v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rax
  _QWORD *v3; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v0 = (char *)&unk_140CFBB60;
  v1 = 53LL;
  do
  {
    v2 = 1LL << v0[4];
    if ( (v0[5] & 4) != 0 )
      *(_DWORD *)v0 >>= 1;
    v3 = &unk_140C1ED48;
    do
    {
      *v3 |= v2;
      v3 += 342;
    }
    while ( (__int64)v3 < (__int64)qword_140C202A8 );
    v0 += 40;
    --v1;
  }
  while ( v1 );
  qword_140C202C0 = -1LL;
  PpmDefaultProfile[0] = (__int64)PpmInfoDefaultProfileName;
  xmmword_140C1ED2C = (__int128)NullGuid;
  dword_140C1ED3C = 2;
  PpmEnableProfile((__int64)PpmDefaultProfile, (__int64)v0);
  PpmBeginProfileAccumulation((__int64)PpmDefaultProfile, MEMORY[0xFFFFF78000000008]);
  qsort(&PpmPolicyConfigTable, 0x35uLL, 0x28uLL, (int (__cdecl *)(const void *, const void *))PpmInfoConfigComparer);
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
