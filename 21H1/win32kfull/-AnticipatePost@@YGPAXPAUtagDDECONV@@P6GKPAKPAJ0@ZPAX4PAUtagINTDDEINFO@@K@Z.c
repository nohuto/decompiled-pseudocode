/*
 * XREFs of ?AnticipatePost@@YGPAXPAUtagDDECONV@@P6GKPAKPAJ0@ZPAX4PAUtagINTDDEINFO@@K@Z @ 0x17E911
 * Callers:
 *     ?Request@@YGKPAUtagDDECONV@@@Z @ 0x17EBEA (-Request@@YGKPAUtagDDECONV@@@Z.c)
 *     ?Unadvise@@YGKPAUtagDDECONV@@@Z @ 0x17EC69 (-Unadvise@@YGKPAUtagDDECONV@@@Z.c)
 *     ?xxxAdvise@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17ED57 (-xxxAdvise@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17EEED (-xxxAdviseData@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxExecute@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F55E (-xxxExecute@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F882 (-xxxPoke@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FAD5 (-xxxRequestAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     _xxxDDETrackSendHook@16 @ 0x180600 (_xxxDDETrackSendHook@16.c)
 * Callees:
 *     ?Createpxs@@YGPAUtagXSTATE@@P6GKPAKPAJPAUtagDDECONV@@@ZPAX4PAUtagINTDDEINFO@@K@Z @ 0x17E967 (-Createpxs@@YGPAUtagXSTATE@@P6GKPAKPAJPAUtagDDECONV@@@ZPAX4PAUtagINTDDEINFO@@K@Z.c)
 */

void *__userpurge AnticipatePost@<eax>(
        int a1@<ecx>,
        struct tagDDECONV *a2,
        unsigned int (__stdcall *a3)(unsigned int *, int *, struct tagDDECONV *),
        void *a4,
        void *a5,
        struct tagINTDDEINFO *a6,
        unsigned int a7)
{
  int v8; // edx
  struct tagXSTATE *v9; // edi
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  struct tagINTDDEINFO *v14; // [esp+0h] [ebp-8h]
  unsigned int v15; // [esp+4h] [ebp-4h]

  v9 = Createpxs(a3, a4, a5, v14, v15);
  if ( !v9 )
    return 0;
  v10 = *(_DWORD *)(a1 + 8);
  *((_DWORD *)v9 + 2) = v10;
  HMAssignmentLock(v10, v8);
  HMAssignmentLock(v12, v11);
  return *(void **)v9;
}
