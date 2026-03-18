/*
 * XREFs of ?DmmNeedDisplayModeResetDueToHdrPowerPolicy@@YA_NPEAVDXGADAPTER@@_N@Z @ 0x1C039C888
 * Callers:
 *     ?FindDisplayModeResetNeededDueToHdrPowerPolicy@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C030A2F0 (-FindDisplayModeResetNeededDueToHdrPowerPolicy@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000F08C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     MonitorIsAdvancedColorEnabled @ 0x1C01E06B4 (MonitorIsAdvancedColorEnabled.c)
 */

char __fastcall DmmNeedDisplayModeResetDueToHdrPowerPolicy(struct DXGADAPTER *a1, char a2)
{
  char v2; // bl
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  __int64 v21; // [rsp+20h] [rbp-10h] BYREF
  char v22; // [rsp+60h] [rbp+30h] BYREF
  __int64 v23; // [rsp+70h] [rbp+40h] BYREF
  __int64 v24; // [rsp+78h] [rbp+48h] BYREF

  v2 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry0(2LL);
    return 0;
  }
  v5 = *((_QWORD *)a1 + 349);
  if ( !v5 || (v6 = *(_QWORD *)(v5 + 104)) == 0 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 0;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v21, v6);
  v7 = *(_QWORD *)(v6 + 128);
  v23 = 0LL;
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 32));
    v8 = *(_QWORD *)(v6 + 128);
  }
  else
  {
    v8 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset(&v23, v8);
  if ( v23 )
  {
    v9 = v23 + 120;
    v10 = *(_QWORD *)(v23 + 120);
    if ( v10 != v23 + 120 )
    {
      v11 = v10 - 8;
      while ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 96);
        if ( !v12 )
          WdLogSingleEntry0(1LL);
        v13 = *(_QWORD *)(v12 + 96);
        if ( *(_BYTE *)(v13 + 419) )
        {
          v14 = *(_QWORD *)(v13 + 112);
          v22 = 0;
          MonitorIsAdvancedColorEnabled(v14, &v22);
          if ( v22 )
          {
            v15 = *(_QWORD *)(v12 + 104);
            if ( v15 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v15 + 96));
              v16 = *(_QWORD *)(v12 + 104);
            }
            else
            {
              v16 = 0LL;
            }
            v17 = *(_QWORD *)(v16 + 144);
            v24 = v16;
            if ( v17 )
            {
              v18 = *(_DWORD *)(v17 + 136);
              if ( v18 == 12 || v18 == 32 )
              {
                if ( !a2 )
                  goto LABEL_30;
              }
              else if ( a2 )
              {
LABEL_30:
                auto_rc<DMMVIDPNTARGETMODESET>::reset(&v24, 0LL);
                v2 = 1;
                break;
              }
            }
            auto_rc<DMMVIDPNTARGETMODESET>::reset(&v24, 0LL);
          }
        }
        v19 = *(_QWORD *)(v11 + 8);
        v11 = v19 - 8;
        if ( v19 == v9 )
          v11 = 0LL;
      }
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
  }
  auto_rc<DMMVIDPN const>::reset(&v23, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v21 + 40));
  return v2;
}
