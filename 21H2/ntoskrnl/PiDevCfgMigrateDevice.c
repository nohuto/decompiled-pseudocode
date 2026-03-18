/*
 * XREFs of PiDevCfgMigrateDevice @ 0x1406E2EEC
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1407702BC (PiDevCfgConfigureDevice.c)
 *     PiDevCfgMigrateRootDevice @ 0x14094C9C4 (PiDevCfgMigrateRootDevice.c)
 *     PpDevCfgProcessDeviceReset @ 0x14094F4CC (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x1402088DC (PnpValidateRegistryDword.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     IopGetRegistryValue @ 0x14067B838 (IopGetRegistryValue.c)
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x140697760 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 *     PiDevCfgFreeMigrationContext @ 0x1406E2FC8 (PiDevCfgFreeMigrationContext.c)
 *     PiDevCfgInitMigrationContext @ 0x1406E2FE8 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgSetDeviceRegProp @ 0x1406E5528 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgSetObjectProperty @ 0x14077139C (PiDevCfgSetObjectProperty.c)
 *     _CmIsRootEnumeratedDevice @ 0x140778D60 (_CmIsRootEnumeratedDevice.c)
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x14094B144 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14094B864 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x14094C238 (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgLogDeviceMigrated @ 0x14094C6A8 (PiDevCfgLogDeviceMigrated.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14094CBE0 (PiDevCfgQueryDeviceMigrationNode.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgMigrateDevice(int a1, __int64 a2, unsigned __int16 *a3, __int64 a4, _DWORD *a5, _DWORD *a6)
{
  int v8; // esi
  int v9; // r13d
  int inited; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  char IsRootEnumeratedDevice; // al
  __int64 v17; // rcx
  int v18; // eax
  _WORD *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rax
  int DeviceMigrationNode; // eax
  int v23; // ecx
  unsigned int *v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rdx
  int v27; // ecx
  PVOID v28; // rsi
  void *v29; // r14
  const wchar_t **v30; // rdx
  int v31; // [rsp+30h] [rbp-71h]
  int v32; // [rsp+30h] [rbp-71h]
  PVOID P; // [rsp+68h] [rbp-39h] BYREF
  int v34; // [rsp+70h] [rbp-31h] BYREF
  int v35; // [rsp+74h] [rbp-2Dh] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-21h] BYREF
  __int128 v38; // [rsp+90h] [rbp-11h] BYREF
  __int128 v39; // [rsp+A0h] [rbp-1h]
  __int128 v40; // [rsp+B0h] [rbp+Fh] BYREF
  __int64 v41; // [rsp+C0h] [rbp+1Fh]

  v41 = 0LL;
  P = 0LL;
  Handle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v8 = a1;
  v35 = 0;
  v9 = 0;
  v34 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0;
  inited = PiDevCfgInitMigrationContext(a3, a4, &v38);
  v13 = 0LL;
  v14 = inited;
  if ( inited < 0 )
    goto LABEL_8;
  if ( !(_QWORD)v38 )
  {
    v14 = 0;
    goto LABEL_8;
  }
  if ( (unsigned int)PnpGetObjectProperty(
                       PiPnpRtlCtx,
                       *(_QWORD *)(a2 + 8),
                       1,
                       *(_QWORD *)(a2 + 16),
                       0LL,
                       (__int64)DEVPKEY_Device_MigrationRank,
                       (__int64)&v35,
                       0LL,
                       0,
                       (__int64)&v34,
                       0) == -1073741789
    && v35 == 9
    && v34 == 8 )
  {
    goto LABEL_51;
  }
  if ( *((_QWORD *)&v38 + 1) )
  {
    v14 = PiDevCfgQueryDeviceMigrationNode(&v38, *(_QWORD *)(a2 + 8), &P);
    if ( v14 < 0 )
    {
      P = 0LL;
      if ( v14 == -1073741772 )
        v14 = 0;
    }
    else
    {
      *((_QWORD *)P + 23) = 0LL;
    }
  }
  if ( !P )
  {
    IsRootEnumeratedDevice = CmIsRootEnumeratedDevice(*(PCWSTR *)(a2 + 8));
    v13 = 0LL;
    if ( IsRootEnumeratedDevice )
      goto LABEL_51;
    if ( !*(_QWORD *)(a2 + 64) )
      goto LABEL_46;
    v11 = v40;
    if ( !(_QWORD)v40 )
    {
      LODWORD(v17) = 0;
      if ( *(_QWORD *)&PiPnpRtlCtx )
        v17 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
      v18 = SysCtxRegOpenKey(v17, v38, (unsigned int)L"Locations", 0, 131097, (__int64)&v40);
      v13 = 0LL;
      if ( v18 == -1073741772 )
      {
        *(_QWORD *)&v40 = 0LL;
LABEL_46:
        if ( P )
          goto LABEL_52;
        if ( !*((_QWORD *)&v39 + 1) )
          goto LABEL_77;
        DeviceMigrationNode = PiDevCfgFindDeviceMigrationNode(&v38, a2, *((_QWORD *)&v39 + 1), 69665LL, &P);
        v14 = DeviceMigrationNode;
        if ( DeviceMigrationNode < 0 )
        {
          P = 0LL;
          if ( DeviceMigrationNode == -1073741275 )
            v14 = 0;
        }
LABEL_51:
        if ( P )
          goto LABEL_52;
LABEL_77:
        PiDevCfgClearDeviceMigrationNode(&v38, *(_QWORD *)(a2 + 8));
        goto LABEL_8;
      }
      if ( v18 < 0 )
      {
LABEL_38:
        v14 = v18;
        goto LABEL_8;
      }
      v11 = v40;
      if ( !(_QWORD)v40 )
        goto LABEL_46;
    }
    v19 = *(_WORD **)(a2 + 64);
    if ( *v19 )
    {
      while ( 1 )
      {
        LODWORD(v20) = 0;
        if ( *(_QWORD *)&PiPnpRtlCtx )
          v20 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
        v18 = SysCtxRegOpenKey(v20, v11, (_DWORD)v19, 0, 131097, (__int64)&Handle);
        if ( v18 == -1073741772 )
        {
          v13 = 0LL;
        }
        else
        {
          if ( v18 < 0 )
            goto LABEL_38;
          v14 = PiDevCfgFindDeviceMigrationNode(&v38, a2, Handle, 70145LL, &P);
          ZwClose(Handle);
          v13 = 0LL;
          if ( v14 >= 0 )
            goto LABEL_45;
          P = 0LL;
          if ( v14 == -1073741275 )
            v14 = 0;
        }
        v21 = -1LL;
        do
          ++v21;
        while ( v19[v21] );
        v19 += v21 + 1;
        if ( !*v19 )
          break;
        LODWORD(v11) = v40;
      }
    }
    if ( v14 < 0 )
      goto LABEL_8;
LABEL_45:
    v8 = a1;
    goto LABEL_46;
  }
LABEL_52:
  v23 = *((_DWORD *)P + 4);
  if ( (v23 & 1) != 0 )
  {
    v14 = -1073740007;
  }
  else if ( (v23 & 2) != 0 )
  {
    v14 = -1073740719;
  }
  else
  {
    if ( IopGetRegistryValue(*((HANDLE *)P + 5), L"ConfigFlags", 0, &DestinationString) >= 0 )
    {
      if ( PnpValidateRegistryDword(*(__int64 *)&DestinationString.Length) )
        v9 = *(unsigned int *)((char *)v24 + v24[2]);
      ExFreePoolWithTag(v24, 0);
    }
    v25 = *(_QWORD *)(a2 + 16);
    v26 = *(_QWORD *)(a2 + 8);
    v34 = 0;
    if ( (unsigned int)PnpGetObjectProperty(
                         PiPnpRtlCtx,
                         v26,
                         1,
                         v25,
                         0LL,
                         (__int64)&DEVPKEY_Device_ClassGuid,
                         (__int64)&v35,
                         0LL,
                         0,
                         (__int64)&v34,
                         0) != -1073741789
      || v35 != 13
      || v34 != 16 )
    {
      if ( a3 )
        PiDevCfgSetDeviceRegProp(v27, a2, 9, 1, *((_QWORD *)a3 + 1), *a3 + 2);
      else
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          a2,
          *(_QWORD *)(a2 + 8),
          1,
          *(_QWORD *)(a2 + 16),
          v31,
          (__int64)&DEVPKEY_Device_ClassGuid,
          13,
          (__int64)P + 80,
          16,
          0);
    }
    v14 = PiDevCfgConfigureDeviceDriverConfiguration(v8, a2, *((_QWORD *)P + 5), -1, 0LL, 0LL, (__int64)a5, (__int64)a6);
    if ( v14 >= 0 )
    {
      if ( a5 )
        *a5 |= v9;
      v28 = P;
      if ( *((_QWORD *)P + 23) )
      {
        v29 = *(void **)(a2 + 16);
        DestinationString = 0LL;
        if ( RtlInitUnicodeStringEx(&DestinationString, L"ParentIdPrefix") >= 0 )
        {
          ZwDeleteValueKey(v29, &DestinationString);
          v28 = P;
        }
      }
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        a2,
        *(_QWORD *)(a2 + 8),
        1,
        *(_QWORD *)(a2 + 16),
        v32,
        (__int64)DEVPKEY_Device_MigrationRank,
        9,
        (__int64)v28 + 184,
        8,
        0);
    }
  }
  PiDevCfgLogDeviceMigrated(a2, P, (unsigned int)v14);
  v30 = (const wchar_t **)P;
  if ( (*((_DWORD *)P + 4) & 1) == 0 )
  {
    PiDevCfgClearDeviceMigrationNode(&v38, *((_QWORD *)P + 4));
    v30 = (const wchar_t **)P;
  }
  if ( !v30 || wcsicmp(*(const wchar_t **)(a2 + 8), v30[4]) )
    goto LABEL_77;
LABEL_8:
  if ( P )
    PiDevCfgFreeDeviceMigrationNode(P);
  PiDevCfgFreeMigrationContext(&v38, v11, v12, v13);
  return (unsigned int)v14;
}
