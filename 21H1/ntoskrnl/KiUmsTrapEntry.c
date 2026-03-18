/*
 * XREFs of KiUmsTrapEntry @ 0x1404086C0
 * Callers:
 *     KiBoundFault @ 0x140401B80 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1404020C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x140403C00 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x140404F80 (KxMcheckAlternateReturn.c)
 * Callees:
 *     KiSwapToUmsThread @ 0x1408B90E0 (KiSwapToUmsThread.c)
 */

__int64 __fastcall KiUmsTrapEntry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        __int64 a34,
        __int64 a35,
        __int64 a36,
        __int64 a37,
        __int64 a38,
        __int64 a39,
        __int64 a40,
        __int64 a41,
        __int64 a42,
        __int64 a43,
        __int64 a44,
        __int64 a45,
        __int64 a46,
        __int64 a47,
        __int64 a48,
        __int64 a49)
{
  __int64 v49; // rax
  __int64 v50; // rbp
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  _DWORD *v54; // r9
  _QWORD v56[5]; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v57; // [rsp+28h] [rbp-180h]
  __int64 v58; // [rsp+30h] [rbp-178h]
  __int64 (__fastcall *v59)(); // [rsp+38h] [rbp-170h]
  __int64 v60; // [rsp+48h] [rbp-160h]
  __int64 v61; // [rsp+50h] [rbp-158h]
  char *v62; // [rsp+58h] [rbp-150h]
  char v63; // [rsp+70h] [rbp-138h] BYREF

  *(_QWORD *)(v50 - 128) = a1;
  *(_QWORD *)(v50 - 120) = v49;
  v56[4] = v50 + 272;
  v57 = v50 + 272 - (_QWORD)v56;
  v58 = v57 - 424;
  v59 = KiUmsTrapEntryContinue;
  v62 = &v63;
  v61 = v50 - 128;
  v60 |= 1uLL;
  KiSwapToUmsThread(v56);
  return KiUmsFastReturnToUser(
           v52,
           v51,
           v53,
           v54,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35,
           a36,
           a37,
           a38,
           a39,
           a40,
           a41,
           a42,
           a43,
           a44,
           a45,
           a46,
           a47,
           a48,
           a49);
}
