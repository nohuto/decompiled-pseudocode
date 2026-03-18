/*
 * XREFs of sub_1C000E0B0 @ 0x1C000E0B0
 * Callers:
 *     sub_1C000D150 @ 0x1C000D150 (sub_1C000D150.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C000C888 @ 0x1C000C888 (sub_1C000C888.c)
 */

__int64 sub_1C000E0B0()
{
  NTSTATUS SystemInformation; // eax
  SIZE_T v1; // rdi
  int v2; // ebx
  __m128 *PoolWithTag; // rax

  SystemInformation = ZwQuerySystemInformation(SystemBasicInformation, &unk_1C00071E0, 0x40u, 0LL);
  v1 = 8LL * byte_1C0007218;
  v2 = SystemInformation;
  PoolWithTag = (__m128 *)ExAllocatePoolWithTag((POOL_TYPE)512, v1, 0x74727641u);
  qword_1C0007238 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v2 = -1073741801;
    goto LABEL_4;
  }
  sub_1C0003440(PoolWithTag, 0, v1);
  if ( v2 < 0 )
LABEL_4:
    sub_1C000C888();
  return (unsigned int)v2;
}
