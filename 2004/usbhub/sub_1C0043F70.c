/*
 * XREFs of sub_1C0043F70 @ 0x1C0043F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00317D8 @ 0x1C00317D8 (sub_1C00317D8.c)
 *     sub_1C003B9C4 @ 0x1C003B9C4 (sub_1C003B9C4.c)
 *     sub_1C00438A0 @ 0x1C00438A0 (sub_1C00438A0.c)
 *     sub_1C0043DE0 @ 0x1C0043DE0 (sub_1C0043DE0.c)
 *     sub_1C00446D4 @ 0x1C00446D4 (sub_1C00446D4.c)
 */

__int64 __fastcall sub_1C0043F70(__int64 a1, __int64 a2)
{
  struct _LIST_ENTRY *v2; // r8
  __int64 v3; // rbx
  int v4; // edi
  __int64 v6; // [rsp+28h] [rbp-10h]

  v2 = *(struct _LIST_ENTRY **)(a1 + 8);
  v6 = a1;
  v3 = a1;
  LOBYTE(a1) = 1;
  v4 = sub_1C00438A0(a1, a2, v2, 1, 0LL, v6);
  sub_1C003B9C4(v3);
  if ( v4 < 0 )
  {
    sub_1C00446D4(v3, 6LL);
  }
  else
  {
    sub_1C0043DE0(*(_QWORD *)(v3 + 8), 2, 1);
    sub_1C00317D8(*(_QWORD *)(v3 + 8), v3);
  }
  return (unsigned int)v4;
}
