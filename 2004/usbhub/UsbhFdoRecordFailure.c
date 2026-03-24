/*
 * XREFs of UsbhFdoRecordFailure @ 0x1C00302D0
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0009690 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C0014E84 (UsbhDecPdoIoCount.c)
 *     UsbhGetPortData @ 0x1C0016CA0 (UsbhGetPortData.c)
 *     memmove @ 0x1C001D080 (memmove.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoRecordFailure(__int64 a1, ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  _DWORD *v6; // rsi
  int *SecurityContext; // rdi
  int v8; // r11d
  unsigned int v9; // ebx
  unsigned int v10; // r10d
  unsigned int v11; // r15d
  PVOID PoolWithTag; // rax
  void *v13; // rcx
  __int64 PortData; // rax
  int v16; // [rsp+48h] [rbp-30h]

  FdoExt(a1);
  v6 = PdoExt(BugCheckParameter3);
  SecurityContext = (int *)BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  Log(a1, 8, 1717854513, *((_QWORD *)v6 + 106), (__int64)SecurityContext);
  v9 = 0;
  if ( *((_QWORD *)v6 + 106) )
    goto LABEL_2;
  if ( !SecurityContext )
  {
    Log(a1, v8, 1717854514, 0LL, 0LL);
LABEL_2:
    v9 = -1073741811;
    goto LABEL_16;
  }
  Log(a1, v8, 1717854515, 0LL, (unsigned int)*SecurityContext);
  if ( v10 > 0x1000 )
    v10 = 4096;
  if ( v10 >= 0x14 )
  {
    v11 = v10;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v10, 0x42554855u);
    *((_QWORD *)v6 + 106) = PoolWithTag;
    if ( PoolWithTag && (memset(PoolWithTag, 0, v11), (v13 = (void *)*((_QWORD *)v6 + 106)) != 0LL) )
    {
      memmove(v13, SecurityContext, v11);
      if ( SecurityContext[3] == 7 )
      {
        PortData = UsbhGetPortData(a1, *((_WORD *)v6 + 714));
        if ( PortData )
        {
          _InterlockedExchange((volatile __int32 *)(PortData + 428), 7);
          LOBYTE(v16) = 0;
          UsbhException(
            a1,
            *((unsigned __int16 *)v6 + 714),
            131,
            0,
            0,
            SecurityContext[1],
            SecurityContext[2],
            usbfile_dioctl_c,
            1349,
            v16);
        }
      }
      LOBYTE(v16) = 0;
      UsbhException(
        a1,
        *((unsigned __int16 *)v6 + 714),
        130,
        0,
        0,
        SecurityContext[1],
        SecurityContext[2],
        usbfile_dioctl_c,
        1357,
        v16);
    }
    else
    {
      v9 = -1073741670;
    }
  }
  else
  {
    v9 = -1073741789;
  }
LABEL_16:
  BugCheckParameter4->IoStatus.Status = v9;
  IofCompleteRequest(BugCheckParameter4, 0);
  UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  return v9;
}
