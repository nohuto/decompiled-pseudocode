/*
 * XREFs of sub_180121024 @ 0x180121024
 * Callers:
 *     sub_180120250 @ 0x180120250 (sub_180120250.c)
 * Callees:
 *     sub_18008F284 @ 0x18008F284 (sub_18008F284.c)
 *     sub_18011E660 @ 0x18011E660 (sub_18011E660.c)
 *     sub_1801210EC @ 0x1801210EC (sub_1801210EC.c)
 */

__int64 __fastcall sub_180121024(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  __int64 result; // rax

  *a1 = *(_DWORD *)a2;
  v3 = (__int64)(a1 + 2);
  try
  {
    sub_18011E660(v3, **(_QWORD ***)(a2 + 8), *(_QWORD **)(a2 + 8));
    v4 = sub_18008F284((__int64)a1);
    result = sub_1801210EC(a1, v4);
  }
  catch ( ... )
  {
    sub_1801212B8(a1);
    throw;
  }
  return result;
}
