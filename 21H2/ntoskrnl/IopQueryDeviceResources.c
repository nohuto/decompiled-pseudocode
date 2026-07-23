/*
 * XREFs of IopQueryDeviceResources @ 0x14075062C
 * Callers:
 *     IopReleaseDeviceResources @ 0x140738908 (IopReleaseDeviceResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14075028C (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryAndAllocateBootResources @ 0x14075044C (PiQueryAndAllocateBootResources.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     _CmOpenDeviceRegKey @ 0x140636980 (_CmOpenDeviceRegKey.c)
 *     IopSynchronousCall @ 0x1406FA580 (IopSynchronousCall.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1407509E4 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpDetermineResourceListSize @ 0x140750BDC (PnpDetermineResourceListSize.c)
 *     IopFilterResourceRequirementsCall @ 0x140750C40 (IopFilterResourceRequirementsCall.c)
 *     PpIrpQueryResourceRequirements @ 0x140750F18 (PpIrpQueryResourceRequirements.c)
 *     PnpFilterResourceRequirementsList @ 0x1407AD9DC (PnpFilterResourceRequirementsList.c)
 *     PnpCmResourcesToIoResources @ 0x1407B6210 (PnpCmResourcesToIoResources.c)
 *     PnpMergeFilteredResourceRequirementsList @ 0x1407D0CC4 (PnpMergeFilteredResourceRequirementsList.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopQueryDeviceResources(struct _DEVICE_OBJECT *a1, int a2, PVOID *a3, ULONG *a4)
{
  _DWORD *v8; // rdi
  unsigned int **DeviceNode; // r12
  int v10; // ebx
  __int64 result; // rax
  __int64 v12; // rcx
  unsigned int *v13; // rax
  _DWORD *v14; // rax
  void *v15; // rbx
  SIZE_T v16; // rdx
  PVOID PoolWithTag; // rax
  PVOID v18; // rbx
  int v19; // r12d
  PVOID Data; // [rsp+20h] [rbp-79h]
  ULONG DataSize; // [rsp+28h] [rbp-71h]
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-59h] BYREF
  PVOID P; // [rsp+50h] [rbp-49h] BYREF
  _DWORD *v24; // [rsp+58h] [rbp-41h]
  void *Src; // [rsp+60h] [rbp-39h] BYREF
  _WORD v26[68]; // [rsp+68h] [rbp-31h] BYREF
  char v27; // [rsp+108h] [rbp+6Fh] BYREF
  HANDLE KeyHandle; // [rsp+110h] [rbp+77h] BYREF
  PVOID v29; // [rsp+118h] [rbp+7Fh]

  *a3 = 0LL;
  KeyHandle = 0LL;
  Src = 0LL;
  P = 0LL;
  v29 = 0LL;
  v24 = 0LL;
  v8 = 0LL;
  *a4 = 0;
  memset(v26, 0, 0x48uLL);
  DeviceNode = (unsigned int **)a1->DeviceObjectExtension->DeviceNode;
  *(_QWORD *)&ValueName.Length = DeviceNode;
  if ( a2 )
  {
    if ( (unsigned int)PnpGetDeviceResourcesFromRegistry((_DWORD)a1, 0, 2, (_DWORD)a3, (__int64)&v27) != -1073741772 )
    {
      if ( *a3 )
      {
        v8 = (_DWORD *)PnpCmResourcesToIoResources(v12, *a3, 0LL);
        ExFreePoolWithTag(*a3, 0);
        if ( !v8 )
        {
          *a3 = 0LL;
          *a4 = 0;
          return 3221225626LL;
        }
        *a3 = v8;
        *a4 = *v8;
      }
LABEL_18:
      if ( (int)IopFilterResourceRequirementsCall(a1, v8, &Src) < 0 )
      {
        *a3 = v8;
        if ( v8 )
          *a4 = *v8;
        else
          *a4 = 0;
        return 0LL;
      }
      v15 = Src;
      *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
      KeyHandle = 0LL;
      if ( !Src )
      {
        *a4 = 0;
        *a3 = 0LL;
LABEL_27:
        if ( (int)CmOpenDeviceRegKey(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)DeviceNode[6],
                    19,
                    0,
                    131097,
                    1,
                    (__int64)&KeyHandle,
                    0LL) >= 0 )
        {
          ValueName.Buffer = L"FilteredConfigVector";
          DataSize = *a4;
          Data = *a3;
          *(_DWORD *)&ValueName.Length = 2752552;
          ZwSetValueKey(KeyHandle, &ValueName, 0, 0xAu, Data, DataSize);
          ZwClose(KeyHandle);
        }
        return 0LL;
      }
      v16 = *(unsigned int *)Src;
      *a4 = *(_DWORD *)Src;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x20207050u);
      *a3 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, v15, *a4);
        ExFreePoolWithTag(v15, 0);
        goto LABEL_27;
      }
      ExFreePoolWithTag(v15, 0);
      return 3221225626LL;
    }
    if ( (unsigned int)PnpGetDeviceResourcesFromRegistry((_DWORD)a1, 1, 1, (unsigned int)&KeyHandle, (__int64)&v27) != -1073741772 )
    {
      v8 = KeyHandle;
      goto LABEL_17;
    }
    if ( (*((_DWORD *)DeviceNode + 99) & 1) != 0 )
    {
      result = PnpGetDeviceResourcesFromRegistry((_DWORD)a1, 1, 2, (unsigned int)&KeyHandle, (__int64)&v27);
      if ( (_DWORD)result == -1073741772 )
        goto LABEL_15;
    }
    else
    {
      v13 = DeviceNode[55];
      if ( v13 )
      {
        v14 = ExAllocatePoolWithTag(PagedPool, *v13, 0x20207050u);
        v8 = v14;
        if ( !v14 )
          return 3221225495LL;
        memmove(v14, DeviceNode[55], *DeviceNode[55]);
        goto LABEL_17;
      }
      result = PpIrpQueryResourceRequirements(a1, &KeyHandle);
      if ( (_DWORD)result == -1073741637 )
      {
        v8 = 0LL;
LABEL_15:
        result = 0LL;
        goto LABEL_16;
      }
    }
    v8 = KeyHandle;
LABEL_16:
    if ( (int)result < 0 )
      return result;
LABEL_17:
    if ( (int)PnpGetDeviceResourcesFromRegistry((_DWORD)a1, 0, 4, (unsigned int)&P, (__int64)&v27) >= 0 )
    {
      v18 = P;
      if ( !P || !*(_DWORD *)P || *((_DWORD *)P + 1) != 5 )
      {
        v19 = PnpFilterResourceRequirementsList(v8);
        if ( v18 )
          ExFreePoolWithTag(v18, 0);
        if ( v19 < 0 )
        {
          if ( v8 )
            ExFreePoolWithTag(v8, 0);
          return (unsigned int)v19;
        }
        DeviceNode = *(unsigned int ***)&ValueName.Length;
        if ( (*(_DWORD *)(*(_QWORD *)&ValueName.Length + 396LL) & 1) != 0 )
        {
          if ( v8 )
            ExFreePoolWithTag(v8, 0);
          v8 = v29;
        }
        else
        {
          v10 = PnpMergeFilteredResourceRequirementsList(v29);
          if ( v8 )
            ExFreePoolWithTag(v8, 0);
          if ( v29 )
            ExFreePoolWithTag(v29, 0);
          if ( v10 < 0 )
            return (unsigned int)v10;
          v8 = v24;
        }
      }
    }
    goto LABEL_18;
  }
  if ( (*((_DWORD *)DeviceNode + 99) & 1) == 0 )
  {
    v26[0] = 2587;
    v10 = IopSynchronousCall(a1, (__int64)v26, -1073741637, 0LL, a3);
    if ( v10 == -1073741637 )
    {
      *a3 = 0LL;
      v10 = 0;
    }
    if ( v10 >= 0 )
      *a4 = PnpDetermineResourceListSize(*a3);
    return (unsigned int)v10;
  }
  result = PnpGetDeviceResourcesFromRegistry((_DWORD)a1, 0, 7, (_DWORD)a3, (__int64)a4);
  if ( (_DWORD)result == -1073741772 )
    return 0LL;
  return result;
}
