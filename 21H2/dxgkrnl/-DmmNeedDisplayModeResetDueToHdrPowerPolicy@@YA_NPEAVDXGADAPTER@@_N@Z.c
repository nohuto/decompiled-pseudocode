/*
 * XREFs of ?DmmNeedDisplayModeResetDueToHdrPowerPolicy@@YA_NPEAVDXGADAPTER@@_N@Z @ 0x1C02DE590
 * Callers:
 *     ?FindDisplayModeResetNeededDueToHdrPowerPolicy@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02697B0 (-FindDisplayModeResetNeededDueToHdrPowerPolicy@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00056AC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00081AC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00083B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     MonitorIsAdvancedColorEnabled @ 0x1C013E2D4 (MonitorIsAdvancedColorEnabled.c)
 */

char __fastcall DmmNeedDisplayModeResetDueToHdrPowerPolicy(struct DXGADAPTER *a1, __int64 a2)
{
  char v2; // bl
  char v3; // r15
  __int64 v5; // rax
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  struct HDXGMONITOR__ *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // [rsp+20h] [rbp-10h] BYREF
  bool v27; // [rsp+60h] [rbp+30h] BYREF
  __int64 v28; // [rsp+70h] [rbp+40h] BYREF
  __int64 v29; // [rsp+78h] [rbp+48h] BYREF

  v2 = 0;
  v3 = a2;
  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdError(0LL, a2);
LABEL_3:
    WdLogEvent5_WdError(v5);
    return 0;
  }
  v7 = *((_QWORD *)a1 + 337);
  if ( !v7 || (v8 = *(_QWORD *)(v7 + 88)) == 0 )
  {
    v5 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v5 + 24) = a1;
    goto LABEL_3;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v26, v8);
  v9 = *(_QWORD *)(v8 + 88);
  v28 = 0LL;
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 32));
    v10 = *(_QWORD *)(v8 + 88);
  }
  else
  {
    v10 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset(&v28, v10);
  if ( v28 )
  {
    v14 = v28 + 120;
    v15 = *(_QWORD *)(v28 + 120);
    if ( v15 != v28 + 120 )
    {
      v16 = v15 - 8;
      while ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 96);
        if ( !v17 )
        {
          v18 = WdLogNewEntry5_WdAssertion(v12, v11);
          WdLogEvent5_WdAssertion(v18);
        }
        v12 = *(_QWORD *)(v17 + 96);
        if ( *(_BYTE *)(v12 + 419) )
        {
          v19 = *(struct HDXGMONITOR__ **)(v12 + 112);
          v27 = 0;
          MonitorIsAdvancedColorEnabled(v19, &v27);
          if ( v27 )
          {
            v20 = *(_QWORD *)(v17 + 104);
            if ( v20 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v20 + 96));
              v21 = *(_QWORD *)(v17 + 104);
            }
            else
            {
              v21 = 0LL;
            }
            v22 = *(_QWORD *)(v21 + 144);
            v29 = v21;
            if ( v22 )
            {
              if ( ((v23 = *(_DWORD *)(v22 + 136), v23 == 12) || v23 == 32) && !v3 || v23 != 12 && v23 != 32 && v3 )
              {
                auto_rc<DMMVIDPNTARGETMODESET>::reset(&v29, 0LL);
                v2 = 1;
                break;
              }
            }
            auto_rc<DMMVIDPNTARGETMODESET>::reset(&v29, 0LL);
          }
        }
        v24 = *(_QWORD *)(v16 + 8);
        v16 = v24 - 8;
        if ( v24 == v14 )
          v16 = 0LL;
      }
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdError(v13);
  }
  auto_rc<DMMVIDPN const>::reset(&v28, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v26 + 40), v25);
  return v2;
}
