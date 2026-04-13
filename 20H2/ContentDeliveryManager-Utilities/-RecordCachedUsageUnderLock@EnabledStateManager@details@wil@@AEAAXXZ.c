/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18000C55C
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_aa194dc0bf891154933407eb98fb868a_@@CAXPEAX@Z @ 0x18000CAA0 (-_lambda_invoker_cdecl_@_lambda_aa194dc0bf891154933407eb98fb868a_@@CAXPEAX@Z.c)
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x18001722C (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     _lambda_0374aa0a5d1201b2358c6bce99369c58_::_lambda_invoker_cdecl_ @ 0x1800187A0 (_lambda_0374aa0a5d1201b2358c6bce99369c58_--_lambda_invoker_cdecl_.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x1800D8800 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18000C124 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(wil::details::EnabledStateManager *this)
{
  int *v1; // rdi
  int *v3; // rbx
  __int64 v4; // r9
  unsigned int v5; // r12d
  unsigned __int32 v6; // edx
  unsigned int v7; // ecx
  _QWORD *v8; // r15
  unsigned int v9; // r14d
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  void (*v14)(unsigned int, unsigned int, unsigned int, const char *); // rax
  _DWORD v15[16]; // [rsp+30h] [rbp-50h] BYREF

  v1 = (int *)*((_QWORD *)this + 7);
  v3 = (int *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)((char *)v1 - (char *)v3) >= 0x10 )
  {
    while ( v3 != v1 )
    {
      v4 = *((_QWORD *)v3 + 1);
      v5 = *v3;
      _m_prefetchw((const void *)v4);
      v6 = _InterlockedAnd((volatile signed __int32 *)v4, 0xFFC0401E);
      v7 = (v6 >> 1) & 0xF;
      if ( v7 )
      {
        _m_prefetchw((const void *)(v4 + 4));
        v7 &= ~_InterlockedOr((volatile signed __int32 *)(v4 + 4), v7);
      }
      v15[0] = 2;
      v15[2] = 6;
      v15[1] = v7 & 1;
      v8 = v15;
      v15[4] = 3;
      v15[3] = (v7 >> 1) & 1;
      v15[6] = 7;
      v9 = 0;
      v15[5] = (v7 >> 2) & 1;
      v10 = (v6 >> 5) & 0x1FF;
      v15[7] = v7 >> 3;
      v15[8] = 0;
      v15[10] = 4;
      if ( (v6 & 0x4000) != 0 )
        v10 = 0;
      v15[12] = 1;
      v15[9] = v10;
      v15[14] = 5;
      v11 = (v6 >> 15) & 0x7F;
      v15[11] = (v6 & 0x4000) != 0 ? (v6 >> 5) & 0x1FF : 0;
      v12 = v6 & 0x400000;
      v13 = v11;
      if ( v12 )
        v13 = 0;
      v15[13] = v13;
      v15[15] = v12 != 0 ? v11 : 0;
      do
      {
        if ( HIDWORD(*v8) )
          wil::details::WilApi_RecordFeatureUsage((wil::details *)v5);
        ++v9;
        ++v8;
      }
      while ( v9 < 8 );
      v3 += 4;
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    v14 = g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage || (v14 = g_wil_details_apiRecordFeatureUsage) != 0LL )
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v14)(0LL, 254LL, 0LL, 0LL);
  }
}
