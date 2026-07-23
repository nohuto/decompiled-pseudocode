/*
 * XREFs of MiGetFastLargePages @ 0x1403F7B20
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x14055DC9C (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiProtectionToCacheAttribute @ 0x1402E6690 (MiProtectionToCacheAttribute.c)
 *     MiUpdateLargePageBitMap @ 0x14030ADE0 (MiUpdateLargePageBitMap.c)
 *     MiGetLargePagesDemoteAsNeeded @ 0x1403F5870 (MiGetLargePagesDemoteAsNeeded.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F6AD8 (MiGetPfnPageSizeIndex.c)
 */

__int64 __fastcall MiGetFastLargePages(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, char a6)
{
  unsigned int v7; // edx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  int v10; // r11d
  int v11; // ecx
  unsigned __int64 v12; // rsi
  __int64 LargePagesDemoteAsNeeded; // rdi
  _QWORD *v14; // rbx
  unsigned __int64 v15; // r10
  int v17; // [rsp+30h] [rbp-18h]

  KeGetCurrentIrql();
  v17 = MiProtectionToCacheAttribute(a5);
  v11 = v10 | 1;
  if ( (a6 & 4) == 0 )
    v11 = v10;
  v12 = -1LL;
  LargePagesDemoteAsNeeded = MiGetLargePagesDemoteAsNeeded(a1, v7, v8, v9, 1, v11, v17);
  v14 = (_QWORD *)LargePagesDemoteAsNeeded;
  if ( LargePagesDemoteAsNeeded )
  {
    do
    {
      v15 = (__int64)(v14 + 0xB000000000LL) / 48;
      if ( v14 == (_QWORD *)LargePagesDemoteAsNeeded )
        v12 = MiLargePageSizes[(unsigned int)MiGetPfnPageSizeIndex((__int64)v14)];
      MiUpdateLargePageBitMap(a1, v15, v12, 1, 1);
      v14 = (_QWORD *)*v14;
    }
    while ( v14 );
  }
  return LargePagesDemoteAsNeeded;
}
