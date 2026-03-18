/*
 * XREFs of SiGetFirmwareSystemPartition @ 0x1406C5FF0
 * Callers:
 *     SiGetSystemPartition @ 0x1406C5FA0 (SiGetSystemPartition.c)
 * Callees:
 *     SiIsWinPEBoot @ 0x1406C60A0 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x1406C6114 (SiGetBootDeviceName.c)
 *     SiTranslateSymbolicLink @ 0x1406C667C (SiTranslateSymbolicLink.c)
 *     SiGetBiosSystemPartition @ 0x140776C1C (SiGetBiosSystemPartition.c)
 *     SiGetEfiSystemDevice @ 0x1409764B8 (SiGetEfiSystemDevice.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetFirmwareSystemPartition(int a1, PCWSTR *a2)
{
  __int64 v4; // rdx
  char IsWinPEBoot; // bp
  int v6; // r8d
  int BootDeviceName; // ebx
  int BiosSystemPartition; // eax
  int v10; // [rsp+60h] [rbp+18h] BYREF
  const WCHAR *v11; // [rsp+68h] [rbp+20h]

  v11 = 0LL;
  v10 = 1;
  IsWinPEBoot = SiIsWinPEBoot();
  if ( IsWinPEBoot
    || (LOBYTE(v6) = 1,
        BootDeviceName = SiGetBootDeviceName(1, (unsigned int)L"FirmwareBootDevice", v6, 0, 0, (__int64)a2),
        BootDeviceName < 0) )
  {
    if ( a1 == 1 )
    {
      BiosSystemPartition = SiGetBiosSystemPartition(a2);
    }
    else
    {
      if ( a1 != 2 )
      {
        BootDeviceName = -1073741637;
LABEL_7:
        if ( BootDeviceName < 0 )
        {
          if ( BootDeviceName != -1073740719 )
            return (unsigned int)BootDeviceName;
          if ( !IsWinPEBoot )
            return (unsigned int)BootDeviceName;
          if ( a1 != 2 )
            return (unsigned int)BootDeviceName;
          LOBYTE(v6) = 1;
          if ( (int)SiGetBootDeviceName(1, (unsigned int)L"FirmwareBootDevice", v6, (unsigned int)&v10, 1, (__int64)a2) < 0 )
            return (unsigned int)BootDeviceName;
        }
        else
        {
          BootDeviceName = SiTranslateSymbolicLink(*a2);
          if ( BootDeviceName >= 0 )
          {
            ExFreePoolWithTag((PVOID)*a2, 0);
            *a2 = v11;
            return (unsigned int)BootDeviceName;
          }
        }
        return 0;
      }
      BiosSystemPartition = SiGetEfiSystemDevice(1LL, v4, a2);
    }
    BootDeviceName = BiosSystemPartition;
    goto LABEL_7;
  }
  return (unsigned int)BootDeviceName;
}
