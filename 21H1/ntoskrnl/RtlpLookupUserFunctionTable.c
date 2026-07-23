/*
 * XREFs of RtlpLookupUserFunctionTable @ 0x14032E9C4
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14032D7E0 (RtlpLookupFunctionEntryForStackWalks.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     RtlpLookupUserFunctionTableInverted @ 0x14032EBE0 (RtlpLookupUserFunctionTableInverted.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     RtlCaptureImageExceptionValues @ 0x14036F230 (RtlCaptureImageExceptionValues.c)
 *     MmGetImageInformation @ 0x1405C6F2C (MmGetImageInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpLookupUserFunctionTable(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // r8
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // r14
  volatile signed __int64 *v8; // rsi
  _DWORD *v9; // r8
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  unsigned int v15; // eax
  int v16; // r14d
  char *v17; // r11
  int v18; // eax
  unsigned int v19; // edx
  int v20; // r9d
  int v21; // r10d
  char *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // [rsp+20h] [rbp-98h] BYREF
  __int128 v30; // [rsp+28h] [rbp-90h]
  unsigned __int64 v31; // [rsp+38h] [rbp-80h]
  char *v32; // [rsp+40h] [rbp-78h]
  __int64 v33; // [rsp+48h] [rbp-70h] BYREF
  __int64 v34[13]; // [rsp+50h] [rbp-68h] BYREF
  int v35; // [rsp+D8h] [rbp+20h] BYREF

  v33 = 0LL;
  v35 = 0;
  v30 = 0LL;
  v31 = 0LL;
  v34[0] = 0LL;
  v4 = RtlpLookupUserFunctionTableInverted();
  v29 = v4;
  if ( !v4 )
  {
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->Process;
    if ( Process[1].EndPadding[3] )
    {
      --CurrentThread->SpecialApcDisable;
      v8 = (volatile signed __int64 *)&Process[1].EndPadding[4];
      ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1].EndPadding[4], 0LL);
      v9 = (_DWORD *)Process[1].EndPadding[3];
      if ( v9 )
      {
        v10 = 1;
        if ( *v9 != 1 )
        {
          if ( (KiSpeculationFeatures & 0x2000000) != 0 )
          {
            v19 = dword_140C4CBF0;
            v20 = 4096;
          }
          else
          {
            v19 = 0;
            v20 = 0;
          }
          v21 = *v9 - 1;
          while ( 1 )
          {
            while ( 1 )
            {
              if ( v21 < v10 )
                goto LABEL_6;
              v16 = (v10 + v21) >> 1;
              v32 = *(char **)&v9[6 * v16 + 6];
              v17 = &v32[v9[6 * v16 + 8]];
              if ( a1 >= (unsigned __int64)v32 )
                break;
              if ( !v16 )
                goto LABEL_6;
              v21 = v16 - 1;
            }
            if ( a1 > 0x7FFFFFFEFFFFLL
              && v20
              && a1 >= (unsigned __int64)&v17[v19]
              && a1 < (unsigned __int64)&v17[v20 + v19]
              && v32 != PsNtosImageBase
              && v32 != PsHalImageBase )
            {
              break;
            }
            if ( a1 < (unsigned __int64)v17 )
            {
              v30 = *(_OWORD *)&v9[6 * v16 + 4];
              v31 = *(_QWORD *)&v9[6 * v16 + 8];
              v20 = v31;
              v22 = (char *)*((_QWORD *)&v30 + 1);
              goto LABEL_40;
            }
            v10 = v16 + 1;
          }
          *(_QWORD *)&v30 = &RtlRetpolineStubsFunctionTable;
          v22 = &v17[v19];
          *((_QWORD *)&v30 + 1) = v22;
          v31 = __PAIR64__(RtlRetpolineStubsFunctionTableSize, v20);
LABEL_40:
          *(_QWORD *)(a2 + 8) = v22;
          *(_DWORD *)(a2 + 16) = v20;
          if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v8);
          KeAbPostRelease((ULONG_PTR)v8);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v23, v24, v25);
          v26 = *(_QWORD *)(v30 + 16);
          v29 = v26;
          *(_QWORD *)a2 = v26;
          v27 = (unsigned int)(12 * *(_DWORD *)(v30 + 84));
          *(_DWORD *)(a2 + 20) = v27;
          if ( (_DWORD)v27 )
          {
            if ( (v26 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v28 = v26 + v27;
            if ( v28 > 0x7FFFFFFF0000LL || v28 < v26 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          return v29;
        }
      }
LABEL_6:
      if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8);
      KeAbPostRelease((ULONG_PTR)v8);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v11, v12, v13);
    }
    if ( (int)MmGetImageInformation(a1, &v33, v34, &v35) < 0 )
    {
      v14 = 0LL;
      v18 = 0;
      v4 = v29;
    }
    else
    {
      v14 = v33;
      RtlCaptureImageExceptionValues(v33, &v29, a2 + 20);
      v4 = v29;
      if ( v29 )
      {
        v15 = *(_DWORD *)(a2 + 20);
        if ( v15 && v15 == 12 * (v15 / 0xCuLL) )
        {
          if ( (v29 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v15 + v29 > 0x7FFFFFFF0000LL || v15 + v29 < v29 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        else
        {
          v4 = 0LL;
          v29 = 0LL;
        }
      }
      v18 = v34[0];
    }
    *(_QWORD *)(a2 + 8) = v14;
    *(_DWORD *)(a2 + 16) = v18;
    *(_QWORD *)a2 = v4;
    if ( !v4 )
      *(_DWORD *)(a2 + 20) = 0;
  }
  return v4;
}
