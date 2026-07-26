/*
 * XREFs of ?ndisMFakeSendPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C006EE40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C00C2FF4 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisMFakeSendPackets(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  unsigned int v7; // ebx
  __int64 v8; // r15
  struct _NDIS_PACKET *v9; // rsi

  v3 = a1[2];
  v5 = a3;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0x53u,
      (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
      (char)a1,
      v3);
  v7 = -1073741823;
  if ( v3 )
    v7 = *(_DWORD *)(v3 + 540);
  if ( (v7 & 0xC0230000) == 0xC0230000 )
    v7 = (unsigned __int16)v7 | 0xC0010000;
  if ( (_DWORD)v5 )
  {
    v8 = v5;
    do
    {
      v9 = *a2;
      if ( (*(_BYTE *)(v3 + 928) & 8) != 0 && *(void **)((char *)&v9[1].Private.Pool + v9->Private.NdisPacketOobOffset) )
        ndisFreePaddedMdl(*a2);
      v9->Private.NdisPacketFlags &= 0xC0u;
      ((void (__fastcall *)(_QWORD, struct _NDIS_PACKET *, _QWORD))a1[85])(a1[4], v9, v7);
      ++a2;
      --v8;
    }
    while ( v8 );
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      3u,
      0x54u,
      (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
      (char)a1,
      v3);
}
