/*
 * XREFs of ?ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z @ 0x1C008D10C
 * Callers:
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008C630 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0012BE8 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00B813C (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisWmiFindInstanceName(
        struct _NDIS_CO_VC_PTR_BLOCK **a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        wchar_t *a3,
        unsigned __int16 a4)
{
  int v4; // ebx
  struct _NDIS_CO_VC_PTR_BLOCK *v5; // r14
  _LIST_ENTRY *p_WmiEnabledVcs; // r15
  _LIST_ENTRY *Flink; // rsi
  UNICODE_STRING String2; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0;
  String2.Buffer = a3;
  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  v5 = 0LL;
  *a1 = 0LL;
  String2.MaximumLength = a4;
  String2.Length = a4;
  if ( a4 >= 0x30u && a3 && a3[5] == 58 )
  {
    p_WmiEnabledVcs = &a2->WmiEnabledVcs;
    Flink = a2->WmiEnabledVcs.Flink;
    while ( Flink != p_WmiEnabledVcs )
    {
      v5 = (struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20];
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)&Flink[-2].Blink, &String2, 1u) )
      {
        if ( !ndisReferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20]) )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x12u,
              0xAu,
              (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
              a2);
          v4 = -1073741823;
        }
        break;
      }
      Flink = Flink->Flink;
      v5 = 0LL;
    }
    if ( Flink == p_WmiEnabledVcs )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (__int64)a2,
          0x12u,
          0xBu,
          (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
          (char)a2,
          &String2.Length);
      v4 = -1073741162;
    }
    if ( v4 >= 0 )
      *a1 = v5;
  }
  else if ( !RtlEqualUnicodeString(a2->pAdapterInstanceName, &String2, 1u) )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x12u,
        0xCu,
        (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
        a2);
    return (unsigned int)-1073741162;
  }
  return (unsigned int)v4;
}
