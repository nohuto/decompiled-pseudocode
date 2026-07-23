/*
 * XREFs of PipGenerateContainerID @ 0x14075B958
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140724960 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1403FF870 (RtlCompareMemory.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     RtlGUIDFromString @ 0x1405DD3D0 (RtlGUIDFromString.c)
 *     _CmGetDeviceRegProp @ 0x1405E046C (_CmGetDeviceRegProp.c)
 *     RtlCreateUnicodeString @ 0x140642DF0 (RtlCreateUnicodeString.c)
 *     ExUuidCreate @ 0x140657460 (ExUuidCreate.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1406A7C78 (RtlStringFromGUIDEx.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PipGenerateContainerID(__int64 a1, __int64 a2, char a3, const WCHAR *a4, _QWORD *a5)
{
  NTSTATUS v7; // ebx
  GUID *p_Guid; // rcx
  wchar_t *Buffer; // rdi
  unsigned int MaximumLength; // esi
  PVOID PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rdx
  int DeviceRegProp; // edi
  __int64 i; // rdi
  UNICODE_STRING GuidString; // [rsp+40h] [rbp-61h] BYREF
  int v18; // [rsp+50h] [rbp-51h] BYREF
  int v19; // [rsp+54h] [rbp-4Dh] BYREF
  GUID Guid; // [rsp+58h] [rbp-49h] BYREF
  WCHAR SourceString[40]; // [rsp+70h] [rbp-31h] BYREF

  v18 = 0;
  v19 = 0;
  *(_QWORD *)&GuidString.Length = 0LL;
  *a5 = 0LL;
  v7 = 0;
  GuidString.Buffer = 0LL;
  Guid = 0LL;
  if ( !a3 )
  {
    p_Guid = (GUID *)(*(_QWORD *)(a1 + 16) + 664LL);
    goto LABEL_3;
  }
  if ( !a4 )
  {
    if ( a2 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      v14 = *(_QWORD *)(a1 + 48);
      v18 = 78;
      DeviceRegProp = CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v14,
                        a2,
                        37,
                        (__int64)&v19,
                        (__int64)SourceString,
                        (__int64)&v18,
                        0);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( DeviceRegProp >= 0 && v19 == 1 && RtlCreateUnicodeString(&GuidString, SourceString) )
      {
        v7 = RtlGUIDFromString(&GuidString, &Guid);
        if ( v7 >= 0 )
        {
          for ( i = *(_QWORD *)(a1 + 16); i; i = *(_QWORD *)(i + 16) )
          {
            if ( (GUID *)(i + 664) == &Guid || RtlCompareMemory((const void *)(i + 664), &Guid, 0x10uLL) == 16 )
              goto LABEL_27;
          }
LABEL_4:
          if ( v7 < 0 )
            return (unsigned int)v7;
          goto LABEL_5;
        }
LABEL_27:
        RtlFreeAnsiString(&GuidString);
      }
    }
    v7 = ExUuidCreate(&Guid);
    if ( v7 < 0 )
      return (unsigned int)v7;
    p_Guid = &Guid;
LABEL_3:
    v7 = RtlStringFromGUIDEx(p_Guid, &GuidString, 1u);
    goto LABEL_4;
  }
  if ( !RtlCreateUnicodeString(&GuidString, a4) )
    return (unsigned int)-1073741670;
LABEL_5:
  Buffer = GuidString.Buffer;
  if ( GuidString.Buffer )
  {
    MaximumLength = GuidString.MaximumLength;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, GuidString.MaximumLength, 0x6E657050u);
    *a5 = PoolWithTag;
    if ( PoolWithTag )
      memmove(PoolWithTag, Buffer, MaximumLength);
    else
      v7 = -1073741670;
    RtlFreeAnsiString(&GuidString);
  }
  return (unsigned int)v7;
}
