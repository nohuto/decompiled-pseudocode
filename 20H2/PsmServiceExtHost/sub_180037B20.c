/*
 * XREFs of sub_180037B20 @ 0x180037B20
 * Callers:
 *     sub_18000BAA8 @ 0x18000BAA8 (sub_18000BAA8.c)
 *     sub_18000BD38 @ 0x18000BD38 (sub_18000BD38.c)
 *     sub_180013860 @ 0x180013860 (sub_180013860.c)
 *     sub_180033EE8 @ 0x180033EE8 (sub_180033EE8.c)
 *     sub_180040A78 @ 0x180040A78 (sub_180040A78.c)
 *     sub_180040B34 @ 0x180040B34 (sub_180040B34.c)
 *     sub_180040BC4 @ 0x180040BC4 (sub_180040BC4.c)
 *     sub_18006C788 @ 0x18006C788 (sub_18006C788.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall sub_180037B20(void *a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
