/*
 * XREFs of sub_1800055CC @ 0x1800055CC
 * Callers:
 *     sub_180005590 @ 0x180005590 (sub_180005590.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_180005CA0 @ 0x180005CA0 (sub_180005CA0.c)
 *     sub_180007B80 @ 0x180007B80 (sub_180007B80.c)
 *     sub_180007D20 @ 0x180007D20 (sub_180007D20.c)
 *     sub_180007EA0 @ 0x180007EA0 (sub_180007EA0.c)
 *     sub_180008200 @ 0x180008200 (sub_180008200.c)
 *     sub_180008510 @ 0x180008510 (sub_180008510.c)
 *     sub_18000C288 @ 0x18000C288 (sub_18000C288.c)
 *     sub_180010888 @ 0x180010888 (sub_180010888.c)
 *     sub_180010980 @ 0x180010980 (sub_180010980.c)
 *     sub_180013E44 @ 0x180013E44 (sub_180013E44.c)
 *     sub_180020668 @ 0x180020668 (sub_180020668.c)
 *     sub_180020FC4 @ 0x180020FC4 (sub_180020FC4.c)
 *     sub_180021A3C @ 0x180021A3C (sub_180021A3C.c)
 *     sub_180022880 @ 0x180022880 (sub_180022880.c)
 *     PbmCastingAppStateChanged @ 0x180023D90 (PbmCastingAppStateChanged.c)
 *     sub_180026D08 @ 0x180026D08 (sub_180026D08.c)
 *     sub_180026E04 @ 0x180026E04 (sub_180026E04.c)
 *     sub_1800273FC @ 0x1800273FC (sub_1800273FC.c)
 *     sub_1800277B0 @ 0x1800277B0 (sub_1800277B0.c)
 *     sub_1800298F4 @ 0x1800298F4 (sub_1800298F4.c)
 *     sub_180029CD0 @ 0x180029CD0 (sub_180029CD0.c)
 *     sub_180029FD4 @ 0x180029FD4 (sub_180029FD4.c)
 * Callees:
 *     sub_180008890 @ 0x180008890 (sub_180008890.c)
 *     atexit @ 0x180039D78 (atexit.c)
 */

LPVOID sub_1800055CC()
{
  union _RTL_RUN_ONCE *v1; // [rsp+20h] [rbp-18h] BYREF
  int v2; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&InitOnce, 0, &fPending, &Context) && fPending )
  {
    v1 = &InitOnce;
    Context = &qword_18004FE90;
    qword_18004FE90 = (__int64)off_18003EAD8;
    qword_18004FEA8 = (__int64)&unk_18004F008;
    atexit(sub_180005660);
    v2 = 0;
    sub_180008890(&v1);
  }
  return Context;
}
