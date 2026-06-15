/*
 * XREFs of sub_180132184 @ 0x180132184
 * Callers:
 *     DllMain @ 0x18006D2E0 (DllMain.c)
 * Callees:
 *     sub_1801320EC @ 0x1801320EC (sub_1801320EC.c)
 *     sub_180132378 @ 0x180132378 (sub_180132378.c)
 */

__int64 sub_180132184()
{
  int v0; // edx
  int v1; // ecx
  int v2; // r8d
  WINBOOL fPending; // [rsp+70h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+78h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(&stru_18019F918, 1u, &fPending, &Context) && !fPending )
    sub_1801320EC((__int64)Context, v0, v2);
  if ( (byte_18019F981 & 4) != 0 )
    sub_180132378(v1, v0, v2, 2, (char)Context, 0, 0, 0);
  return 0LL;
}
