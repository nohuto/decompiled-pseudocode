/*
 * XREFs of ?ndisMSetNative802_11Attributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES@@@Z @ 0x1C0070CC4
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C0023210 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     Duplicate802_11AttachAttributesCommon @ 0x1C00C571C (Duplicate802_11AttachAttributesCommon.c)
 */

__int64 __fastcall ndisMSetNative802_11Attributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES *a2)
{
  int v2; // edi
  unsigned int v4; // edi
  int v6; // [rsp+20h] [rbp-38h]
  int v7; // [rsp+30h] [rbp-28h]
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  v8 = 0LL;
  v2 = (int)a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x79u,
      (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
      a1);
  if ( a1->MediaSpecificAttributes )
  {
    return (unsigned int)-1073676267;
  }
  else
  {
    LOBYTE(v7) = 0;
    LOBYTE(v6) = 0;
    v4 = Duplicate802_11AttachAttributesCommon(
           _byteswap_ushort(*(_WORD *)&a1->DriverHandle->MajorNdisVersion),
           v2,
           (int)NdisAllocateMemoryWithTag,
           1835091022,
           v6,
           0LL,
           v7,
           0LL,
           (__int64)&v8);
    if ( v4 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0x7Au,
          (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
          a1);
    }
    else
    {
      a1->MediaSpecificAttributes = (_NDIS_OBJECT_HEADER *)v8;
    }
  }
  return v4;
}
