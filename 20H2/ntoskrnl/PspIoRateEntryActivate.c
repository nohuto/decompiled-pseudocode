/*
 * XREFs of PspIoRateEntryActivate @ 0x1405D5224
 * Callers:
 *     PspSetJobIoRateControl @ 0x1405D4FDC (PspSetJobIoRateControl.c)
 *     PspSetJobIoRateControlForVolume @ 0x14090BC74 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     IoStartIoRateControl @ 0x1402006A0 (IoStartIoRateControl.c)
 *     IoStopIoRateControl @ 0x1402008F4 (IoStopIoRateControl.c)
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     IoStartDiskIoAttributionForContext @ 0x1402EE8D8 (IoStartDiskIoAttributionForContext.c)
 *     IoDiskIoAttributionDereference @ 0x1402EEE34 (IoDiskIoAttributionDereference.c)
 *     IoStopDiskIoAttributionForContext @ 0x1402EF218 (IoStopDiskIoAttributionForContext.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwCreateFile @ 0x1403F8C10 (ZwCreateFile.c)
 *     PspIoRateEntryDeactivate @ 0x1405D532C (PspIoRateEntryDeactivate.c)
 *     IoDiskIoAttributionAllocate @ 0x14069F664 (IoDiskIoAttributionAllocate.c)
 */

__int64 __fastcall PspIoRateEntryActivate(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  _RTL_BALANCED_NODE *v5; // rbx
  int v6; // edx
  __int64 v10; // r8
  int started; // esi
  __int64 v12; // rdi
  _RTL_BALANCED_NODE *v14; // rax
  __int64 v15; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-1h] BYREF
  __int64 v19; // [rsp+100h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+108h] [rbp+7Fh] BYREF

  v15 = 0LL;
  v19 = 0LL;
  v5 = 0LL;
  v6 = 0;
  Handle = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  if ( a4 )
    *a4 = 0;
  if ( *(_QWORD *)(a3 + 24) )
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a3 + 24));
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    started = ZwCreateFile(&Handle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
    if ( started < 0 )
      goto LABEL_13;
    v14 = (_RTL_BALANCED_NODE *)IoDiskIoAttributionAllocate(a2, *(_QWORD *)(a2 + 1352));
    v5 = v14;
    if ( !v14 )
    {
      started = -1073741670;
      goto LABEL_13;
    }
    IoStartDiskIoAttributionForContext(v14);
    v6 = (int)Handle;
    v10 = (__int64)v5;
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 1352);
  }
  started = IoStartIoRateControl(a3, v6, v10, (__int64)&v19, (__int64)&v15);
  if ( started < 0 )
  {
    v12 = v19;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 40) )
    {
      PspIoRateEntryDeactivate(a1);
      *a4 = 1;
    }
    *(_QWORD *)(a1 + 40) = v19;
    *(_QWORD *)(a1 + 24) = v15;
    *(_QWORD *)(a1 + 48) = v5;
    v5 = 0LL;
    _InterlockedExchange64((volatile __int64 *)(a1 + 32), 0LL);
    v12 = 0LL;
    started = 0;
  }
  if ( v5 )
  {
    IoStopDiskIoAttributionForContext(v5);
    IoDiskIoAttributionDereference((__int64)v5);
  }
  if ( v12 )
    IoStopIoRateControl(v12);
LABEL_13:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)started;
}
