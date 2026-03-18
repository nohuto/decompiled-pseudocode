/*
 * XREFs of sub_1C0038E18 @ 0x1C0038E18
 * Callers:
 *     sub_1C0038550 @ 0x1C0038550 (sub_1C0038550.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0015F10 @ 0x1C0015F10 (sub_1C0015F10.c)
 */

__int64 __fastcall sub_1C0038E18(__int64 a1)
{
  _DWORD *v2; // rdi
  _QWORD *PoolWithTag; // rbx
  NTSTATUS v4; // edi

  v2 = sub_1C000F050(a1);
  PoolWithTag = ExAllocatePoolWithTag(PoolType, 0x28uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 1966120LL;
    PoolWithTag[2] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[3] = *((_QWORD *)v2 + 330);
    v4 = sub_1C0015F10(a1, 0x220003u, (ULONG_PTR)PoolWithTag, 0LL);
    sub_1C000FD80(a1, 4, 1937331029, v4, *((int *)PoolWithTag + 1));
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v4;
}
