/*
 * XREFs of PnpGetObjectProperty @ 0x14063FC6C
 * Callers:
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x14063C7A8 (PiPnpRtlIsDeviceEnumerableForUser.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14063F27C (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1406410B8 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiUEventCacheObjectProperties @ 0x14064955C (PiUEventCacheObjectProperties.c)
 *     IopGetDeviceInterfaces @ 0x1406E8FDC (IopGetDeviceInterfaces.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14072EC98 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDmObjectProcessPropertyChange @ 0x1407458B4 (PiDmObjectProcessPropertyChange.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140745E90 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140777EE0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     IoGetDeviceDirectory @ 0x1408A1240 (IoGetDeviceDirectory.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x14063FDAC (_PnpGetObjectProperty.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetObjectProperty(
        ULONG Tag,
        SIZE_T NumberOfBytes,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        PVOID *a9,
        _DWORD *a10,
        int a11)
{
  PVOID *v11; // rbx
  SIZE_T v12; // rbp
  int v13; // r12d
  __int64 v15; // r13
  PVOID PoolWithTag; // rax
  int ObjectProperty; // edi
  int v21; // eax
  int v22; // [rsp+98h] [rbp+10h] BYREF

  v11 = a9;
  LODWORD(v12) = 0;
  v13 = a11;
  v15 = a8;
  v22 = NumberOfBytes;
  *a9 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)NumberOfBytes > (unsigned int)v12 )
    {
      v12 = (unsigned int)NumberOfBytes;
      if ( *v11 )
        ExFreePoolWithTag(*v11, Tag);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v12, Tag);
      *v11 = PoolWithTag;
      if ( !PoolWithTag )
        break;
    }
    v22 = 0;
    ObjectProperty = PnpGetObjectProperty(PiPnpRtlCtx, a3, a4, a5, a6, a7, v15, (__int64)*v11, v12, (__int64)&v22, v13);
    if ( ObjectProperty != -1073741789 )
      goto LABEL_7;
    LODWORD(NumberOfBytes) = v22;
  }
  ObjectProperty = -1073741670;
LABEL_7:
  if ( ObjectProperty < 0 )
    goto LABEL_19;
  v21 = v22;
  if ( a10 )
    *a10 = v22;
  if ( !v21 )
  {
LABEL_19:
    if ( *v11 )
    {
      ExFreePoolWithTag(*v11, Tag);
      *v11 = 0LL;
    }
  }
  return (unsigned int)ObjectProperty;
}
