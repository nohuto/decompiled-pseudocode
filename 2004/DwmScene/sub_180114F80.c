/*
 * XREFs of sub_180114F80 @ 0x180114F80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002C58 @ 0x180002C58 (sub_180002C58.c)
 */

ULONG __fastcall sub_180114F80(__int64 a1, void *a2, __int64 a3, double a4, void *a5, void *a6, int a7)
{
  ULONG result; // eax
  int v8; // [rsp+50h] [rbp-30h] BYREF
  void *v9; // [rsp+58h] [rbp-28h] BYREF
  void *v10; // [rsp+60h] [rbp-20h] BYREF
  double v11; // [rsp+68h] [rbp-18h] BYREF
  __int64 v12; // [rsp+70h] [rbp-10h] BYREF
  void *v13; // [rsp+78h] [rbp-8h] BYREF

  if ( (unsigned int)dword_18020DB58 > 5 )
  {
    v8 = a7;
    v9 = a6;
    v10 = a5;
    v11 = a4;
    v12 = a3;
    v13 = a2;
    return sub_180002C58(
             (__int64)&dword_18020DB58,
             (unsigned __int8 *)dword_1801E829F,
             0LL,
             0LL,
             &v13,
             (__int64)&v12,
             (__int64)&v11,
             &v10,
             &v9,
             (__int64)&v8);
  }
  return result;
}
