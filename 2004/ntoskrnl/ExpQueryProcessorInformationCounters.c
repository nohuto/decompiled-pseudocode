/*
 * XREFs of ExpQueryProcessorInformationCounters @ 0x1406A6DA0
 * Callers:
 *     ExProcessorCounterSetCallback @ 0x1406A6580 (ExProcessorCounterSetCallback.c)
 * Callees:
 *     PoGetIdleTimes @ 0x140298098 (PoGetIdleTimes.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140351CB8 (PoGetPerfStateAndParkingInfo.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

__int64 __fastcall ExpQueryProcessorInformationCounters(__int64 a1, char a2, char a3, char a4, __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // r8
  __int64 result; // rax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+20h] [rbp-51h] BYREF
  __int128 v21; // [rsp+28h] [rbp-49h] BYREF
  __int128 v22; // [rsp+38h] [rbp-39h]
  __int128 v23; // [rsp+48h] [rbp-29h] BYREF
  __int128 v24; // [rsp+58h] [rbp-19h] BYREF
  __int128 v25; // [rsp+68h] [rbp-9h]
  __int128 v26; // [rsp+78h] [rbp+7h] BYREF
  __int128 v27; // [rsp+88h] [rbp+17h]
  __int128 v28; // [rsp+98h] [rbp+27h]

  ProcNumber.Group = *(unsigned __int8 *)(a1 + 208);
  ProcNumber.Number = *(_BYTE *)(a1 + 209);
  ProcNumber.Reserved = 0;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v23 = 0LL;
  if ( a2 )
  {
    PoGetIdleTimes(&ProcNumber, (__int64)&v26, (__int64)&v23);
    v8 = (unsigned int)v23;
    v9 = DWORD1(v23);
    *(_QWORD *)(a5 + 72) = *((_QWORD *)&v26 + 1);
    *(_QWORD *)(a5 + 96) = (unsigned int)v28;
    *(_QWORD *)(a5 + 80) = v27;
    *(_QWORD *)(a5 + 104) = DWORD1(v28);
    *(_QWORD *)(a5 + 88) = *((_QWORD *)&v27 + 1);
    *(_QWORD *)(a5 + 112) = DWORD2(v28);
    *(_QWORD *)(a5 + 120) = *((_QWORD *)&v23 + 1);
    v10 = KeMaximumIncrement;
    v11 = KeMaximumIncrement * v8;
    v12 = KeMaximumIncrement * v9;
    *(_QWORD *)a5 = v11;
    v13 = v12 - v11;
    v14 = v11 + v10 * *(unsigned int *)(a1 + 32428);
  }
  else
  {
    *(_QWORD *)a5 = 0LL;
    v13 = 0LL;
    *(_QWORD *)(a5 + 72) = 0LL;
    *(_QWORD *)(a5 + 80) = 0LL;
    *(_QWORD *)(a5 + 88) = 0LL;
    *(_QWORD *)(a5 + 96) = 0LL;
    *(_QWORD *)(a5 + 104) = 0LL;
    *(_QWORD *)(a5 + 112) = 0LL;
    *(_QWORD *)(a5 + 120) = 0LL;
    v14 = 0LL;
  }
  *(_QWORD *)(a5 + 8) = v14;
  *(_QWORD *)(a5 + 24) = v13;
  v15 = KeMaximumIncrement;
  v16 = KeMaximumIncrement * (unsigned __int64)*(unsigned int *)(a1 + 32392);
  v21 = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  *(_QWORD *)(a5 + 16) = v16;
  *(_DWORD *)(a5 + 32) = *(_DWORD *)(a1 + 32384);
  v17 = v15 * *(unsigned int *)(a1 + 32400);
  v25 = 0LL;
  *(_QWORD *)(a5 + 48) = v17;
  *(_DWORD *)(a5 + 60) = *(_DWORD *)(a1 + 12508);
  *(_DWORD *)(a5 + 64) = *(_DWORD *)(a1 + 12572);
  *(_QWORD *)(a5 + 40) = v15 * *(unsigned int *)(a1 + 32396);
  *(_DWORD *)(a5 + 56) = *(_DWORD *)(a1 + 12600);
  *(_QWORD *)(a5 + 168) = *(_QWORD *)(a5 + 72) + *(_QWORD *)(a5 + 80) + *(_QWORD *)(a5 + 88);
  *(_QWORD *)(a5 + 176) = *(_QWORD *)(a5 + 96) + *(_QWORD *)(a5 + 104) + *(_QWORD *)(a5 + 112);
  v18 = (unsigned __int64)&v24 & -(__int64)(a4 != 0);
  if ( a3 || v18 )
    PoGetPerfStateAndParkingInfo(&ProcNumber, (__int64)&v21, v18, 0LL);
  *(_DWORD *)(a5 + 128) = BYTE13(v22);
  *(_QWORD *)(a5 + 132) = *(_QWORD *)((char *)&v21 + 4);
  *(_DWORD *)(a5 + 140) = v21;
  *(_QWORD *)(a5 + 184) = *(_QWORD *)((char *)&v22 + 4);
  *(_OWORD *)(a5 + 144) = v24;
  *(_QWORD *)(a5 + 160) = v25;
  result = *((_QWORD *)&v25 + 1);
  *(_QWORD *)(a5 + 192) = *((_QWORD *)&v25 + 1);
  return result;
}
