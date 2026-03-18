/*
 * XREFs of Crashdump_UsbDevice_Initialize @ 0x1C004E6BC
 * Callers:
 *     Crashdump_InitializeDeviceContext @ 0x1C004A6D0 (Crashdump_InitializeDeviceContext.c)
 * Callees:
 *     Crashdump_CommonBufferAcquire @ 0x1C004A10C (Crashdump_CommonBufferAcquire.c)
 */

__int64 __fastcall Crashdump_UsbDevice_Initialize(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        char a4,
        _OWORD *a5,
        __int64 a6,
        int a7)
{
  char v7; // al
  int v8; // edx

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 16) = a2 + 328;
  *(_QWORD *)(a1 + 24) = a6;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 372) = a7;
  v7 = 0;
  *(_BYTE *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 64) = a5;
  *(_QWORD *)(a1 + 72) = a5;
  *(_OWORD *)(a1 + 80) = *a5;
  *(_OWORD *)(a1 + 96) = a5[1];
  if ( a3 )
  {
    *(_BYTE *)(a1 + 369) = a3[16];
    *(_BYTE *)(a1 + 370) = a3[17];
    v7 = a3[18];
  }
  else
  {
    *(_WORD *)(a1 + 368) = 257;
    *(_BYTE *)(a1 + 370) = 0;
  }
  *(_BYTE *)(a1 + 371) = v7;
  v8 = 2048;
  if ( (*(_DWORD *)(**(_QWORD **)(a1 + 8) + 100LL) & 4) == 0 )
    v8 = 1024;
  return Crashdump_CommonBufferAcquire(*(_QWORD *)a1, v8, a1 + 32);
}
