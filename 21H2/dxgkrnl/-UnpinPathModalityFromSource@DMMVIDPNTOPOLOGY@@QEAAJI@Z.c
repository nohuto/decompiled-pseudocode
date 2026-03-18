/*
 * XREFs of ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C03A5EA8
 * Callers:
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C039EE30 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0010B6C (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C0011AC8 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x1C001EC18 (-UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C001F1E4 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01AA388 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::UnpinPathModalityFromSource(DMMVIDPNTOPOLOGY **this, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 i; // rdi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  struct DMMVIDPNPRESENTPATH *Path; // rbx
  __int64 v11; // rax
  volatile signed __int32 *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  DMMVIDPNTARGETMODESET *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v18; // rax
  DMMVIDPNTARGETMODESET *v19; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v20; // [rsp+60h] [rbp+18h] BYREF
  volatile signed __int32 *v21; // [rsp+68h] [rbp+20h] BYREF

  v2 = a2;
  for ( i = 0LL; ; ++i )
  {
    v20 = -1;
    v5 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(this, v2, i, &v20);
    v8 = v5;
    if ( v5 < 0 )
      break;
    if ( v20 == -1 )
      return 0LL;
    Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)this, v2, v20);
    if ( !Path )
      WdLogSingleEntry0(1LL);
    v11 = *((_QWORD *)Path + 11);
    v12 = *(volatile signed __int32 **)(v11 + 104);
    if ( v12 )
    {
      _InterlockedIncrement(v12 + 24);
      v12 = *(volatile signed __int32 **)(v11 + 104);
    }
    v21 = v12;
    DMMVIDPNSOURCEMODESET::UnpinMode((DMMVIDPNSOURCEMODESET *)v12, v9);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v21, 0LL);
    v13 = *((_QWORD *)Path + 12);
    v14 = *(_QWORD *)(v13 + 104);
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 96));
      v15 = *(DMMVIDPNTARGETMODESET **)(v13 + 104);
    }
    else
    {
      v15 = 0LL;
    }
    v19 = v15;
    DMMVIDPNTARGETMODESET::UnpinMode(v15);
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v19, 0LL);
    DMMVIDPNPRESENTPATH::UnpinContentScaling(Path);
    DMMVIDPNPRESENTPATH::UnpinContentRotation(Path, v16);
  }
  v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
  v18[3] = i;
  v18[4] = v2;
  v18[5] = this;
  v18[6] = v8;
  return (unsigned int)v8;
}
