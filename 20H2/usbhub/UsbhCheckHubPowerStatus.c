/*
 * XREFs of UsbhCheckHubPowerStatus @ 0x1C00139C0
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C000DC30 (UsbhFdoD0Worker_Action.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C0015F10 (UsbhSyncSendInternalIoctl.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     UsbhGetHubClassDescriptor @ 0x1C002BCB8 (UsbhGetHubClassDescriptor.c)
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 */

__int64 __fastcall UsbhCheckHubPowerStatus(__int64 a1)
{
  _DWORD *v2; // rbp
  PVOID PoolWithTag; // rax
  void *v4; // rsi
  __int64 v5; // rbx
  int v6; // r8d
  __int64 v7; // rcx
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  __int64 v13; // [rsp+20h] [rbp-48h]
  int v14; // [rsp+48h] [rbp-20h]
  unsigned int v15; // [rsp+78h] [rbp+10h] BYREF

  v15 = 0;
  v2 = FdoExt(a1);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x47uLL, 0x42554855u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x47uLL);
    v5 = (int)UsbhSyncSendInternalIoctl(a1, 2228243LL, &v15, 0LL);
    Log(a1, 8, 1970303827, v15, v5);
    if ( (int)v5 >= 0 && (v2[1054] & 0xFFFFFFFD) == 0 )
    {
      v13 = v5;
      v6 = 810571602;
      v7 = a1;
LABEL_5:
      Log(v7, 16, v6, 0LL, v13);
      goto LABEL_6;
    }
    if ( (unsigned __int8)Usb_Disconnected((unsigned int)v5) )
    {
      v13 = v5;
      v7 = a1;
      if ( (v15 & 2) == 0 )
      {
        v6 = 1347900018;
        goto LABEL_5;
      }
      Log(a1, 16, 1347892082, 0LL, v5);
      LOBYTE(v14) = 0;
      UsbhException(a1, 0, 112, v9, 0, v5, 0, usbfile_fdopwr_c, 3869, v14);
    }
    else if ( (v5 & 0xC0000000) == 0xC0000000 )
    {
      Log(a1, 16, 1347899937, 0LL, v5);
      LOBYTE(v14) = 0;
      UsbhException(a1, 0, v10 + 110, v10, 0, v5, 0, usbfile_fdopwr_c, 3889, v14);
    }
    else if ( (int)v5 < 0 || (v15 & 1) != 0 )
    {
      LODWORD(v5) = UsbhGetHubClassDescriptor(a1, v4);
      Log(a1, 16, 1666209618, 0LL, (int)v5);
      if ( (v5 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v5) )
      {
        LOBYTE(v14) = 0;
        UsbhException(a1, 0, v12 + 109, v12, 0, v5, 0, usbfile_fdopwr_c, 3923, v14);
      }
    }
    else
    {
      LODWORD(v5) = -1073741823;
      Log(a1, 16, 1699764050, 0LL, -1073741823LL);
      LOBYTE(v14) = 0;
      UsbhException(a1, 0, v11 + 111, v11, 0, -1073741823, 0, usbfile_fdopwr_c, 3905, v14);
    }
  }
  else
  {
    LODWORD(v5) = -1073741670;
  }
LABEL_6:
  Log(a1, 16, 1348825714, 0LL, (int)v5);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v5;
}
