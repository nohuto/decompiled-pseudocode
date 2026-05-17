/*
 * XREFs of _RtlpHpVsSubsegmentCreate@12 @ 0x4B37FDB3
 * Callers:
 *     _RtlpHpVsContextAllocateInternal@24 @ 0x4B37F180 (_RtlpHpVsContextAllocateInternal@24.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _RtlpHpVsSubsegmentComputeSize@12 @ 0x4B37FD68 (_RtlpHpVsSubsegmentComputeSize@12.c)
 *     _RtlpHpVsSubsegmentInitialize@16 @ 0x4B37FED6 (_RtlpHpVsSubsegmentInitialize@16.c)
 */

int __fastcall RtlpHpVsSubsegmentCreate(int a1, int a2, int a3)
{
  unsigned int v4; // ebx
  int v5; // ecx
  int v6; // ebx
  unsigned int v8; // [esp-8h] [ebp-28h]
  signed __int32 v9; // [esp-4h] [ebp-24h]
  char v10[4]; // [esp+Ch] [ebp-14h] BYREF
  unsigned int v11; // [esp+10h] [ebp-10h] BYREF
  unsigned int v12; // [esp+14h] [ebp-Ch] BYREF
  int v13; // [esp+18h] [ebp-8h]
  unsigned int i; // [esp+1Ch] [ebp-4h]

  v4 = RtlpHpVsSubsegmentComputeSize(a1, a2, &v11);
  for ( i = v4; ; i = v12 )
  {
    v5 = ((int (__thiscall *)(int, int, unsigned int, int, char *, unsigned int *))(*(_DWORD *)(a1 + 132) ^ a1 ^ RtlpHpHeapGlobals))(
           *(_DWORD *)(a1 + 132) ^ a1 ^ RtlpHpHeapGlobals,
           a1 ^ *(_DWORD *)(a1 + 128),
           v4,
           a3,
           v10,
           &v12);
    v13 = v5;
    if ( v5 )
      break;
    v4 = v12;
    if ( v12 < v11 )
      goto LABEL_10;
  }
  if ( (v10[0] & 1) == 0 )
    v4 = 4096;
  if ( ((int (__thiscall *)(int, int, int, unsigned int))(a1 ^ RtlpHpHeapGlobals ^ *(_DWORD *)(a1 + 140)))(
         a1 ^ RtlpHpHeapGlobals ^ *(_DWORD *)(a1 + 140),
         a1 ^ *(_DWORD *)(a1 + 128),
         v5,
         v4) >= 0 )
  {
    v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 24), v4 >> 12);
    v8 = v4;
    v6 = v13;
    RtlpHpVsSubsegmentInitialize(v8, v9);
    return v6;
  }
  v5 = v13;
LABEL_10:
  v6 = 0;
  if ( v5 )
    ((void (__thiscall *)(int, int, int, unsigned int, int))(a1 ^ RtlpHpHeapGlobals ^ *(_DWORD *)(a1 + 136)))(
      a1 ^ RtlpHpHeapGlobals ^ *(_DWORD *)(a1 + 136),
      a1 ^ *(_DWORD *)(a1 + 128),
      v5,
      i,
      a3);
  return v6;
}
