/*
 * XREFs of _CmOpenDeviceInterfaceRegKey @ 0x1406AB970
 * Callers:
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406AB634 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _PnpDispatchDeviceInterface @ 0x1406ABD20 (_PnpDispatchDeviceInterface.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406B26CC (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     IopGetDeviceInterfaces @ 0x1406B3D5C (IopGetDeviceInterfaces.c)
 *     IoGetDeviceInterfaceAlias @ 0x1407173A0 (IoGetDeviceInterfaceAlias.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140718B44 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x140720CA0 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140751F84 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x140752A20 (_CmCreateDeviceInterfaceWorker.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1407B7150 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x1408A1618 (PiDevCfgConfigureDeviceInterface.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1408AC734 (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1406AB634 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 */

__int64 __fastcall CmOpenDeviceInterfaceRegKey(
        __int64 a1,
        const WCHAR *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 (__fastcall *v11)(__int64, const WCHAR *, __int64); // rsi
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  _QWORD v19[12]; // [rsp+40h] [rbp-69h] BYREF

  memset(v19, 0, 0x58uLL);
  v11 = *(__int64 (__fastcall **)(__int64, const WCHAR *, __int64))(a1 + 504);
  LODWORD(v19[3]) = a5;
  v19[2] = a3;
  BYTE4(v19[3]) = a6;
  v19[4] = a7;
  if ( v11 )
  {
    v12 = v11(a1, a2, 3LL);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
      {
LABEL_12:
        v14 = v19[0];
        goto LABEL_5;
      }
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  v13 = CmOpenDeviceInterfaceRegKeyWorker(
          a1,
          a2,
          v19[2],
          SHIDWORD(v19[2]),
          v19[3],
          SBYTE4(v19[3]),
          (_QWORD *)v19[4],
          &v19[5]);
  v14 = v13;
  if ( v11 )
  {
    LODWORD(v19[0]) = v13;
    v16 = v11(a1, a2, 3LL);
    v17 = v16;
    if ( v16 != -1073741822 )
    {
      if ( v16 != -1073741536 )
      {
        v18 = v14;
        if ( v17 )
          v18 = -1073741595;
        v14 = v18;
        goto LABEL_5;
      }
      goto LABEL_12;
    }
  }
LABEL_5:
  if ( v14 >= 0 && a8 )
    *a8 = v19[5];
  return (unsigned int)v14;
}
