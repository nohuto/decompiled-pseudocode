/*
 * XREFs of PiPnpRtlCmActionCallback @ 0x14062A730
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     _CmDevicePropertyRead @ 0x140253764 (_CmDevicePropertyRead.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     McTemplateK0zjdd_EtwWriteTransfer @ 0x14036D4B8 (McTemplateK0zjdd_EtwWriteTransfer.c)
 *     _CmClassPropertyRead @ 0x14036F8B0 (_CmClassPropertyRead.c)
 *     _CmDevicePropertyWrite @ 0x14036F96C (_CmDevicePropertyWrite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 *     _CmClassPropertyWrite @ 0x1405C66E8 (_CmClassPropertyWrite.c)
 *     PiDmGetCmObjectListFromCache @ 0x14061F234 (PiDmGetCmObjectListFromCache.c)
 *     PiDmListEnumObjectsWithCallback @ 0x14062A5E0 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectGetCachedCmProperty @ 0x14062AF9C (PiDmObjectGetCachedCmProperty.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x14062B0EC (PiDmObjectUpdateCachedCmProperty.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x14062B1D8 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     PiDmGetObject @ 0x14062B87C (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x14062BC00 (PiDmObjectRelease.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x14062C07C (PiPnpRtlCacheObjectBaseKey.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14062D4E0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmIsRootEnumeratedDevice @ 0x14062ECB8 (_CmIsRootEnumeratedDevice.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x14062F7EC (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x14062FB04 (PiPnpRtlGetFilteredDeviceList.c)
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x140639680 (RtlGUIDFromString.c)
 *     PnpIsNullGuid @ 0x1406FEAA0 (PnpIsNullGuid.c)
 *     PiDmListRemoveList @ 0x140730AF8 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140730C1C (PiDmListRemoveObject.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x1407330A4 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140734710 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x140734904 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x140734B50 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x140734D34 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeDeviceDeleteInfo @ 0x140734EBC (PiPnpRtlFreeDeviceDeleteInfo.c)
 *     PiDmListAddObject @ 0x140735694 (PiDmListAddObject.c)
 *     _CmGetInstallerClassRegProp @ 0x14073F958 (_CmGetInstallerClassRegProp.c)
 *     _PnpSetObjectProperty @ 0x140745DE4 (_PnpSetObjectProperty.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140748AB8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140748B68 (PiDmAddCacheReferenceForObject.c)
 *     PiDmObjectReleaseLock @ 0x1407499A8 (PiDmObjectReleaseLock.c)
 *     KsepCacheLock @ 0x1407499D0 (KsepCacheLock.c)
 *     PiDmListAddList @ 0x14076EBA4 (PiDmListAddList.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x14076FE3C (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x140771FEC (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PnpIsValidGuidString @ 0x1407723F4 (PnpIsValidGuidString.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x1408A3494 (PiPnpRtlGatherPanelRemoveInfo.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlCmActionCallback(__int64 a1, const wchar_t *a2, unsigned int a3, int a4, int a5, __int64 a6)
{
  unsigned int v9; // esi
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int FilteredDeviceInterfaceList; // eax
  unsigned int v15; // eax
  int v17; // r9d
  int v18; // r9d
  int v19; // r9d
  unsigned int v20; // eax
  PVOID PoolWithTag; // r12
  int v22; // r9d
  int v23; // edx
  __int64 v24; // rcx
  int DeviceRegProp; // eax
  int v26; // esi
  bool v27; // sf
  unsigned int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rsi
  _QWORD *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rdx
  _DWORD *v37; // rsi
  int v38; // eax
  PVOID v39; // r14
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r14
  __int64 v44; // rdx
  int v45; // ebx
  unsigned int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rsi
  char v49; // al
  __int64 v50; // r8
  __int64 v51; // rcx
  _QWORD *v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rdx
  _QWORD *v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  int v60; // ecx
  char IsNullGuid; // al
  __int64 v62; // r8
  __int64 v63; // rax
  _DWORD *v64; // rdx
  int v65; // eax
  int v66; // eax
  int Object; // esi
  PVOID v68; // r14
  __int64 v69; // rcx
  _QWORD *v70; // rbx
  __int64 v71; // rdx
  char v72; // [rsp+50h] [rbp-B0h] BYREF
  char v73; // [rsp+51h] [rbp-AFh] BYREF
  char v74; // [rsp+52h] [rbp-AEh] BYREF
  char v75; // [rsp+53h] [rbp-ADh] BYREF
  int v76; // [rsp+54h] [rbp-ACh] BYREF
  size_t Size; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v78; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v79; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  __int64 v81; // [rsp+80h] [rbp-80h] BYREF
  __int64 v82; // [rsp+88h] [rbp-78h]
  __int64 v83; // [rsp+90h] [rbp-70h] BYREF
  _DWORD *v84; // [rsp+98h] [rbp-68h] BYREF
  PVOID P; // [rsp+A0h] [rbp-60h] BYREF
  void *v86; // [rsp+A8h] [rbp-58h] BYREF
  PVOID v87; // [rsp+B0h] [rbp-50h] BYREF
  void *v88; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v89; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v90; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v91[3]; // [rsp+D0h] [rbp-30h] BYREF
  char v92; // [rsp+E8h] [rbp-18h]
  int v93; // [rsp+E9h] [rbp-17h]
  __int16 v94; // [rsp+EDh] [rbp-13h]
  char v95; // [rsp+EFh] [rbp-11h]
  _QWORD v96[3]; // [rsp+F0h] [rbp-10h] BYREF
  char v97; // [rsp+108h] [rbp+8h]
  int v98; // [rsp+109h] [rbp+9h]
  __int16 v99; // [rsp+10Dh] [rbp+Dh]
  char v100; // [rsp+10Fh] [rbp+Fh]
  __int64 v101; // [rsp+110h] [rbp+10h] BYREF
  GUID Guid; // [rsp+118h] [rbp+18h] BYREF

  v9 = -1073741822;
  if ( a4 > 13 )
  {
    v17 = a4 - 14;
    if ( !v17 )
    {
      if ( a5 != 1 )
      {
        if ( a3 == 5 )
        {
          if ( *(int *)a6 >= 0 )
          {
            v56 = *(_QWORD **)(a6 + 8);
            v73 = 0;
            v57 = v56[1];
            if ( v57 )
            {
              if ( *v56 )
              {
                PiDmListRemoveObject(4LL, v57, *v56, &v73);
                if ( v73 )
                  PiDmListRemoveList(v58, v56[1], v59, *v56);
              }
            }
            PiPnpRtlFreePanelRemoveInfo(v56);
          }
        }
        else if ( a3 == 6 && *(int *)a6 >= 0 )
        {
          v70 = *(_QWORD **)(a6 + 8);
          v71 = v70[1];
          if ( v71 && *v70 )
            PiDmListRemoveObject(6LL, v71, *v70, &v75);
          PiPnpRtlFreePanelRemoveInfo(v70);
        }
        return 0;
      }
      if ( a3 == 5 )
      {
        v51 = *(_QWORD *)(a6 + 24);
        v89 = 0LL;
        FilteredDeviceInterfaceList = PiPnpRtlGatherContainerRemoveInfo(v51, a2, &v89);
        v9 = FilteredDeviceInterfaceList;
        if ( FilteredDeviceInterfaceList < 0 )
          goto LABEL_28;
        v47 = v89;
      }
      else
      {
        if ( a3 != 6 )
          return v9;
        v69 = *(_QWORD *)(a6 + 24);
        v90 = 0LL;
        FilteredDeviceInterfaceList = PiPnpRtlGatherPanelRemoveInfo(v69, a2, &v90);
        v9 = FilteredDeviceInterfaceList;
        if ( FilteredDeviceInterfaceList < 0 )
          goto LABEL_28;
        v47 = v90;
      }
LABEL_126:
      *(_QWORD *)(a6 + 8) = v47;
      return v9;
    }
    v18 = v17 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 != 1 || a5 != 1 || (*(_DWORD *)(a6 + 80) & 0x10000) != 0 )
          return v9;
        FilteredDeviceInterfaceList = PiPnpRtlGetFilteredDeviceInterfaceList(a6);
      }
      else
      {
        if ( a5 != 1 || (*(_DWORD *)(a6 + 72) & 0x10000) != 0 )
          return v9;
        FilteredDeviceInterfaceList = PiPnpRtlGetFilteredDeviceList(a6);
      }
LABEL_27:
      if ( FilteredDeviceInterfaceList != -1073741802 )
      {
LABEL_28:
        *(_DWORD *)a6 = FilteredDeviceInterfaceList;
        return (unsigned int)-1073741536;
      }
      return 0;
    }
    if ( a5 != 1 )
      return v9;
    if ( a3 == 5 )
    {
      if ( (*(_DWORD *)(a6 + 40) & 0x10000) != 0 )
        return v9;
      v93 = 0;
      v94 = 0;
      v95 = 0;
      v87 = 0LL;
      Object = PiDmGetObject(5LL, a2, &v87);
      if ( Object < 0 )
        goto LABEL_179;
      v68 = v87;
      v91[1] = *(_QWORD *)(a6 + 24);
      v91[2] = *(_QWORD *)(a6 + 32);
      v91[0] = a1;
      do
      {
        v92 = 0;
        Object = PiDmListEnumObjectsWithCallback(
                   4,
                   (ULONG_PTR)v68,
                   (__int64 (__fastcall *)(_QWORD, __int64, char *))PiPnpRtlEnumDevicesCallback,
                   (__int64)v91);
      }
      while ( Object >= 0 && v92 );
    }
    else
    {
      if ( a3 != 6 || (*(_DWORD *)(a6 + 40) & 0x10000) != 0 )
        return v9;
      v98 = 0;
      v99 = 0;
      v100 = 0;
      v88 = 0LL;
      Object = PiDmGetObject(6LL, a2, &v88);
      if ( Object < 0 )
        goto LABEL_179;
      v68 = v88;
      v96[1] = *(_QWORD *)(a6 + 24);
      v96[2] = *(_QWORD *)(a6 + 32);
      v96[0] = a1;
      do
      {
        v97 = 0;
        Object = PiDmListEnumObjectsWithCallback(
                   6,
                   (ULONG_PTR)v68,
                   (__int64 (__fastcall *)(_QWORD, __int64, char *))PiPnpRtlEnumDevicesCallback,
                   (__int64)v96);
      }
      while ( Object >= 0 && v97 );
    }
    if ( v68 )
      PiDmObjectRelease(v68);
LABEL_179:
    *(_DWORD *)a6 = Object;
    return (unsigned int)-1073741536;
  }
  if ( a4 == 13 )
  {
    if ( a5 == 1 )
      return 0;
    if ( a3 == 5 )
    {
      if ( *(int *)a6 < 0 )
        return 0;
      P = 0LL;
      v78 = 0LL;
      v37 = 0LL;
      v72 = 0;
      v38 = PiDmGetObject(5LL, a2, &P);
      v39 = P;
      if ( v38 >= 0 )
      {
        v40 = PiDmGetObject(1LL, *(_QWORD *)(a6 + 24), &v78);
        v37 = v78;
        if ( v40 >= 0 )
        {
          PiDmListAddObject(4LL, v39, v78, &v72);
          if ( !v72 )
            PiDmListAddList(v41, v39, v42, v37);
        }
      }
    }
    else
    {
      if ( a3 != 6 || *(int *)a6 < 0 )
        return 0;
      v86 = 0LL;
      v79 = 0LL;
      v37 = 0LL;
      v65 = PiDmGetObject(6LL, a2, &v86);
      v39 = v86;
      if ( v65 >= 0 )
      {
        v66 = PiDmGetObject(1LL, *(_QWORD *)(a6 + 24), &v79);
        v37 = v79;
        if ( v66 >= 0 )
          PiDmListAddObject(6LL, v39, v79, &v74);
      }
    }
    if ( v39 )
      PiDmObjectRelease(v39);
    if ( !v37 )
      return 0;
    goto LABEL_98;
  }
  v10 = a4 - 2;
  if ( !v10 )
  {
    if ( a5 == 1 )
    {
      v28 = CmMapCmObjectTypeToPnpObjectType(a3);
      v30 = PiDmAddCacheReferenceForObject(v28, v29, 0LL);
      *(_DWORD *)a6 = v30;
      return (v30 >> 31) & 0xC0000120;
    }
    if ( *(int *)a6 < 0 || !*(_BYTE *)(a6 + 32) )
    {
      v35 = CmMapCmObjectTypeToPnpObjectType(a3);
      PiDmRemoveCacheReferenceForObject(v35, v36);
      return 0;
    }
    v84 = 0LL;
    v43 = (unsigned int)CmMapCmObjectTypeToPnpObjectType(a3);
    if ( (int)PiDmGetObject(v43, v44, &v84) < 0 )
      return 0;
    v37 = v84;
    KsepCacheLock(v84);
    v45 = v37[8];
    v37[8] = v45 | 1;
    PiDmObjectReleaseLock(v37);
    if ( (v45 & 1) != 0 )
      PiDmRemoveCacheReferenceForObject((unsigned int)v43, a2);
LABEL_98:
    PiDmObjectRelease(v37);
    return 0;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( a5 != 1 )
    {
      if ( a3 == 1 )
      {
        v48 = *(_QWORD *)(a6 + 8);
        DestinationString = 0LL;
        Guid = 0LL;
        RtlInitUnicodeString(&DestinationString, (PCWSTR)(v48 + 4));
        if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
          Guid = 0LL;
        if ( *(int *)a6 < 0 )
        {
          if ( (byte_140C1327A & 0x10) != 0 )
          {
            IsNullGuid = PnpIsNullGuid(&Guid);
            McTemplateK0zjdd_EtwWriteTransfer(
              (unsigned int)-(IsNullGuid == 0),
              (__int64)KMPnPEvt_DeviceDelete_Failure,
              v62,
              a2,
              (unsigned __int64)&Guid & -(__int64)(IsNullGuid == 0),
              *(_DWORD *)v48,
              *(_DWORD *)a6);
          }
        }
        else if ( (byte_140C1327A & 8) != 0 )
        {
          v49 = PnpIsNullGuid(&Guid);
          McTemplateK0zjdd_EtwWriteTransfer(
            (unsigned int)-(v49 == 0),
            (__int64)KMPnPEvt_DeviceDelete_Success,
            v50,
            a2,
            (unsigned __int64)&Guid & -(__int64)(v49 == 0),
            *(_DWORD *)v48,
            *(_DWORD *)a6);
        }
        if ( *(int *)a6 >= 0 )
        {
          if ( *(_WORD *)(v48 + 4) )
          {
            v101 = MEMORY[0xFFFFF78000000014];
            PnpSetObjectProperty(
              a1,
              v48 + 4,
              2,
              0LL,
              (__int64)DEVPKEY_DeviceClass_LastDeleteDate,
              16,
              (__int64)&v101,
              8,
              0);
          }
          if ( (unsigned __int8)CmIsRootEnumeratedDevice(a2) )
          {
            RtlInitUnicodeString(&DestinationString, a2);
            if ( DestinationString.Length >= 2u )
            {
              if ( *DestinationString.Buffer )
              {
                v63 = PnpDeviceObjectFromDeviceInstanceWithTag(&DestinationString, 1953261124LL);
                if ( v63 )
                {
                  v64 = *(_DWORD **)(v63 + 64);
                  if ( v64 )
                    *v64 |= 1u;
                  HalPutDmaAdapter((PADAPTER_OBJECT)v63);
                }
              }
            }
          }
        }
        PiPnpRtlFreeDeviceDeleteInfo(v48);
      }
      else if ( a3 == 3 )
      {
        v52 = *(_QWORD **)(a6 + 8);
        if ( *(int *)a6 >= 0 && *v52 )
        {
          v53 = v52[1];
          if ( v53 )
            PiDmListRemoveObject(0LL, v53, *v52, 0LL);
          v54 = v52[2];
          if ( v54 )
            PiDmListRemoveObject(1LL, v54, *v52, 0LL);
          v55 = v52[3];
          if ( v55 )
            PiDmListRemoveObject(2LL, v55, *v52, 0LL);
        }
        PiPnpRtlFreeInterfaceDeleteInfo(v52);
      }
      return 0;
    }
    if ( a3 == 1 )
    {
      v82 = 0LL;
      FilteredDeviceInterfaceList = PiPnpRtlGatherDeviceDeleteInfo(a2);
      v9 = FilteredDeviceInterfaceList;
      if ( FilteredDeviceInterfaceList < 0 )
        goto LABEL_28;
      v47 = v82;
    }
    else
    {
      if ( a3 != 3 )
        return v9;
      v83 = 0LL;
      FilteredDeviceInterfaceList = PiPnpRtlGatherInterfaceDeleteInfo(a2, &v83);
      v9 = FilteredDeviceInterfaceList;
      if ( FilteredDeviceInterfaceList < 0 )
        goto LABEL_28;
      v47 = v83;
    }
    goto LABEL_126;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( a5 != 1 || (*(_DWORD *)(a6 + 56) & 0x10000) != 0 )
      return v9;
    FilteredDeviceInterfaceList = PiDmGetCmObjectListFromCache(
                                    a3,
                                    *(_QWORD *)(a6 + 16),
                                    *(_QWORD *)(a6 + 24),
                                    *(_QWORD *)(a6 + 32),
                                    *(_DWORD *)(a6 + 40),
                                    *(_QWORD *)(a6 + 48));
    goto LABEL_27;
  }
  v13 = v12 - 5;
  if ( v13 )
  {
    if ( v13 != 1 )
      return v9;
    if ( a5 != 1 )
    {
      if ( *(int *)a6 < 0 )
        return v9;
      PiDmObjectUpdateCachedCmProperty(
        a3,
        (int)a2,
        a3,
        *(_DWORD *)(a6 + 24),
        *(_DWORD *)(a6 + 28),
        *(PCWSTR *)(a6 + 32),
        *(_DWORD *)(a6 + 40));
      if ( a3 == 1 && *(_DWORD *)(a6 + 24) == 9 )
      {
        v32 = *(_QWORD **)(a6 + 8);
        if ( *v32 )
        {
          v33 = v32[1];
          if ( v33 )
            PiDmListRemoveObject(5LL, v33, *v32, 0LL);
          v34 = v32[2];
          if ( v34 )
            PiDmListAddObject(5LL, v34, *v32, 0LL);
        }
        PiPnpRtlFreeInstallerClassChangeInfo(v32);
      }
      return 0;
    }
    v9 = 0;
    if ( (*(_DWORD *)(a6 + 44) & 0x20000) != 0
      || ((v20 = *(_DWORD *)(a6 + 40), PoolWithTag = 0LL, v76 = 0, !v20)
       || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, v20, 0x47706E50u)) == 0LL)
      && *(_DWORD *)(a6 + 40) )
    {
LABEL_57:
      if ( *(_QWORD *)(a6 + 16) )
      {
LABEL_58:
        if ( a3 != 1 || *(_DWORD *)(a6 + 24) != 9 )
          return v9;
        v31 = 0LL;
        v81 = 0LL;
        if ( *(_DWORD *)(a6 + 28) == 1
          && *(_DWORD *)(a6 + 40) == 78
          && (unsigned __int8)PnpIsValidGuidString(*(PCWSTR *)(a6 + 32)) )
        {
          v31 = *(_QWORD *)(a6 + 32);
        }
        FilteredDeviceInterfaceList = PiPnpRtlGatherInstallerClassChangeInfo(a2, v31, &v81);
        v9 = FilteredDeviceInterfaceList;
        if ( FilteredDeviceInterfaceList >= 0 )
        {
          *(_QWORD *)(a6 + 8) = v81;
          return v9;
        }
        goto LABEL_28;
      }
      v46 = CmMapCmObjectTypeToPnpObjectType(a3);
      PiPnpRtlCacheObjectBaseKey(a1, a2, v46);
      v27 = (v9 & 0x80000000) != 0;
LABEL_53:
      if ( v27 )
        return v9;
      goto LABEL_58;
    }
    LODWORD(Size) = *(_DWORD *)(a6 + 40);
    if ( a3 == 1 )
    {
      v22 = *(_DWORD *)(a6 + 24);
      if ( (unsigned int)(v22 - 1) > 0x24 || !CmDevicePropertyRead(a3 - 1, v22) || CmDevicePropertyWrite(v24, v23) )
      {
        DeviceRegProp = CmGetDeviceRegProp(
                          PiPnpRtlCtx,
                          (_DWORD)a2,
                          *(_QWORD *)(a6 + 16),
                          v22,
                          (__int64)&v76,
                          (__int64)PoolWithTag,
                          (__int64)&Size,
                          0);
        goto LABEL_45;
      }
    }
    else
    {
      if ( a3 != 2 )
      {
LABEL_78:
        v9 = 0;
LABEL_50:
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0x47706E50u);
        v27 = (v9 & 0x80000000) != 0;
        if ( v9 )
          goto LABEL_53;
        goto LABEL_57;
      }
      v60 = *(_DWORD *)(a6 + 24);
      if ( (unsigned int)(v60 - 1) > 0x24 || !CmClassPropertyRead(v60) || CmClassPropertyWrite(v60) )
      {
        DeviceRegProp = CmGetInstallerClassRegProp(
                          PiPnpRtlCtx,
                          (_DWORD)a2,
                          *(_QWORD *)(a6 + 16),
                          v60,
                          (__int64)&v76,
                          (__int64)PoolWithTag,
                          (__int64)&Size);
LABEL_45:
        v26 = DeviceRegProp;
        if ( (DeviceRegProp < 0
           || v76 != *(_DWORD *)(a6 + 28)
           || (_DWORD)Size != *(_DWORD *)(a6 + 40)
           || memcmp(PoolWithTag, *(const void **)(a6 + 32), (unsigned int)Size))
          && (v26 != -1073741275 || *(_DWORD *)(a6 + 40))
          && v26 != -1073741790 )
        {
          goto LABEL_78;
        }
LABEL_49:
        *(_DWORD *)a6 = v26;
        v9 = -1073741536;
        goto LABEL_50;
      }
    }
    v26 = -1073741790;
    goto LABEL_49;
  }
  if ( a5 != 1 )
  {
    if ( *(int *)a6 >= 0 )
    {
      PiDmObjectUpdateCachedCmProperty(
        a3,
        (int)a2,
        a3,
        *(_DWORD *)(a6 + 24),
        **(_DWORD **)(a6 + 32),
        *(PCWSTR *)(a6 + 40),
        **(_DWORD **)(a6 + 48));
    }
    else if ( *(_DWORD *)a6 == -1073741275 )
    {
      PiDmObjectUpdateCachedCmProperty(a3, (int)a2, a3, *(_DWORD *)(a6 + 24), 0, 0LL, 0);
    }
    return 0;
  }
  if ( (*(_DWORD *)(a6 + 56) & 0x10000) != 0 )
    goto LABEL_14;
  FilteredDeviceInterfaceList = PiDmObjectGetCachedCmProperty(
                                  a3,
                                  (_DWORD)a2,
                                  a3,
                                  *(_DWORD *)(a6 + 24),
                                  *(_QWORD *)(a6 + 32),
                                  *(_QWORD *)(a6 + 40),
                                  *(_QWORD *)(a6 + 48));
  if ( FilteredDeviceInterfaceList >= 0
    || FilteredDeviceInterfaceList == -1073741275
    || FilteredDeviceInterfaceList == -1073741789
    || FilteredDeviceInterfaceList == -1073741772 )
  {
    goto LABEL_28;
  }
  v9 = 0;
LABEL_14:
  if ( !*(_QWORD *)(a6 + 16) )
  {
    v15 = CmMapCmObjectTypeToPnpObjectType(a3);
    PiPnpRtlCacheObjectBaseKey(a1, a2, v15);
  }
  return v9;
}
