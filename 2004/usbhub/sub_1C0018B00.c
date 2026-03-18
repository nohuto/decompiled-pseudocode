/*
 * XREFs of sub_1C0018B00 @ 0x1C0018B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0010D74 @ 0x1C0010D74 (sub_1C0010D74.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0012EFC @ 0x1C0012EFC (sub_1C0012EFC.c)
 *     sub_1C0014C0C @ 0x1C0014C0C (sub_1C0014C0C.c)
 *     sub_1C0016B5C @ 0x1C0016B5C (sub_1C0016B5C.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
 */

__int64 __fastcall sub_1C0018B00(struct _DEVICE_OBJECT *a1)
{
  _DWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rdi
  _DWORD *v5; // rax
  int v6; // ebp
  _DWORD *v7; // rax

  v2 = sub_1C0011220((__int64)a1);
  v3 = *((_QWORD *)v2 + 148);
  sub_1C000F050(v3);
  if ( (v2[355] & 4) == 0 )
    return 3221225473LL;
  v4 = sub_1C0016B5C(v3, *((_WORD *)v2 + 714), 0LL, 0x48536942u);
  if ( !v4 )
    return 3221225635LL;
  v5 = sub_1C0011220((__int64)a1);
  v6 = sub_1C0014C0C((__int64)(v5 + 236), (__int64)a1, 0);
  if ( v6 >= 0 )
  {
    sub_1C0010D74(a1, (POWER_STATE)3);
    v7 = sub_1C000F050(v3);
    sub_1C0012EFC(v3, (__int64)a1, (__int64)(v7 + 478));
  }
  sub_1C00171A0(v3, v4, 0LL, 0x48536942u);
  return (unsigned int)v6;
}
