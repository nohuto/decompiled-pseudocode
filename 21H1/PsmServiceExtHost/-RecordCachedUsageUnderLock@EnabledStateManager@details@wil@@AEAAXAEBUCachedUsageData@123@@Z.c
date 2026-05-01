/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXAEBUCachedUsageData@123@@Z @ 0x180039EE4
 * Callers:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180039E50 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180039EB8 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
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
  __int64 v13; // [rsp+20h] [rbp-60h]
  __int64 v14; // [rsp+20h] [rbp-60h]
  _QWORD v15[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v16; // [rsp+70h] [rbp-10h] BYREF

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
  LODWORD(v13) = 2;
  HIDWORD(v13) = v5 & 1;
  v15[0] = v13;
  LODWORD(v13) = 6;
  HIDWORD(v13) = ((unsigned __int8)v5 >> 1) & 1;
  v15[1] = v13;
  LODWORD(v13) = 3;
  HIDWORD(v13) = ((unsigned __int8)v5 >> 2) & 1;
  v15[2] = v13;
  LODWORD(v13) = 7;
  HIDWORD(v14) = v5 >= 8;
  v7 = v14;
  LODWORD(v14) = 0;
  v15[3] = v7;
  if ( (v4 & 0x4000) != 0 )
  {
    HIDWORD(v14) = 0;
    v8 = v4 >> 5;
  }
  else
  {
    v8 = v4 >> 5;
    HIDWORD(v14) = (v4 >> 5) & 0x1FF;
  }
  v15[4] = v14;
  LODWORD(v14) = 4;
  if ( (v4 & 0x4000) != 0 )
    HIDWORD(v14) = v8 & 0x1FF;
  else
    HIDWORD(v14) = 0;
  v15[5] = v14;
  LODWORD(v14) = 1;
  v9 = v4 & 0x400000;
  if ( (v4 & 0x400000) != 0 )
  {
    HIDWORD(v14) = 0;
    v10 = v4 >> 15;
  }
  else
  {
    v10 = v4 >> 15;
    HIDWORD(v14) = v10 & 0x7F;
  }
  v15[6] = v14;
  LODWORD(v14) = 5;
  if ( v9 )
    HIDWORD(v14) = v10 & 0x7F;
  else
    HIDWORD(v14) = 0;
  v11 = (unsigned int *)v15;
  v15[7] = v14;
  do
  {
    v12 = v11[1];
    if ( (_DWORD)v12 )
      wil::details::WilApi_RecordFeatureUsage((wil::details *)*(unsigned int *)a2, *v11, v12);
    v11 += 2;
  }
  while ( v11 != (unsigned int *)&v16 );
}
