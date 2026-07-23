/*
 * XREFs of PiDevCfgMigrateDevice @ 0x14076E9C4
 * Callers:
 *     PpDevCfgProcessDeviceReset @ 0x140730398 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgConfigureDevice @ 0x140742FE0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgMigrateRootDevice @ 0x1408A717C (PiDevCfgMigrateRootDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     PnpValidateRegistryDword @ 0x14039AB18 (PnpValidateRegistryDword.c)
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x1403FC060 (ZwDeleteValueKey.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     _CmIsRootEnumeratedDevice @ 0x14062ECB8 (_CmIsRootEnumeratedDevice.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 *     PiDevCfgSetDeviceRegProp @ 0x140739E10 (PiDevCfgSetDeviceRegProp.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     PiDevCfgSetObjectProperty @ 0x1407454AC (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x1407676E0 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 *     PiDevCfgFreeMigrationContext @ 0x14076EAA0 (PiDevCfgFreeMigrationContext.c)
 *     PiDevCfgInitMigrationContext @ 0x14076EAC0 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x1408A575C (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A5F64 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x1408A6938 (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgLogDeviceMigrated @ 0x1408A6E74 (PiDevCfgLogDeviceMigrated.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1408A7394 (PiDevCfgQueryDeviceMigrationNode.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgMigrateDevice(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        _DWORD *a5,
        _DWORD *a6)
{
  __int64 v8; // rsi
  int v9; // r13d
  int inited; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int DeviceMigrationNode; // ebx
  BOOLEAN IsRootEnumeratedDevice; // al
  __int64 v17; // rcx
  int v18; // eax
  _WORD *v19; // rsi
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  int v24; // ecx
  unsigned int *v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  PVOID v29; // rsi
  void *v30; // r14
  const wchar_t **v31; // rdx
  int v32; // [rsp+30h] [rbp-71h]
  int v33; // [rsp+30h] [rbp-71h]
  PVOID P; // [rsp+68h] [rbp-39h] BYREF
  int v35; // [rsp+70h] [rbp-31h] BYREF
  int v36; // [rsp+74h] [rbp-2Dh] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-21h] BYREF
  __int128 v39; // [rsp+90h] [rbp-11h] BYREF
  __int128 v40; // [rsp+A0h] [rbp-1h]
  __int128 v41; // [rsp+B0h] [rbp+Fh] BYREF
  __int64 v42; // [rsp+C0h] [rbp+1Fh]

  v42 = 0LL;
  P = 0LL;
  Handle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v8 = a1;
  v36 = 0;
  v9 = 0;
  v35 = 0;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0;
  inited = PiDevCfgInitMigrationContext(a3, a4, &v39);
  v13 = 0LL;
  DeviceMigrationNode = inited;
  if ( inited < 0 )
    goto LABEL_8;
  if ( !(_QWORD)v39 )
  {
    DeviceMigrationNode = 0;
    goto LABEL_8;
  }
  if ( (unsigned int)PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       *(_QWORD *)(a2 + 8),
                       1LL,
                       *(_QWORD *)(a2 + 16),
                       0LL,
                       (__int64)DEVPKEY_Device_MigrationRank,
                       (__int64)&v36,
                       0LL,
                       0,
                       (__int64)&v35,
                       0) == -1073741789
    && v36 == 9
    && v35 == 8 )
  {
    goto LABEL_50;
  }
  if ( *((_QWORD *)&v39 + 1) )
  {
    DeviceMigrationNode = PiDevCfgQueryDeviceMigrationNode(&v39, *(_QWORD *)(a2 + 8), &P);
    if ( DeviceMigrationNode < 0 )
    {
      P = 0LL;
      if ( DeviceMigrationNode == -1073741772 )
        DeviceMigrationNode = 0;
    }
    else
    {
      *((_QWORD *)P + 23) = 0LL;
    }
  }
  if ( P )
  {
LABEL_51:
    v24 = *((_DWORD *)P + 4);
    if ( (v24 & 1) != 0 )
    {
      DeviceMigrationNode = -1073740007;
    }
    else if ( (v24 & 2) != 0 )
    {
      DeviceMigrationNode = -1073740719;
    }
    else
    {
      if ( IopGetRegistryValue(*((HANDLE *)P + 5), L"ConfigFlags", 0, &DestinationString) >= 0 )
      {
        if ( PnpValidateRegistryDword(*(__int64 *)&DestinationString.Length) )
          v9 = *(unsigned int *)((char *)v25 + v25[2]);
        ExFreePoolWithTag(v25, 0);
      }
      v26 = *(_QWORD *)(a2 + 16);
      v27 = *(_QWORD *)(a2 + 8);
      v35 = 0;
      if ( (unsigned int)PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           v27,
                           1LL,
                           v26,
                           0LL,
                           (__int64)&DEVPKEY_Device_ClassGuid,
                           (__int64)&v36,
                           0LL,
                           0,
                           (__int64)&v35,
                           0) != -1073741789
        || v36 != 13
        || v35 != 16 )
      {
        if ( a3 )
          PiDevCfgSetDeviceRegProp(v28, a2, 9u, 1, *((_QWORD *)a3 + 1), *a3 + 2);
        else
          PiDevCfgSetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            (_DWORD *)a2,
            *(_QWORD *)(a2 + 8),
            1u,
            *(_QWORD *)(a2 + 16),
            v32,
            (__int64)&DEVPKEY_Device_ClassGuid,
            13,
            (__int64)P + 80,
            16,
            0);
      }
      DeviceMigrationNode = PiDevCfgConfigureDeviceDriverConfiguration(
                              v8,
                              a2,
                              *((_QWORD *)P + 5),
                              -1,
                              0LL,
                              0LL,
                              (__int64)a5,
                              (__int64)a6);
      if ( DeviceMigrationNode >= 0 )
      {
        if ( a5 )
          *a5 |= v9;
        v29 = P;
        if ( *((_QWORD *)P + 23) )
        {
          v30 = *(void **)(a2 + 16);
          DestinationString = 0LL;
          if ( RtlInitUnicodeStringEx(&DestinationString, L"ParentIdPrefix") >= 0 )
          {
            ZwDeleteValueKey(v30, &DestinationString);
            v29 = P;
          }
        }
        PiDevCfgSetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          (_DWORD *)a2,
          *(_QWORD *)(a2 + 8),
          1u,
          *(_QWORD *)(a2 + 16),
          v33,
          (__int64)DEVPKEY_Device_MigrationRank,
          9,
          (__int64)v29 + 184,
          8,
          0);
      }
    }
    PiDevCfgLogDeviceMigrated(a2, P, (unsigned int)DeviceMigrationNode);
    v31 = (const wchar_t **)P;
    if ( (*((_DWORD *)P + 4) & 1) == 0 )
    {
      PiDevCfgClearDeviceMigrationNode(&v39, *((_QWORD *)P + 4));
      v31 = (const wchar_t **)P;
    }
    if ( !v31 || wcsicmp(*(const wchar_t **)(a2 + 8), v31[4]) )
      goto LABEL_76;
    goto LABEL_8;
  }
  IsRootEnumeratedDevice = CmIsRootEnumeratedDevice(*(PCWSTR *)(a2 + 8));
  v13 = 0LL;
  if ( IsRootEnumeratedDevice )
    goto LABEL_50;
  if ( !*(_QWORD *)(a2 + 64) )
    goto LABEL_45;
  v11 = v41;
  if ( !(_QWORD)v41 )
  {
    v17 = 0LL;
    if ( *(_QWORD *)&PiPnpRtlCtx )
      v17 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
    v18 = SysCtxRegOpenKey(v17, v39, (__int64)L"Locations", 0, 0x20019u, (__int64)&v41);
    v13 = 0LL;
    if ( v18 == -1073741772 )
    {
      *(_QWORD *)&v41 = 0LL;
      goto LABEL_45;
    }
    if ( v18 < 0 )
    {
      DeviceMigrationNode = v18;
      goto LABEL_8;
    }
    v11 = v41;
    if ( !(_QWORD)v41 )
      goto LABEL_45;
  }
  v19 = *(_WORD **)(a2 + 64);
  if ( !*v19 )
    goto LABEL_43;
  while ( 1 )
  {
    v20 = 0LL;
    if ( *(_QWORD *)&PiPnpRtlCtx )
      v20 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
    v21 = SysCtxRegOpenKey(v20, v11, (__int64)v19, 0, 0x20019u, (__int64)&Handle);
    v13 = 0LL;
    if ( v21 == -1073741772 )
      goto LABEL_38;
    if ( v21 < 0 )
      break;
    DeviceMigrationNode = PiDevCfgFindDeviceMigrationNode(&v39, a2, Handle, 70145LL, &P);
    ZwClose(Handle);
    v13 = 0LL;
    if ( DeviceMigrationNode >= 0 )
      goto LABEL_44;
    P = 0LL;
    if ( DeviceMigrationNode == -1073741275 )
      DeviceMigrationNode = 0;
LABEL_38:
    v22 = -1LL;
    do
      ++v22;
    while ( v19[v22] );
    v19 += v22 + 1;
    if ( !*v19 )
      goto LABEL_43;
    v11 = v41;
  }
  DeviceMigrationNode = v21;
LABEL_43:
  if ( DeviceMigrationNode >= 0 )
  {
LABEL_44:
    v8 = a1;
LABEL_45:
    if ( P )
      goto LABEL_51;
    if ( *((_QWORD *)&v40 + 1) )
    {
      v23 = PiDevCfgFindDeviceMigrationNode(&v39, a2, *((_QWORD *)&v40 + 1), 69665LL, &P);
      DeviceMigrationNode = v23;
      if ( v23 < 0 )
      {
        P = 0LL;
        if ( v23 == -1073741275 )
          DeviceMigrationNode = 0;
      }
LABEL_50:
      if ( P )
        goto LABEL_51;
    }
LABEL_76:
    PiDevCfgClearDeviceMigrationNode(&v39, *(_QWORD *)(a2 + 8));
  }
LABEL_8:
  if ( P )
    PiDevCfgFreeDeviceMigrationNode(P);
  PiDevCfgFreeMigrationContext(&v39, v11, v12, v13);
  return (unsigned int)DeviceMigrationNode;
}
