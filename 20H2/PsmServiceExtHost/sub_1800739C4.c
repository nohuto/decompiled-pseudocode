/*
 * XREFs of sub_1800739C4 @ 0x1800739C4
 * Callers:
 *     sub_180073880 @ 0x180073880 (sub_180073880.c)
 *     sub_180073B80 @ 0x180073B80 (sub_180073B80.c)
 * Callees:
 *     sub_1800030B4 @ 0x1800030B4 (sub_1800030B4.c)
 *     sub_180009F08 @ 0x180009F08 (sub_180009F08.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18003602C @ 0x18003602C (sub_18003602C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800673E8 @ 0x1800673E8 (sub_1800673E8.c)
 *     sub_180073470 @ 0x180073470 (sub_180073470.c)
 *     sub_1800737F0 @ 0x1800737F0 (sub_1800737F0.c)
 */

void __fastcall sub_1800739C4(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  HANDLE ProcessHandle; // [rsp+40h] [rbp-40h] BYREF
  _BYTE *v9; // [rsp+48h] [rbp-38h] BYREF
  __int64 v10; // [rsp+50h] [rbp-30h] BYREF
  void *v11; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v12[16]; // [rsp+60h] [rbp-20h] BYREF

  ProcessHandle = 0LL;
  if ( *(_DWORD *)(a1 + 1280) )
  {
    v2 = *(_DWORD *)(a1 + 8);
    if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 9LL) )
    {
      LODWORD(v9) = v2;
      v10 = a1;
      sub_1800030B4((int)&dword_1800B31E0, (int)&unk_18009D8EC, v3, v4, (__int64)&v10, (__int64)&v9);
    }
    if ( v2 && !sub_1800737F0(v2) )
    {
      if ( (*(_BYTE *)(a1 + 1352) & 2) != 0 )
      {
        sub_1800673E8(*(_QWORD *)(a1 + 24), v2);
      }
      else if ( sub_180009F08(&ProcessHandle, 0x1001u, v2) >= 0 && NtTerminateProcess(ProcessHandle, -2147467260) >= 0 )
      {
        if ( dword_1800B31E0 )
        {
          if ( *(_QWORD *)(a1 + 1336) )
          {
            sub_18003602C(ProcessHandle, (__int64)v12);
            if ( (unsigned int)dword_1800B31E0 > 4 )
            {
              if ( sub_180010470((__int64)&dword_1800B31E0, 0x400000000001LL) )
              {
                v10 = 0x1000000LL;
                v9 = v12;
                v11 = (void *)(*(_QWORD *)(a1 + 1336) + 88LL);
                sub_180073470(v5, byte_18009D932, v6, v7, &v11, (__int64 *)&v9, (__int64)&v10);
              }
            }
          }
        }
      }
    }
    if ( ProcessHandle )
      CloseHandle(ProcessHandle);
  }
}
