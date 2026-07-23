/*
 * XREFs of PiPnpRtlGatherDeviceDeleteInfo @ 0x140730520
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14063DB50 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     ZwPlugPlayControl @ 0x1403FA7D0 (ZwPlugPlayControl.c)
 *     memset @ 0x140411300 (memset.c)
 *     _CmGetDeviceRegProp @ 0x14066B77C (_CmGetDeviceRegProp.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlGatherDeviceDeleteInfo(PCWSTR SourceString, __int64 a2)
{
  PVOID PoolWithTag; // rax
  _DWORD *v5; // rdi
  NTSTATUS v6; // eax
  int DeviceRegProp; // edi
  void *v8; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING PnPControlData; // [rsp+50h] [rbp-30h] BYREF
  __int64 v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  __int64 v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+A8h] [rbp+28h] BYREF
  unsigned int v16; // [rsp+B0h] [rbp+30h] BYREF

  v15 = 0;
  DestinationString = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x54uLL, 0x47706E50u);
  *(_QWORD *)a2 = PoolWithTag;
  if ( !PoolWithTag )
  {
    DeviceRegProp = -1073741670;
LABEL_19:
    *(_QWORD *)a2 = 0LL;
    return (unsigned int)DeviceRegProp;
  }
  memset(PoolWithTag, 0, 0x54uLL);
  RtlInitUnicodeString(&DestinationString, SourceString);
  v5 = *(_DWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    v14 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    PnPControlData = DestinationString;
    v6 = ZwPlugPlayControl(PlugPlayControlDeviceStatus, &PnPControlData, 0x28u);
    if ( v6 >= 0 )
      *v5 = v13;
    v5 = *(_DWORD **)a2;
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 < 0 )
  {
    v5 = *(_DWORD **)a2;
    **(_DWORD **)a2 = 45;
  }
  v16 = 78;
  DeviceRegProp = CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)SourceString,
                    0LL,
                    9,
                    (__int64)&v15,
                    (__int64)(v5 + 1),
                    (__int64)&v16,
                    0);
  if ( DeviceRegProp >= 0 && v15 == 1 && v16 > 2 )
  {
    v8 = *(void **)a2;
    *(_WORD *)(*(_QWORD *)a2 + 80LL) = 0;
  }
  else
  {
    v8 = *(void **)a2;
    DeviceRegProp = 0;
    *(_WORD *)(*(_QWORD *)a2 + 4LL) = 0;
  }
  if ( DeviceRegProp < 0 )
  {
    if ( v8 )
      ExFreePoolWithTag(v8, 0x47706E50u);
    goto LABEL_19;
  }
  return (unsigned int)DeviceRegProp;
}
