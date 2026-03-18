/*
 * XREFs of ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C000DE24
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0013458 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C011DA70 (-UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PE.c)
 * Callees:
 *     IsVirtualizationDisabledForTarget @ 0x1C00EF9F4 (IsVirtualizationDisabledForTarget.c)
 *     ?IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C011DDE0 (-IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsPrimaryClonePath@DMMVIDPNPRESENTPATH@@QEBAJPEAE@Z @ 0x1C012DEFC (-IsPrimaryClonePath@DMMVIDPNPRESENTPATH@@QEBAJPEAE@Z.c)
 */

void __fastcall DMMVIDPNPRESENTPATH::SetRotationSupport(
        DMMVIDPNPRESENTPATH *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  char v24; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int8 v25; // [rsp+48h] [rbp+10h] BYREF
  char v26; // [rsp+50h] [rbp+18h] BYREF

  if ( !a2 )
  {
    v19 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v19);
  }
  v4 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v5 = *(_QWORD *)(v4 + 40);
  if ( !v5 )
  {
    v20 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v20);
    v5 = *(_QWORD *)(v4 + 40);
  }
  v6 = *(_QWORD *)(v5 + 88);
  v7 = *(_QWORD *)(v6 + 8);
  if ( !v7 )
  {
    v21 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v21);
    v7 = *(_QWORD *)(v6 + 8);
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v8 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v8 + 168)) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v22);
  }
  v11 = *((_QWORD *)this + 12);
  v24 = 1;
  if ( (int)IsVirtualizationDisabledForTarget(v8, *(unsigned int *)(v11 + 24), &v24, &v26) < 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( !v24 )
  {
    *((_DWORD *)this + 31) = 31;
    return;
  }
  *((struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)this + 31) = *a2;
  if ( !DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation(this) )
  {
    *((_DWORD *)this + 31) |= 0x10u;
    return;
  }
  if ( g_OSTestSigningEnabled )
  {
    v25 = 0;
    if ( (int)DMMVIDPNPRESENTPATH::IsPrimaryClonePath(this, &v25) >= 0 )
    {
      v16 = *((_DWORD *)this + 31);
      if ( v25 )
      {
        if ( (v16 & 0x10) == 0 )
        {
          v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14);
          v17[3] = 275LL;
          v17[4] = 28LL;
          v18 = (__int64)*a2;
          v17[6] = 1LL;
          goto LABEL_22;
        }
        if ( (v16 & 0xE0) != 0 )
        {
          v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14);
          v17[3] = 275LL;
          v17[4] = 28LL;
          v18 = (__int64)*a2;
          v17[6] = 2LL;
LABEL_22:
          v17[5] = v18;
          v17[7] = 0LL;
LABEL_23:
          WdLogEvent5_WdCriticalError(v17);
        }
      }
      else if ( (v16 & 0xF0) == 0 )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14);
        v17[3] = 275LL;
        v17[4] = 28LL;
        v17[5] = *a2;
        *((_OWORD *)v17 + 3) = 0LL;
        goto LABEL_23;
      }
    }
  }
}
