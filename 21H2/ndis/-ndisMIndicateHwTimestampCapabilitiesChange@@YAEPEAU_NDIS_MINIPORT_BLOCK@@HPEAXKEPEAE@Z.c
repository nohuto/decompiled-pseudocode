/*
 * XREFs of ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x1C006F244
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001AE74 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001C6C8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C003BC68 (WPP_RECORDER_SF_qdL.c)
 *     memcmp @ 0x1C003FFE0 (memcmp.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     WPP_RECORDER_SF_qDqLLLL @ 0x1C0072CFC (WPP_RECORDER_SF_qDqLLLL.c)
 */

char __fastcall ndisMIndicateHwTimestampCapabilitiesChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        int a2,
        _WORD *Src,
        unsigned int a4,
        char a5,
        unsigned __int8 *a6)
{
  char v6; // r13
  unsigned __int8 v8; // si
  size_t v12; // rbp
  _NDIS_TIMESTAMP_CAPABILITIES *TopTimestampConfig; // rbx
  _NDIS_TIMESTAMP_CAPABILITIES *PoolWithTag; // rax
  int v16; // edx
  __int64 v17; // [rsp+38h] [rbp-50h]

  v6 = 0;
  v8 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v17) = HIDWORD(Src);
    WPP_RECORDER_SF_qDqLLLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (unsigned int)&WPP_RECORDER_INITIALIZED,
      *(unsigned __int8 *)Src,
      (unsigned __int16)Src[1]);
  }
  if ( a6 )
    *a6 = 0;
  if ( a4 < 0x36 || *(_BYTE *)Src != 0x80 || Src[1] < 0x36u || !*((_BYTE *)Src + 1) )
    goto LABEL_32;
  if ( a5 )
  {
    v12 = 56LL;
    if ( a2 == 1074073601 )
    {
      TopTimestampConfig = a1->TopTimestampConfig;
      if ( !TopTimestampConfig )
      {
        PoolWithTag = (_NDIS_TIMESTAMP_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7374444Eu);
        a1->TopTimestampConfig = PoolWithTag;
        goto LABEL_13;
      }
LABEL_25:
      if ( !memcmp(TopTimestampConfig, Src, (unsigned __int16)Src[1]) )
        goto LABEL_27;
      goto LABEL_26;
    }
    TopTimestampConfig = a1->TopHwTimestampCapabilities;
    if ( TopTimestampConfig )
      goto LABEL_25;
    PoolWithTag = (_NDIS_TIMESTAMP_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7374444Eu);
    a1->TopHwTimestampCapabilities = PoolWithTag;
  }
  else
  {
    TopTimestampConfig = a1->HwTimestampCapabilities;
    if ( a2 == 1074073601 )
    {
      if ( !TopTimestampConfig )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x18u,
            0xFEu,
            (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
            a1);
        return 0;
      }
      TopTimestampConfig = a1->HwTimestampCurrentConfig;
      v12 = 56LL;
      if ( TopTimestampConfig )
        goto LABEL_25;
      PoolWithTag = (_NDIS_TIMESTAMP_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7374444Eu);
      a1->HwTimestampCurrentConfig = PoolWithTag;
    }
    else
    {
      v12 = 56LL;
      if ( TopTimestampConfig )
        goto LABEL_25;
      PoolWithTag = (_NDIS_TIMESTAMP_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7374444Eu);
      a1->HwTimestampCapabilities = PoolWithTag;
    }
  }
LABEL_13:
  TopTimestampConfig = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
LABEL_26:
  v8 = 1;
LABEL_27:
  if ( TopTimestampConfig )
  {
    if ( Src[1] < 0x38u )
      v12 = (unsigned __int16)Src[1];
    memmove(TopTimestampConfig, Src, v12);
    v6 = 1;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v17) = v8;
      WPP_RECORDER_SF_qdL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v16,
        0x18u,
        0xFFu,
        (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
        (char)a1,
        a2,
        v17);
    }
  }
LABEL_32:
  if ( a6 )
    *a6 = v8;
  return v6;
}
