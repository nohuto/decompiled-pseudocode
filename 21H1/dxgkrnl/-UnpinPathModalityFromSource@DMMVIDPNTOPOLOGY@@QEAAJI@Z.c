/*
 * XREFs of ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C02E29D8
 * Callers:
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C02DC8D4 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 * Callees:
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C000E144 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000E170 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000F784 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0010C44 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C0018818 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C001A41C (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C0129B6C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::UnpinPathModalityFromSource(char **this, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 i; // rdi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  volatile signed __int32 *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  DMMVIDPNTARGETMODESET *v19; // rcx
  _QWORD *v21; // rax
  DMMVIDPNTARGETMODESET *v22; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v23; // [rsp+60h] [rbp+18h] BYREF
  volatile signed __int32 *v24; // [rsp+68h] [rbp+20h] BYREF

  v2 = a2;
  for ( i = 0LL; ; ++i )
  {
    v23 = -1;
    v5 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(this, (unsigned int)v2, i, &v23);
    v10 = v5;
    if ( v5 < 0 )
      break;
    if ( v23 == -1 )
      return 0LL;
    Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)this, v2, v23);
    if ( !Path )
    {
      v14 = WdLogNewEntry5_WdAssertion(v12, v11);
      WdLogEvent5_WdAssertion(v14);
    }
    v15 = *((_QWORD *)Path + 11);
    v16 = *(volatile signed __int32 **)(v15 + 104);
    if ( v16 )
    {
      _InterlockedIncrement(v16 + 24);
      v16 = *(volatile signed __int32 **)(v15 + 104);
    }
    v24 = v16;
    DMMVIDPNTARGETMODESET::UnpinMode((DMMVIDPNTARGETMODESET *)v16);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v24, 0LL);
    v17 = *((_QWORD *)Path + 12);
    v18 = *(_QWORD *)(v17 + 104);
    if ( v18 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 96));
      v19 = *(DMMVIDPNTARGETMODESET **)(v17 + 104);
    }
    else
    {
      v19 = 0LL;
    }
    v22 = v19;
    DMMVIDPNTARGETMODESET::UnpinMode(v19);
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v22, 0LL);
    DMMVIDPNPRESENTPATH::UnpinContentScaling(Path);
    DMMVIDPNPRESENTPATH::UnpinContentRotation(Path);
  }
  v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  v21[3] = i;
  v21[4] = v2;
  v21[5] = this;
  v21[6] = v10;
  return (unsigned int)v10;
}
