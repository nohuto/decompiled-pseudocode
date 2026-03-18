/*
 * XREFs of ?ForEachActivatableQueue@CActivationObjectManager@@QEAAXA6AXPEAUtagQ@@PEAX@Z1@Z @ 0x1C012A88C
 * Callers:
 *     MarkQueuesForKeyStateUpdate @ 0x1C01A9730 (MarkQueuesForKeyStateUpdate.c)
 * Callees:
 *     ??0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C0092480 (--0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     ValidateHbwnd @ 0x1C0119F80 (ValidateHbwnd.c)
 *     ?MarkQueuesForKeyStateUpdateWorker@KeyboardProcessing@@YAXPEAUtagQ@@QEAX@Z @ 0x1C01A8F98 (-MarkQueuesForKeyStateUpdateWorker@KeyboardProcessing@@YAXPEAUtagQ@@QEAX@Z.c)
 */

void __fastcall CActivationObjectManager::ForEachActivatableQueue(
        CActivationObjectManager *this,
        struct CInpPushLock *a2,
        struct tagQ *a3)
{
  CActivationObjectManager *v3; // rsi
  _QWORD *v5; // rdx
  _QWORD *v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  KeyboardProcessing *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  char v16; // [rsp+28h] [rbp-20h]

  v3 = qword_1C024A720;
  CInpLockExclusiveIfNeeded::CInpLockExclusiveIfNeeded((CInpLockExclusiveIfNeeded *)&v15, a2);
  v8 = (_QWORD *)*((_QWORD *)v3 + 3);
  v9 = v8;
  while ( 1 )
  {
    if ( !v9 )
      goto LABEL_7;
    v10 = (_QWORD *)*v9;
    if ( (*v9 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v10 = (_QWORD *)*v9;
    if ( ((unsigned __int8)v10 & 1) != 0 )
    {
LABEL_7:
      v5 = v8 + 1;
      v6 = (_QWORD *)(*((_QWORD *)v3 + 3) + 8 * ((unsigned __int64)*((unsigned int *)v3 + 5) >> 5));
      while ( 1 )
      {
        if ( v5 >= v6 )
        {
          v10 = 0LL;
          goto LABEL_12;
        }
        if ( (*v5 & 1) == 0 )
          break;
        ++v5;
      }
      v9 = (_QWORD *)*v5;
      v8 = v5;
      v10 = (_QWORD *)*v5;
    }
    else
    {
      v9 = v10;
    }
LABEL_12:
    if ( !v10 )
      break;
    v11 = v10[10];
    if ( v11 )
    {
      v12 = ValidateHbwnd(v11, (__int64)v5, (__int64)v6, v7);
      if ( v12 )
      {
        v13 = *(KeyboardProcessing **)(*(_QWORD *)(v12 + 16) + 432LL);
        if ( v13 )
          KeyboardProcessing::MarkQueuesForKeyStateUpdateWorker(v13, a3, v6);
      }
    }
  }
  if ( !v16 )
  {
    v14 = v15;
    *(_QWORD *)(v15 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v14, 0LL);
    KeLeaveCriticalRegion();
  }
}
