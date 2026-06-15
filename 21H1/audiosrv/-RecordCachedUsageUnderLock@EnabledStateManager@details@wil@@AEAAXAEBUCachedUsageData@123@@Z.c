/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXAEBUCachedUsageData@123@@Z @ 0x1800368AC
 * Callers:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180036828 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(
        wil::details::EnabledStateManager *this,
        const struct wil::details::EnabledStateManager::CachedUsageData *a2)
{
  void *v2; // r8
  unsigned __int32 v4; // ecx
  unsigned int v5; // edx
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned __int32 v8; // edx
  int v9; // edx
  unsigned __int32 v10; // ecx
  unsigned int *v11; // rbx
  __int64 v12; // r8
  void (*v13)(unsigned int, unsigned int, unsigned int, const char *); // rax
  __int64 v14; // [rsp+30h] [rbp-9h]
  __int64 v15; // [rsp+30h] [rbp-9h]
  _QWORD v16[8]; // [rsp+40h] [rbp+7h] BYREF
  __int64 v17; // [rsp+80h] [rbp+47h] BYREF

  v2 = (void *)*((_QWORD *)a2 + 1);
  _m_prefetchw(v2);
  v4 = _InterlockedAnd((volatile signed __int32 *)v2, 0xFFC0401E);
  v5 = (v4 >> 1) & 0xF;
  if ( v5 )
  {
    v6 = *((_QWORD *)a2 + 1);
    _m_prefetchw((const void *)(v6 + 4));
    v5 &= ~_InterlockedOr((volatile signed __int32 *)(v6 + 4), v5);
  }
  LODWORD(v14) = 2;
  HIDWORD(v14) = v5 & 1;
  v16[0] = v14;
  LODWORD(v14) = 6;
  HIDWORD(v14) = ((unsigned __int8)v5 >> 1) & 1;
  v16[1] = v14;
  LODWORD(v14) = 3;
  HIDWORD(v14) = ((unsigned __int8)v5 >> 2) & 1;
  v16[2] = v14;
  LODWORD(v14) = 7;
  HIDWORD(v15) = v5 >= 8;
  v7 = v15;
  LODWORD(v15) = 0;
  v16[3] = v7;
  if ( (v4 & 0x4000) != 0 )
  {
    HIDWORD(v15) = 0;
    v8 = v4 >> 5;
  }
  else
  {
    v8 = v4 >> 5;
    HIDWORD(v15) = (v4 >> 5) & 0x1FF;
  }
  v16[4] = v15;
  LODWORD(v15) = 4;
  if ( (v4 & 0x4000) != 0 )
    HIDWORD(v15) = v8 & 0x1FF;
  else
    HIDWORD(v15) = 0;
  v16[5] = v15;
  LODWORD(v15) = 1;
  v9 = v4 & 0x400000;
  if ( (v4 & 0x400000) != 0 )
  {
    HIDWORD(v15) = 0;
    v10 = v4 >> 15;
  }
  else
  {
    v10 = v4 >> 15;
    HIDWORD(v15) = v10 & 0x7F;
  }
  v16[6] = v15;
  LODWORD(v15) = 5;
  if ( v9 )
    HIDWORD(v15) = v10 & 0x7F;
  else
    HIDWORD(v15) = 0;
  v11 = (unsigned int *)v16;
  v16[7] = v15;
  do
  {
    v12 = v11[1];
    if ( (_DWORD)v12 )
    {
      v13 = g_wil_details_internalRecordFeatureUsage;
      if ( g_wil_details_internalRecordFeatureUsage || (v13 = g_wil_details_apiRecordFeatureUsage) != 0LL )
        ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))v13)(*(unsigned int *)a2, *v11, v12, 0LL);
    }
    v11 += 2;
  }
  while ( v11 != (unsigned int *)&v17 );
}
