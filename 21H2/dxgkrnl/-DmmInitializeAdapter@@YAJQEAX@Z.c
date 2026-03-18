/*
 * XREFs of ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C0216960
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C01FBF08 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000FBD8 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0014340 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0019DE4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?IsFirmwareRecommendedWireformatAndColorSpaceValid@DMMVIDPNTARGETMODE@@QEBA_NT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C006955C (-IsFirmwareRecommendedWireformatAndColorSpaceValid@DMMVIDPNTARGETMODE@@QEBA_NT_D3DKMDT_WIRE_FORM.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C0216A7C (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 */

__int64 __fastcall DmmInitializeAdapter(PERESOURCE *this)
{
  PERESOURCE v2; // rax
  __int64 *Flink; // r14
  __int64 v4; // rbx
  bool v5; // zf
  int v6; // eax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 i; // rcx
  _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v15; // ecx
  unsigned int v16; // ebx
  struct _LUID *v17; // rdx
  __int64 v18; // r11
  __int64 v19; // [rsp+30h] [rbp-40h] BYREF
  struct DMMVIDPN *v20; // [rsp+38h] [rbp-38h] BYREF
  __int64 v21; // [rsp+40h] [rbp-30h] BYREF
  __int64 v22; // [rsp+48h] [rbp-28h] BYREF
  _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v23[2]; // [rsp+50h] [rbp-20h] BYREF
  int v24; // [rsp+58h] [rbp-18h]

  if ( !this )
    WdLogSingleEntry0(1LL);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
    WdLogSingleEntry0(1LL);
  v2 = this[349];
  if ( !v2 )
    return 0LL;
  Flink = (__int64 *)v2[1].SystemResourcesList.Flink;
  if ( Flink )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v22, (__int64)v2[1].SystemResourcesList.Flink);
    v4 = 0LL;
    v5 = (*((_DWORD *)this + 109) & 0x8000) == 0;
    v19 = 0LL;
    *(_QWORD *)v23 = 0LL;
    v24 = 0;
    if ( !v5 )
    {
      v20 = 0LL;
      v6 = VIDPN_MGR::RecommendFunctionalVidPn((VIDPN_MGR *)Flink, DXGK_RFVR_FIRMWARE, v23, 0xCu, &v20);
      if ( v6 >= 0 )
      {
        auto_rc<DMMVIDPN>::reset(&v19, (__int64)v20);
        v4 = v19;
      }
      else
      {
        WdLogSingleEntry2(2LL, this, v6);
      }
      if ( v4 )
      {
        if ( v4 == -96 )
          WdLogSingleEntry0(1LL);
        v8 = *(_QWORD *)(v4 + 136);
        if ( v8 == 1 )
        {
          v9 = *(_QWORD *)(v4 + 120);
          if ( v9 == v4 + 120 )
            v10 = 0LL;
          else
            v10 = v9 - 8;
          v11 = *(_QWORD *)(v10 + 96);
          if ( !v11 )
            WdLogSingleEntry0(1LL);
          v12 = *(_QWORD *)(v11 + 104);
          if ( v12 )
          {
            _InterlockedAdd((volatile signed __int32 *)(v12 + 96), 1u);
            v12 = *(_QWORD *)(v11 + 104);
            v4 = v19;
          }
          v13 = *(_QWORD *)(v12 + 144);
          v21 = v12;
          if ( !v13 )
            WdLogSingleEntry0(1LL);
          if ( DMMVIDPNTARGETMODE::IsFirmwareRecommendedWireformatAndColorSpaceValid(
                 (DMMVIDPNTARGETMODE *)v13,
                 (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE)v23[1],
                 v23[0]) )
          {
            for ( i = 0LL; i < 2; ++i )
              *(_BYTE *)(*(_QWORD *)(v11 + 96) + i + 416) = 1;
            v15 = v23[0];
            *(_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)(v13 + 132) = v23[1];
            *(_DWORD *)(v13 + 136) = v15;
            _InterlockedAdd((volatile signed __int32 *)(v4 + 32), 1u);
            auto_rc<DMMVIDPN>::reset(Flink + 40, v19);
            v16 = *(_DWORD *)(v11 + 24);
            v20 = 0LL;
            DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)this, v17, 0LL, (unsigned __int64 *)&v20);
            DxgkLogCodePointPacketForSession(0x59u, (unsigned __int64)v20, v16, v24, 1, v18);
          }
          else
          {
            WdLogSingleEntry3(1LL, (unsigned int)v23[1], v23[0], this);
          }
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v21, 0LL);
        }
        else
        {
          WdLogSingleEntry2(1LL, v8, this);
        }
      }
    }
    auto_rc<DMMVIDPN>::reset(&v19, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v22 + 40));
    return 0LL;
  }
  WdLogSingleEntry1(2LL, this);
  return 3223192373LL;
}
