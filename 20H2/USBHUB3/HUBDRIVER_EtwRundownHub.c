/*
 * XREFs of HUBDRIVER_EtwRundownHub @ 0x1C0072540
 * Callers:
 *     HUBDRIVER_EtwEnableCallback @ 0x1C0072FA8 (HUBDRIVER_EtwEnableCallback.c)
 * Callees:
 *     McTemplateK0pnq_EtwWriteTransfer @ 0x1C0001360 (McTemplateK0pnq_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0001870 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqn_EtwWriteTransfer @ 0x1C00018E0 (McTemplateK0pqn_EtwWriteTransfer.c)
 *     McTemplateK0pquuxqqqqqqqsss_EtwWriteTransfer @ 0x1C000195C (McTemplateK0pquuxqqqqqqqsss_EtwWriteTransfer.c)
 */

__int64 __fastcall HUBDRIVER_EtwRundownHub(const GUID *a1, __int64 a2)
{
  int v4; // edx
  int v5; // edx
  __int64 v6; // rdi
  __int64 result; // rax
  int v8; // eax
  int v9; // r11d
  int v10; // r14d
  int v11; // r15d
  int v12; // r12d
  int v13; // r13d
  int v14; // r10d
  char v15; // bp
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  const EVENT_DESCRIPTOR *v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // ecx
  __int64 v23; // [rsp+20h] [rbp-A8h]
  __int64 v24; // [rsp+28h] [rbp-A0h]
  __int64 v25; // [rsp+30h] [rbp-98h]
  __int64 v26; // [rsp+40h] [rbp-88h]
  __int64 v27; // [rsp+48h] [rbp-80h]
  __int64 v28; // [rsp+50h] [rbp-78h]
  __int64 v29; // [rsp+58h] [rbp-70h]
  __int64 v30; // [rsp+60h] [rbp-68h]
  __int64 v31; // [rsp+68h] [rbp-60h]
  __int64 v32; // [rsp+70h] [rbp-58h]
  __int64 v33; // [rsp+80h] [rbp-48h]
  __int64 v34; // [rsp+88h] [rbp-40h]
  int v35; // [rsp+D8h] [rbp+10h]
  int v36; // [rsp+E0h] [rbp+18h]

  v4 = *(_DWORD *)(a2 + 2216) - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 2 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
        McTemplateK0pq_EtwWriteTransfer(
          (__int64)a1,
          &USBHUB3_ETW_EVENT_RUNDOWN_ROOT_HUB_INFORMATION,
          a1,
          *(_QWORD *)(a2 + 248),
          *(_DWORD *)(a2 + 2600));
    }
    else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
    {
      McTemplateK0pnq_EtwWriteTransfer(
        a2 + 1180,
        &USBHUB3_ETW_EVENT_RUNDOWN_USB30_HUB_INFORMATION,
        a1,
        *(_QWORD *)(a2 + 248),
        12,
        a2 + 1180,
        *(_DWORD *)(a2 + 2600));
    }
  }
  else if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
  {
    McTemplateK0pnq_EtwWriteTransfer(
      a2 + 1180,
      &USBHUB3_ETW_EVENT_RUNDOWN_USB20_HUB_INFORMATION,
      a1,
      *(_QWORD *)(a2 + 248),
      71,
      a2 + 1180,
      *(_DWORD *)(a2 + 2600));
  }
  v6 = *(_QWORD *)(a2 + 2360) - 248LL;
  result = *(_QWORD *)(a2 + 2360) - 2360LL;
  if ( a2 != result )
  {
    do
    {
      v8 = *(_DWORD *)(v6 + 1256);
      if ( v8 == 3000 )
      {
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) == 0 )
          goto LABEL_41;
        v9 = *(_DWORD *)(a2 + 168);
        if ( v9 == 1 )
        {
          v10 = *(unsigned __int16 *)(a2 + 184);
          v11 = *(_DWORD *)(a2 + 180);
          v12 = *(_DWORD *)(a2 + 176);
          v13 = *(_DWORD *)(a2 + 196);
          v35 = *(_DWORD *)(a2 + 192);
          v36 = *(_DWORD *)(a2 + 188);
        }
        else
        {
          v13 = 0;
          v10 = 0;
          v35 = 0;
          v11 = 0x7FFFFFFF;
          v36 = 0;
          v12 = 0x7FFFFFFF;
        }
        v14 = *(_DWORD *)(v6 + 204) >> 1;
        if ( (*(_DWORD *)(v6 + 204) & 2) != 0 )
          v15 = *(_BYTE *)(v6 + 1341);
        else
          v15 = 0;
        v20 = 0LL;
        if ( v9 == 2 )
          v20 = a2 + 186;
        v21 = 0LL;
        v34 = v20;
        if ( v9 == 2 )
          v21 = a2 + 181;
        v18 = 0LL;
        v33 = v21;
        v19 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_RUNDOWN_20_PORT_V1;
        if ( v9 == 2 )
          v18 = a2 + 176;
      }
      else
      {
        if ( v8 != 5000 || ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) == 0 )
          goto LABEL_41;
        v9 = *(_DWORD *)(a2 + 168);
        if ( v9 == 1 )
        {
          v10 = *(unsigned __int16 *)(a2 + 184);
          v11 = *(_DWORD *)(a2 + 180);
          v12 = *(_DWORD *)(a2 + 176);
          v13 = *(_DWORD *)(a2 + 196);
          v35 = *(_DWORD *)(a2 + 192);
          v36 = *(_DWORD *)(a2 + 188);
        }
        else
        {
          v13 = 0;
          v10 = 0;
          v35 = 0;
          v11 = 0x7FFFFFFF;
          v36 = 0;
          v12 = 0x7FFFFFFF;
        }
        v14 = *(_DWORD *)(v6 + 204) >> 1;
        if ( (*(_DWORD *)(v6 + 204) & 2) != 0 )
          v15 = *(_BYTE *)(v6 + 1341);
        else
          v15 = 0;
        v16 = 0LL;
        if ( v9 == 2 )
          v16 = a2 + 186;
        v17 = 0LL;
        v34 = v16;
        if ( v9 == 2 )
          v17 = a2 + 181;
        v18 = 0LL;
        v33 = v17;
        v19 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_RUNDOWN_30_PORT_V1;
        if ( v9 == 2 )
          v18 = a2 + 176;
      }
      LODWORD(v32) = v10;
      LODWORD(v31) = v11;
      LODWORD(v30) = v12;
      LODWORD(v29) = v13;
      LODWORD(v28) = v35;
      LODWORD(v27) = v36;
      LODWORD(v26) = v9;
      LOBYTE(v25) = v15;
      LOBYTE(v24) = v14 & 1;
      LODWORD(v23) = *(unsigned __int16 *)(v6 + 200);
      McTemplateK0pquuxqqqqqqqsss_EtwWriteTransfer(
        v18,
        v19,
        a1,
        *(_QWORD *)(a2 + 248),
        v23,
        v24,
        v25,
        *(_QWORD *)(v6 + 1416),
        v26,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32,
        v18,
        v33,
        v34);
