/*
 * XREFs of ?ndisValidateProtocolDriverCharacteristicsHeader@@YAHPEBU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@PEAK@Z @ 0x1C01067D0
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C002E430 (NdisRegisterProtocolDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C0065E5C (WPP_RECORDER_SF_DDDDDDDD.c)
 *     WPP_RECORDER_SF_DDZ @ 0x1C0065FD4 (WPP_RECORDER_SF_DDZ.c)
 */

__int64 __fastcall ndisValidateProtocolDriverCharacteristicsHeader(
        const struct _NDIS_PROTOCOL_DRIVER_CHARACTERISTICS *a1,
        unsigned int *a2)
{
  unsigned __int8 MajorNdisVersion; // bl
  const struct _GUID *v3; // rax
  int MinorNdisVersion; // edi
  int Data3_high; // r11d
  unsigned int v6; // r10d
  int v8; // [rsp+20h] [rbp-58h]

  MajorNdisVersion = a1->MajorNdisVersion;
  v3 = (const struct _GUID *)&unk_1C00CA6F0;
  MinorNdisVersion = a1->MinorNdisVersion;
  Data3_high = 0;
  *a2 = 0;
  while ( (MinorNdisVersion | (MajorNdisVersion << 16)) != v3->Data1 )
  {
    v3 = (const struct _GUID *)((char *)v3 + 8);
    if ( v3 == &WPP_6ddb316d784933c58b4801ad2d08aa04_Traceguids )
      goto LABEL_6;
  }
  Data3_high = HIBYTE(v3->Data3);
LABEL_6:
  if ( Data3_high == 1 )
  {
    v6 = 120;
    goto LABEL_10;
  }
  if ( Data3_high == 2 )
  {
    v6 = 128;
    if ( a1->Header.Type != 0x95 || a1->Header.Revision < 2u )
    {
LABEL_16:
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDDDDDD(*((_QWORD *)WPP_GLOBAL_Control + 8), a1->Header.Type, (__int64)a1, 0x13u, v8);
      return 3221291013LL;
    }
LABEL_10:
    if ( a1->Header.Size >= v6 )
    {
      *a2 = v6;
      return 0LL;
    }
    goto LABEL_16;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      (__int64)a1,
      0x12u,
      v8,
      MajorNdisVersion,
      MinorNdisVersion,
      &a1->Name.Length);
  return 3221291012LL;
}
