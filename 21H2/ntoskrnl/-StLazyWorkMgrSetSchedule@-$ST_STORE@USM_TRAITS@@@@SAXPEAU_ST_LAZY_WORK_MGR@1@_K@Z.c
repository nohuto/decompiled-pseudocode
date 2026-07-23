/*
 * XREFs of ?StLazyWorkMgrSetSchedule@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x140275324
 * Callers:
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14024E26C (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x1402755B4 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x14028BAA4 (-StLazyWorkMgrResetIdle@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StLazyWorkMgrSetSchedule(_QWORD *a1, unsigned __int64 UnbiasedInterruptTime)
{
  __int64 v2; // r11
  _QWORD *v3; // rbx
  unsigned __int64 v4; // r9
  unsigned __int64 *v5; // rdi
  unsigned __int64 v6; // rsi
  _QWORD *i; // r8
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  __int64 result; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx

  v2 = 0LL;
  v3 = a1;
  if ( !UnbiasedInterruptTime )
  {
    LOBYTE(a1) = 1;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(a1);
  }
  v4 = -1LL;
  v5 = v3 + 21;
  v6 = -1LL;
  for ( i = v3; i < v5; i += 3 )
  {
    v8 = i[1];
    if ( v8 != -1LL )
    {
      v13 = i[2];
      if ( v13 < UnbiasedInterruptTime - v3[23] )
        v13 = UnbiasedInterruptTime - v3[23];
      v14 = *i + v13;
      if ( v14 >= v4 )
        v14 = v4;
      v4 = v14;
      if ( v8 < v6 )
        v6 = i[1];
    }
  }
  v9 = UnbiasedInterruptTime;
  v10 = UnbiasedInterruptTime;
  if ( v4 >= UnbiasedInterruptTime )
    v9 = v4;
  if ( v6 >= UnbiasedInterruptTime )
    v10 = v6;
  *v5 = v10;
  if ( v10 == -1LL )
  {
    v3[22] = v2;
  }
  else
  {
    v11 = v10 - UnbiasedInterruptTime;
    if ( v10 >= v9 )
      v11 = v9 - UnbiasedInterruptTime;
    v3[22] = v11;
    if ( v11 )
    {
      v2 = v11;
    }
    else
    {
      v3[22] = 1LL;
      v2 = 1LL;
    }
  }
  result = *(v3 - 715);
  *(_QWORD *)(result + 6600) = -v2;
  return result;
}
