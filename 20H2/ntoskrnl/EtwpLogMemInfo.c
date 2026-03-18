/*
 * XREFs of EtwpLogMemInfo @ 0x1405A7188
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x1405A72F0 (EtwpLogMemInfoTimerCallback.c)
 *     EtwpLogMemInfoRundown @ 0x140940480 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     EtwWriteEx @ 0x14020E0B0 (EtwWriteEx.c)
 *     EtwpLogKernelEvent @ 0x140226150 (EtwpLogKernelEvent.c)
 *     MmQueryMemoryListInformation @ 0x14024C9D0 (MmQueryMemoryListInformation.c)
 *     EtwTraceKernelEvent @ 0x140313A28 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
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
    EtwTraceKernelEvent((__int64)&v8, 2u, 0x20080000u, 0x270u, 0x401803u);
  }
}
