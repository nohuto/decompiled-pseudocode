/*
 * XREFs of RtlpHeapTrkFindStack @ 0x4B3647C2
 * Callers:
 *     _RtlpHeapTrkLeakCallback@24 @ 0x4B364B50 (_RtlpHeapTrkLeakCallback@24.c)
 * Callees:
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     RtlpHeapTrkHash @ 0x4B364861 (RtlpHeapTrkHash.c)
 */

int __thiscall RtlpHeapTrkFindStack(void *this)
{
  int v2; // eax
  int v3; // edi
  _DWORD *v5; // ecx
  _DWORD *i; // eax
  int v7; // esi

  v2 = RtlpHeapTrkHash();
  v3 = v2 & 0xF;
  if ( _interlockedbittestandset(*(volatile signed __int32 **)(dword_4B3A6D84 + 4 * v3), 0) )
    return 0;
  v5 = (_DWORD *)(dword_4B3A6C54 + 8 * v2);
  for ( i = (_DWORD *)*v5; ; i = (_DWORD *)*i )
  {
    if ( i == v5 )
    {
      v7 = 0;
      goto LABEL_8;
    }
    if ( (void *)i[3] == this )
      break;
  }
  v7 = i[4];
  i[3] = 0;
LABEL_8:
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(dword_4B3A6D84 + 4 * v3));
  return v7;
}
