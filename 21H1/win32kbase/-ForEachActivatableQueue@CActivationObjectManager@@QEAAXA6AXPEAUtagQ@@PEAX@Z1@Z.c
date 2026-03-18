/*
 * XREFs of ?ForEachActivatableQueue@CActivationObjectManager@@QEAAXA6AXPEAUtagQ@@PEAX@Z1@Z @ 0x1C0132BCC
 * Callers:
 *     MarkQueuesForKeyStateUpdate @ 0x1C01B1810 (MarkQueuesForKeyStateUpdate.c)
 * Callees:
 *     ??0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C0018A60 (--0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     ValidateHbwnd @ 0x1C0122780 (ValidateHbwnd.c)
 *     ?MarkQueuesForKeyStateUpdateWorker@KeyboardProcessing@@YAXPEAUtagQ@@QEAX@Z @ 0x1C01B1078 (-MarkQueuesForKeyStateUpdateWorker@KeyboardProcessing@@YAXPEAUtagQ@@QEAX@Z.c)
 */

void __fastcall CActivationObjectManager::ForEachActivatableQueue(
        CActivationObjectManager *this,
        struct CInpPushLock *a2,
        struct tagQ *a3)
{
  CActivationObjectManager *v3; // rsi
  _QWORD *i; // rdx
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  void *v11; // r8
  KeyboardProcessing *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  char v15; // [rsp+28h] [rbp-20h]

  v3 = qword_1C0252740;
  CInpLockExclusiveIfNeeded::CInpLockExclusiveIfNeeded((CInpLockExclusiveIfNeeded *)&v14, a2);
  v6 = (_QWORD *)*((_QWORD *)v3 + 3);
  v7 = v6;
  while ( 1 )
  {
    if ( !v7 )
      goto LABEL_7;
    v8 = (_QWORD *)*v7;
    if ( (*v7 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v8 = (_QWORD *)*v7;
    if ( ((unsigned __int8)v8 & 1) != 0 )
    {
LABEL_7:
      for ( i = v6 + 1; ; ++i )
      {
        if ( (unsigned __int64)i >= *((_QWORD *)v3 + 3) + 8 * ((unsigned __int64)*((unsigned int *)v3 + 5) >> 5) )
        {
          v8 = 0LL;
          goto LABEL_12;
        }
        if ( (*i & 1) == 0 )
          break;
      }
      v7 = (_QWORD *)*i;
      v6 = i;
      v8 = (_QWORD *)*i;
    }
    else
    {
      v7 = v8;
    }
LABEL_12:
    if ( !v8 )
      break;
    v9 = v8[10];
    if ( v9 )
    {
      v10 = ValidateHbwnd(v9, (__int64)i);
      if ( v10 )
      {
        v12 = *(KeyboardProcessing **)(*(_QWORD *)(v10 + 16) + 424LL);
        if ( v12 )
          KeyboardProcessing::MarkQueuesForKeyStateUpdateWorker(v12, a3, v11);
      }
    }
  }
  if ( !v15 )
  {
    v13 = v14;
    *(_QWORD *)(v14 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v13, 0LL);
    KeLeaveCriticalRegion();
  }
}
