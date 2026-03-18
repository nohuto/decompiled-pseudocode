/*
 * XREFs of _CmGetDeviceMappedPropertyFromComposite @ 0x1406BF1AC
 * Callers:
 *     _CmGetDeviceMappedProperty @ 0x1406BEFAC (_CmGetDeviceMappedProperty.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x14071C0EC (_CmGetDeviceMappedPropertyKeys.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140202C20 (RtlInitUnicodeStringEx.c)
 *     RtlUnalignedStringCchLengthW @ 0x140202C64 (RtlUnalignedStringCchLengthW.c)
 *     RtlStringCbCopyExW @ 0x140350910 (RtlStringCbCopyExW.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memcmp @ 0x1403CF3E0 (memcmp.c)
 *     wcscmp @ 0x1403D0940 (wcscmp.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     _PnpGetObjectProperty @ 0x1405DB4CC (_PnpGetObjectProperty.c)
 *     RtlGUIDFromString @ 0x1405DD3D0 (RtlGUIDFromString.c)
 *     _CmGetDeviceRegProp @ 0x1405E046C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1405E180C (_CmOpenDeviceRegKey.c)
 *     _PnpMultiSzGetLen @ 0x1406C1778 (_PnpMultiSzGetLen.c)
 *     _CmGetDeviceStatus @ 0x1406C1928 (_CmGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x1406C1A38 (_NtPlugPlayGetDeviceStatus.c)
 *     _CmGetDeviceParent @ 0x1406C2F98 (_CmGetDeviceParent.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x14070AB10 (_NtPlugPlayGetDeviceProperty.c)
 *     _CmGetDeviceCompoundFilters @ 0x140723158 (_CmGetDeviceCompoundFilters.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140744F70 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140757B48 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceRelationsList @ 0x140973AF8 (_CmGetDeviceRelationsList.c)
 *     _CmGetDeviceChildren @ 0x1409768AC (_CmGetDeviceChildren.c)
 *     _CmGetDeviceSiblings @ 0x140977294 (_CmGetDeviceSiblings.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromComposite(
        __int64 a1,
        const wchar_t *a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        wchar_t *a6,
        unsigned int a7,
        int *a8,
        int a9)
{
  int *v9; // rsi
  wchar_t *v10; // r15
  int v12; // r8d
  __int64 v13; // r12
  int DeviceStatus; // ebx
  unsigned int v15; // r14d
  unsigned int v16; // eax
  int v17; // r12d
  __int64 v18; // rax
  NTSTRSAFE_PCWSTR v19; // rdi
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // edx
  int v24; // ecx
  __int64 v25; // rax
  int v26; // edx
  int *v27; // r14
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  _DWORD *v31; // r11
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  _DWORD *v39; // r14
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rdi
  int ObjectProperty; // eax
  __int64 v46; // r9
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  int DeviceProperty; // eax
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned int v60; // eax
  __int64 v61; // rax
  int v62; // eax
  int v63; // eax
  int DeviceParent; // eax
  _DWORD *v65; // r14
  __int64 v66; // rax
  __int64 v67; // rdi
  __int64 v68; // r9
  __int64 v69; // rcx
  int v70; // eax
  __int64 v71; // r9
  int v72; // eax
  __int64 v73; // rax
  int v74; // edx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  int DeviceSiblings; // eax
  _DWORD *v79; // r14
  unsigned int v80; // eax
  __int64 v81; // rax
  __int64 v82; // rax
  int DeviceRelationsList; // eax
  unsigned int v84; // eax
  int v85; // r8d
  __int64 v86; // rax
  _DWORD *v87; // r14
  __int64 v88; // rax
  __int64 v89; // rax
  bool v90; // zf
  char v91[8]; // [rsp+60h] [rbp-A0h] BYREF
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+68h] [rbp-98h]
  __int64 v93; // [rsp+70h] [rbp-90h]
  int v94; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v95; // [rsp+7Ch] [rbp-84h] BYREF
  int v96; // [rsp+80h] [rbp-80h] BYREF
  int v97; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v98; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v99; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v100; // [rsp+90h] [rbp-70h]
  __int64 v101; // [rsp+98h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD *v103; // [rsp+B0h] [rbp-50h]
  unsigned int v104; // [rsp+B8h] [rbp-48h] BYREF
  int v105; // [rsp+BCh] [rbp-44h] BYREF
  int v106; // [rsp+C0h] [rbp-40h] BYREF
  size_t pcchLength; // [rsp+C8h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp-30h] BYREF
  __int128 Buf2; // [rsp+D8h] [rbp-28h] BYREF
  __int128 Buf1; // [rsp+E8h] [rbp-18h] BYREF
  wchar_t Str2[40]; // [rsp+100h] [rbp+0h] BYREF
  WCHAR SourceString[40]; // [rsp+150h] [rbp+50h] BYREF

  v9 = a8;
  v10 = a6;
  pszSrc = a2;
  v101 = a3;
  v12 = a9;
  v13 = a1;
  v93 = a1;
  DeviceStatus = 0;
  v103 = a5;
  v98 = 0;
  v104 = 0;
  v94 = 0;
  v95 = 0;
  v96 = 0;
  v99 = 0;
  v105 = 0;
  pcchLength = 0LL;
  Handle = 0LL;
  v97 = 0;
  v106 = 0;
  v91[0] = 0;
  DestinationString = 0LL;
  Buf2 = 0LL;
  Buf1 = 0LL;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  *a5 = 0;
  *v9 = 0;
  v100 = v12 & 0xFFFF0000;
  if ( a6 )
  {
    v15 = a7;
    v10 = (wchar_t *)(-(__int64)(a7 != 0) & (unsigned __int64)a6);
  }
  else
  {
    v15 = 0;
    a7 = 0;
  }
  v16 = *(_DWORD *)(a4 + 16);
  if ( v16 < 2 )
    return (unsigned int)-1073741264;
  switch ( v16 )
  {
    case 0xAu:
      v43 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
        v43 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
      if ( !v43 )
      {
        v44 = v101;
        ObjectProperty = PnpGetObjectProperty(
                           a1,
                           (__int64)a2,
                           1LL,
                           v101,
                           0LL,
                           (__int64)&DEVPKEY_Device_FriendlyName,
                           (__int64)a5,
                           (__int64)v10,
                           v15,
                           (__int64)&v94,
                           v12 & 0xFFFF0000);
        DeviceStatus = ObjectProperty;
        if ( !ObjectProperty || ObjectProperty == -1073741789 )
        {
          *v9 = v94;
        }
        else if ( ObjectProperty == -1073741275 )
        {
          v46 = v44;
          v19 = pszSrc;
          v47 = PnpGetObjectProperty(
                  v13,
                  (__int64)pszSrc,
                  1LL,
                  v46,
                  0LL,
                  (__int64)&DEVPKEY_Device_DeviceDesc,
                  (__int64)v103,
                  (__int64)v10,
                  a7,
                  (__int64)&v94,
                  v100);
          DeviceStatus = v47;
          if ( !v47 || v47 == -1073741789 )
          {
            *v9 = v94;
          }
          else if ( v47 == -1073741275 )
          {
            return (unsigned int)DeviceStatus;
          }
          goto LABEL_31;
        }
        goto LABEL_30;
      }
      v77 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1 )
        v77 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Siblings.fmtid.Data4;
      if ( v77 )
        return (unsigned int)DeviceStatus;
      v95 = v15 >> 1;
      DeviceSiblings = CmGetDeviceSiblings(a1, a2, v10, &v95);
      goto LABEL_244;
    case 0x100u:
      v30 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
        v30 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
      if ( v30 )
        return (unsigned int)DeviceStatus;
      DeviceStatus = RtlUnalignedStringCchLengthW(a2, 0xC8uLL, &pcchLength);
      if ( DeviceStatus < 0 )
        goto LABEL_30;
      *v9 = 2 * pcchLength + 2;
      *v31 = 18;
      if ( v15 < *v9 )
        return (unsigned int)-1073741789;
      v19 = pszSrc;
      DeviceStatus = RtlStringCbCopyExW(v10, (unsigned int)*v9, pszSrc, 0LL, 0LL, 0x900u);
      if ( DeviceStatus >= 0 )
        goto LABEL_31;
      v79 = v103;
      goto LABEL_219;
    case 2u:
      v22 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
        v22 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
      if ( !v22 )
        goto LABEL_40;
      break;
  }
  if ( v16 == 3 )
  {
    v54 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
      v54 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
    if ( !v54 )
    {
LABEL_40:
      DeviceStatus = CmGetDeviceStatus(v13, (_DWORD)a2, v101, (unsigned int)&v96, (__int64)&v99, (__int64)&v98);
      if ( DeviceStatus < 0 )
        goto LABEL_30;
      v23 = *(_DWORD *)(a4 + 16);
      v24 = v96;
      if ( v23 == 2 )
      {
        v25 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
          v25 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
        if ( !v25 )
          goto LABEL_45;
      }
      if ( v23 != 3 )
        goto LABEL_151;
      v58 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
        v58 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
      if ( !v58 )
      {
LABEL_45:
        v26 = 7;
      }
      else
      {
LABEL_151:
        if ( (v96 & 0x400) == 0 )
          return (unsigned int)-1073741275;
        v26 = 24;
      }
      v27 = v103;
      *v9 = 4;
      *v27 = v26;
      if ( a7 < *v9 )
        return (unsigned int)-1073741789;
      if ( *(_DWORD *)(a4 + 16) == 12 )
      {
        v76 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1 )
          v76 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4;
        if ( !v76 )
        {
          if ( (int)PnpGetObjectProperty(
                      v93,
                      (__int64)pszSrc,
                      1LL,
                      v101,
                      0LL,
                      (__int64)DEVPKEY_Device_ProblemStatusOverride,
                      (__int64)&v97,
                      (__int64)&v104,
                      4,
                      (__int64)&v94,
                      v100) >= 0
            && v97 == 24 )
          {
            v80 = v98;
            if ( v94 == 4 )
              v80 = v104;
            v98 = v80;
          }
          v24 = v96;
        }
      }
      v28 = *(_DWORD *)(a4 + 16);
      if ( v28 == 2 )
      {
        v29 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
          v29 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
        if ( !v29 )
        {
          *(_DWORD *)v10 = v24;
          goto LABEL_53;
        }
      }
      else if ( v28 == 3 )
      {
        v59 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
          v59 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
        if ( !v59 )
        {
          v60 = (v24 & 0x400) != 0 ? v99 : 0;
LABEL_158:
          *(_DWORD *)v10 = v60;
          goto LABEL_53;
        }
      }
      v60 = v98;
      goto LABEL_158;
    }
  }
  if ( v16 == 12 )
  {
    v75 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1 )
      v75 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4;
    if ( v75 )
      return (unsigned int)DeviceStatus;
    goto LABEL_40;
  }
  v17 = 4;
  switch ( v16 )
  {
    case 4u:
      v48 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1 )
        v48 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_EjectionRelations.fmtid.Data4;
      if ( v48 )
      {
        v49 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1 )
          v49 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InLocalMachineContainer.fmtid.Data4;
        if ( v49 )
          return (unsigned int)DeviceStatus;
        v13 = v93;
        v50 = v101;
        v51 = v93;
        *a5 = 17;
        *v9 = 1;
        DeviceStatus = PnpGetObjectProperty(
                         v51,
                         (__int64)a2,
                         1LL,
                         v50,
                         0LL,
                         (__int64)&DEVPKEY_Device_ContainerId,
                         (__int64)&v97,
                         (__int64)&Buf2,
                         16,
                         (__int64)&v94,
                         v12 & 0xFFFF0000);
        if ( DeviceStatus < 0 )
          goto LABEL_30;
        DeviceStatus = PnpGetObjectProperty(
                         v13,
                         (__int64)L"HTREE\\ROOT\\0",
                         1LL,
                         0LL,
                         0LL,
                         (__int64)&DEVPKEY_Device_BaseContainerId,
                         (__int64)&v97,
                         (__int64)&Buf1,
                         16,
                         (__int64)&v94,
                         v100);
        if ( DeviceStatus < 0 )
          goto LABEL_30;
        if ( a7 >= *v9 )
        {
          *(_BYTE *)v10 = (memcmp(&Buf1, &Buf2, 0x10uLL) != 0) - 1;
          goto LABEL_30;
        }
        return (unsigned int)-1073741789;
      }
      goto LABEL_234;
    case 5u:
      v40 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1 )
        v40 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_RemovalRelations.fmtid.Data4;
      if ( v40 )
      {
        v41 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1 )
          v41 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsPresent.fmtid.Data4;
        if ( v41 )
          return (unsigned int)DeviceStatus;
        *v9 = 1;
        *a5 = 17;
        if ( v15 < *v9 )
          return (unsigned int)-1073741789;
        v13 = v93;
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( DeviceStatus < 0 )
          goto LABEL_30;
        *(_BYTE *)v10 = 0;
        v42 = NtPlugPlayGetDeviceStatus(
                v13,
                (unsigned int)&DestinationString,
                (unsigned int)&v96,
                (unsigned int)&v99,
                (__int64)&v98);
        DeviceStatus = v42;
        if ( v42 != -1073741810 )
        {
          v19 = pszSrc;
          if ( v42 < 0 )
            goto LABEL_31;
LABEL_101:
          *(_BYTE *)v10 = -1;
          goto LABEL_31;
        }
        return 0;
      }
      v17 = 8;
      goto LABEL_234;
    case 6u:
      v32 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1 )
        v32 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_PowerRelations.fmtid.Data4;
      if ( !v32 )
      {
        v17 = 16;
LABEL_234:
        DeviceRelationsList = CmGetDeviceRelationsList(v93, (_DWORD)a2, v17, 0, 0, (__int64)&v95);
        DeviceStatus = DeviceRelationsList;
        if ( DeviceRelationsList == -1073741772 || !DeviceRelationsList )
          return (unsigned int)-1073741275;
        if ( DeviceRelationsList != -1073741789 )
        {
          v13 = v93;
          goto LABEL_30;
        }
        v79 = v103;
        *v9 = 2 * v95;
        v84 = a7;
        *v79 = 8210;
        if ( v84 < *v9 )
          return (unsigned int)-1073741789;
        v19 = pszSrc;
        v85 = v17;
        v13 = v93;
        DeviceStatus = CmGetDeviceRelationsList(v93, (_DWORD)pszSrc, v85, (_DWORD)v10, v84 >> 1, (__int64)&v95);
        if ( !DeviceStatus )
        {
          *v9 = 2 * PnpMultiSzGetLen(v10);
          return (unsigned int)DeviceStatus;
        }
LABEL_219:
        *v9 = 0;
        *v79 = 0;
        goto LABEL_31;
      }
      v33 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1 )
        v33 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_HasProblem.fmtid.Data4;
      if ( v33 )
        return (unsigned int)DeviceStatus;
      *a5 = 17;
      *v9 = 1;
      if ( !v15 )
        return (unsigned int)-1073741789;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus >= 0 )
      {
        v34 = v93;
        *(_BYTE *)v10 = 0;
        v35 = NtPlugPlayGetDeviceStatus(
                v34,
                (unsigned int)&DestinationString,
                (unsigned int)&v96,
                (unsigned int)&v99,
                (__int64)&v98);
        DeviceStatus = v35;
        if ( v35 == -1073741810 )
          return 0;
        if ( v35 >= 0 )
        {
          if ( (v96 & 0x8000) == 0 )
          {
            if ( (v96 & 0x400) == 0 || v99 <= 0x1D && (v74 = 591396864, _bittest(&v74, v99)) )
            {
              v19 = pszSrc;
              if ( (v96 & 8) == 0 )
              {
                v13 = v93;
                v36 = PnpGetObjectProperty(
                        v93,
                        (__int64)pszSrc,
                        1LL,
                        v101,
                        0LL,
                        (__int64)&DEVPKEY_Device_Capabilities,
                        (__int64)&v97,
                        (__int64)&v105,
                        4,
                        (__int64)&v94,
                        v100);
                DeviceStatus = v36;
                if ( v36 == -1073741275 )
                  return 0;
                if ( v36 < 0 )
                  goto LABEL_31;
                if ( (v105 & 0x40) != 0 )
                  *(_BYTE *)v10 = -1;
              }
LABEL_54:
              v13 = v93;
              goto LABEL_31;
            }
          }
          *(_BYTE *)v10 = -1;
        }
      }
LABEL_53:
      v19 = pszSrc;
      goto LABEL_54;
    case 7u:
      v81 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1 )
        v81 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_BusRelations.fmtid.Data4;
      if ( v81 )
        return (unsigned int)DeviceStatus;
      v17 = 32;
      goto LABEL_234;
    case 0xBu:
      v82 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1 )
        v82 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_TransportRelations.fmtid.Data4;
      if ( v82 )
        return (unsigned int)DeviceStatus;
      v17 = 64;
      goto LABEL_234;
    case 8u:
      v55 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1 )
        v55 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Parent.fmtid.Data4;
      if ( v55 )
      {
        v56 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1 )
          v56 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data4;
        if ( v56 )
          return (unsigned int)DeviceStatus;
        *a5 = 7;
        *v9 = 4;
        v13 = v93;
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( DeviceStatus < 0 )
          goto LABEL_30;
        DeviceProperty = NtPlugPlayGetDeviceProperty(
                           v93,
                           (unsigned int)&DestinationString,
                           13,
                           (_DWORD)v10,
                           v15,
                           (__int64)&a7);
LABEL_145:
        DeviceStatus = DeviceProperty;
        if ( DeviceProperty == -1073741772 )
          return (unsigned int)-1073741275;
        goto LABEL_30;
      }
      v13 = v93;
      v95 = v15 >> 1;
      DeviceParent = CmGetDeviceParent(v93, a2, v10, &v95);
      DeviceStatus = DeviceParent;
      if ( DeviceParent && DeviceParent != -1073741789 )
        goto LABEL_30;
      v65 = v103;
      *v9 = 2 * v95;
      *v65 = 18;
      goto LABEL_178;
    case 9u:
      v86 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1 )
        v86 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Children.fmtid.Data4;
      if ( v86 )
        return (unsigned int)DeviceStatus;
      v13 = v93;
      v95 = v15 >> 1;
      DeviceSiblings = CmGetDeviceChildren(v93, a2, v10, &v95);
LABEL_244:
      DeviceStatus = DeviceSiblings;
      if ( DeviceSiblings != -1073741789 && DeviceSiblings )
        goto LABEL_30;
      v87 = v103;
      *v9 = 2 * v95;
      *v87 = 8210;
LABEL_178:
      if ( a7 >= *v9 )
        goto LABEL_30;
      return (unsigned int)-1073741789;
    case 2u:
      v37 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1 )
        v37 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_SafeRemovalRequired.fmtid.Data4;
      if ( !v37 )
      {
        *v9 = 1;
        *a5 = 17;
        if ( v15 >= *v9 )
        {
          *(_BYTE *)v10 = -((unsigned __int8)CmIsDeviceSafeRemovalRequired(v93, a2, v101) != 0);
          return (unsigned int)DeviceStatus;
        }
        return (unsigned int)-1073741789;
      }
      v38 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
        v38 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
      if ( v38 )
        return (unsigned int)DeviceStatus;
      v13 = v93;
      v94 = 78;
      DeviceStatus = CmGetDeviceRegProp(v93, (__int64)a2, v101, 37, (__int64)&v106, (__int64)Str2, (__int64)&v94, v12);
      if ( DeviceStatus < 0 )
        goto LABEL_30;
      if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", Str2) )
      {
        v39 = v103;
        *v9 = 16;
        *v39 = 13;
        if ( a7 >= *v9 )
        {
          v19 = pszSrc;
          DeviceStatus = CmGetDeviceContainerIdFromBase(v13, pszSrc, Str2, SourceString);
          if ( DeviceStatus >= 0 )
          {
            DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, SourceString);
            if ( DeviceStatus >= 0 )
              DeviceStatus = RtlGUIDFromString(&DestinationString, (GUID *)v10);
          }
          goto LABEL_31;
        }
        return (unsigned int)-1073741789;
      }
      return (unsigned int)-1073741275;
    case 0xFu:
      v61 = *(_QWORD *)a4 - DEVPKEY_Device_IsConnected;
      if ( *(_QWORD *)a4 == DEVPKEY_Device_IsConnected )
        v61 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
      if ( v61 )
        return (unsigned int)DeviceStatus;
      *a5 = 17;
      *v9 = 1;
      if ( !v15 )
        return (unsigned int)-1073741789;
      v13 = v93;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_30;
      *(_BYTE *)v10 = 0;
      v62 = NtPlugPlayGetDeviceStatus(
              v13,
              (unsigned int)&DestinationString,
              (unsigned int)&v96,
              (unsigned int)&v99,
              (__int64)&v98);
      DeviceStatus = v62;
      if ( v62 != -1073741810 )
      {
        if ( v62 >= 0 )
        {
          v19 = pszSrc;
          if ( (v96 & 0x2000000) != 0 )
            goto LABEL_31;
          v63 = PnpGetObjectProperty(
                  v13,
                  (__int64)pszSrc,
                  1LL,
                  0LL,
                  0LL,
                  (__int64)&DEVPKEY_Device_PresenceNotForDevice,
                  (__int64)&v97,
                  (__int64)v91,
                  1,
                  (__int64)&v94,
                  v100);
          DeviceStatus = v63;
          if ( v63 >= 0 )
          {
            if ( v97 == 17 && v91[0] == -1 )
              goto LABEL_31;
          }
          else
          {
            if ( v63 != -1073741275 && v63 != -1073741789 )
              goto LABEL_31;
            DeviceStatus = 0;
          }
          goto LABEL_101;
        }
        goto LABEL_30;
      }
      return 0;
    case 0x10u:
      v52 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1 )
        v52 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsRebootRequired.fmtid.Data4;
      if ( v52 )
        return (unsigned int)DeviceStatus;
      *a5 = 17;
      *v9 = 1;
      if ( !v15 )
        return (unsigned int)-1073741789;
      v13 = v93;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_30;
      *(_BYTE *)v10 = 0;
      v53 = NtPlugPlayGetDeviceStatus(
              v13,
              (unsigned int)&DestinationString,
              (unsigned int)&v96,
              (unsigned int)&v99,
              (__int64)&v98);
      DeviceStatus = v53;
      if ( v53 != -1073741810 )
      {
        if ( v53 >= 0 && ((v96 & 0x100) != 0 || (v96 & 0x400) != 0 && v99 == 14) )
          *(_BYTE *)v10 = -1;
        goto LABEL_30;
      }
      return 0;
    case 0xEu:
      v73 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1 )
        v73 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Stack.fmtid.Data4;
      if ( v73 )
        return (unsigned int)DeviceStatus;
      *a5 = 8210;
      v13 = v93;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_30;
      DeviceProperty = NtPlugPlayGetDeviceProperty(
                         v93,
                         (unsigned int)&DestinationString,
                         14,
                         (_DWORD)v10,
                         v15,
                         (__int64)v9);
      goto LABEL_145;
    case 0x14u:
      v88 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1 )
        v88 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyProviders.fmtid.Data4;
      if ( v88 )
        return (unsigned int)DeviceStatus;
      *a5 = 8210;
      v13 = v93;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_30;
      DeviceProperty = NtPlugPlayGetDeviceProperty(
                         v93,
                         (unsigned int)&DestinationString,
                         15,
                         (_DWORD)v10,
                         v15,
                         (__int64)v9);
      goto LABEL_145;
    case 0x15u:
      v89 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1 )
        v89 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyDependents.fmtid.Data4;
      if ( v89 )
        return (unsigned int)DeviceStatus;
      *a5 = 8210;
      v13 = v93;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_30;
      DeviceProperty = NtPlugPlayGetDeviceProperty(
                         v93,
                         (unsigned int)&DestinationString,
                         16,
                         (_DWORD)v10,
                         v15,
                         (__int64)v9);
      goto LABEL_145;
  }
  if ( v16 != 26 )
  {
    if ( v16 != 22 )
      goto LABEL_28;
    v21 = *(_QWORD *)a4 - DEVPKEY_Device_CompoundUpperFilters;
    if ( *(_QWORD *)a4 == DEVPKEY_Device_CompoundUpperFilters )
      v21 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
    if ( v21 )
    {
LABEL_28:
      if ( v16 != 23 )
        return (unsigned int)DeviceStatus;
      v18 = *(_QWORD *)a4 - DEVPKEY_Device_CompoundLowerFilters;
      if ( *(_QWORD *)a4 == DEVPKEY_Device_CompoundLowerFilters )
        v18 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
      if ( v18 )
        return (unsigned int)DeviceStatus;
    }
    v13 = v93;
    DeviceStatus = CmGetDeviceCompoundFilters(v93, (__int64)a5, (__int64)v10, v15, (__int64)v9);
    goto LABEL_30;
  }
  v66 = *(_QWORD *)a4 - DEVPKEY_Device_OmitFromSystemSpec;
  if ( *(_QWORD *)a4 == DEVPKEY_Device_OmitFromSystemSpec )
    v66 = *(_QWORD *)(a4 + 8) + 0x298AF3586C1A6853LL;
  if ( v66 )
    return (unsigned int)DeviceStatus;
  *a5 = 17;
  *v9 = 1;
  if ( !v15 )
    return (unsigned int)-1073741789;
  v67 = v101;
  v13 = v93;
  v68 = v101;
  v69 = v93;
  *(_BYTE *)v10 = 0;
  v70 = PnpGetObjectProperty(
          v69,
          (__int64)a2,
          1LL,
          v68,
          0LL,
          (__int64)DEVPKEY_Device_UpdateWithUngroupedDrivers,
          (__int64)&v97,
          (__int64)v91,
          1,
          (__int64)&v94,
          v12 & 0xFFFF0000);
  DeviceStatus = v70;
  if ( v70 < 0 )
  {
    if ( v70 == -1073741275 || v70 == -1073741789 )
      goto LABEL_186;
LABEL_30:
    v19 = pszSrc;
    goto LABEL_31;
  }
  if ( v97 == 17 && v94 == 1 )
  {
    v19 = pszSrc;
    v90 = v91[0] == 0;
    goto LABEL_265;
  }
LABEL_186:
  v71 = v67;
  v19 = pszSrc;
  v72 = PnpGetObjectProperty(
          v13,
          (__int64)pszSrc,
          1LL,
          v71,
          0LL,
          (__int64)DEVPKEY_Device_DriverInGroup,
          (__int64)&v97,
          (__int64)v91,
          1,
          (__int64)&v94,
          v100);
  DeviceStatus = v72;
  if ( v72 < 0 )
  {
    if ( v72 == -1073741275 || v72 == -1073741789 )
      DeviceStatus = 0;
    goto LABEL_31;
  }
  if ( v97 == 17 && v94 == 1 )
  {
    v90 = v91[0] == -1;
LABEL_265:
    if ( !v90 )
      goto LABEL_31;
    goto LABEL_101;
  }
LABEL_31:
  if ( DeviceStatus != -1073741810 )
    return (unsigned int)DeviceStatus;
  DeviceStatus = CmOpenDeviceRegKey(v13, (__int64)v19, 16, 0, 1, 0, (__int64)&Handle, 0LL);
  if ( !DeviceStatus )
  {
    ZwClose(Handle);
    return (unsigned int)-1073741275;
  }
  if ( DeviceStatus != -1073741810 && DeviceStatus != -1073741632 )
    return (unsigned int)-1073741823;
  return (unsigned int)DeviceStatus;
}
