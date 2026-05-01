/*
 * XREFs of MemUtilPrioritizeWsPages @ 0x180086688
 * Callers:
 *     MemUtilEmptyProcess @ 0x1800864EC (MemUtilEmptyProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     MemUtilQueryWorkingSet @ 0x180086BDC (MemUtilQueryWorkingSet.c)
 */

__int64 __fastcall MemUtilPrioritizeWsPages(void *a1, __int64 a2, char a3)
{
  unsigned int WorkingSet; // ebx
  char *v6; // rbx
  char *v7; // rsi
  int v8; // eax
  unsigned __int64 v9; // rdx
  __int64 v10; // r11
  unsigned __int64 v11; // r9
  char *i; // r8
  unsigned __int64 v13; // r10
  _DWORD v15[4]; // [rsp+30h] [rbp-98h] BYREF
  LPVOID lpMem; // [rsp+40h] [rbp-88h]
  _QWORD v17[3]; // [rsp+48h] [rbp-80h] BYREF
  _BYTE SystemInformation[40]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp-40h]

  v15[0] = 0;
  lpMem = 0LL;
  WorkingSet = MemUtilQueryWorkingSet(a1);
  if ( !WorkingSet )
  {
    v6 = (char *)lpMem + 8;
    qsort((char *)lpMem + 8, *(_QWORD *)lpMem, 8uLL, MemUtilWsVACompare);
    v7 = (char *)lpMem + 8 * MEMORY[0] + 8;
    v8 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    if ( v8 >= 0 )
    {
      if ( v6 >= v7 )
        return 0;
      while ( 1 )
      {
        v9 = *(_QWORD *)v6;
        if ( ((*(_QWORD *)v6 & 0x100LL) == 0 || (a3 & 2) != 0) && ((*(_QWORD *)v6 & 0x100LL) != 0 || (a3 & 1) != 0) )
        {
          v10 = 4096LL;
          v11 = v9 & 0xFFFFFFFFFFFFF000uLL;
          if ( (v9 & 0xFFFFFFFFFFFFF000uLL) > v19 )
            return 0;
          for ( i = v6 + 8; i < v7; i += 8 )
          {
            v13 = *(_QWORD *)i;
            if ( (v9 >> 12) + 1 != *(_QWORD *)i >> 12 || ((v9 ^ v13) & 0x100) != 0 )
              break;
            v6 += 8;
            v10 += 4096LL;
            v9 = v13;
          }
          v17[0] = v11;
          v17[1] = v10;
          v8 = ((__int64 (__fastcall *)(void *, __int64, __int64, _QWORD *, _DWORD *, int))NtSetInformationVirtualMemory)(
                 a1,
                 1LL,
                 1LL,
                 v17,
                 v15,
                 4);
          if ( v8 < 0 )
            break;
        }
        v6 += 8;
        if ( v6 >= v7 )
          return 0;
      }
    }
    return RtlNtStatusToDosError(v8);
  }
  return WorkingSet;
}
