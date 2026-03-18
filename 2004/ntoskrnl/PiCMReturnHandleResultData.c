/*
 * XREFs of PiCMReturnHandleResultData @ 0x1405D7104
 * Callers:
 *     PiCMOpenClassKey @ 0x1405D01E4 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x1405D3300 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x1405D719C (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1408ADA54 (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 */

__int64 __fastcall PiCMReturnHandleResultData(int a1, __int64 a2, int a3, _DWORD *a4, unsigned int Length, _DWORD *a6)
{
  unsigned int v9; // ebx

  *a6 = 0;
  v9 = 0;
  if ( Length >= 0x10 && a3 == 16 )
  {
    ProbeForWrite(a4, Length, 4u);
    *a4 = 16;
    a4[1] = a1;
    *((_QWORD *)a4 + 1) = a2;
    *a6 = 16;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v9;
}
