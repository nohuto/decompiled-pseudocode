/*
 * XREFs of ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1C00F9620
 * Callers:
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1C000BF70 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 *     ?ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007F88C (-ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00FB430 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00FDE9C (-ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NE.c)
 *     ?ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C011733C (-ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     ?WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z @ 0x1C000AF04 (-WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z.c)
 */

void __fastcall ndisArmWatchdog(
        struct NDISWATCHDOG__ *a1,
        void *a2,
        int a3,
        void *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned __int8 *v9; // rdx
  struct NDISWATCHDOG__ *v10; // rdi
  int v11; // ecx
  void *v12; // rcx
  _DEVICE_OBJECT *v13; // rcx
  char v14; // al
  unsigned int v15; // eax
  __int64 v16; // rbx
  ULONG v17; // eax
  unsigned int v18; // eax
  int v19; // ecx
  ULONG SecondsRemaining; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 != (struct NDISWATCHDOG__ *)-1LL )
  {
    v10 = WatchdogFromHandle(a1);
    *((_DWORD *)v10 + 50) = 846677070;
    if ( v9 )
    {
      v11 = *v9;
      if ( v11 == 5 )
      {
        v12 = (void *)*((_QWORD *)v9 + 4);
        goto LABEL_5;
      }
      v19 = v11 - 17;
      if ( !v19 )
      {
        v12 = a2;
LABEL_5:
        if ( v12 )
        {
          if ( (*((_DWORD *)v12 + 30) & 0x100) == 0
            && (v13 = (_DEVICE_OBJECT *)*((_QWORD *)v12 + 479),
                SecondsRemaining = 0,
                PoQueryWatchdogTime(v13, &SecondsRemaining)) )
          {
            v17 = SecondsRemaining;
            if ( SecondsRemaining < 3 )
              v17 = 3;
            v18 = 1000 * v17 - 3000;
            if ( v18 < 0xBB8 )
              v18 = 3000;
            if ( v18 < a5 )
              a5 = v18;
            v14 = 1;
          }
          else
          {
            v14 = 0;
          }
          *((_BYTE *)v10 + 248) = v14;
        }
        goto LABEL_10;
      }
      if ( v19 == 1 )
      {
        v12 = (void *)*((_QWORD *)v9 + 2);
        goto LABEL_5;
      }
    }
LABEL_10:
    *((_QWORD *)v10 + 27) = a2;
    *((_QWORD *)v10 + 26) = &ndisGlobalTriageBlock;
    *((_DWORD *)v10 + 51) = a5;
    *((_QWORD *)v10 + 28) = MEMORY[0xFFFFF78000000008];
    *((_QWORD *)v10 + 29) = KeGetCurrentThread();
    *((_QWORD *)v10 + 30) = a6;
    v15 = g_ndisWatchdogSequenceNumber;
    *((_QWORD *)v10 + 32) = a4;
    g_ndisWatchdogSequenceNumber = v15 + 1;
    *((_DWORD *)v10 + 41) = v15 + 1;
    v16 = -10000LL * *((unsigned int *)v10 + 51);
    *((_DWORD *)v10 + 48) = a3;
    *((_DWORD *)v10 + 40) = 1;
    KeClearEvent((PRKEVENT)v10 + 7);
    KeSetTimerEx((PKTIMER)v10 + 1, (LARGE_INTEGER)v16, 0, (PKDPC)v10);
  }
}
