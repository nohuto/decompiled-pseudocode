/*
 * XREFs of UsbhPdoPnp_QueryId @ 0x1C0056360
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDecHubBusy @ 0x1C0003610 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0004060 (UsbhIncHubBusy.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     memmove @ 0x1C001D080 (memmove.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E188 (WPP_RECORDER_SF_d.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C0055C3C (UsbhPdoPnp_EnablePdo.c)
 *     UsbhAcquirePdoUxdLock @ 0x1C005A314 (UsbhAcquirePdoUxdLock.c)
 *     UsbhReleasePdoUxdLock @ 0x1C005B78C (UsbhReleasePdoUxdLock.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryId(__int64 a1, IRP *a2)
{
  __int64 v3; // rsi
  _DWORD *v5; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  NTSTATUS Status; // ebp
  _DWORD *v8; // r14
  __int64 v9; // rcx
  __int64 Length; // rcx
  unsigned int v11; // ebx
  __int64 v13; // rax
  _DWORD *v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  _DWORD *v17; // rbx
  __int64 v18; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v20; // rdi
  struct _UNICODE_STRING GuidString; // [rsp+30h] [rbp-38h] BYREF

  v3 = 0LL;
  v5 = PdoExt(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  v8 = v5;
  UsbhAcquirePdoUxdLock(v9, a1);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( (_DWORD)Length )
  {
    Length = (unsigned int)(Length - 1);
    if ( (_DWORD)Length )
    {
      Length = (unsigned int)(Length - 1);
      if ( (_DWORD)Length )
      {
        Length = (unsigned int)(Length - 1);
        if ( (_DWORD)Length )
        {
          if ( (_DWORD)Length == 2 )
          {
            if ( *((_BYTE *)v8 + 2732) )
            {
              GuidString = 0LL;
              Status = RtlStringFromGUID((const GUID *const)(v8 + 679), &GuidString);
              if ( Status >= 0 )
              {
                Status = 0;
                a2->IoStatus.Information = (unsigned __int64)GuidString.Buffer;
              }
            }
          }
          goto LABEL_9;
        }
        if ( *((_QWORD *)v8 + 267) )
        {
          v13 = 532LL;
          v3 = (v8[355] & 0x200000) != 0 ? 0xC : 0;
        }
        else
        {
          v13 = 536LL;
        }
      }
      else
      {
        v13 = 528LL;
      }
    }
    else
    {
      v13 = 524LL;
    }
  }
  else
  {
    if ( !KeGetCurrentIrql() )
    {
      v14 = PdoExt(a1);
      v15 = (_QWORD *)UsbhIncHubBusy(*((_QWORD *)v8 + 148), (__int64)(v14 + 236), a1, 1346728819, 1);
      KeWaitForSingleObject(v8 + 724, Executive, 0, 0, 0LL);
      UsbhPdoPnp_EnablePdo(a1);
      KeSetEvent((PRKEVENT)(v8 + 724), 0, 0);
      PdoExt(a1);
      UsbhDecHubBusy(*((_QWORD *)v8 + 148), v16, v15);
    }
    v13 = 520LL;
  }
  v17 = &v8[v13];
  if ( !&v8[v13] || (v18 = (unsigned int)v17[1], !(_DWORD)v18) || !*((_QWORD *)v17 + 1) )
  {
LABEL_9:
    if ( !CurrentStackLocation->Parameters.Read.Length )
      Status = -1073741670;
    v11 = Status;
    goto LABEL_12;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3 + v18, 0x42554855u);
  v20 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v3 + (unsigned int)v17[1]);
    if ( v3 )
    {
      *(_QWORD *)v20 = *(_QWORD *)L"MSFT30";
      v20[2] = *(_DWORD *)L"30";
    }
    memmove((char *)v20 + v3, *((const void **)v17 + 1), (unsigned int)v17[1]);
    a2->IoStatus.Information = (unsigned __int64)v20;
    v11 = 0;
  }
  else
  {
    v11 = -1073741670;
  }
LABEL_12:
  UsbhReleasePdoUxdLock(Length, a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x10u,
      (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
      v11);
  a2->IoStatus.Status = v11;
  IofCompleteRequest(a2, 0);
  return v11;
}
