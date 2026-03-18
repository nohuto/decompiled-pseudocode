/*
 * XREFs of UsbhGetBosDescriptor @ 0x1C0054F88
 * Callers:
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0037720 (UsbhGetAlternateUsbDescriptors.c)
 *     UsbhSetupDevice @ 0x1C0039198 (UsbhSetupDevice.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C00177A8 (UsbhSyncSendCommandToDevice.c)
 *     memset @ 0x1C001D340 (memset.c)
 */

__int64 __fastcall UsbhGetBosDescriptor(__int64 a1, __int64 a2, _WORD *a3)
{
  _DWORD *v6; // rax
  POOL_TYPE v7; // ecx
  _DWORD *v8; // rdi
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v10; // rsi
  int v11; // ebx
  PVOID v12; // rax
  __int64 v13; // r9
  void *v14; // rcx
  __int16 v16; // [rsp+98h] [rbp+20h] BYREF
  int v17; // [rsp+9Ah] [rbp+22h]
  unsigned __int16 v18; // [rsp+9Eh] [rbp+26h]

  v6 = PdoExt(a2);
  v7 = ExDefaultNonPagedPoolType;
  v16 = 1664;
  v8 = v6;
  v17 = 3840;
  v18 = 5;
  *(_DWORD *)a3 = 5;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(v7, 5uLL, 0x42554855u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_DWORD *)PoolWithTag = 0;
    *((_BYTE *)PoolWithTag + 4) = 0;
    v11 = UsbhSyncSendCommandToDevice(a1, a2, &v16, (__int64)PoolWithTag, a3);
    if ( (v11 & 0xC0000000) == 0xC0000000 )
    {
      v8[705] = 1073807371;
    }
    else
    {
      v12 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v10[1], 0x42554855u);
      *((_QWORD *)v8 + 300) = v12;
      if ( v12 && (memset(v12, 0, v10[1]), (v13 = *((_QWORD *)v8 + 300)) != 0) )
      {
        v18 = v10[1];
        *(_DWORD *)a3 = v18;
        v11 = UsbhSyncSendCommandToDevice(a1, a2, &v16, v13, a3);
      }
      else
      {
        v11 = -1073741670;
      }
    }
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
    v11 = -1073741670;
  }
  if ( (v11 & 0xC0000000) == 0xC0000000 )
  {
    v14 = (void *)*((_QWORD *)v8 + 300);
    v8[705] = 1073807371;
    if ( v14 )
    {
      ExFreePoolWithTag(v14, 0);
      *((_QWORD *)v8 + 300) = 0LL;
    }
  }
  Log(a1, 256, 1195528019, v11, 0LL);
  return (unsigned int)v11;
}
