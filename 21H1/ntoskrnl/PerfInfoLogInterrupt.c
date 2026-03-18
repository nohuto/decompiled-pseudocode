/*
 * XREFs of PerfInfoLogInterrupt @ 0x1402EF640
 * Callers:
 *     KiScanInterruptObjectList @ 0x1403F7370 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1403F7550 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403F76A0 (KiInterruptSubDispatchNoLock.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14051BE6C (KiInvokeInterruptServiceRoutine.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1402085B0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

void __fastcall PerfInfoLogInterrupt(__int64 a1, int a2, __int64 a3)
{
  int v4; // r9d
  unsigned __int16 v5; // si
  unsigned int v6; // ebx
  bool i; // zf
  unsigned int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // [rsp+30h] [rbp-48h] BYREF
  int v13; // [rsp+38h] [rbp-40h]
  int v14; // [rsp+3Ch] [rbp-3Ch]
  _QWORD v15[3]; // [rsp+48h] [rbp-30h] BYREF
  int v16; // [rsp+60h] [rbp-18h]
  int v17; // [rsp+64h] [rbp-14h]

  v14 = 0;
  if ( *(_BYTE *)(a1 + 93) )
  {
    if ( *(_QWORD *)(a1 + 32) )
    {
      v12 = *(_QWORD *)(a1 + 32);
      v4 = 16;
      v5 = 3890;
      v14 = *(_DWORD *)(a1 + 40);
    }
    else
    {
      v5 = 3907;
      v12 = *(_QWORD *)(a1 + 24);
      v4 = 12;
    }
  }
  else
  {
    v5 = 3935;
    v12 = *(_QWORD *)(a1 + 24);
    v4 = 12;
  }
  v13 = a2;
  v15[2] = &v12;
  v16 = v4;
  v17 = 0;
  v6 = *(_DWORD *)(EtwpHostSiloState + 4224);
  for ( i = !_BitScanForward(&v8, v6); !i; i = !_BitScanForward(&v8, v6) )
  {
    v6 &= v6 - 1;
    v9 = v8;
    v10 = 32LL * v8 + EtwpHostSiloState + 4260;
    if ( v10 )
    {
      if ( (*(_DWORD *)(v10 + 4) & 0x4000) != 0 )
      {
        v11 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v9 + 4209) - 1LL;
        v15[1] = 8LL;
        v15[0] = a3 + 8 * v11;
        EtwpLogKernelEvent(
          (__int64)v15,
          EtwpHostSiloState,
          *(unsigned __int8 *)(EtwpHostSiloState + 2 * v9 + 4208),
          2u,
          v5,
          0x400A02u);
      }
    }
  }
}
