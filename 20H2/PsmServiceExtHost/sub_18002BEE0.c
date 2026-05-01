/*
 * XREFs of sub_18002BEE0 @ 0x18002BEE0
 * Callers:
 *     sub_18002B810 @ 0x18002B810 (sub_18002B810.c)
 *     sub_18002B954 @ 0x18002B954 (sub_18002B954.c)
 *     sub_18002BA30 @ 0x18002BA30 (sub_18002BA30.c)
 *     sub_18002BBA0 @ 0x18002BBA0 (sub_18002BBA0.c)
 *     sub_18003B680 @ 0x18003B680 (sub_18003B680.c)
 * Callees:
 *     sub_18002BF9C @ 0x18002BF9C (sub_18002BF9C.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 */

const void *__fastcall sub_18002BEE0(const void **a1, __int64 a2, const void *a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ebp
  const void *v8; // rdx
  BOOL v9; // ecx
  const void *result; // rax

  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  v7 = sub_18002BF9C(*(unsigned int *)a1);
  memcpy((void *)(v6 + 16), a1[5], v7);
  v8 = a3;
  if ( !a3 )
    v8 = a1[5];
  memcpy((void *)a2, v8, v7);
  v9 = 1;
  if ( *(_DWORD *)a1 == 5 && a3 )
    v9 = *(_DWORD *)a2 == 20 * (*(_DWORD *)a2 / 0x14u);
  *(_QWORD *)(a2 + 40) = a1[6];
  result = (const void *)MEMORY[0x7FFE0008];
  *(_QWORD *)(a2 + 32) = MEMORY[0x7FFE0008];
  if ( v9 )
    a1[6] = result;
  else
    *(_DWORD *)(a2 + 48) = 1;
  return result;
}
