/*
 * XREFs of Ndis::BindRegistry::UpdateFiltersInner @ 0x1C0102398
 * Callers:
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x1C0102398 (Ndis--BindRegistry--UpdateFiltersInner.c)
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0107E80 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C002AAA4 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     Ndis::BindRegistry::RemoveBindingsInSpan @ 0x1C010078C (Ndis--BindRegistry--RemoveBindingsInSpan.c)
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x1C0102398 (Ndis--BindRegistry--UpdateFiltersInner.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C0102738 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C0103468 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C0123080 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

bool __fastcall Ndis::BindRegistry::UpdateFiltersInner(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        _QWORD *a4,
        char a5,
        int a6)
{
  unsigned __int64 v7; // r13
  int v9; // r14d
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 *v13; // r10
  __int64 v14; // rdx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r14
  __int64 v17; // r11
  unsigned __int64 v18; // rax
  Ndis::BindState *v19; // rcx
  _DWORD *m_AdditionalContext; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // edx
  __int64 v26; // rax
  unsigned __int64 i; // [rsp+48h] [rbp-B8h]
  _QWORD *v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v31; // [rsp+68h] [rbp-98h]
  unsigned __int64 v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34; // [rsp+88h] [rbp-78h] BYREF
  __int64 v35; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v36; // [rsp+98h] [rbp-68h]
  unsigned __int64 v37; // [rsp+A0h] [rbp-60h]
  unsigned __int64 j; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v40; // [rsp+C0h] [rbp-40h]
  _QWORD v41[4]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v42[4]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v43[4]; // [rsp+110h] [rbp+10h] BYREF
  char v44[160]; // [rsp+130h] [rbp+30h] BYREF

  *a4 = 0LL;
  v7 = a3[1];
  v9 = a1;
  v10 = a2[1];
  v11 = v7;
  v29 = a4;
  for ( i = v10; v11 < a3[2]; ++v11 )
  {
    v12 = *a3;
    v40 = v10;
    if ( v11 >= *(unsigned int *)(v12 + 4) )
LABEL_31:
      __fastfail(5u);
    v13 = (__int64 *)(*(_QWORD *)(v12 + 8) + 8 * v11);
    v14 = *v13;
    if ( !*v13 || ((*(_DWORD *)(*(_QWORD *)(v14 + 80) + 40LL) & 0xC) != 0) != a5 )
      continue;
    v15 = a2[2];
    v16 = v10;
    if ( v10 >= v15 )
    {
LABEL_10:
      v9 = a1;
      if ( !(unsigned __int8)Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_FILTER_LINK>(a1, *a2, v10, v13) )
        return 0;
      ++a2[2];
      ++v10;
      ++*v29;
      if ( !a5 )
        goto LABEL_12;
      v22 = *a3;
      v34 = 0LL;
      v35 = v22;
      v30 = *a2;
      v31 = i;
      v36 = v7;
      v37 = v11;
      v32 = v10;
      if ( !(unsigned __int8)Ndis::BindRegistry::UpdateFiltersInner(
                               a1,
                               (unsigned int)&v30,
                               (unsigned int)&v35,
                               (unsigned int)&v34,
                               0,
                               a6) )
        return 0;
      v23 = v34;
    }
    else
    {
      v17 = *a2;
      v18 = *(unsigned int *)(*a2 + 4LL);
      for ( j = v18; ; v18 = j )
      {
        if ( v16 >= v18 )
          goto LABEL_31;
        v39 = *(_QWORD *)(v17 + 8);
        v19 = *(Ndis::BindState **)(v39 + 8 * v16);
        m_AdditionalContext = v19[1].m_AdditionalContext;
        if ( ((m_AdditionalContext[10] & 0xC) != 0) == a5
          && *(_DWORD **)(v14 + 80) == m_AdditionalContext
          && *(_DWORD *)(v14 + 88) == v19[1].m_LastErrorCode )
        {
          break;
        }
        if ( ++v16 >= v15 )
          goto LABEL_10;
      }
      if ( Ndis::BindState::SetSource(v19, AddBindSource, Registry) )
      {
        memset(v44, 0, sizeof(v44));
        if ( (unsigned __int8)byte_1C00E444B >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v39 + 8 * v16),
            (struct NDIS_PNPTRACE_LOCALS *)v44);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v25,
              0x1Cu,
              0xFu,
              (struct _GUID *)&WPP_60f1718a360437c4e49774f56675e7c4_Traceguids,
              *(unsigned __int16 **)&v44[8],
              *(_QWORD *)v44);
        }
      }
      v41[0] = *a2;
      v41[1] = v10;
      v41[2] = v16;
      Ndis::BindRegistry::RemoveBindingsInSpan(v41, a5, a6);
      v10 = v16 + 1;
      v9 = a1;
      if ( !a5 )
        goto LABEL_12;
      v26 = *a3;
      v33 = 0LL;
      v42[0] = v26;
      v43[0] = *a2;
      v43[1] = v40;
      v42[1] = v7;
      v42[2] = v11;
      v43[2] = v10;
      if ( !(unsigned __int8)Ndis::BindRegistry::UpdateFiltersInner(
                               a1,
                               (unsigned int)v43,
                               (unsigned int)v42,
                               (unsigned int)&v33,
                               0,
                               a6) )
        return 0;
      v23 = v33;
    }
    v10 += v23;
    a2[2] += v23;
LABEL_12:
    v7 = v11;
    i = v10;
  }
  v30 = *a2;
  v32 = a2[2];
  v31 = v10;
  Ndis::BindRegistry::RemoveBindingsInSpan(&v30, a5, a6);
  if ( !a5 )
    return 1;
  v24 = *a3;
  v29 = 0LL;
  v30 = v24;
  v32 = a3[2];
  v35 = *a2;
  v37 = a2[2];
  v31 = v7;
  v36 = v10;
  return (unsigned __int8)Ndis::BindRegistry::UpdateFiltersInner(
                            v9,
                            (unsigned int)&v35,
                            (unsigned int)&v30,
                            (unsigned int)&v29,
                            0,
                            a6) != 0;
}
