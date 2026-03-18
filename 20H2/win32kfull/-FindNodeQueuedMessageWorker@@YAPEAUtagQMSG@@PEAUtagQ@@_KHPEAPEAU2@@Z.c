/*
 * XREFs of ?FindNodeQueuedMessageWorker@@YAPEAUtagQMSG@@PEAUtagQ@@_KHPEAPEAU2@@Z @ 0x1C02088EC
 * Callers:
 *     EditionFindNodeQueuedMessage @ 0x1C0208A40 (EditionFindNodeQueuedMessage.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C004CFC4 (IsPointerInputMessage.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00D781C (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 */

struct tagQMSG *__fastcall FindNodeQueuedMessageWorker(struct tagQ *a1, __int64 a2, int a3, struct tagQ **a4)
{
  __int64 v9; // rdx
  int v10; // ecx
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 )
    return 0LL;
  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)v11, (__int64)a1);
  v9 = *((_QWORD *)a1 + 4);
  if ( v9 )
  {
    do
    {
      if ( IsPointerInputMessage(*(_DWORD *)(v9 + 24))
        && *(_QWORD *)(v9 + 40) == a2
        && (!a3 || (unsigned int)(v10 - 585) > 1) )
      {
        break;
      }
      v9 = *(_QWORD *)(v9 + 8);
    }
    while ( v9 );
    if ( v9 )
    {
      if ( a4 )
        *a4 = a1;
    }
  }
  return (struct tagQMSG *)v9;
}
