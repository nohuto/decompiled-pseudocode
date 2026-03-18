/*
 * XREFs of sub_1C000A740 @ 0x1C000A740
 * Callers:
 *     sub_1C00018E8 @ 0x1C00018E8 (sub_1C00018E8.c)
 *     sub_1C000A080 @ 0x1C000A080 (sub_1C000A080.c)
 *     sub_1C000BBF0 @ 0x1C000BBF0 (sub_1C000BBF0.c)
 *     sub_1C000C0F0 @ 0x1C000C0F0 (sub_1C000C0F0.c)
 *     sub_1C000D970 @ 0x1C000D970 (sub_1C000D970.c)
 *     sub_1C00138BC @ 0x1C00138BC (sub_1C00138BC.c)
 *     sub_1C001BFA0 @ 0x1C001BFA0 (sub_1C001BFA0.c)
 *     sub_1C001C03C @ 0x1C001C03C (sub_1C001C03C.c)
 *     sub_1C002AD90 @ 0x1C002AD90 (sub_1C002AD90.c)
 *     sub_1C002B590 @ 0x1C002B590 (sub_1C002B590.c)
 *     sub_1C002C774 @ 0x1C002C774 (sub_1C002C774.c)
 *     sub_1C002C860 @ 0x1C002C860 (sub_1C002C860.c)
 *     sub_1C002CF78 @ 0x1C002CF78 (sub_1C002CF78.c)
 *     sub_1C002D554 @ 0x1C002D554 (sub_1C002D554.c)
 *     sub_1C002D7DC @ 0x1C002D7DC (sub_1C002D7DC.c)
 *     sub_1C002F0A8 @ 0x1C002F0A8 (sub_1C002F0A8.c)
 *     sub_1C0036B2C @ 0x1C0036B2C (sub_1C0036B2C.c)
 *     sub_1C0037200 @ 0x1C0037200 (sub_1C0037200.c)
 *     sub_1C0038420 @ 0x1C0038420 (sub_1C0038420.c)
 *     sub_1C0038B7C @ 0x1C0038B7C (sub_1C0038B7C.c)
 *     sub_1C00553C0 @ 0x1C00553C0 (sub_1C00553C0.c)
 * Callees:
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E714 @ 0x1C002E714 (sub_1C002E714.c)
 */

