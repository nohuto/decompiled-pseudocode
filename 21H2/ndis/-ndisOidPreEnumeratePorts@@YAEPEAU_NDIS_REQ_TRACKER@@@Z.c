/*
 * XREFs of ?ndisOidPreEnumeratePorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009C370
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000E000 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisEnumeratePorts@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PORT_ARRAY@@KPEAI2@Z @ 0x1C0081708 (-ndisEnumeratePorts@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PORT_ARRAY@@KPEAI2@Z.c)
 */

char __fastcall ndisOidPreEnumeratePorts(struct _NDIS_MINIPORT_BLOCK **a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbp
  struct _NDIS_MINIPORT_BLOCK *v3; // rbx
  char v4; // di
  struct _NDIS_MINIPORT_BLOCK *v5; // rax
  int v6; // eax
  char v8[4]; // [rsp+38h] [rbp-20h]

  v1 = *a1;
  v3 = a1[4];
  v4 = 0;
  v5 = *a1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x9Eu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)v1,
      v3);
    v5 = *a1;
  }
  if ( v5 )
  {
    if ( (*(_DWORD *)(&v3->Header + 1) & 0xFFFFFFFD) != 0 )
      v6 = -1073676265;
    else
      v6 = ndisEnumeratePorts(
             v1,
             (struct _NDIS_PORT_ARRAY *)v3->Reserved4.Buffer,
             v3->PcwDatapathEventMask,
             (unsigned int *)&v3->Reserved28 + 1,
             (unsigned int *)&v3->OpenQueue);
    *((_DWORD *)a1 + 10) = v6;
    v4 = 1;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x9Fu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)v1,
      (char)v3,
      *(_DWORD *)v8);
  }
  return v4;
}
