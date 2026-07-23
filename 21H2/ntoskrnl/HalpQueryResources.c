/*
 * XREFs of HalpQueryResources @ 0x1407B9734
 * Callers:
 *     HalpDispatchPnp @ 0x140765140 (HalpDispatchPnp.c)
 * Callees:
 *     HalConvertDeviceIdtToIrql @ 0x14076F280 (HalConvertDeviceIdtToIrql.c)
 *     HalpQueryAcpiResourceRequirements @ 0x1407B9864 (HalpQueryAcpiResourceRequirements.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HalpQueryResources(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebp
  int v5; // eax
  __int64 result; // rax
  _DWORD *v7; // r14
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int16 v12; // ax
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  P = 0LL;
  v5 = *(_DWORD *)(v2 + 32);
  if ( v5 != 129 )
    return (unsigned int)(v5 - 130) > 1 ? 0xC00000BB : 0;
  result = HalpQueryAcpiResourceRequirements(&P);
  if ( (int)result >= 0 )
  {
    v7 = P;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(20 * *((_DWORD *)P + 9) + 39), 0x206C6148u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[2] = 0LL;
      PoolWithTag[3] = 0LL;
      PoolWithTag[4] = 0LL;
      *((_DWORD *)PoolWithTag + 2) = -1;
      *(_DWORD *)PoolWithTag = 1;
      *((_DWORD *)PoolWithTag + 1) = 15;
      *((_DWORD *)PoolWithTag + 3) = 65537;
      *((_DWORD *)PoolWithTag + 4) = v7[9];
      if ( v7[9] )
      {
        do
        {
          v10 = 8LL * v3;
          v11 = 5LL * v3;
          *((_BYTE *)v9 + 4 * v11 + 20) = BYTE1(v7[v10 + 10]);
          *((_BYTE *)v9 + 4 * v11 + 21) = BYTE2(v7[v10 + 10]);
          *((_WORD *)v9 + 2 * v11 + 11) = v7[v10 + 11];
          ++v3;
          *((_WORD *)v9 + 2 * v11 + 12) = (unsigned __int8)HalConvertDeviceIdtToIrql(v7[v10 + 12]);
          *((_DWORD *)v9 + v11 + 7) = v7[v10 + 12];
          v12 = HIWORD(v7[v10 + 14]);
          *(_QWORD *)((char *)v9 + 4 * v11 + 32) = -1LL;
          *((_WORD *)v9 + 2 * v11 + 13) = v12;
        }
        while ( v3 < v7[9] );
      }
      *a2 = v9;
      ExFreePoolWithTag(v7, 0);
      return 0LL;
    }
    else
    {
      ExFreePoolWithTag(v7, 0);
      return 3221225626LL;
    }
  }
  return result;
}
