/*
 * XREFs of PnpLogActionQueueEvent @ 0x140382298
 * Callers:
 *     PnpRequestDeviceAction @ 0x1403703A4 (PnpRequestDeviceAction.c)
 *     PnpDeviceActionWorker @ 0x140381DA0 (PnpDeviceActionWorker.c)
 * Callees:
 *     McTemplateK0z_EtwWriteTransfer @ 0x14050DCF4 (McTemplateK0z_EtwWriteTransfer.c)
 *     McTemplateK0zd_EtwWriteTransfer @ 0x14050E8D0 (McTemplateK0zd_EtwWriteTransfer.c)
 *     McTemplateK0zdq_EtwWriteTransfer @ 0x14050E970 (McTemplateK0zdq_EtwWriteTransfer.c)
 */

__int64 __fastcall PnpLogActionQueueEvent(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 v5; // r9
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 result; // rax
  __int64 *v10; // rdx

  if ( a2 == 8 )
  {
    v6 = 0LL;
    if ( (_DWORD)a3 )
    {
      if ( (_DWORD)a3 == 1 )
      {
        if ( (byte_140C1327B & 8) == 0 )
          return result;
        if ( a1 )
          v6 = *(_QWORD *)(a1 + 48);
        v10 = KMPnPEvt_ReenumerateDeviceOnly_Start;
      }
      else
      {
        if ( (_DWORD)a3 != 2 || (byte_140C1327B & 8) == 0 )
          return result;
        if ( a1 )
          v6 = *(_QWORD *)(a1 + 48);
        v10 = KMPnPEvt_ReenumerateDeviceOnly_Stop;
      }
    }
    else
    {
      if ( (byte_140C1327B & 8) == 0 )
        return result;
      if ( a1 )
        v6 = *(_QWORD *)(a1 + 48);
      v10 = KMPnPEvt_ReenumerateDeviceOnly_Queue;
    }
    return McTemplateK0z_EtwWriteTransfer(a1, v10, a3, v6);
  }
  if ( a2 <= 8 )
    return result;
  if ( a2 <= 10 )
  {
LABEL_9:
    LODWORD(v5) = 0;
    if ( (_DWORD)a3 )
    {
      if ( (_DWORD)a3 == 1 )
      {
        if ( (byte_140C1327B & 8) != 0 )
        {
          if ( a1 )
            v5 = *(_QWORD *)(a1 + 48);
          return McTemplateK0zd_EtwWriteTransfer(a1, (unsigned int)KMPnPEvt_ReenumerateDeviceTree_Start, 1, v5, a2);
        }
      }
      else if ( (_DWORD)a3 == 2 && (byte_140C1327B & 8) != 0 )
      {
        if ( a1 )
          v5 = *(_QWORD *)(a1 + 48);
        return McTemplateK0zd_EtwWriteTransfer(a1, (unsigned int)KMPnPEvt_ReenumerateDeviceTree_Stop, 2, v5, a2);
      }
    }
    else if ( (byte_140C1327B & 8) != 0 )
    {
      if ( a1 )
        v5 = *(_QWORD *)(a1 + 48);
      return McTemplateK0zd_EtwWriteTransfer(a1, (unsigned int)KMPnPEvt_ReenumerateDeviceTree_Queue, 0, v5, a2);
    }
    return result;
  }
  if ( a2 != 16 && a2 != 12 )
  {
    if ( a2 != 14 )
    {
      if ( a2 > 20 && a2 <= 24 )
      {
        LODWORD(v8) = 0;
        if ( (_DWORD)a3 )
        {
          if ( (_DWORD)a3 == 1 )
          {
            if ( (byte_140C13279 & 0x20) != 0 )
            {
              if ( a1 )
                v8 = *(_QWORD *)(a1 + 48);
              return McTemplateK0zd_EtwWriteTransfer(a1, (unsigned int)KMPnPEvt_ConfigureDevice_Start, 1, v8, a2);
            }
          }
          else if ( (_DWORD)a3 == 2 && (byte_140C13279 & 0x20) != 0 )
          {
            if ( a1 )
              v8 = *(_QWORD *)(a1 + 48);
            return McTemplateK0zdq_EtwWriteTransfer(a1, (unsigned int)KMPnPEvt_ConfigureDevice_Stop, 2, v8, a2, a4);
          }
        }
        else if ( (byte_140C13279 & 0x20) != 0 )
        {
          if ( a1 )
            v8 = *(_QWORD *)(a1 + 48);
          return McTemplateK0zd_EtwWriteTransfer(a1, (unsigned int)KMPnPEvt_ConfigureDevice_Queue, 0, v8, a2);
        }
      }
      return result;
    }
    goto LABEL_9;
  }
  LODWORD(v7) = 0;
  if ( (_DWORD)a3 )
  {
    if ( (_DWORD)a3 == 1 )
    {
      if ( (byte_140C1327B & 0x10) != 0 )
      {
        if ( a1 )
          v7 = *(_QWORD *)(a1 + 48);
        return McTemplateK0zd_EtwWriteTransfer(a1, (unsigned int)KMPnPEvt_DeviceAction_Start, 1, v7, a2);
      }
    }
    else if ( (_DWORD)a3 == 2 && (byte_140C1327B & 0x10) != 0 )
    {
      if ( a1 )
        v7 = *(_QWORD *)(a1 + 48);
      return McTemplateK0zdq_EtwWriteTransfer(a1, (unsigned int)KMPnPEvt_DeviceAction_Stop, 2, v7, a2, a4);
    }
  }
  else if ( (byte_140C1327B & 0x10) != 0 )
  {
    if ( a1 )
      v7 = *(_QWORD *)(a1 + 48);
    return McTemplateK0zd_EtwWriteTransfer(a1, (unsigned int)KMPnPEvt_DeviceAction_Queue, 0, v7, a2);
  }
  return result;
}
