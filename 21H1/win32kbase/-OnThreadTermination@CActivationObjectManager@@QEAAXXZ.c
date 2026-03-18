/*
 * XREFs of ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x1C0017D08
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?DestroyActivationObjectInternal@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C0017E48 (-DestroyActivationObjectInternal@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 */

void __fastcall CActivationObjectManager::OnThreadTermination(CActivationObjectManager *this)
{
  CActivationObjectManager *v1; // rdi
  _QWORD **v2; // rsi
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  _QWORD **i; // rdx
  _QWORD *v6; // rdx
  _QWORD *j; // rcx

  v1 = qword_1C0252740;
  RIMLockExclusive(&qword_1C0256460);
  v2 = (_QWORD **)*((_QWORD *)v1 + 3);
  v3 = v2;
  while ( 1 )
  {
    if ( !v3 )
      goto LABEL_6;
    v4 = (_QWORD *)*v3;
    if ( (*v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v4 = (_QWORD *)*v3;
    if ( ((unsigned __int8)v4 & 1) == 0 )
    {
      v3 = v4;
    }
    else
    {
LABEL_6:
      for ( i = v2 + 1;
            (unsigned __int64)i < *((_QWORD *)v1 + 3) + 8 * ((unsigned __int64)*((unsigned int *)v1 + 5) >> 5);
            ++i )
      {
        if ( ((unsigned __int8)*i & 1) == 0 )
        {
          v3 = *i;
          v2 = i;
          v4 = *i;
          goto LABEL_11;
        }
      }
      v4 = 0LL;
    }
LABEL_11:
    if ( !v4 )
      break;
    v6 = v4 - 1;
    if ( (struct _KTHREAD *)v4[6] == KeGetCurrentThread() )
    {
      *((_BYTE *)v6 + 4) = 1;
      for ( j = v2; (*j & 1) == 0; j = (_QWORD *)*j )
      {
        if ( (_QWORD *)*j == v3 )
        {
          *j = *v3;
          --*((_DWORD *)v1 + 4);
          *v3 |= 0x8000000000000002uLL;
          v3 = j;
          break;
        }
      }
      CActivationObjectManager::DestroyActivationObjectInternal(v1, (struct CActivationObject *)v6);
    }
  }
  qword_1C0256468 = 0LL;
  ExReleasePushLockExclusiveEx(&qword_1C0256460, 0LL);
  KeLeaveCriticalRegion();
}
