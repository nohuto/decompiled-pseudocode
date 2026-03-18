/*
 * XREFs of ?Createpxs@@YGPAUtagXSTATE@@P6GKPAKPAJPAUtagDDECONV@@@ZPAX4PAUtagINTDDEINFO@@K@Z @ 0x17E967
 * Callers:
 *     ?AnticipatePost@@YGPAXPAUtagDDECONV@@P6GKPAKPAJ0@ZPAX4PAUtagINTDDEINFO@@K@Z @ 0x17E911 (-AnticipatePost@@YGPAXPAUtagDDECONV@@P6GKPAKPAJ0@ZPAX4PAUtagINTDDEINFO@@K@Z.c)
 *     ?xxxAdviseData@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17EEED (-xxxAdviseData@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YGKPAKPAJPAUtagDDECONV@@PAPAUtagINTDDEINFO@@@Z @ 0x17F2E7 (-xxxCopyAckIn@@YGKPAKPAJPAUtagDDECONV@@PAPAUtagINTDDEINFO@@@Z.c)
 *     ?xxxExecuteAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F68D (-xxxExecuteAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FAD5 (-xxxRequestAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagXSTATE *__userpurge Createpxs@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        unsigned int (__stdcall *a3)(unsigned int *, int *, struct tagDDECONV *),
        void *a4,
        void *a5,
        struct tagINTDDEINFO *a6,
        unsigned int a7)
{
  int v9; // edx
  struct tagXSTATE *result; // eax

  v9 = HMAllocObject(_gptiCurrent, 0, 11, 36);
  if ( v9 )
  {
    *(_DWORD *)(v9 + 12) = 0;
    *(_DWORD *)(v9 + 24) = a3;
    *(_DWORD *)(v9 + 28) = a4;
    *(_DWORD *)(v9 + 32) = a5;
    result = (struct tagXSTATE *)v9;
    *(_DWORD *)(v9 + 16) = a2;
    *(_DWORD *)(v9 + 20) = a1;
  }
  else
  {
    if ( a4 )
      Win32FreePool(a4);
    return 0;
  }
  return result;
}
