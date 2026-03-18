/*
 * XREFs of ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C01496E8
 * Callers:
 *     ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x1C010F304 (-Initialize@DXGPROCESS@@QEAAJPEAX@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C011BAD8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C018486C (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C001A33C (-VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGPROCESS::DeferredInitialize(DXGPROCESS *this, __int64 a2)
{
  __int64 v2; // rsi
  VIDSCH_EXPORT *v4; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  struct DXGGLOBAL *v12; // rax
  __int64 v13; // r14
  __int64 v14; // rax
  struct DXGGLOBAL *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  struct DXGGLOBAL *v25; // rax

  v2 = (unsigned int)a2;
  if ( (unsigned int)a2 >= 2 )
  {
    v20 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v20 + 24) = 1713LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v4 = 0LL;
  if ( *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v2 + 16) )
  {
    v21 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v21 + 24) = 1718LL;
    WdLogEvent5_WdAssertion(v21);
  }
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  if ( (unsigned int)v2 >= 2 )
  {
    v6 = 0LL;
  }
  else
  {
    _mm_lfence();
    v6 = *((_QWORD *)Global + v2 + 15);
  }
  v7 = (*(__int64 (__fastcall **)(DXGPROCESS *))(*(_QWORD *)(v6 + 8) + 80LL))(this);
  v10 = *((_QWORD *)this + 8);
  v11 = (unsigned int)(*(_DWORD *)v6 - 1);
  *(_QWORD *)(v10 + 8 * v11 + 16) = v7;
  if ( !v7 )
    goto LABEL_22;
  if ( *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v2) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v10, v11);
    *(_QWORD *)(v23 + 24) = 1729LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v12 = DXGGLOBAL::GetGlobal(v10, v11);
  if ( (unsigned int)v2 >= 2 )
  {
    v13 = 0LL;
  }
  else
  {
    _mm_lfence();
    v13 = *((_QWORD *)v12 + v2 + 13);
  }
  v14 = (*(__int64 (__fastcall **)(DXGPROCESS *))(*(_QWORD *)(v13 + 8) + 360LL))(this);
  v10 = *((_QWORD *)this + 8);
  v11 = (unsigned int)(*(_DWORD *)v13 - 1);
  *(_QWORD *)(v10 + 8 * v11) = v14;
  if ( v14 )
  {
    v15 = DXGGLOBAL::GetGlobal(v10, v11);
    if ( (unsigned int)v2 >= 2 )
      v18 = 0LL;
    else
      v18 = *((_QWORD *)v15 + v2 + 15);
    if ( !v18 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v17, v16);
      *(_QWORD *)(v24 + 24) = 1741LL;
      WdLogEvent5_WdAssertion(v24);
    }
    if ( *((_BYTE *)this + 346) )
    {
      v25 = DXGGLOBAL::GetGlobal(v17, v16);
      if ( (unsigned int)v2 < 2 )
        v4 = (VIDSCH_EXPORT *)*((_QWORD *)v25 + v2 + 15);
      VIDSCH_EXPORT::VidSchRegisterAsDwm(v4, this);
    }
    return 0LL;
  }
  else
  {
LABEL_22:
    v22 = WdLogNewEntry5_WdLowResource(v10, v11, v8, v9);
    *(_QWORD *)(v22 + 24) = this;
    WdLogEvent5_WdLowResource(v22);
    return 3221225495LL;
  }
}
