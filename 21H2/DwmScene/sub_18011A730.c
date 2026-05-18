/*
 * XREFs of sub_18011A730 @ 0x18011A730
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002D8C @ 0x180002D8C (sub_180002D8C.c)
 */

ULONG __fastcall sub_18011A730(__int64 a1, void *a2, __int64 a3, int a4, void *a5, void *a6, int a7)
{
  ULONG result; // eax
  int v8; // [rsp+50h] [rbp-30h] BYREF
  int v9; // [rsp+54h] [rbp-2Ch] BYREF
  void *v10; // [rsp+58h] [rbp-28h] BYREF
  void *v11; // [rsp+60h] [rbp-20h] BYREF
  __int64 v12; // [rsp+68h] [rbp-18h] BYREF
  void *v13; // [rsp+70h] [rbp-10h] BYREF

  if ( (unsigned int)dword_180214BC8 > 5 )
  {
    v8 = a7;
    v10 = a6;
    v11 = a5;
    v9 = a4;
    v12 = a3;
    v13 = a2;
    return sub_180002D8C(
             (__int64)&dword_180214BC8,
             (unsigned __int8 *)dword_1801EE6BD,
             0LL,
             0LL,
             &v13,
             (__int64)&v12,
             (__int64)&v9,
             &v11,
             &v10,
             (__int64)&v8);
  }
  return result;
}
