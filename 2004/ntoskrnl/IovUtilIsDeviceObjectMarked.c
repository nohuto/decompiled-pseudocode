/*
 * XREFs of IovUtilIsDeviceObjectMarked @ 0x1409D3A3C
 * Callers:
 *     IovpCallDriver1 @ 0x1409CCC3C (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x1409CD134 (IovpCallDriver2.c)
 *     VfIoDeleteDevice @ 0x1409D3134 (VfIoDeleteDevice.c)
 *     IovUtilIsInFdoStack @ 0x1409D3A90 (IovUtilIsInFdoStack.c)
 *     VfPnpVerifyIrpStackDownward @ 0x1409DFBD0 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1409DFD60 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x1409E0030 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfIrpLogRecordEvent @ 0x1409E0888 (VfIrpLogRecordEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IovUtilIsDeviceObjectMarked(__int64 a1, int a2)
{
  unsigned int v2; // ecx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  unsigned int v8; // ecx

  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL);
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( v6 )
          {
            if ( v6 != 1 )
              return 0LL;
            v8 = HIBYTE(v2);
          }
          else
          {
            v8 = v2 >> 25;
          }
        }
        else
        {
          v8 = v2 >> 27;
        }
      }
      else
      {
        v8 = v2 >> 29;
      }
    }
    else
    {
      v8 = v2 >> 28;
    }
  }
  else
  {
    v8 = v2 >> 26;
  }
  return v8 & 1;
}
