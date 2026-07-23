/*
 * XREFs of CcAllocateObcb @ 0x14077D46C
 * Callers:
 *     CcPreparePinWrite @ 0x1405F3640 (CcPreparePinWrite.c)
 *     CcPinRead @ 0x140706580 (CcPinRead.c)
 *     CcPinMappedData @ 0x140706760 (CcPinMappedData.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall CcAllocateObcb(_DWORD *a1, int a2, __int64 a3)
{
  SIZE_T v6; // rsi
  _WORD *PoolWithTag; // rdi
  _WORD *result; // rax

  v6 = 8
     * ((unsigned int)(*a1
                     - *(_DWORD *)((a3 & 0xFFFFFFFFFFFFFFFEuLL) + 8)
                     - *(_DWORD *)((a3 & 0xFFFFFFFFFFFFFFFEuLL) + 4)
                     + a2
                     + 4095) >> 12)
     + 32;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)528, v6, 0x624F6343u);
  memset(PoolWithTag, 0, (unsigned int)v6);
  *PoolWithTag = 762;
  result = PoolWithTag;
  PoolWithTag[1] = v6;
  *((_DWORD *)PoolWithTag + 1) = a2;
  *((_QWORD *)PoolWithTag + 1) = *(_QWORD *)a1;
  *((_QWORD *)PoolWithTag + 2) = a3;
  return result;
}
