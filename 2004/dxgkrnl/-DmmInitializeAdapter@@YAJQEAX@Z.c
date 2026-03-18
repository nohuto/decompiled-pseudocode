/*
 * XREFs of ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C0185698
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C0183500 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0008108 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0008344 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000CFDC (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0019438 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?IsFirmwareRecommendedWireformatAndColorSpaceValid@DMMVIDPNTARGETMODE@@QEBA_NT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C005B910 (-IsFirmwareRecommendedWireformatAndColorSpaceValid@DMMVIDPNTARGETMODE@@QEBA_NT_D3DKMDT_WIRE_FORM.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C02DFE08 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 */

__int64 __fastcall DmmInitializeAdapter(DXGADAPTER *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 *v6; // r14
  __int64 v7; // rbx
  bool v8; // zf
  __int64 v9; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *v28; // r15
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 i; // rcx
  _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v34; // ecx
  struct _LUID *v35; // rdx
  unsigned int v36; // r11d
  __int64 v37; // [rsp+30h] [rbp-40h] BYREF
  struct DMMVIDPN *v38; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v39; // [rsp+40h] [rbp-30h] BYREF
  __int64 v40; // [rsp+48h] [rbp-28h] BYREF
  __int64 v41; // [rsp+50h] [rbp-20h] BYREF
  _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v42[2]; // [rsp+58h] [rbp-18h] BYREF
  int v43; // [rsp+60h] [rbp-10h]

  if ( !this )
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v4, v3);
    WdLogEvent5_WdAssertion(v12);
  }
  v5 = *((_QWORD *)this + 337);
  if ( !v5 )
    return 0LL;
  v6 = *(__int64 **)(v5 + 88);
  if ( v6 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v41, *(_QWORD *)(v5 + 88));
    v7 = 0LL;
    v8 = (*((_DWORD *)this + 87) & 0x8000) == 0;
    v37 = 0LL;
    *(_QWORD *)&v42[0].0 = 0LL;
    v43 = 0;
    if ( !v8 )
    {
      v38 = 0LL;
      v14 = VIDPN_MGR::RecommendFunctionalVidPn((VIDPN_MGR *)v6, DXGK_RFVR_FIRMWARE, v42, 0xCu, &v38);
      v17 = v14;
      if ( v14 < 0 )
      {
        v20 = WdLogNewEntry5_WdError(v16, v15);
        *(_QWORD *)(v20 + 24) = this;
        *(_QWORD *)(v20 + 32) = v17;
        WdLogEvent5_WdError(v20);
      }
      else
      {
        auto_rc<DMMVIDPN>::reset(&v37, (__int64)v38);
        v7 = v37;
      }
      if ( v7 )
      {
        if ( v7 == -96 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v19, v18);
          WdLogEvent5_WdAssertion(v21);
        }
        if ( *(_QWORD *)(v7 + 136) == 1LL )
        {
          v23 = *(_QWORD *)(v7 + 120);
          if ( v23 == v7 + 120 )
            v24 = 0LL;
          else
            v24 = v23 - 8;
          v25 = *(_QWORD *)(v24 + 96);
          if ( !v25 )
          {
            v26 = WdLogNewEntry5_WdAssertion(v19, v18);
            WdLogEvent5_WdAssertion(v26);
          }
          v27 = *(_QWORD *)(v25 + 104);
          if ( v27 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v27 + 96));
            v27 = *(_QWORD *)(v25 + 104);
            v7 = v37;
          }
          v28 = *(_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE **)(v27 + 144);
          v40 = v27;
          if ( !v28 )
          {
            v29 = WdLogNewEntry5_WdAssertion(v19, v18);
            WdLogEvent5_WdAssertion(v29);
          }
          if ( DMMVIDPNTARGETMODE::IsFirmwareRecommendedWireformatAndColorSpaceValid(
                 (DMMVIDPNTARGETMODE *)v28,
                 v42[1],
                 (enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE)v42[0].Value) )
          {
            for ( i = 0LL; i < 2; ++i )
              *(_BYTE *)(*(_QWORD *)(v25 + 96) + i + 416) = 1;
            v34.0 = (struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD)v42[0];
            v28[33].0 = (struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD)v42[1];
            v28[34].0 = v34.0;
            _InterlockedIncrement((volatile signed __int32 *)(v7 + 32));
            auto_rc<DMMVIDPN>::reset(v6 + 35, v37);
            v39 = 0LL;
            DXGADAPTER::IsAdapterSessionized(this, v35, 0LL, &v39);
            DxgkLogCodePointPacketForSession(0x59u, v39, v36, v43, 1, *(_QWORD *)((char *)this + 316));
          }
          else
          {
            v32 = (_QWORD *)WdLogNewEntry5_WdAssertion(v31, v30);
            v32[3] = v42[1].Value;
            v32[4] = (int)v42[0].Value;
            v32[5] = this;
            WdLogEvent5_WdAssertion(v32);
          }
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v40, 0LL);
        }
        else
        {
          v22 = WdLogNewEntry5_WdAssertion(v19, v18);
          *(_QWORD *)(v22 + 24) = *(_QWORD *)(v7 + 136);
          *(_QWORD *)(v22 + 32) = this;
          WdLogEvent5_WdAssertion(v22);
        }
      }
    }
    auto_rc<DMMVIDPN>::reset(&v37, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v41 + 40), v9);
    return 0LL;
  }
  v13 = WdLogNewEntry5_WdError(v4, v3);
  *(_QWORD *)(v13 + 24) = this;
  WdLogEvent5_WdError(v13);
  return 3223192373LL;
}
