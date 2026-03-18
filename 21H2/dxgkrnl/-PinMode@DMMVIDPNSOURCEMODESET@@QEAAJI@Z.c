/*
 * XREFs of ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C01AA288
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C001D584 (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C01AA47C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C039B524 (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C039E2B8 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     ?PinMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I@Z @ 0x1C03A72B0 (-PinMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z @ 0x1C0010430 (-FindById@-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z.c)
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0010A74 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01AA388 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::PinMode(DMMVIDPNSOURCEMODESET *this, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r13
  __int64 v8; // rcx
  __int64 Container; // r12
  unsigned __int64 i; // r14
  unsigned int v11; // edx
  int v12; // eax
  unsigned int v13; // r15d
  DMMVIDPNPRESENTPATH *Path; // r15
  __int64 result; // rax
  unsigned int v16; // [rsp+60h] [rbp+8h] BYREF

  v3 = a2;
  if ( *((_BYTE *)this + 136) )
  {
    v4 = IndexedSet<DMMVIDPNSOURCEMODE>::FindById((__int64)this + 24, a2);
    v5 = v4;
    if ( v4 )
    {
      v6 = *((_QWORD *)this + 14);
      v7 = *((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = v4;
      if ( v6 )
      {
        v8 = *(_QWORD *)(v6 + 40);
        if ( !v8 )
        {
          WdLogSingleEntry0(1LL);
          v8 = *(_QWORD *)(v6 + 40);
        }
        Container = ContainedBy<DMMVIDPN>::GetContainer(v8 + 64);
        for ( i = 0LL; ; ++i )
        {
          v11 = *(_DWORD *)(v6 + 24);
          v16 = -1;
          v12 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY *)(Container + 96), v11, i, &v16);
          v13 = v12;
          if ( v12 < 0 )
            break;
          if ( v16 == -1 )
            return 0LL;
          Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(Container + 96), *(_DWORD *)(v6 + 24), v16);
          if ( !Path )
            WdLogSingleEntry0(1LL);
          if ( !DMMVIDPNPRESENTPATH::IsValidContentScaling(Path) )
          {
            WdLogSingleEntry4(
              2LL,
              *(unsigned int *)(v5 + 76),
              *(unsigned int *)(v5 + 80),
              *(int *)(v5 + 96),
              *(unsigned int *)(v6 + 24));
            result = 3223192389LL;
            *((_QWORD *)this + 18) = v7;
            return result;
          }
        }
        WdLogSingleEntry4(2LL, i, v3, this, v12);
        return v13;
      }
      else
      {
        WdLogSingleEntry1(2LL, this);
        return 3223192328LL;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, v3, this);
      return 3223192394LL;
    }
  }
  else
  {
    WdLogSingleEntry2(7LL, a2, this);
    return 3223192352LL;
  }
}
