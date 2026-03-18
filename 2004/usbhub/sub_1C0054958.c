/*
 * XREFs of sub_1C0054958 @ 0x1C0054958
 * Callers:
 *     sub_1C0054AFC @ 0x1C0054AFC (sub_1C0054AFC.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C0036194 @ 0x1C0036194 (sub_1C0036194.c)
 *     sub_1C0058108 @ 0x1C0058108 (sub_1C0058108.c)
 */

_DWORD *__fastcall sub_1C0054958(struct _DEVICE_OBJECT *BugCheckParameter4)
{
  _DWORD *v2; // rbx
  _DWORD *result; // rax
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx

  v2 = sub_1C0011220((__int64)BugCheckParameter4);
  result = sub_1C0011220((__int64)BugCheckParameter4);
  if ( result[281] != 6 )
  {
    sub_1C0036194((__int64)BugCheckParameter4, 6, 6);
    KeWaitForSingleObject(v2 + 324, Executive, 0, 0, 0LL);
    v4 = (void *)*((_QWORD *)v2 + 142);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0);
      *((_QWORD *)v2 + 142) = 0LL;
    }
    v5 = (void *)*((_QWORD *)v2 + 280);
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0);
      *((_QWORD *)v2 + 280) = 0LL;
    }
    v6 = (void *)*((_QWORD *)v2 + 355);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0);
      *((_QWORD *)v2 + 355) = 0LL;
    }
    v7 = (void *)*((_QWORD *)v2 + 299);
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0);
      *((_QWORD *)v2 + 299) = 0LL;
    }
    v8 = (void *)*((_QWORD *)v2 + 300);
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0);
      *((_QWORD *)v2 + 300) = 0LL;
    }
    v9 = (void *)*((_QWORD *)v2 + 316);
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0);
      *((_QWORD *)v2 + 316) = 0LL;
    }
    v10 = (void *)*((_QWORD *)v2 + 106);
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      *((_QWORD *)v2 + 106) = 0LL;
    }
    if ( (v2[356] & 1) != 0 )
    {
      sub_1C0014E84((ULONG_PTR)BugCheckParameter4, (ULONG_PTR)BugCheckParameter4);
      KeWaitForSingleObject(v2 + 310, Executive, 0, 0, 0LL);
    }
    v2[356] = 16;
    return (_DWORD *)sub_1C0058108(BugCheckParameter4);
  }
  return result;
}
