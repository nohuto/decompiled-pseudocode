/*
 * XREFs of _RtlpHpLfhBucketInitialize@12 @ 0x4B376136
 * Callers:
 *     _RtlpHpLfhBucketActivate@8 @ 0x4B375E85 (_RtlpHpLfhBucketActivate@8.c)
 * Callees:
 *     __alldiv @ 0x4B2F6300 (__alldiv.c)
 *     __allshl @ 0x4B2F65F0 (__allshl.c)
 *     _RtlpHpLfhOwnerInitialize@16 @ 0x4B376895 (_RtlpHpLfhOwnerInitialize@16.c)
 */

int __thiscall RtlpHpLfhBucketInitialize(int this, int a2)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rax
  unsigned int v6; // ebx

  RtlpHpLfhOwnerInitialize(-1, this);
  v3 = *(unsigned __int8 *)(this + 1);
  *(_DWORD *)(this + 44) = 0;
  v4 = (unsigned __int16)RtlpBucketBlockSizes[v3];
  if ( ((v4 - 1) & v4) != 0 )
  {
    _BitScanForward(&v6, *(unsigned __int16 *)(a2 + 32));
    LOBYTE(v6) = v6 + 18;
    v5 = ((unsigned __int16)RtlpBucketBlockSizes[v3] + (1LL << v6) - 1) / (unsigned __int16)RtlpBucketBlockSizes[v3];
    *(_BYTE *)(this + 40) = v6;
    *(_DWORD *)(this + 36) = v5;
  }
  else
  {
    _BitScanForward((unsigned int *)&v5, v4);
    *(_BYTE *)(this + 40) = v5;
  }
  return v5;
}