LABEL_41:
      v22 = *(_DWORD *)(v6 + 204);
      if ( (v22 & 2) != 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
      {
        LODWORD(v24) = 12;
        LODWORD(v23) = *(unsigned __int16 *)(v6 + 200);
        McTemplateK0pqn_EtwWriteTransfer(
          *(unsigned __int16 *)(v6 + 200),
          &USBHUB3_ETW_EVENT_RUNDOWN_ACPI_UPC,
          a1,
          *(_QWORD *)(a2 + 248),
          v23,
          v24,
          v6 + 1340);
        v22 = *(_DWORD *)(v6 + 204);
      }
      if ( (v22 & 4) != 0 && ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
      {
        LODWORD(v24) = 16;
        LODWORD(v23) = *(unsigned __int16 *)(v6 + 200);
        McTemplateK0pqn_EtwWriteTransfer(
          *(unsigned __int16 *)(v6 + 200),
          &USBHUB3_ETW_EVENT_RUNDOWN_ACPI_PLD,
          a1,
          *(_QWORD *)(a2 + 248),
          v23,
          v24,
          v6 + 1352);
      }
      v6 = *(_QWORD *)(v6 + 248) - 248LL;
      result = v6 - 2112;
    }
    while ( a2 != v6 - 2112 );
  }
  return result;
}
