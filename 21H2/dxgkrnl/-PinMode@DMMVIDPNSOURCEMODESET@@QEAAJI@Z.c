/*
 * XREFs of ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C0124C74
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0019598 (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C0121C9C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C02DD0B8 (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C02E009C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     ?PinMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I@Z @ 0x1C02E86A0 (-PinMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I@Z.c)
 * Callees:
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0005AA0 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0007EE0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z @ 0x1C0009308 (-FindById@-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018798 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C0124D74 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::PinMode(DMMVIDPNSOURCEMODESET *this, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 Container; // r12
  unsigned __int64 i; // r14
  unsigned int v13; // edx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  DMMVIDPNPRESENTPATH *Path; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 result; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  unsigned int v31; // [rsp+50h] [rbp+8h] BYREF

  v3 = (unsigned int)a2;
  if ( *((_BYTE *)this + 136) )
  {
    v4 = IndexedSet<DMMVIDPNSOURCEMODE>::FindById((__int64)this + 24, a2);
    v7 = v4;
    if ( v4 )
    {
      v8 = *((_QWORD *)this + 14);
      v9 = *((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = v4;
      if ( v8 )
      {
        v10 = *(_QWORD *)(v8 + 40);
        if ( !v10 )
        {
          v27 = WdLogNewEntry5_WdAssertion(0LL, v5);
          WdLogEvent5_WdAssertion(v27);
          v10 = *(_QWORD *)(v8 + 40);
        }
        Container = ContainedBy<DMMVIDPN>::GetContainer(v10 + 64, v5);
        for ( i = 0LL; ; ++i )
        {
          v13 = *(_DWORD *)(v8 + 24);
          v31 = -1;
          v14 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY *)(Container + 96), v13, i, &v31);
          v17 = v14;
          if ( v14 < 0 )
            break;
          if ( v31 == -1 )
            return 0LL;
          Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(Container + 96), *(_DWORD *)(v8 + 24), v31);
          if ( !Path )
          {
            v28 = WdLogNewEntry5_WdAssertion(v19, v18);
            WdLogEvent5_WdAssertion(v28);
          }
          if ( !DMMVIDPNPRESENTPATH::IsValidContentScaling(Path) )
          {
            v29 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
            v29[3] = *(unsigned int *)(v7 + 76);
            v29[4] = *(unsigned int *)(v7 + 80);
            v29[5] = *(int *)(v7 + 96);
            v29[6] = *(unsigned int *)(v8 + 24);
            WdLogEvent5_WdError(v29);
            result = 3223192389LL;
            *((_QWORD *)this + 18) = v9;
            return result;
          }
        }
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
        v30[3] = i;
        v30[4] = v3;
        v30[5] = this;
        v30[6] = v17;
        WdLogEvent5_WdError(v30);
        return (unsigned int)v17;
      }
      else
      {
        v26 = WdLogNewEntry5_WdError(v6, v5);
        *(_QWORD *)(v26 + 24) = this;
        WdLogEvent5_WdError(v26);
        return 3223192328LL;
      }
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(v6, v5);
      *(_QWORD *)(v25 + 24) = v3;
      *(_QWORD *)(v25 + 32) = this;
      WdLogEvent5_WdError(v25);
      return 3223192394LL;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdDmmEvent(this, a2);
    *(_QWORD *)(v24 + 24) = v3;
    *(_QWORD *)(v24 + 32) = this;
    WdLogEvent5_WdDmmEvent(v24);
    return 3223192352LL;
  }
}
