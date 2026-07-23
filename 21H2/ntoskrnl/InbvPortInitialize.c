/*
 * XREFs of InbvPortInitialize @ 0x1405C9F68
 * Callers:
 *     HdlspEnableTerminal @ 0x1409F052C (HdlspEnableTerminal.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140216B10 (MmMapIoSpaceEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

char __fastcall InbvPortInitialize(
        int a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4,
        char a5,
        unsigned __int8 a6,
        char a7,
        char a8)
{
  char v9; // bl
  _DWORD *v10; // r13
  __int64 v11; // r8
  __int64 v13; // rbp
  __int64 *v14; // r14
  unsigned __int8 v15; // al
  char v16; // di
  char v17; // si
  int v18; // eax
  __int64 (__fastcall **v19)(_QWORD, char *, __int64, _DWORD *, char); // rax

  v9 = 1;
  v10 = a4;
  v11 = 1LL;
  if ( a2 )
    v11 = a2;
  if ( (unsigned int)v11 > 4 )
    return 0;
  v13 = (unsigned int)(v11 - 1);
  v14 = (__int64 *)((char *)&Ports + 40 * v13);
  if ( *v14 )
    return 0;
  v15 = a6;
  if ( a6 )
  {
    v9 = a8;
    v17 = a7;
    v16 = a5;
  }
  else
  {
    v16 = 0;
    v17 = 8;
    if ( a3 )
      v15 = 1;
    else
      a3 = (unsigned int)v11;
  }
  if ( !a3 )
    return 0;
  if ( v15 >= 0x13u )
    return 0;
  UartHardwareDriver = (__int64)UartHardwareDrivers[v15];
  if ( !UartHardwareDriver )
    return 0;
  if ( v16 )
  {
    a3 = MmMapIoSpaceEx(a3, 4096LL, 0x204u);
    if ( !a3 )
      return 0;
  }
  *v14 = a3;
  v18 = 19200;
  if ( a1 )
    v18 = a1;
  LOBYTE(a4) = v9;
  dword_140CFA528[10 * v13] = v18;
  LOBYTE(v11) = v16;
  v19 = (__int64 (__fastcall **)(_QWORD, char *, __int64, _DWORD *, char))UartHardwareDriver;
  *v10 = v13;
  return (*v19)(0LL, (char *)&Ports + 40 * v13, v11, a4, v17);
}
