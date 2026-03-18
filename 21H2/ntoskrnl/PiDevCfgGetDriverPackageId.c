/*
 * XREFs of PiDevCfgGetDriverPackageId @ 0x140745620
 * Callers:
 *     PiDevCfgQueryDriverNode @ 0x140746270 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14094AA64 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14094B864 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14094CFE8 (PiDevCfgQueryIncludedDriverNode.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     PiDevCfgQueryObjectProperties @ 0x140746CCC (PiDevCfgQueryObjectProperties.c)
 *     _PnpOpenObjectRegKey @ 0x14077C924 (_PnpOpenObjectRegKey.c)
 */

__int64 __fastcall PiDevCfgGetDriverPackageId(int a1, __int64 a2)
{
  int v4; // ecx
  int ObjectProperties; // ebx
  __int64 *v7; // [rsp+40h] [rbp-30h] BYREF
  int v8; // [rsp+48h] [rbp-28h]
  int v9; // [rsp+4Ch] [rbp-24h]
  __int64 v10; // [rsp+50h] [rbp-20h]
  int v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+5Ch] [rbp-14h]
  __int64 v13; // [rsp+60h] [rbp-10h]
  HANDLE Handle; // [rsp+90h] [rbp+20h] BYREF

  Handle = 0LL;
  ObjectProperties = PnpOpenObjectRegKey(PiPnpRtlCtx, a1, 9, 131097, 0, (__int64)&Handle);
  if ( ObjectProperties >= 0 )
  {
    v9 = 0;
    v11 = 0;
    v13 = 0LL;
    v7 = DEVPKEY_DriverInfFile_ActiveDriverPackage;
    v8 = 18;
    v10 = a2;
    v12 = 6;
    ObjectProperties = PiDevCfgQueryObjectProperties(v4, a1, 9, (_DWORD)Handle, (__int64)&v7, 1);
    if ( ObjectProperties >= 0 && (int)v13 < 0 )
      ObjectProperties = v13;
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)ObjectProperties;
}
