/*
 * XREFs of ?ndisOidPreIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00799D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C000E1E0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001B610 (WPP_RECORDER_SF_qqLd.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00334B0 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00770E4 (-ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

char __fastcall ndisOidPreIovCreateVPort(struct _NDIS_REQ_TRACKER *a1)
{
  _DWORD *v1; // rsi
  char VPort; // bl
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  char v8[4]; // [rsp+40h] [rbp-18h]

  v1 = (_DWORD *)*((_QWORD *)a1 + 4);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x2Bu,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 3),
      v1);
  if ( v1[1] != 12 )
    goto LABEL_4;
  VPort = 0;
  *((_DWORD *)a1 + 10) = 0;
  if ( v1[12] < 0x23Cu )
  {
    v4 = -1073676268;
LABEL_9:
    v1[17] = 572;
    VPort = 1;
    *((_DWORD *)a1 + 10) = v4;
    goto LABEL_16;
  }
  if ( v1[13] < 0x23Cu )
  {
    v4 = -1073676266;
    goto LABEL_9;
  }
  if ( *(_QWORD *)a1 )
  {
    if ( !ndisIovNicSwitchWithoutIovSupported(*(struct _NDIS_MINIPORT_BLOCK **)a1) )
    {
      v6 = *(_QWORD *)(v5 + 4608);
      if ( !v6 || !*(_QWORD *)(v5 + 3568) || (*(_BYTE *)(v6 + 8) & 3) != 3 )
      {
LABEL_4:
        VPort = 1;
        *((_DWORD *)a1 + 10) = -1073741637;
        goto LABEL_16;
      }
    }
    VPort = ndisIovCreateVPort(a1);
  }
LABEL_16:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x2Cu,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 3),
      VPort,
      *(_DWORD *)v8);
  }
  return VPort;
}
