/*
 * XREFs of sub_180043F30 @ 0x180043F30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B954 @ 0x18002B954 (sub_18002B954.c)
 *     sub_18002C050 @ 0x18002C050 (sub_18002C050.c)
 */

__int64 __fastcall sub_180043F30(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = a1 - 64;
  if ( (unsigned int)(*a3 - 1) <= 0xFFFFFFFD )
  {
    TpSetTimer(*(_QWORD *)(v3 + 88), 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(v3 + 88), 1LL);
    v6 = 0;
    return sub_18002B954((void **)v3, &v6, 4uLL, 0);
  }
  else
  {
    if ( (int)sub_18002C050(a1 - 64, (_QWORD *)(v3 + 112)) < 0 )
      *(_QWORD *)(v3 + 112) = -1LL;
    RtlQueryUnbiasedInterruptTime(v3 + 104);
    v6 = 100;
    sub_18002B954((void **)v3, &v6, 4uLL, 0);
    v4 = *(_QWORD *)(v3 + 88);
    v7 = -100000000LL;
    return TpSetTimer(v4, &v7, 10000LL, 2000LL);
  }
}