__int64 __fastcall sub_1C000A740(__int64 a1, __int64 a2, __int64 a3, _WORD *a4, int a5, _DWORD *a6)
{
  _WORD *v6; // rsi
  __int64 v10; // r13
  PIRP v11; // rax
  IRP *v12; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // r8d
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  int *PoolWithTag; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  PIRP v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  NTSTATUS v26; // eax
  NTSTATUS v27; // edi
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  int OutputBuffer; // [rsp+28h] [rbp-A9h]
  IRP *v35; // [rsp+88h] [rbp-49h]
  struct _IO_STATUS_BLOCK v36; // [rsp+90h] [rbp-41h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-31h] BYREF
  _KEVENT Event; // [rsp+B0h] [rbp-21h] BYREF
  struct _KEVENT Object; // [rsp+C8h] [rbp-9h] BYREF
  unsigned int v40; // [rsp+128h] [rbp+57h] BYREF
  char *v41; // [rsp+130h] [rbp+5Fh]
  _WORD *v42; // [rsp+140h] [rbp+6Fh]

  v42 = a4;
  v41 = (char *)a2;
  v40 = 0;
  v6 = a4;
  memset(&Object, 0, sizeof(Object));
  v36 = 0LL;
  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  v10 = *(_QWORD *)(a1 + 64);
  if ( !v10 )
    sub_1C002DC78(a1, 0LL);
  if ( *(_DWORD *)v10 != 541218120 )
    sub_1C002DC78(a1, *(_QWORD *)(a1 + 64));
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v11 = IoBuildDeviceIoControlRequest(
          0x220013u,
          *(PDEVICE_OBJECT *)(v10 + 1208),
          0LL,
          0,
          0LL,
          0,
          1u,
          &Event,
          &IoStatusBlock);
  v12 = v11;
  if ( v11 )
  {
    CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)&v40;
    CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = 0LL;
    Status = IofCallDriver(*(PDEVICE_OBJECT *)(v10 + 1208), v12);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
  }
  else
  {
    Status = -1073741670;
  }
  v15 = v40;
  if ( (dword_1C006B268 & 8) != 0 )
  {
    v16 = *(_QWORD *)(a1 + 64);
    if ( v16 )
    {
      a5 = 1400074357;
      v17 = *(_QWORD *)(v16 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
      *(_DWORD *)v17 = a5;
      *(_QWORD *)(v17 + 24) = Status;
      *(_QWORD *)(v17 + 8) = 0LL;
      *(_QWORD *)(v17 + 16) = v15;
    }
  }
  if ( (Status & 0xC0000000) == 0xC0000000 )
  {
    if ( a6 )
      *a6 = -1073713152;
    return (unsigned int)Status;
  }
  else
  {
    PoolWithTag = (int *)ExAllocatePoolWithTag(PoolType, 0x88uLL, 0x42554855u);
    if ( PoolWithTag )
    {
      *(_OWORD *)PoolWithTag = 0LL;
      *((_OWORD *)PoolWithTag + 1) = 0LL;
      *((_OWORD *)PoolWithTag + 2) = 0LL;
      *((_OWORD *)PoolWithTag + 3) = 0LL;
      *((_OWORD *)PoolWithTag + 4) = 0LL;
      *((_OWORD *)PoolWithTag + 5) = 0LL;
      *((_OWORD *)PoolWithTag + 6) = 0LL;
      *((_OWORD *)PoolWithTag + 7) = 0LL;
      *((_QWORD *)PoolWithTag + 16) = 0LL;
    }
    if ( (dword_1C006B268 & 8) != 0 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        a5 = 811823987;
        v20 = *(_QWORD *)(v19 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
        *(_DWORD *)v20 = a5;
        *(_QWORD *)(v20 + 8) = 0LL;
        *(_QWORD *)(v20 + 16) = PoolWithTag;
        *(_QWORD *)(v20 + 24) = 0LL;
      }
    }
    if ( PoolWithTag )
    {
      KeInitializeEvent(&Object, NotificationEvent, 0);
      v21 = IoBuildDeviceIoControlRequest(0x220003u, *(PDEVICE_OBJECT *)(v10 + 1208), 0LL, 0, 0LL, 0, 1u, &Object, &v36);
      v35 = v21;
      if ( (dword_1C006B268 & 8) != 0 )
      {
        v22 = *(_QWORD *)(a1 + 64);
        if ( v22 )
        {
          a5 = 828601203;
          v23 = *(_QWORD *)(v22 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
          *(_DWORD *)v23 = a5;
          *(_QWORD *)(v23 + 24) = &v36;
          *(_QWORD *)(v23 + 8) = 0LL;
          *(_QWORD *)(v23 + 16) = v21;
        }
      }
      if ( v21 )
      {
        PoolWithTag[8] = 10;
        v24 = PoolWithTag[8];
        *((_QWORD *)PoolWithTag + 1) = 0LL;
        *PoolWithTag = 3276936;
        if ( *(char *)a2 < 0 )
          v24 = 11;
        PoolWithTag[8] = v24;
        v25 = (unsigned __int16)*v6;
        *((_QWORD *)PoolWithTag + 5) = a3;
        *((_QWORD *)PoolWithTag + 6) = 0LL;
        PoolWithTag[9] = v25;
        PoolWithTag[14] = 2000;
        *((_QWORD *)PoolWithTag + 16) = *(_QWORD *)a2;
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
        {
          sub_1C002E714(
            DeviceObject->DeviceExtension,
            (unsigned __int8)v41[1],
            (unsigned __int8)*v41,
            (unsigned __int8)*(_WORD *)(a2 + 4),
            OutputBuffer,
            (char)v41,
            *v41,
            v41[1],
            *(_WORD *)(a2 + 2),
            HIBYTE(*(_WORD *)(a2 + 2)),
            *(_WORD *)(a2 + 2),
            *(_WORD *)(a2 + 4),
            HIBYTE(*(_WORD *)(a2 + 4)),
            *(_WORD *)(a2 + 4),
            *(_WORD *)(a2 + 6));
          v21 = v35;
          v6 = v42;
        }
        v21->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)PoolWithTag;
        v26 = IofCallDriver(*(PDEVICE_OBJECT *)(v10 + 1208), v21);
        v27 = v26;
        if ( v26 == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          v27 = v36.Status;
        }
        else
        {
          v36.Status = v26;
        }
        v28 = PoolWithTag[1];
        if ( (dword_1C006B268 & 8) != 0 )
        {
          v29 = *(_QWORD *)(a1 + 64);
          if ( v29 )
          {
            a5 = 845378419;
            v30 = *(_QWORD *)(v29 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 880)) & *(_DWORD *)(v29 + 884));
            *(_DWORD *)v30 = a5;
            *(_QWORD *)(v30 + 16) = v27;
            *(_QWORD *)(v30 + 8) = 0LL;
            *(_QWORD *)(v30 + 24) = v28;
          }
        }
        if ( a6 )
          *a6 = PoolWithTag[1];
        *v6 = *((_WORD *)PoolWithTag + 18);
        ExFreePoolWithTag(PoolWithTag, 0);
        if ( (dword_1C006B268 & 8) != 0 )
        {
          v31 = *(_QWORD *)(a1 + 64);
          if ( v31 )
          {
            a5 = 1046705011;
            v32 = *(_QWORD *)(v31 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
            *(_DWORD *)v32 = a5;
            *(_QWORD *)(v32 + 16) = v27;
            *(_QWORD *)(v32 + 8) = 0LL;
            *(_QWORD *)(v32 + 24) = 0LL;
          }
        }
        return (unsigned int)v27;
      }
      else
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        return 3221225626LL;
      }
    }
    else
    {
      if ( a6 )
        *a6 = -1073737728;
      return 3221225626LL;
    }
  }
}
