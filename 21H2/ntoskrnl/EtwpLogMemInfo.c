/*
 * XREFs of EtwpLogMemInfo @ 0x1405A8BB8
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x1405A8D20 (EtwpLogMemInfoTimerCallback.c)
 *     EtwpLogMemInfoRundown @ 0x14093DC54 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     EtwWriteEx @ 0x14025DD10 (EtwWriteEx.c)
 *     MmQueryMemoryListInformation @ 0x1402D4240 (MmQueryMemoryListInformation.c)
 *     EtwTraceKernelEvent @ 0x1402EAC90 (EtwTraceKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x140350000 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 */

void __fastcall EtwpLogMemInfo(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  char v5; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v6[47]; // [rsp+44h] [rbp-BCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+0h] BYREF
  _DWORD *v8; // [rsp+110h] [rbp+10h] BYREF
  int v9; // [rsp+118h] [rbp+18h]
  int v10; // [rsp+11Ch] [rbp+1Ch]
  __int64 v11; // [rsp+120h] [rbp+20h]
  int v12; // [rsp+128h] [rbp+28h]
  int v13; // [rsp+12Ch] [rbp+2Ch]

  v6[0] = 0;
  memset(&v6[3], 0, 0xB0uLL);
  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)&v5;
  v5 = 8;
  UserData.Size = 1;
  MmQueryMemoryListInformation(0LL, &v6[3], 0xB0u, v4, v6);
  v10 = 0;
  v13 = 0;
  v8 = &v6[3];
  v9 = 176;
  v11 = a2;
  v12 = 32;
  if ( a1 )
  {
    EtwpLogKernelEvent((__int64)&v8, *(_QWORD *)(a1 + 1080), *(_DWORD *)a1, 2u, 0x270u, 0x401803u);
  }
  else
  {
    if ( EtwpHostSiloState != -4516 && (*(_DWORD *)(EtwpHostSiloState + 4520) & 0x80000) != 0 )
      EtwWriteEx(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MEMINFO, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    EtwTraceKernelEvent((int)&v8, 2, 0x20080000u, 624, 4200451);
  }
}
