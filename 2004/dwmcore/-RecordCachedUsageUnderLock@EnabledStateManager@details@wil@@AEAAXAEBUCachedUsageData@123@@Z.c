/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXAEBUCachedUsageData@123@@Z @ 0x1800D2074
 * Callers:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x1800D200C (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800D2228 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(
        wil::details::EnabledStateManager *this,
        const struct wil::details::EnabledStateManager::CachedUsageData *a2)
{
  void *v2; // r8
  unsigned __int32 v4; // ecx
  unsigned int v5; // edx
  __int64 v6; // r9
  unsigned int v7; // r9d
  const char *v8; // rax
  unsigned __int32 v9; // edx
  int v10; // edx
  unsigned __int32 v11; // ecx
  unsigned int *v12; // rbx
  unsigned int v13; // r8d
  __int64 v14; // [rsp+20h] [rbp-60h]
  const char *v15; // [rsp+20h] [rbp-60h]
  _QWORD v16[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+70h] [rbp-10h] BYREF

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
  v7 = 511;
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
  v8 = v15;
  LODWORD(v15) = 0;
  v16[3] = v8;
  if ( (v4 & 0x4000) != 0 )
  {
    HIDWORD(v15) = 0;
    v9 = v4 >> 5;
  }
  else
  {
    v9 = v4 >> 5;
    HIDWORD(v15) = (v4 >> 5) & 0x1FF;
  }
  v16[4] = v15;
  LODWORD(v15) = 4;
  if ( (v4 & 0x4000) != 0 )
    HIDWORD(v15) = v9 & 0x1FF;
  else
    HIDWORD(v15) = 0;
  v16[5] = v15;
  LODWORD(v15) = 1;
  v10 = v4 & 0x400000;
  if ( (v4 & 0x400000) != 0 )
  {
    HIDWORD(v15) = 0;
    v11 = v4 >> 15;
  }
  else
  {
    v11 = v4 >> 15;
    HIDWORD(v15) = v11 & 0x7F;
  }
  v16[6] = v15;
  LODWORD(v15) = 5;
  if ( v10 )
    HIDWORD(v15) = v11 & 0x7F;
  else
    HIDWORD(v15) = 0;
  v12 = (unsigned int *)v16;
  v16[7] = v15;
  do
  {
    v13 = v12[1];
    if ( v13 )
      wil::details::WilApi_RecordFeatureUsage((wil::details *)*(unsigned int *)a2, *v12, v13, v7, v15);
    v12 += 2;
  }
  while ( v12 != (unsigned int *)&v17 );
}
