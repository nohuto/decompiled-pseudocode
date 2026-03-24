/*
 * XREFs of ?IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0110AB0
 * Callers:
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0005AF4 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0005C38 (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation(
        DMMVIDPNPRESENTPATH *this,
        __int64 a2)
{
  __int64 v2; // rsi
  char v3; // bl
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  v2 = *((_QWORD *)this + 11);
  v3 = 0;
  v4 = *(_QWORD *)(v2 + 40);
  if ( !v4 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v11);
    v4 = *(_QWORD *)(v2 + 40);
  }
  v5 = *(_QWORD *)(v4 + 72);
  if ( !v5 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v12);
    v5 = *(_QWORD *)(v4 + 72);
  }
  v6 = *(_QWORD *)(v5 + 48);
  v7 = *(_QWORD *)(v6 + 8);
  if ( !v7 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v13);
    v7 = *(_QWORD *)(v6 + 8);
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( !v8 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v14);
  }
  v9 = *(_QWORD *)(v8 + 2696);
  if ( *(_BYTE *)(v9 + 249) && *(_BYTE *)(v9 + 250)
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 216) + 64LL) + 40LL) + 28LL) >= 0x4003u )
  {
    return 1;
  }
  return v3;
}
