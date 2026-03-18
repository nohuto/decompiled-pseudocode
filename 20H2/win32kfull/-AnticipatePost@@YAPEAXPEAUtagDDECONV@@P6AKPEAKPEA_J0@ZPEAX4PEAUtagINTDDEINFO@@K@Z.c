/*
 * XREFs of ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C021A6B8
 * Callers:
 *     ?Request@@YAKPEAUtagDDECONV@@@Z @ 0x1C021ABA4 (-Request@@YAKPEAUtagDDECONV@@@Z.c)
 *     ?Unadvise@@YAKPEAUtagDDECONV@@@Z @ 0x1C021AC7C (-Unadvise@@YAKPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021AE28 (-xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B088 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B9A4 (-xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BDCC (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C0E0 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackSendHook @ 0x1C021CF6C (xxxDDETrackSendHook.c)
 * Callees:
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C021A768 (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 */

void *__fastcall AnticipatePost(
        struct tagDDECONV *a1,
        unsigned int (*a2)(unsigned int *, __int64 *, struct tagDDECONV *),
        void *a3,
        void *a4,
        struct tagINTDDEINFO *a5,
        unsigned int a6)
{
  struct tagXSTATE *v7; // rbx
  void *result; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // [rsp+30h] [rbp-10h] BYREF
  struct tagXSTATE *v12; // [rsp+38h] [rbp-8h]

  v7 = Createpxs(a2, a3, a4, a5, a6);
  result = 0LL;
  if ( v7 )
  {
    *((_QWORD *)v7 + 2) = *((_QWORD *)a1 + 2);
    v9 = (_QWORD *)((char *)a1 + 56);
    v10 = (_QWORD *)((char *)a1 + 64);
    v12 = v7;
    if ( *v9 )
      v11 = *v10 + 24LL;
    else
      v11 = (__int64)v9;
    HMAssignmentLock(&v11);
    v11 = (__int64)v10;
    v12 = v7;
    HMAssignmentLock(&v11);
    return *(void **)v7;
  }
  return result;
}
