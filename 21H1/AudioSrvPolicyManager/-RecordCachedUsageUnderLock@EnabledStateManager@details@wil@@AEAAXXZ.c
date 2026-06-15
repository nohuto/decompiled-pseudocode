/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18000951C
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_aa194dc0bf891154933407eb98fb868a_@@CAXPEAX@Z @ 0x180009A80 (-_lambda_invoker_cdecl_@_lambda_aa194dc0bf891154933407eb98fb868a_@@CAXPEAX@Z.c)
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x18000DA24 (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     _lambda_0374aa0a5d1201b2358c6bce99369c58_::_lambda_invoker_cdecl_ @ 0x18000E060 (_lambda_0374aa0a5d1201b2358c6bce99369c58_--_lambda_invoker_cdecl_.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x180042AE0 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     __security_check_cookie @ 0x18003EF80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(wil::details::EnabledStateManager *this)
{
  unsigned int *v1; // rdi
  unsigned int *v3; // rbx
  void *v4; // rdx
  unsigned __int32 v5; // edx
  unsigned int v6; // ecx
  __int64 v7; // r9
  void (*v8)(unsigned int, unsigned int, unsigned int, const char *); // r11
  unsigned int *v9; // rsi
  void (*v10)(unsigned int, unsigned int, unsigned int, const char *); // r10
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // [rsp+38h] [rbp-49h]
  __int64 v17; // [rsp+40h] [rbp-41h]
  __int64 v18; // [rsp+48h] [rbp-39h]
  __int64 v19; // [rsp+50h] [rbp-31h]
  __int64 v20; // [rsp+58h] [rbp-29h]
  __int64 v21; // [rsp+60h] [rbp-21h]
  __int64 v22; // [rsp+68h] [rbp-19h]
  __int64 v23; // [rsp+70h] [rbp-11h]
  _QWORD v24[8]; // [rsp+78h] [rbp-9h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+37h] BYREF

  v1 = (unsigned int *)*((_QWORD *)this + 7);
  v3 = (unsigned int *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)((char *)v1 - (char *)v3) >= 0x10 )
  {
    if ( v3 != v1 )
    {
      LODWORD(v16) = 2;
      LODWORD(v17) = 6;
      LODWORD(v18) = 3;
      LODWORD(v19) = 7;
      LODWORD(v20) = 0;
      LODWORD(v21) = 4;
      LODWORD(v22) = 1;
      LODWORD(v23) = 5;
      while ( 1 )
      {
        v4 = (void *)*((_QWORD *)v3 + 1);
        _m_prefetchw(v4);
        v5 = _InterlockedAnd((volatile signed __int32 *)v4, 0xFFC0401E);
        v6 = (v5 >> 1) & 0xF;
        if ( v6 )
        {
          v7 = *((_QWORD *)v3 + 1);
          _m_prefetchw((const void *)(v7 + 4));
          v6 &= ~_InterlockedOr((volatile signed __int32 *)(v7 + 4), v6);
        }
        v8 = g_wil_details_internalRecordFeatureUsage;
        v9 = (unsigned int *)v24;
        v10 = g_wil_details_apiRecordFeatureUsage;
        HIDWORD(v16) = v6 & 1;
        v24[0] = v16;
        HIDWORD(v17) = (v6 >> 1) & 1;
        v24[1] = v17;
        HIDWORD(v18) = (v6 >> 2) & 1;
        v24[2] = v18;
        HIDWORD(v19) = v6 >> 3;
        v24[3] = v19;
        v11 = (v5 >> 5) & 0x1FF;
        if ( (v5 & 0x4000) != 0 )
          v11 = 0;
        HIDWORD(v20) = v11;
        v24[4] = v20;
        HIDWORD(v21) = (v5 & 0x4000) != 0 ? (v5 >> 5) & 0x1FF : 0;
        v12 = (v5 >> 15) & 0x7F;
        v13 = v5 & 0x400000;
        v24[5] = v21;
        v14 = v12;
        if ( v13 )
          v14 = 0;
        HIDWORD(v22) = v14;
        v24[6] = v22;
        HIDWORD(v23) = v13 != 0 ? v12 : 0;
        v24[7] = v23;
        do
        {
          v15 = v9[1];
          if ( !(_DWORD)v15 )
            goto LABEL_17;
          if ( v8 )
          {
            ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))v8)(*v3, *v9, v15, 0LL);
          }
          else
          {
            if ( !v10 )
              goto LABEL_17;
            ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))v10)(*v3, *v9, v15, 0LL);
          }
          v10 = g_wil_details_apiRecordFeatureUsage;
          v8 = g_wil_details_internalRecordFeatureUsage;
LABEL_17:
          v9 += 2;
        }
        while ( v9 != (unsigned int *)&v25 );
        v3 += 4;
        if ( v3 == v1 )
          goto LABEL_21;
      }
    }
    v8 = g_wil_details_internalRecordFeatureUsage;
    v10 = g_wil_details_apiRecordFeatureUsage;
LABEL_21:
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    if ( v8 )
    {
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v8)(0LL, 254LL, 0LL, 0LL);
    }
    else if ( v10 )
    {
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v10)(0LL, 254LL, 0LL, 0LL);
    }
  }
}
