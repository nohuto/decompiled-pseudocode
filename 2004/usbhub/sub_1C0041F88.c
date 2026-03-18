/*
 * XREFs of sub_1C0041F88 @ 0x1C0041F88
 * Callers:
 *     sub_1C0044590 @ 0x1C0044590 (sub_1C0044590.c)
 * Callees:
 *     sub_1C0002AF0 @ 0x1C0002AF0 (sub_1C0002AF0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0037328 @ 0x1C0037328 (sub_1C0037328.c)
 */

__int64 __fastcall sub_1C0041F88(_QWORD *Tag)
{
  _DWORD *v2; // rdi
  int v3; // ebx
  int v4; // r8d

  v2 = sub_1C000F050(Tag[1]);
  sub_1C000FD80(Tag[1], 2, 1634957635, Tag[1], (__int64)Tag);
  v3 = sub_1C0037328(Tag[1], (__int64)Tag);
  v4 = 9;
  if ( v3 >= 0 )
    v4 = 5;
  sub_1C0002AF0((struct _DEVICE_OBJECT *)Tag[1], (__int64)Tag, v4);
  *((_QWORD *)v2 + 639) = MEMORY[0xFFFFF78000000014];
  KeSetEvent((PRKEVENT)(v2 + 644), 0, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 306), Tag, 0x20u);
  return (unsigned int)v3;
}
