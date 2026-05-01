/*
 * XREFs of sub_180075DA0 @ 0x180075DA0
 * Callers:
 *     sub_1800760A8 @ 0x1800760A8 (sub_1800760A8.c)
 * Callees:
 *     sub_1800100D0 @ 0x1800100D0 (sub_1800100D0.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_180074AB0 @ 0x180074AB0 (sub_180074AB0.c)
 *     sub_1800763F0 @ 0x1800763F0 (sub_1800763F0.c)
 */

char __fastcall sub_180075DA0(unsigned int *a1, __int64 a2)
{
  char v2; // di
  __int64 v4; // rax
  __int64 v6; // rsi
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+68h] [rbp-A0h] BYREF
  DWORD cbData; // [rsp+6Ch] [rbp-9Ch] BYREF
  BYTE Data[8]; // [rsp+70h] [rbp-98h] BYREF
  HKEY phkResult; // [rsp+78h] [rbp-90h] BYREF
  __int64 v15; // [rsp+80h] [rbp-88h] BYREF
  __int64 v16; // [rsp+88h] [rbp-80h] BYREF
  __int64 v17; // [rsp+90h] [rbp-78h] BYREF
  __int64 v18; // [rsp+98h] [rbp-70h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v20; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+C8h] [rbp-40h]
  __int64 *v23; // [rsp+D8h] [rbp-30h]
  int v24; // [rsp+E0h] [rbp-28h]
  int v25; // [rsp+E4h] [rbp-24h]
  _DWORD SystemInformation[16]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v27[44]; // [rsp+148h] [rbp+40h] BYREF

  phkResult = 0LL;
  v2 = 0;
  v4 = *(_QWORD *)a1;
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  if ( dword_1800B31E0 )
  {
    memset(SystemInformation, 0, sizeof(SystemInformation));
    memset(v27, 0, 0x158uLL);
    NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    LOBYTE(v4) = NtQuerySystemInformation(SystemPerformanceInformation, v27, 0x158u, 0LL);
    LODWORD(v7) = a1[23];
    if ( (v7 & 2) == 0 )
    {
      if ( (unsigned int)dword_1800B31E0 > 4 )
      {
        LOBYTE(v4) = sub_180010470((__int64)&dword_1800B31E0, 0x400000000009LL);
        if ( (_BYTE)v4 )
        {
          LOBYTE(v11) = *(_BYTE *)(v6 + 508) & 1;
          v16 = (unsigned int)(LODWORD(v27[14]) * SystemInformation[2]);
          v17 = (unsigned int)(SystemInformation[2] * HIDWORD(v27[14]));
          v18 = v27[42] * SystemInformation[2];
          v19 = (unsigned int)(SystemInformation[2] * HIDWORD(v27[6]));
          v20 = (unsigned int)(SystemInformation[2] * LODWORD(v27[7]));
          v15 = (unsigned int)(SystemInformation[2] * LODWORD(v27[6]));
          LOBYTE(v4) = sub_180074AB0(
                         SystemInformation[2],
                         byte_18009E100,
                         v8,
                         v7,
                         (__int64)&v15,
                         (__int64)&v20,
                         (__int64)&v19,
                         (__int64)&v18,
                         (__int64)&v17,
                         (__int64)&v16,
                         (__int64)&v11);
          LODWORD(v7) = a1[23];
        }
      }
      v2 = 1;
      a1[23] = v7 | 2;
    }
  }
  if ( (*(_BYTE *)(v6 + 508) & 1) != 0 )
  {
    if ( RegOpenKeyW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", &phkResult)
      || (cbData = 4,
          LODWORD(v4) = RegQueryValueExW(phkResult, L"RebootOnLowCommit", 0LL, 0LL, Data, &cbData),
          (_DWORD)v4)
      || *(_DWORD *)Data )
    {
      LODWORD(v4) = sub_1800763F0(a1, 52LL, a1[18], &v16);
      if ( (_DWORD)v4 )
      {
        LOBYTE(v4) = sub_1800100D0(*(_QWORD *)a1, (__int64 *)&v21);
        if ( v22 >= *(_QWORD *)(a2 + 120) )
          __fastfail(0xC00001AD);
        if ( v2 )
        {
          if ( (unsigned int)dword_1800B31E0 > 4 )
          {
            LOBYTE(v4) = sub_180010470((__int64)&dword_1800B31E0, 0x400000000009LL);
            if ( (_BYTE)v4 )
            {
              v25 = 0;
              v23 = &v15;
              v15 = v9;
              v24 = 8;
              LOBYTE(v4) = sub_18002E278(
                             (__int64)&dword_1800B31E0,
                             (unsigned __int8 *)dword_18009DFE6,
                             0LL,
                             0LL,
                             3u,
                             &v21);
            }
          }
        }
      }
    }
  }
  if ( phkResult )
    LOBYTE(v4) = RegCloseKey(phkResult);
  return v4;
}
