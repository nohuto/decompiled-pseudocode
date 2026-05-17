/*
 * XREFs of _RtlpHpLfhContextCompact@8 @ 0x4B37653C
 * Callers:
 *     _RtlpHpHeapCompact@8 @ 0x4B378991 (_RtlpHpHeapCompact@8.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlpHpLfhOwnerCompact@12 @ 0x4B376814 (_RtlpHpLfhOwnerCompact@12.c)
 */

int __fastcall RtlpHpLfhContextCompact(int a1, int a2)
{
  int *v3; // edi
  int v4; // ecx
  int result; // eax
  int v6; // [esp+Ch] [ebp-Ch]
  int v8; // [esp+14h] [ebp-4h]

  v6 = a2 & 1;
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockShared((volatile signed __int32 *)(a1 + 68));
  v3 = (int *)(a1 + 128);
  v4 = 129;
  v8 = 129;
  do
  {
    result = *v3;
    if ( (*v3 & 1) == 0 )
    {
      result = RtlpHpLfhOwnerCompact(a2 | 1);
      v4 = v8;
    }
    ++v3;
    v8 = --v4;
  }
  while ( v4 );
  if ( !v6 )
    return RtlReleaseSRWLockShared((volatile signed __int32 *)(a1 + 68));
  return result;
}
