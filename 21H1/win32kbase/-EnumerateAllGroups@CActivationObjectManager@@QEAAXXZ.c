/*
 * XREFs of ?EnumerateAllGroups@CActivationObjectManager@@QEAAXXZ @ 0x1C00493A0
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C0036888 (UserActivateMITInputProcessing.c)
 * Callees:
 *     ?notifyISM@CActivationObject@@QEBAXW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@AEBU_LUID@@2AEBUACTIVATION_GROUP_ID@@@Z @ 0x1C001817C (-notifyISM@CActivationObject@@QEBAXW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@W4ACTIVATIONOBJECTSTAT.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0061864 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

void __fastcall CActivationObjectManager::EnumerateAllGroups(CActivationObjectManager *this)
{
  CActivationObjectManager *v1; // rbp
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *i; // rcx
  _QWORD *v7; // rax
  int v8; // eax
  _QWORD *v9; // rsi
  _QWORD *v10; // rdi
  _QWORD *v11; // rdx
  _QWORD *v12; // rbx
  _QWORD *k; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // r15
  _QWORD *v16; // r14
  _QWORD *j; // rdx
  _QWORD *m; // rdx
  int *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-68h]
  __int64 v22; // [rsp+28h] [rbp-60h]
  int v23; // [rsp+30h] [rbp-58h] BYREF
  __int128 v24; // [rsp+34h] [rbp-54h]
  __int128 v25; // [rsp+44h] [rbp-44h]
  __int128 v26; // [rsp+54h] [rbp-34h]
  int v27; // [rsp+64h] [rbp-24h]

  v1 = qword_1C0252740;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&qword_1C0256460, 0LL);
  v2 = (_QWORD *)*((_QWORD *)v1 + 1);
  v3 = v2;
  v4 = v2;
  if ( v2 )
  {
    v5 = (_QWORD *)*v2;
    if ( (*v2 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v5 = (_QWORD *)*v2;
    if ( ((unsigned __int8)v5 & 1) == 0 )
      goto LABEL_16;
    v4 = (_QWORD *)*((_QWORD *)v1 + 1);
  }
  for ( i = v2 + 1; ; ++i )
  {
    if ( i >= &v4[(unsigned __int64)*((unsigned int *)v1 + 1) >> 5] )
      goto LABEL_41;
    v7 = (_QWORD *)*i;
    if ( (*i & 1) == 0 )
      break;
  }
  v2 = i;
LABEL_10:
  v3 = v7;
  v5 = v7;
  while ( v5 )
  {
    v23 = 9;
    v27 = 0;
    v8 = *((_DWORD *)v5 + 4);
    v26 = 0LL;
    DWORD1(v26) = v8;
    v24 = 0LL;
    v25 = 0LL;
    InputExtensibilityCallout::CoreMsgSendMessage(v5, 11LL, &v23, 56LL, v21, v22);
    if ( !v3 )
      goto LABEL_37;
    v5 = (_QWORD *)*v3;
    if ( (*v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v5 = (_QWORD *)*v3;
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
LABEL_37:
      for ( j = v2 + 1;
            (unsigned __int64)j < *((_QWORD *)v1 + 1) + 8 * ((unsigned __int64)*((unsigned int *)v1 + 1) >> 5);
            ++j )
      {
        v7 = (_QWORD *)*j;
        if ( (*j & 1) == 0 )
        {
          v2 = j;
          goto LABEL_10;
        }
      }
LABEL_41:
      v5 = 0LL;
    }
    else
    {
LABEL_16:
      v3 = v5;
    }
  }
  v9 = (_QWORD *)*((_QWORD *)v1 + 1);
  v10 = v9;
  v11 = v9;
  if ( v9 )
  {
    v12 = (_QWORD *)*v9;
    if ( (*v9 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v12 = (_QWORD *)*v9;
    if ( ((unsigned __int8)v12 & 1) == 0 )
      goto LABEL_34;
    v11 = (_QWORD *)*((_QWORD *)v1 + 1);
  }
  for ( k = v9 + 1; ; ++k )
  {
    if ( k >= &v11[(unsigned __int64)*((unsigned int *)v1 + 1) >> 5] )
      goto LABEL_46;
    v14 = (_QWORD *)*k;
    if ( (*k & 1) == 0 )
      break;
  }
  v9 = k;
LABEL_27:
  v10 = v14;
  v12 = v14;
  while ( v12 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&qword_1C0256460, 0LL);
    v15 = v12 + 4;
    v16 = (_QWORD *)v12[4];
    if ( v16 != v12 + 4 )
    {
      v19 = (int *)(v12 + 2);
      do
      {
        v20 = (__int64)(v16 - 4);
        v16 = (_QWORD *)*v16;
        CActivationObject::notifyISM(v20, 0, 0, (__int64 *)(v20 + 64), (__int64 *)(v20 + 64), v19);
      }
      while ( v16 != v15 );
    }
    ExReleasePushLockSharedEx(&qword_1C0256460, 0LL);
    KeLeaveCriticalRegion();
    if ( !v10 )
      goto LABEL_42;
    v12 = (_QWORD *)*v10;
    if ( (*v10 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v12 = (_QWORD *)*v10;
    if ( ((unsigned __int8)v12 & 1) != 0 )
    {
LABEL_42:
      for ( m = v9 + 1;
            (unsigned __int64)m < *((_QWORD *)v1 + 1) + 8 * ((unsigned __int64)*((unsigned int *)v1 + 1) >> 5);
            ++m )
      {
        v14 = (_QWORD *)*m;
        if ( (*m & 1) == 0 )
        {
          v9 = m;
          goto LABEL_27;
        }
      }
LABEL_46:
      v12 = 0LL;
    }
    else
    {
LABEL_34:
      v10 = v12;
    }
  }
  ExReleasePushLockSharedEx(&qword_1C0256460, 0LL);
  KeLeaveCriticalRegion();
}
