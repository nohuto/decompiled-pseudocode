/*
 * XREFs of PopDirectedDripsUmDirectedFxAddTestDevice @ 0x1408F8714
 * Callers:
 *     PopDirectedDripsUmPowerInformationInternal @ 0x1408F8A44 (PopDirectedDripsUmPowerInformationInternal.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x140252BB0 (RtlInsertElementGenericTableAvl.c)
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     PopDirectedDripsUmCreateTestDevice @ 0x1408F8640 (PopDirectedDripsUmCreateTestDevice.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopDirectedDripsUmDirectedFxAddTestDevice(unsigned int a1, __int64 a2)
{
  PVOID v2; // rdi
  int v4; // ebx
  unsigned int v5; // r10d
  unsigned __int64 v6; // rdx
  BOOLEAN NewElement; // [rsp+30h] [rbp+8h] BYREF
  CLONG BufferSize; // [rsp+40h] [rbp+18h] BYREF
  PVOID Buffer; // [rsp+48h] [rbp+20h] BYREF

  BufferSize = 0;
  v2 = 0LL;
  NewElement = 0;
  Buffer = 0LL;
  if ( a1 >= 0x10 )
  {
    v5 = *(_DWORD *)(a2 + 12);
    v6 = 2LL * v5;
    if ( v6 > 0xFFFFFFFF || (unsigned int)v6 > a1 - 16 )
    {
      v4 = -1073741811;
    }
    else
    {
      v4 = PopDirectedDripsUmCreateTestDevice(v5, (_WORD *)(a2 + 16), &Buffer, &BufferSize);
      if ( v4 < 0 )
      {
        v2 = Buffer;
      }
      else
      {
        PopAcquireRwLockExclusive((ULONG_PTR)&PopDirectedDripsUmLock);
        v2 = Buffer;
        if ( RtlInsertElementGenericTableAvl(&PopDirectedDripsUmTestDeviceTable, Buffer, BufferSize, &NewElement) )
        {
          if ( NewElement )
          {
            _InterlockedIncrement(&PopDirectedDripsUmTestDeviceCount);
            v2 = Buffer;
            v4 = 0;
          }
          else
          {
            v4 = -1073740008;
          }
        }
        else
        {
          v4 = -1073741670;
        }
        PopReleaseRwLock((ULONG_PTR)&PopDirectedDripsUmLock);
      }
    }
    if ( v2 )
      ExFreePoolWithTag(v2, 0x4D554444u);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
