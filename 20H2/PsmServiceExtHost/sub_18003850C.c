/*
 * XREFs of sub_18003850C @ 0x18003850C
 * Callers:
 *     sub_180038718 @ 0x180038718 (sub_180038718.c)
 *     sub_1800388D8 @ 0x1800388D8 (sub_1800388D8.c)
 *     sub_1800393C8 @ 0x1800393C8 (sub_1800393C8.c)
 *     sub_180039C4C @ 0x180039C4C (sub_180039C4C.c)
 *     sub_18003A184 @ 0x18003A184 (sub_18003A184.c)
 *     sub_18003A29C @ 0x18003A29C (sub_18003A29C.c)
 *     sub_18003CC78 @ 0x18003CC78 (sub_18003CC78.c)
 *     sub_180044164 @ 0x180044164 (sub_180044164.c)
 *     sub_180064258 @ 0x180064258 (sub_180064258.c)
 *     sub_180064374 @ 0x180064374 (sub_180064374.c)
 *     sub_180064440 @ 0x180064440 (sub_180064440.c)
 *     sub_1800655B4 @ 0x1800655B4 (sub_1800655B4.c)
 *     sub_18006570C @ 0x18006570C (sub_18006570C.c)
 *     sub_180085AB4 @ 0x180085AB4 (sub_180085AB4.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_18003850C(void *a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapFree(ProcessHeap, 0, a1);
}
