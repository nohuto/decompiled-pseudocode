/*
 * XREFs of PpDevCfgProcessDeviceReset @ 0x14071E318
 * Callers:
 *     PiConfigureDevice @ 0x14071DF24 (PiConfigureDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     _PnpOpenObjectRegKey @ 0x1405DB1B4 (_PnpOpenObjectRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1405E046C (_CmGetDeviceRegProp.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1406A7C78 (RtlStringFromGUIDEx.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14071E56C (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgQueryObjectProperties @ 0x14072D9CC (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFreeDeviceContext @ 0x14072EA64 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14072FE90 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgInitDeviceContext @ 0x14072FFD0 (PiDevCfgInitDeviceContext.c)
 *     _RegRtlDeleteTreeInternal @ 0x140754744 (_RegRtlDeleteTreeInternal.c)
 *     PiDevCfgMigrateDevice @ 0x14075BC34 (PiDevCfgMigrateDevice.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceReset(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  int v4; // ecx
  NTSTATUS inited; // edi
  __int64 v6; // rsi
  __int64 v7; // rdx
  int v8; // eax
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // [rsp+48h] [rbp-79h] BYREF
  int v18; // [rsp+4Ch] [rbp-75h] BYREF
  int v19; // [rsp+50h] [rbp-71h] BYREF
  int v20; // [rsp+54h] [rbp-6Dh] BYREF
  UNICODE_STRING GuidString; // [rsp+58h] [rbp-69h] BYREF
  int v22[2]; // [rsp+68h] [rbp-59h] BYREF
  _QWORD v23[3]; // [rsp+70h] [rbp-51h] BYREF
  int v24; // [rsp+88h] [rbp-39h]
  __int64 v25; // [rsp+8Ch] [rbp-35h]
  int v26; // [rsp+94h] [rbp-2Dh]
  int v27[20]; // [rsp+98h] [rbp-29h] BYREF
  GUID Guid; // [rsp+E8h] [rbp+27h] BYREF

  memset(v27, 0, 0x48uLL);
  v2 = 0;
  *(_QWORD *)v22 = 0LL;
  Guid = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  v20 = 1;
  GuidString.Buffer = 0LL;
  v17 = 0;
  v19 = 0;
  v18 = 0;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_17;
  }
  v3 = *(_QWORD *)(a1 + 48);
  if ( !v3 )
  {
    inited = -1073741808;
    goto LABEL_17;
  }
  inited = PiDevCfgInitDeviceContext(v3, 0LL, v27);
  if ( inited >= 0 )
  {
    v6 = *(_QWORD *)&v27[4];
    v7 = *(_QWORD *)(a1 + 48);
    v23[0] = &DEVPKEY_Device_ClassGuid;
    v23[2] = &Guid;
    v23[1] = 13LL;
    v25 = 0LL;
    v26 = 0;
    v24 = 16;
    inited = PiDevCfgQueryObjectProperties(v4, v7, 1, v27[4], (__int64)v23, 1);
    if ( inited >= 0 )
    {
      if ( v25 >= 0 )
      {
        inited = RtlStringFromGUIDEx(&Guid, &GuidString, 1u);
        if ( inited < 0 )
          goto LABEL_17;
        if ( (int)PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)GuidString.Buffer, 2u, 131097, 0, (__int64)v22) >= 0 )
          goto LABEL_8;
        RtlFreeAnsiString(&GuidString);
      }
      Guid = 0LL;
LABEL_8:
      v8 = PiDevCfgMigrateDevice(
             a1,
             (unsigned int)v27,
             (unsigned __int64)&GuidString & -(__int64)(GuidString.Buffer != 0LL),
             0,
             (__int64)&v19,
             0LL);
      v9 = v19;
      if ( v8 < 0 )
        v9 = 0;
      PiDevCfgResetDeviceDriverSettings(
        a1,
        (int)v27,
        (unsigned __int64)&Guid & -(__int64)(GuidString.Buffer != 0LL),
        v22[0],
        0LL);
      if ( *(_QWORD *)&PiPnpRtlCtx && (v10 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
        v11 = *(_QWORD *)(v10 + 8);
      else
        v11 = 0LL;
      RegRtlDeleteTreeInternal(v6, L"Devices", v11, 0LL);
      if ( *(_QWORD *)&PiPnpRtlCtx && (v12 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
        v13 = *(_QWORD *)(v12 + 8);
      else
        v13 = 0LL;
      RegRtlDeleteTreeInternal(v6, L"Filters", v13, 0LL);
      if ( v9 )
      {
        v15 = *(_QWORD *)(a1 + 48);
        v18 = 4;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    v15,
                    v6,
                    11,
                    (__int64)&v20,
                    (__int64)&v17,
                    (__int64)&v18,
                    0) >= 0
          && v20 == 4
          && v18 == 4 )
        {
          v2 = v17;
        }
        v17 = v9 | v2;
        PiDevCfgSetDeviceRegProp(v16, (unsigned int)v27, 11, 4, (__int64)&v17, 4);
      }
    }
  }
LABEL_17:
  RtlFreeAnsiString(&GuidString);
  PiDevCfgFreeDeviceContext(v27);
  return (unsigned int)inited;
}
