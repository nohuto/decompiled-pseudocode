/*
 * XREFs of Ndis::BindRegistry::RemoveBindingsInSpan @ 0x1C01007C0
 * Callers:
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x1C01023CC (Ndis--BindRegistry--UpdateFiltersInner.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C002A504 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C0103498 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01230B0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRegistry::RemoveBindingsInSpan(_QWORD *a1, char a2, char a3)
{
  unsigned __int64 i; // rbx
  __int64 v6; // rsi
  Ndis::BindState *v7; // rcx
  int v8; // edx
  char v9[160]; // [rsp+40h] [rbp-B8h] BYREF

  if ( (a3 & 1) == 0 )
  {
    for ( i = a1[1]; i < a1[2]; ++i )
    {
      if ( i >= *(unsigned int *)(*a1 + 4LL) )
        __fastfail(5u);
      v6 = *(_QWORD *)(*a1 + 8LL);
      v7 = *(Ndis::BindState **)(v6 + 8 * i);
      if ( ((*((_DWORD *)v7[1].m_AdditionalContext + 10) & 0xC) != 0) == a2
        && Ndis::BindState::SetSource(v7, RemoveBindSource, Registry) )
      {
        memset(v9, 0, sizeof(v9));
        if ( (unsigned __int8)byte_1C00E434B >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v9);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v8,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_60f1718a360437c4e49774f56675e7c4_Traceguids,
              *(unsigned __int16 **)&v9[8],
              *(_QWORD *)v9);
        }
      }
    }
  }
}
