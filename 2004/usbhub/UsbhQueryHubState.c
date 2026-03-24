/*
 * XREFs of UsbhQueryHubState @ 0x1C0038B7C
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C000F090 (UsbhHubProcessIsr.c)
 *     UsbhGetHubPowerStatus @ 0x1C002C474 (UsbhGetHubPowerStatus.c)
 * Callees:
 *     UsbhSyncSendCommand @ 0x1C000A740 (UsbhSyncSendCommand.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     Usb_Disconnected @ 0x1C001CEB4 (Usb_Disconnected.c)
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 */

__int64 __fastcall UsbhQueryHubState(__int64 a1, __int64 a2, _DWORD *a3)
{
  _WORD *PoolWithTag; // rax
  _WORD *v7; // rax
  int v8; // eax
  __int64 v9; // r15
  int v10; // edi
  unsigned __int16 *v11; // r8
  unsigned int v13; // edx
  __int64 v14; // rax
  int v15; // [rsp+20h] [rbp-40h]
  int v16; // [rsp+48h] [rbp-18h]
  PVOID P; // [rsp+50h] [rbp-10h] BYREF
  _BYTE v18[2]; // [rsp+58h] [rbp-8h] BYREF
  int v19; // [rsp+5Ah] [rbp-6h]
  __int16 v20; // [rsp+5Eh] [rbp-2h]
  int v21; // [rsp+A8h] [rbp+48h] BYREF

  v21 = 0;
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xAuLL, 0x42554855u);
  P = PoolWithTag;
  if ( PoolWithTag && (*(_QWORD *)PoolWithTag = 0LL, PoolWithTag[4] = 0, P) )
  {
    *((_WORD *)P + 2) = 4;
    v7 = P;
    *(_DWORD *)a2 = 0;
    v7[3] = 0;
    *((_WORD *)P + 1) = 0;
    *(_WORD *)P = 0;
    v18[0] = -96;
    *((_BYTE *)P + 8) = 0;
    v18[1] = 0;
    v19 = 0;
    v20 = *((_WORD *)P + 2);
    v8 = UsbhSyncSendCommand(a1, (__int64)v18, (__int64)P, (_WORD *)P + 2, v15, &v21);
    v9 = v21;
    v10 = v8;
    Log(a1, 4, 1365799796, v8, v21);
    v11 = (unsigned __int16 *)P;
    if ( v10 < 0 || *((_WORD *)P + 2) == 4 )
    {
      if ( (v10 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v10) )
      {
        Log(a1, 4, 1366324018, v11[2], v9);
        LOBYTE(v16) = 0;
        UsbhException(a1, 0, 8, (int)&P, 10, v10, v9, usbfile_bus_c, 1758, v16);
        v11 = (unsigned __int16 *)P;
      }
      if ( v10 >= 0 )
      {
        v13 = v11[1];
        *(_WORD *)(a2 + 2) = v13;
        v14 = *v11;
        *(_WORD *)a2 = v14;
        Log(a1, 4, 1215329140, v13, v14);
        v11 = (unsigned __int16 *)P;
      }
      if ( a3 )
        *a3 = v9;
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
      return (unsigned int)v10;
    }
    else
    {
      Log(a1, 4, 1366324017, *((unsigned __int16 *)P + 2), v9);
      LOBYTE(v16) = 0;
      UsbhException(a1, 0, 9, (int)&P, 10, v10, v9, usbfile_bus_c, 1745, v16);
      if ( a3 )
        *a3 = v9;
      if ( P )
        ExFreePoolWithTag(P, 0);
      return 3221225473LL;
    }
  }
  else
  {
    Log(a1, 4, 1365795180, 0LL, 0LL);
    if ( a3 )
      *a3 = -1073737728;
    return 3221225626LL;
  }
}
