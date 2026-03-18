/*
 * XREFs of ?DestroyActivationObjectInternal@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C0027BC8
 * Callers:
 *     NtUserDestroyActivationObject @ 0x1C0005140 (NtUserDestroyActivationObject.c)
 *     ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x1C0027A88 (-OnThreadTermination@CActivationObjectManager@@QEAAXXZ.c)
 * Callees:
 *     ?Destroy@CActivationObject@@SAJPEAV1@@Z @ 0x1C0027CE8 (-Destroy@CActivationObject@@SAJPEAV1@@Z.c)
 *     ?NotifyActivationObjectStateOnCleanup@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C0027D28 (-NotifyActivationObjectStateOnCleanup@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 *     ?notifyISM@CActivationObject@@QEBAXW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@AEBU_LUID@@2AEBUACTIVATION_GROUP_ID@@@Z @ 0x1C0027EFC (-notifyISM@CActivationObject@@QEBAXW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@W4ACTIVATIONOBJECTSTAT.c)
 *     ?GetContainingGroupIdFromActivationObject@CActivationObjectManager@@AEBA?AUACTIVATION_GROUP_ID@@AEBVCActivationObject@@@Z @ 0x1C002864C (-GetContainingGroupIdFromActivationObject@CActivationObjectManager@@AEBA-AUACTIVATION_GROUP_ID@@.c)
 *     ??0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C00287E0 (--0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 */

__int64 __fastcall CActivationObjectManager::DestroyActivationObjectInternal(
        CActivationObjectManager *this,
        struct CActivationObject *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // ebx
  __int64 v10; // rcx
  _QWORD *i; // rdx
  _QWORD *v12; // r10
  int v13; // r9d
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  char v15; // [rsp+38h] [rbp-10h]
  char v16; // [rsp+58h] [rbp+10h] BYREF
  __int64 v17; // [rsp+60h] [rbp+18h]

  CInpLockExclusiveIfNeeded::CInpLockExclusiveIfNeeded((CInpLockExclusiveIfNeeded *)&v14, a2);
  if ( a2 )
  {
    if ( *((struct _KTHREAD **)a2 + 7) == KeGetCurrentThread() )
    {
      CActivationObjectManager::GetContainingGroupIdFromActivationObject(v4, &v16, a2);
      CActivationObjectManager::NotifyActivationObjectStateOnCleanup(this, a2);
      if ( !*((_BYTE *)a2 + 4) )
      {
        v12 = (_QWORD *)((char *)a2 + 8);
        v13 = *((_DWORD *)this + 5) >> 5;
        v17 = *((_QWORD *)a2 + 2) & (-1LL << (*((_DWORD *)this + 5) & 0x1F));
        for ( i = (_QWORD *)(*((_QWORD *)this + 3)
                           + 8LL
                           * ((37
                             * (BYTE6(v17)
                              + 37
                              * (BYTE5(v17)
                               + 37
                               * (BYTE4(v17)
                                + 37
                                * (BYTE3(v17)
                                 + 37 * (BYTE2(v17) + 37 * (BYTE1(v17) + 37 * ((unsigned __int8)v17 + 11623883)))))))
                             + HIBYTE(v17)) & (unsigned int)(v13 - 1))); (*i & 1) == 0; i = (_QWORD *)*i )
        {
          if ( (_QWORD *)*i == v12 )
          {
            *i = *v12;
            --*((_DWORD *)this + 4);
            *v12 |= 0x8000000000000002uLL;
            break;
          }
        }
      }
      v5 = (_QWORD *)((char *)a2 + 32);
      *((_QWORD *)a2 + 3) = 0LL;
      v6 = *((_QWORD *)a2 + 4);
      if ( *(struct CActivationObject **)(v6 + 8) != (struct CActivationObject *)((char *)a2 + 32)
        || (v7 = (_QWORD *)*((_QWORD *)a2 + 5), (_QWORD *)*v7 != v5) )
      {
        __fastfail(3u);
      }
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      *((_QWORD *)a2 + 5) = (char *)a2 + 32;
      *v5 = v5;
      CActivationObject::notifyISM(a2, 1LL);
      CActivationObject::Destroy(a2);
      v8 = 0;
    }
    else
    {
      v8 = -1073741790;
    }
  }
  else
  {
    v8 = -1073741275;
  }
  if ( !v15 )
  {
    v10 = v14;
    *(_QWORD *)(v14 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
  }
  return v8;
}
