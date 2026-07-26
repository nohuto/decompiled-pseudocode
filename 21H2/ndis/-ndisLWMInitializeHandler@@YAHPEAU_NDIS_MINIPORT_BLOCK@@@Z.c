/*
 * XREFs of ?ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0116D44
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012F258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     NdisMSetMiniportAttributes @ 0x1C0023210 (NdisMSetMiniportAttributes.c)
 */

__int64 __fastcall ndisLWMInitializeHandler(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // edi
  char v4[4]; // [rsp+30h] [rbp-38h]
  int v5; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+44h] [rbp-24h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  int v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]
  int v10; // [rsp+58h] [rbp-10h]
  int v11; // [rsp+5Ch] [rbp-Ch]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
      a1);
  v6 = 0LL;
  v7 = 0;
  v11 = 0;
  v9 = 0;
  v10 = 0;
  v8 = 0;
  v5 = 1835678;
  v2 = NdisMSetMiniportAttributes(a1, (PNDIS_MINIPORT_ADAPTER_ATTRIBUTES)&v5);
  if ( v2 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      0xBu,
      (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
      a1);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v4 = v2;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xCu,
      (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
      (char)a1,
      *(_DWORD *)v4);
  }
  return v2;
}
