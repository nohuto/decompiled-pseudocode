/*
 * XREFs of sub_1C0001BF8 @ 0x1C0001BF8
 * Callers:
 *     sub_1C00018E8 @ 0x1C00018E8 (sub_1C00018E8.c)
 *     sub_1C0010540 @ 0x1C0010540 (sub_1C0010540.c)
 *     sub_1C0018F50 @ 0x1C0018F50 (sub_1C0018F50.c)
 *     sub_1C0035FC4 @ 0x1C0035FC4 (sub_1C0035FC4.c)
 *     sub_1C0038F30 @ 0x1C0038F30 (sub_1C0038F30.c)
 *     sub_1C004DDA0 @ 0x1C004DDA0 (sub_1C004DDA0.c)
 *     sub_1C004E390 @ 0x1C004E390 (sub_1C004E390.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C0001BF8(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v1 = sub_1C000F050(a1);
  if ( !*(_QWORD *)(v1 + 4592) )
    return 0LL;
  (*(void (__fastcall **)(_QWORD, unsigned int *))(v1 + 4592))(*(_QWORD *)(v1 + 4560), &v3);
  return v3;
}
