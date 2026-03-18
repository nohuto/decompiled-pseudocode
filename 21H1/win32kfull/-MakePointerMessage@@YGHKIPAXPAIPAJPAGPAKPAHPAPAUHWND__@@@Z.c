/*
 * XREFs of ?MakePointerMessage@@YGHKIPAXPAIPAJPAGPAKPAHPAPAUHWND__@@@Z @ 0x15AEA9
 * Callers:
 *     _PrepareSentPointerMessageForClient@16 @ 0x15A03D (_PrepareSentPointerMessageForClient@16.c)
 *     _TranslateSentPointerMessageForClient@12 @ 0x15A172 (_TranslateSentPointerMessageForClient@12.c)
 * Callees:
 *     ?MakePointerMessageWorker@@YGHPBUtagPOINTER_INFO@@UtagPOINT@@HHHIPAXPAIPAJPAGPAKPAHPAPAUHWND__@@@Z @ 0x15AF28 (-MakePointerMessageWorker@@YGHPBUtagPOINTER_INFO@@UtagPOINT@@HHHIPAXPAIPAJPAGPAKPAHPAPAUHWND__@@.c)
 */

int __userpurge MakePointerMessage@<eax>(
        unsigned int a1@<edx>,
        unsigned int a2@<ecx>,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        unsigned int *a6,
        int *a7,
        unsigned __int16 *a8,
        unsigned int *a9,
        int *a10,
        HWND *a11)
{
  int *v13; // [esp+10h] [ebp-18h]
  struct tagPOINT v14; // [esp+14h] [ebp-14h] BYREF
  int v15; // [esp+1Ch] [ebp-Ch] BYREF
  struct tagPOINT v16; // [esp+20h] [ebp-8h] BYREF

  v16.x = 0;
  v16.y = 0;
  v15 = 0;
  v14.y = 0;
  v14.x = 0;
  CTouchProcessor::PrepareMakePointerMessage(_gpTouchProcessor, a2, &v16, &v15, &v14.y, &v14.x);
  return MakePointerMessageWorker(
           (const struct tagPOINTER_INFO *)v14.y,
           (struct tagPOINT)__PAIR64__(a1, v14.x),
           a3,
           a4,
           (int)a5,
           (unsigned int)a6,
           a7,
           (unsigned int *)a8,
           (int *)a9,
           (unsigned __int16 *)v16.x,
           (unsigned int *)v16.y,
           v13,
           (HWND *)v14.x);
}
