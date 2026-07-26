/*
 * XREFs of ?ndisValidateMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEBU_UNICODE_STRING@@PEAK22@Z @ 0x1C0106840
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0036860 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C005E2A8 (WPP_RECORDER_SF_DD_ea_1C005E2A8.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C0065BCC (WPP_RECORDER_SF_DDDDDDDD.c)
 *     ?NdisTraceLoggingLogoFailure@@YAXW4NdisTLLogoFailureReason@@PEBU_UNICODE_STRING@@_K@Z @ 0x1C011E9DC (-NdisTraceLoggingLogoFailure@@YAXW4NdisTLLogoFailureReason@@PEBU_UNICODE_STRING@@_K@Z.c)
 */

__int64 __fastcall ndisValidateMiniportDriverCharacteristicsHeader(
        const struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *a1,
        const struct _UNICODE_STRING *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int Data2_low; // esi
  __int64 MajorNdisVersion; // rcx
  unsigned int v11; // edi
  const struct _GUID *v12; // rax
  int v14; // [rsp+20h] [rbp-78h]
  __int64 v15; // [rsp+30h] [rbp-68h]

  Data2_low = 0;
  MajorNdisVersion = a1->MajorNdisVersion;
  *a5 = 0;
  v11 = 152;
  if ( __PAIR16__(a1->MinorNdisVersion, MajorNdisVersion) == 21510 && (unsigned __int16)(a1->Header.Size - 152) <= 7u )
  {
    *a3 = 6;
    *a4 = 70;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xAu,
        (struct _GUID *)&WPP_225861cab2d5393449c0e8d0bcddebbb_Traceguids,
        6,
        84);
    if ( a2 )
      NdisTraceLoggingLogoFailure(MajorNdisVersion, a2, a1->Header.Size);
  }
  else
  {
    *a4 = a1->MinorNdisVersion;
    *a3 = MajorNdisVersion;
  }
  v12 = (const struct _GUID *)&unk_1C00CA6F0;
  while ( (*a4 | (*a3 << 16)) != v12->Data1 )
  {
    v12 = (const struct _GUID *)((char *)v12 + 8);
    if ( v12 == &WPP_6ddb316d784933c58b4801ad2d08aa04_Traceguids )
      goto LABEL_8;
  }
  Data2_low = LOBYTE(v12->Data2);
LABEL_8:
  switch ( Data2_low )
  {
    case 1u:
      v11 = 136;
      goto LABEL_12;
    case 2u:
LABEL_10:
      if ( a1->Header.Type != 0x8A || a1->Header.Revision < Data2_low )
      {
LABEL_25:
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDDDDDDD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            a1->Header.Type,
            a1->MinorNdisVersion,
            0xCu,
            v14);
        return 3221291013LL;
      }
LABEL_12:
      if ( a1->Header.Size >= v11 )
      {
        *a5 = v11;
        return 0LL;
      }
      goto LABEL_25;
    case 3u:
      v11 = 160;
      goto LABEL_10;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v15) = a1->MinorNdisVersion;
    WPP_RECORDER_SF_DD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      0xBu,
      (struct _GUID *)&WPP_225861cab2d5393449c0e8d0bcddebbb_Traceguids,
      a1->MajorNdisVersion,
      v15);
  }
  return 3221291012LL;
}
