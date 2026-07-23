/*
 * XREFs of PerfInfoLogIpiSend @ 0x1405AA410
 * Callers:
 *     KiIpiSendRequest @ 0x140268E70 (KiIpiSendRequest.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14035AD50 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall PerfInfoLogIpiSend(__int64 a1, int a2, __int64 a3, int a4, unsigned __int16 *a5)
{
  int v6; // edx
  unsigned int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v12; // ecx
  __int64 v13; // [rsp+40h] [rbp-1h] BYREF
  int v14; // [rsp+48h] [rbp+7h]
  int v15; // [rsp+4Ch] [rbp+Bh]
  int v16; // [rsp+50h] [rbp+Fh]
  __int64 v17; // [rsp+58h] [rbp+17h] BYREF
  int v18; // [rsp+60h] [rbp+1Fh]
  int v19; // [rsp+64h] [rbp+23h]
  __int64 *v20; // [rsp+68h] [rbp+27h]
  int v21; // [rsp+70h] [rbp+2Fh]
  int v22; // [rsp+74h] [rbp+33h]
  unsigned __int16 *v23; // [rsp+78h] [rbp+37h]
  int v24; // [rsp+80h] [rbp+3Fh]
  int v25; // [rsp+84h] [rbp+43h]

  v22 = 0;
  v14 = a2;
  v6 = *a5;
  v23 = a5 + 4;
  v25 = 0;
  v24 = 8 * v6;
  v13 = a3;
  v15 = a4;
  v16 = v6;
  v7 = *(_DWORD *)(EtwpHostSiloState + 4224);
  v20 = &v13;
  v21 = 20;
  while ( _BitScanForward(&v12, v7) )
  {
    v7 &= v7 - 1;
    v8 = v12;
    v9 = 32LL * v12 + EtwpHostSiloState + 4260;
    if ( v9 )
    {
      if ( (*(_DWORD *)(v9 + 8) & 0x400000) != 0 )
      {
        v10 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v8 + 4209);
        v19 = 0;
        v18 = 8;
        v17 = a1 + 8 * (v10 - 1);
        EtwpLogKernelEvent(
          (__int64)&v17,
          EtwpHostSiloState,
          *(unsigned __int8 *)(EtwpHostSiloState + 2 * v8 + 4208),
          3u,
          0xF70u,
          0x401A02u);
      }
    }
  }
}
