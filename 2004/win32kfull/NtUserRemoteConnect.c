/*
 * XREFs of NtUserRemoteConnect @ 0x1C01265C0
 * Callers:
 *     <none>
 * Callees:
 *     wcsncpycch @ 0x1C0048434 (wcsncpycch.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C01577A0 (__report_rangecheckfailure.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserRemoteConnect(_OWORD *a1, unsigned int a2, volatile void *a3)
{
  SIZE_T v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  _OWORD *v13; // rax
  __int64 v14; // rcx
  _OWORD *v15; // rax
  _OWORD *v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // ebx
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // ebx
  _BYTE v23[320]; // [rsp+30h] [rbp-2F8h] BYREF
  _QWORD v24[10]; // [rsp+170h] [rbp-1B8h] BYREF
  _BYTE v25[320]; // [rsp+1C0h] [rbp-168h] BYREF
  _WORD v26[12]; // [rsp+300h] [rbp-28h] BYREF

  v4 = a2;
  memset(v24, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v24[1]);
  v24[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v24[3]) = 31;
  LOBYTE(v24[6]) = -1;
  memset(v25, 0, sizeof(v25));
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8);
  v12 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( a1 + 20 < a1 || (unsigned __int64)(a1 + 20) > MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    v13 = v23;
    v14 = 2LL;
    do
    {
      *v13 = *a1;
      v13[1] = a1[1];
      v13[2] = a1[2];
      v13[3] = a1[3];
      v13[4] = a1[4];
      v13[5] = a1[5];
      v13[6] = a1[6];
      v13 += 8;
      *(v13 - 1) = a1[7];
      a1 += 8;
      --v14;
    }
    while ( v14 );
    *v13 = *a1;
    v13[1] = a1[1];
    v13[2] = a1[2];
    v13[3] = a1[3];
    v15 = v25;
    v16 = v23;
    v17 = 2LL;
    do
    {
      *v15 = *v16;
      v15[1] = v16[1];
      v15[2] = v16[2];
      v15[3] = v16[3];
      v15[4] = v16[4];
      v15[5] = v16[5];
      v15[6] = v16[6];
      v15 += 8;
      *(v15 - 1) = v16[7];
      v16 += 8;
      --v17;
    }
    while ( v17 );
    *v15 = *v16;
    v15[1] = v16[1];
    v15[2] = v16[2];
    v15[3] = v16[3];
    v18 = v4;
    ProbeForRead(a3, v4, 2u);
    if ( (unsigned int)v4 > 9 )
      v18 = 9;
    wcsncpycch(v26, (__int64)a3, v18);
    if ( 2 * (unsigned __int64)v18 >= 0x14 )
      _report_rangecheckfailure(v19);
    v26[v18] = 0;
    gptiTSRequest = gptiCurrent;
    v20 = xxxRemoteConnect(v25, v18, v26, v24, v18);
    v21 = v20;
    if ( v20 < 0 )
    {
      v12 = gptiTSRequest;
      gptiTSRequest = 0LL;
    }
  }
  else
  {
    v21 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v12, v10, v11);
  return v21;
}
