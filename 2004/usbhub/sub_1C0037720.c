/*
 * XREFs of sub_1C0037720 @ 0x1C0037720
 * Callers:
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0037D08 @ 0x1C0037D08 (sub_1C0037D08.c)
 *     sub_1C004BF44 @ 0x1C004BF44 (sub_1C004BF44.c)
 *     sub_1C0052F2C @ 0x1C0052F2C (sub_1C0052F2C.c)
 *     sub_1C00530C8 @ 0x1C00530C8 (sub_1C00530C8.c)
 *     sub_1C0054F88 @ 0x1C0054F88 (sub_1C0054F88.c)
 *     sub_1C0055158 @ 0x1C0055158 (sub_1C0055158.c)
 */

char __fastcall sub_1C0037720(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbx
  int v7; // r8d
  __int64 v8; // r9
  void *v10; // rcx
  void *v11; // rcx
  int v12; // [rsp+68h] [rbp+20h] BYREF

  LOBYTE(v12) = 0;
  v6 = sub_1C0011220(a2);
  if ( (int)sub_1C0055158(a1, a2) < 0 )
    return 0;
  if ( !(unsigned __int8)sub_1C00530C8(a1, (int)v6 + 1400, v7, 0, (__int64)&v12) )
  {
    v6[705] = 1073807365;
    return 0;
  }
  if ( (_BYTE)v12 )
    v6[355] |= 0x40u;
  LOBYTE(v8) = *(_BYTE *)(*(_QWORD *)(a3 + 24) + 6LL);
  sub_1C004BF44(a1, *((_QWORD *)v6 + 145), v6 + 350, v8);
  v10 = (void *)*((_QWORD *)v6 + 299);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *((_QWORD *)v6 + 299) = 0LL;
  }
  if ( (int)sub_1C0037D08(a1, a2) < 0 )
    return 0;
  if ( *((_WORD *)v6 + 701) > 0x200u && (v6[358] & 0x20000) == 0 )
  {
    v12 = 0;
    *(_OWORD *)a3 = 0LL;
    *(_OWORD *)(a3 + 16) = 0LL;
    *(_OWORD *)(a3 + 32) = 0LL;
    *(_QWORD *)(a3 + 48) = 0LL;
    v11 = (void *)*((_QWORD *)v6 + 300);
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      *((_QWORD *)v6 + 300) = 0LL;
    }
    if ( (int)sub_1C0054F88(a1, a2, &v12) < 0 )
      return 1;
    if ( !(unsigned __int8)sub_1C0052F2C(*((_QWORD *)v6 + 148), *((_QWORD *)v6 + 300), (int)v6 + 1400, v12, a3) )
    {
      v6[705] = 1073807378;
      return 0;
    }
  }
  v6[706] |= 4u;
  return 1;
}
