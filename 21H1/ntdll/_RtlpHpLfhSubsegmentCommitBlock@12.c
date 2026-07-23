/*
 * XREFs of _RtlpHpLfhSubsegmentCommitBlock@12 @ 0x4B376E1B
 * Callers:
 *     _RtlpHpLfhSubsegmentAllocateBlock@16 @ 0x4B376D27 (_RtlpHpLfhSubsegmentAllocateBlock@16.c)
 * Callees:
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _RtlpHpLfhSubsegmentDecBlockCounts@20 @ 0x4B3770E8 (_RtlpHpLfhSubsegmentDecBlockCounts@20.c)
 *     _RtlpHpLfhSubsegmentIncBlockCounts@28 @ 0x4B377605 (_RtlpHpLfhSubsegmentIncBlockCounts@28.c)
 */

int __fastcall RtlpHpLfhSubsegmentCommitBlock(_DWORD *a1, unsigned int a2, int a3)
{
  int v5; // ebx
  int v6; // ebx
  int v7; // eax
  char v8; // cl
  int v9; // ecx
  int v10; // esi
  int v12; // [esp+10h] [ebp-14h]
  int v13; // [esp+14h] [ebp-10h]
  int v14; // [esp+18h] [ebp-Ch] BYREF
  unsigned int v15; // [esp+1Ch] [ebp-8h]
  char v16; // [esp+23h] [ebp-1h] BYREF

  v16 = -1;
  v5 = *(unsigned __int16 *)(a2 + 24) ^ (unsigned __int16)(a2 >> 12);
  v15 = (unsigned int)a1;
  v6 = (unsigned __int16)dword_4B3A4324 ^ v5;
  v7 = RtlpHpLfhSubsegmentIncBlockCounts(a3, v6, &v14, 0, &v16);
  if ( v7 != -1 )
  {
    v8 = *(_BYTE *)(a2 + 28);
    v12 = v7 << v8;
    v13 = v14 << v8;
    v10 = ((int (__thiscall *)(unsigned int, _DWORD, unsigned int, int))(v15 ^ RtlpHpHeapGlobals ^ a1[3]))(
            v15 ^ RtlpHpHeapGlobals ^ a1[3],
            *(_DWORD *)v15,
            a2 + (v7 << v8),
            v14 << v8);
    if ( v10 < 0 )
    {
      RtlpHpLfhSubsegmentDecBlockCounts(a3, v6, v9);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 12));
      return v10;
    }
    RtlpHpLfhSubsegmentIncBlockCounts(v12, v13, &v14, 1, &v16);
  }
  return 0;
}
