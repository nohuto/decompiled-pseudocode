/*
 * XREFs of KiUmsCallEntry @ 0x140413880
 * Callers:
 *     KiSystemCall64 @ 0x140411B00 (KiSystemCall64.c)
 * Callees:
 *     KiSwapToUmsThread @ 0x1408BDA80 (KiSwapToUmsThread.c)
 */

__int64 __fastcall KiUmsCallEntry()
{
  __int64 v0; // rbp
  _QWORD v2[5]; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v3; // [rsp+28h] [rbp-180h]
  __int64 v4; // [rsp+30h] [rbp-178h]
  __int64 (__fastcall *v5)(); // [rsp+38h] [rbp-170h]
  __int64 v6; // [rsp+48h] [rbp-160h]
  __int64 v7; // [rsp+50h] [rbp-158h]
  char *v8; // [rsp+58h] [rbp-150h]
  char v9; // [rsp+70h] [rbp-138h] BYREF

  v2[4] = v0 + 272;
  v3 = v0 + 272 - (_QWORD)v2;
  v4 = v3 - 424;
  v5 = KiUmsCallEntryContinue;
  v8 = &v9;
  v7 = v0 - 128;
  v6 &= ~1uLL;
  KiSwapToUmsThread(v2);
  return KiUmsFastReturnToUser();
}
