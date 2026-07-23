/*
 * XREFs of IoQuerySystemDeviceName @ 0x14061284C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     IopRetrieveSystemDeviceName @ 0x1406128B8 (IopRetrieveSystemDeviceName.c)
 *     IopFindSystemDevice @ 0x14089B174 (IopFindSystemDevice.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoQuerySystemDeviceName(int a1)
{
  __int64 (__fastcall *v2)(); // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int SystemDevice; // edi
  PVOID P[3]; // [rsp+20h] [rbp-18h] BYREF

  P[0] = 0LL;
  switch ( a1 )
  {
    case 98:
      v2 = SyspartDirectGetSystemPartition;
      break;
    case 99:
      v2 = SyspartDirectGetSystemDisk;
      break;
    case 200:
      v2 = SyspartDirectGetFirmwareSystemPartition;
      break;
    default:
      return 3221225475LL;
  }
  result = IopRetrieveSystemDeviceName(v2);
  v5 = result;
  if ( (_DWORD)result == -1073740718 && IopAmbiguousSystemDisk )
  {
    if ( a1 == 99 )
    {
      return 3221226577LL;
    }
    else if ( a1 == 98 )
    {
      SystemDevice = IopFindSystemDevice(v4, P);
      if ( SystemDevice >= 0 )
        ExFreePoolWithTag(P[0], 0);
      if ( SystemDevice == -1073740718 )
        return (unsigned int)-1073740719;
      return v5;
    }
  }
  return result;
}
