/*
 * XREFs of ClientImmLoadLayout @ 0x1C01254E4
 * Callers:
 *     xxxImmLoadLayout @ 0x1C012543C (xxxImmLoadLayout.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4D04 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4E80 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00D4EB8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall ClientImmLoadLayout(__int64 a1, _OWORD *a2)
{
  int v3; // ebx
  __int64 *v4; // rcx
  unsigned int v5; // r8d
  __int64 v6; // rdx
  _OWORD *v7; // rcx
  _OWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  _OWORD *v11; // rax
  unsigned __int64 v13; // [rsp+30h] [rbp-188h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-180h] BYREF
  _BYTE v15[360]; // [rsp+50h] [rbp-168h] BYREF
  __int64 v16; // [rsp+1C0h] [rbp+8h] BYREF
  char v17; // [rsp+1D0h] [rbp+18h] BYREF
  int v18; // [rsp+1D8h] [rbp+20h] BYREF

  v13 = 0LL;
  v18 = 0;
  v14[0] = a1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v17);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
  EtwTraceBeginCallback(92LL);
  v3 = KeUserModeCallback(92LL, v14, 8LL, &v13, &v18);
  EtwTraceEndCallback(92LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v17);
  if ( v3 >= 0 && v18 == 24 )
  {
    v4 = (__int64 *)v13;
    if ( v13 + 8 < v13 || v13 + 8 > MmUserProbeAddress )
      v4 = (__int64 *)MmUserProbeAddress;
    v16 = *v4;
    v5 = v16;
    if ( !v16 )
      return v5;
    v6 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v6 || (*(_DWORD *)(v6 + 84) & 1) == 0 || *(_OWORD **)(v6 + 96) != a2 )
    {
      v7 = *(_OWORD **)(v13 + 16);
      if ( v7 + 22 < v7 || (unsigned __int64)(v7 + 22) > MmUserProbeAddress )
        v7 = (_OWORD *)MmUserProbeAddress;
      v8 = v15;
      v9 = 2LL;
      v10 = 2LL;
      do
      {
        *v8 = *v7;
        v8[1] = v7[1];
        v8[2] = v7[2];
        v8[3] = v7[3];
        v8[4] = v7[4];
        v8[5] = v7[5];
        v8[6] = v7[6];
        v8 += 8;
        *(v8 - 1) = v7[7];
        v7 += 8;
        --v10;
      }
      while ( v10 );
      *v8 = *v7;
      v8[1] = v7[1];
      v8[2] = v7[2];
      v8[3] = v7[3];
      v8[4] = v7[4];
      v8[5] = v7[5];
      v11 = v15;
      do
      {
        *a2 = *v11;
        a2[1] = v11[1];
        a2[2] = v11[2];
        a2[3] = v11[3];
        a2[4] = v11[4];
        a2[5] = v11[5];
        a2[6] = v11[6];
        a2 += 8;
        *(a2 - 1) = v11[7];
        v11 += 8;
        --v9;
      }
      while ( v9 );
      *a2 = *v11;
      a2[1] = v11[1];
      a2[2] = v11[2];
      a2[3] = v11[3];
      a2[4] = v11[4];
      a2[5] = v11[5];
      return v5;
    }
  }
  return 0LL;
}
