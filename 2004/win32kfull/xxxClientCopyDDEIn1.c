/*
 * XREFs of xxxClientCopyDDEIn1 @ 0x1C0232A10
 * Callers:
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C021C69C (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FB24 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C008FBDC (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCA0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C008FCD8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z @ 0x1C0228F88 (-xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z.c)
 *     IntToULongLong @ 0x1C0229650 (IntToULongLong.c)
 */

__int64 __fastcall xxxClientCopyDDEIn1(__int64 a1, int a2, __int64 *a3)
{
  int v6; // ebx
  __int64 *v7; // rcx
  __int64 v8; // rdx
  ULONG64 v9; // rcx
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __m128i v12; // xmm1
  INT v13; // esi
  __int128 v14; // xmm4
  __int64 v15; // xmm5_8
  ULONGLONG v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rdi
  size_t v19; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // [rsp+30h] [rbp-178h]
  unsigned __int64 v23; // [rsp+40h] [rbp-168h] BYREF
  __int64 v24; // [rsp+48h] [rbp-160h]
  ULONGLONG v25; // [rsp+50h] [rbp-158h] BYREF
  ULONGLONG pullResult[2]; // [rsp+58h] [rbp-150h] BYREF
  ULONGLONG v27; // [rsp+68h] [rbp-140h]
  __int64 v28; // [rsp+70h] [rbp-138h] BYREF
  int v29; // [rsp+78h] [rbp-130h]
  int v30; // [rsp+7Ch] [rbp-12Ch]
  __int128 v31; // [rsp+80h] [rbp-128h] BYREF
  __int64 v32; // [rsp+90h] [rbp-118h]
  __m128i v33; // [rsp+98h] [rbp-110h]
  __int128 v34; // [rsp+A8h] [rbp-100h]
  __int128 v35; // [rsp+B8h] [rbp-F0h]
  volatile void *Address[2]; // [rsp+C8h] [rbp-E0h]
  volatile void *v37[2]; // [rsp+D8h] [rbp-D0h]
  INT iOperand[8]; // [rsp+E8h] [rbp-C0h]
  __int128 v39; // [rsp+108h] [rbp-A0h]
  __int128 v40; // [rsp+118h] [rbp-90h]
  _OWORD v41[7]; // [rsp+130h] [rbp-78h] BYREF
  char v42; // [rsp+1B0h] [rbp+8h] BYREF
  char v43; // [rsp+1B8h] [rbp+10h] BYREF
  __int64 *v44; // [rsp+1C0h] [rbp+18h]
  int v45; // [rsp+1C8h] [rbp+20h] BYREF

  v44 = a3;
  v24 = 0LL;
  memset(v41, 0, 0x48uLL);
  pullResult[0] = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  v45 = 0;
  v30 = 0;
  LODWORD(v22) = 0;
  *a3 = 0LL;
  v28 = a1;
  v29 = a2;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v42);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  EtwTraceBeginCallback(60LL);
  v6 = KeUserModeCallback(60LL, &v28, 16LL, &v23, &v45);
  EtwTraceEndCallback(60LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v42);
  if ( v6 >= 0 && v45 == 24 )
  {
    v7 = (__int64 *)v23;
    if ( v23 + 8 < v23 || v23 + 8 > MmUserProbeAddress )
      v7 = (__int64 *)MmUserProbeAddress;
    v22 = *v7;
    if ( *v7 == 2 )
    {
      LODWORD(v22) = 0;
      v8 = *(_QWORD *)(gptiCurrent + 504LL);
      if ( !v8 || (*(_DWORD *)(v8 + 84) & 1) == 0 || *(_OWORD **)(v8 + 96) != v41 )
      {
        v9 = *(_QWORD *)(v23 + 16);
        if ( v9 + 72 < v9 || v9 + 72 > MmUserProbeAddress )
          v9 = MmUserProbeAddress;
        v10 = *(_OWORD *)v9;
        v39 = v10;
        v34 = v10;
        v11 = *(_OWORD *)(v9 + 16);
        v40 = v11;
        v35 = v11;
        v12 = *(__m128i *)(v9 + 32);
        v33 = v12;
        *(__m128i *)Address = v12;
        v31 = *(_OWORD *)(v9 + 48);
        *(_OWORD *)v37 = v31;
        *(_QWORD *)iOperand = *(_QWORD *)(v9 + 64);
        v41[0] = v10;
        v41[1] = v11;
        v41[2] = v12;
        v41[3] = v31;
        *(_QWORD *)&v41[4] = *(_QWORD *)iOperand;
        LODWORD(v22) = 2;
        v13 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 8));
        if ( IntToULongLong(v13, pullResult) < 0
          || IntToULongLong(iOperand[0], &v25) < 0
          || (v16 = pullResult[0] + v25, pullResult[0] + v25 < pullResult[0])
          || (v27 = pullResult[0] + v25, v17 = v16 + 72, v16 >= 0xFFFFFFFFFFFFFFB8uLL) )
        {
          v18 = 0LL;
          v24 = 0LL;
        }
        else
        {
          if ( v17 < 0x90 )
            v17 = 144LL;
          v27 = v17;
          v18 = Win32AllocPool(v17, 1164211029LL);
          v24 = v18;
          v12 = v33;
          v10 = v39;
          v11 = v40;
          v14 = v31;
          v15 = *(_QWORD *)iOperand;
        }
        if ( v18 )
        {
          v31 = 0LL;
          v32 = 0LL;
          *a3 = v18;
          *(_OWORD *)v18 = v10;
          *(_OWORD *)(v18 + 16) = v11;
          *(__m128i *)(v18 + 32) = v12;
          *(_OWORD *)(v18 + 48) = v14;
          *(_QWORD *)(v18 + 64) = v15;
          if ( v13 )
          {
            ProbeForRead(Address[0], v13, 1u);
            memmove((void *)(v18 + 72), (const void *)Address[0], v13);
          }
          if ( iOperand[0] )
          {
            v19 = iOperand[0];
            ProbeForRead(v37[1], iOperand[0], 1u);
            memmove((void *)(v18 + v13 + 72LL), (const void *)v37[1], v19);
          }
          PushW32ThreadLock(v18, &v31, (__int64)Win32FreePool);
          xxxClientCopyDDEIn2((struct tagINTDDEINFO *)v18);
          v33.m128i_i64[0] = (__int64)KeGetCurrentThread();
          ThreadWin32Thread = W32GetThreadWin32Thread(v33.m128i_i64[0]);
          *(_QWORD *)(ThreadWin32Thread + 16) = v31;
        }
        else
        {
          LODWORD(v22) = 3;
        }
      }
    }
  }
  return (unsigned int)v22;
}
