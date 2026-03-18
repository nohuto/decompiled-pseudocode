/*
 * XREFs of ?DDEImpIncRefInit@@YGHPAUtagWND@@PAUtagDDEIMP@@PAU_TL@@@Z @ 0x15EE65
 * Callers:
 *     _NtUserfnDDEINIT@28 @ 0x16B532 (_NtUserfnDDEINIT@28.c)
 * Callees:
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 */

int __userpurge DDEImpIncRefInit@<eax>(
        int a1@<edx>,
        int *a2@<ecx>,
        struct tagWND *a3,
        struct tagDDEIMP *a4,
        struct _TL *a5)
{
  __int16 v5; // ax
  int v7; // eax

  v5 = *(_WORD *)(a1 + 72);
  if ( v5 >= 4096 )
    return 0;
  *(_WORD *)(a1 + 72) = v5 + 1;
  if ( a2 )
    v7 = *a2;
  else
    v7 = 0;
  PushW32ThreadLock(v7, a3, (int)DDEImpDecRefInitWorker);
  return 1;
}
