/*
 * XREFs of PropertyGetBoolean @ 0x1C00289B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF__guid_d @ 0x1C0003138 (WPP_RECORDER_SF__guid_d.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0003304 (WPP_RECORDER_SF_dddd.c)
 */

__int64 __fastcall PropertyGetBoolean(IRP *a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rsi
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  PKSFILTER FilterFromIrp; // r14
  __int64 v11; // rbx
  __int64 v12; // r14
  unsigned __int16 v13; // r9
  int v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+28h] [rbp-40h]

  v3 = *(unsigned int *)(a2 + 32);
  v7 = -1073741808;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_d((__int64)WPP_GLOBAL_Control->DeviceExtension, v8, v9, 0xEu, v15, a2);
  if ( !FilterFromIrp )
    goto LABEL_9;
  v11 = (__int64)&FilterFromIrp->Descriptor->NodeDescriptors[7 * *(unsigned int *)(a2 + 24)];
  v12 = *(_QWORD *)(v11 + 128);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dddd((__int64)WPP_GLOBAL_Control->DeviceExtension, v8, v9, 0xFu, v15);
  if ( (unsigned int)v3 < *(_DWORD *)(v11 + 92) )
  {
    v7 = 0;
    *a3 = *(unsigned __int8 *)(v12 + 16 * v3 + 12);
    a1->IoStatus.Information = 4LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 17;
      LODWORD(v16) = *a3;
LABEL_11:
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v8,
        0xAu,
        v13,
        (__int64)&WPP_06d71a5b906232def5af5bab196a5a62_Traceguids,
        v16);
    }
  }
  else
  {
LABEL_9:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 16;
      LODWORD(v16) = -1073741808;
      goto LABEL_11;
    }
  }
  return v7;
}
