/*
 * XREFs of ?FindNodeQueuedMessageWorker@@YGPAUtagQMSG@@PAUtagQ@@KHPAPAU2@@Z @ 0x16F14F
 * Callers:
 *     _EditionFindNodeQueuedMessage@116 @ 0xF3566 (_EditionFindNodeQueuedMessage@116.c)
 * Callees:
 *     _IsPointerInputMessage@4 @ 0x4485A (_IsPointerInputMessage@4.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z @ 0x6FF02 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z.c)
 */

struct tagQMSG *__userpurge FindNodeQueuedMessageWorker@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagQ *a3,
        int *a4,
        int a5,
        struct tagQ **a6)
{
  _DWORD *v9; // edx
  int v10; // ecx
  _DWORD v11[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !a2 )
    return 0;
  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v11, a2);
  v9 = *(_DWORD **)(a2 + 16);
  if ( v9 )
  {
    do
    {
      if ( IsPointerInputMessage(v9[3]) && v9[5] == a1 && (!a3 || v10 != 585 && v10 != 586) )
        break;
      v9 = (_DWORD *)v9[1];
    }
    while ( v9 );
    if ( v9 )
    {
      if ( a4 )
        *a4 = a2;
    }
  }
  return (struct tagQMSG *)v9;
}
