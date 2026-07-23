/*
 * XREFs of RtlpLookupUserFunctionTable @ 0x1402FAAD8
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140228100 (RtlpLookupFunctionEntryForStackWalks.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     RtlpLookupUserFunctionTableInverted @ 0x1402FACF0 (RtlpLookupUserFunctionTableInverted.c)
 *     RtlCaptureImageExceptionValues @ 0x140371DB0 (RtlCaptureImageExceptionValues.c)
 *     MmGetImageInformation @ 0x1405CD098 (MmGetImageInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpLookupUserFunctionTable(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // r8
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // r14
  signed __int64 *v8; // rsi
  _DWORD *v9; // r8
  int v10; // ecx
  __int64 v11; // rsi
  unsigned int v12; // eax
  int v13; // r14d
  char *v14; // r11
  int v15; // eax
  unsigned int v16; // edx
  int v17; // r9d
  int v18; // r10d
  char *v19; // rcx
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // [rsp+20h] [rbp-98h] BYREF
  __int128 v24; // [rsp+28h] [rbp-90h]
  unsigned __int64 v25; // [rsp+38h] [rbp-80h]
  char *v26; // [rsp+40h] [rbp-78h]
  __int64 v27; // [rsp+48h] [rbp-70h] BYREF
  __int64 v28[13]; // [rsp+50h] [rbp-68h] BYREF
  int v29; // [rsp+D8h] [rbp+20h] BYREF

  v27 = 0LL;
  v29 = 0;
  v24 = 0LL;
  v25 = 0LL;
  v28[0] = 0LL;
  v4 = RtlpLookupUserFunctionTableInverted();
  v23 = v4;
  if ( !v4 )
  {
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->Process;
    if ( Process[1].EndPadding[3] )
    {
      --CurrentThread->SpecialApcDisable;
      v8 = (signed __int64 *)&Process[1].EndPadding[4];
      ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1].EndPadding[4], 0LL);
      v9 = (_DWORD *)Process[1].EndPadding[3];
      if ( v9 )
      {
        v10 = 1;
        if ( *v9 != 1 )
        {
          if ( (KiSpeculationFeatures & 0x2000000) != 0 )
          {
            v16 = dword_140C4CB30;
            v17 = 4096;
          }
          else
          {
            v16 = 0;
            v17 = 0;
          }
          v18 = *v9 - 1;
          while ( 1 )
          {
            while ( 1 )
            {
              if ( v18 < v10 )
                goto LABEL_6;
              v13 = (v10 + v18) >> 1;
              v26 = *(char **)&v9[6 * v13 + 6];
              v14 = &v26[v9[6 * v13 + 8]];
              if ( a1 >= (unsigned __int64)v26 )
                break;
              if ( !v13 )
                goto LABEL_6;
              v18 = v13 - 1;
            }
            if ( a1 > 0x7FFFFFFEFFFFLL
              && v17
              && a1 >= (unsigned __int64)&v14[v16]
              && a1 < (unsigned __int64)&v14[v17 + v16]
              && v26 != PsNtosImageBase
              && v26 != PsHalImageBase )
            {
              break;
            }
            if ( a1 < (unsigned __int64)v14 )
            {
              v24 = *(_OWORD *)&v9[6 * v13 + 4];
              v25 = *(_QWORD *)&v9[6 * v13 + 8];
              v17 = v25;
              v19 = (char *)*((_QWORD *)&v24 + 1);
              goto LABEL_40;
            }
            v10 = v13 + 1;
          }
          *(_QWORD *)&v24 = &RtlRetpolineStubsFunctionTable;
          v19 = &v14[v16];
          *((_QWORD *)&v24 + 1) = v19;
          v25 = __PAIR64__(RtlRetpolineStubsFunctionTableSize, v17);
LABEL_40:
          *(_QWORD *)(a2 + 8) = v19;
          *(_DWORD *)(a2 + 16) = v17;
          if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v8);
          KeAbPostRelease((ULONG_PTR)v8);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          v20 = *(_QWORD *)(v24 + 16);
          v23 = v20;
          *(_QWORD *)a2 = v20;
          v21 = (unsigned int)(12 * *(_DWORD *)(v24 + 84));
          *(_DWORD *)(a2 + 20) = v21;
          if ( (_DWORD)v21 )
          {
            if ( (v20 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v22 = v20 + v21;
            if ( v22 > 0x7FFFFFFF0000LL || v22 < v20 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          return v23;
        }
      }
LABEL_6:
      if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8);
      KeAbPostRelease((ULONG_PTR)v8);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    if ( (int)MmGetImageInformation(a1, &v27, v28, &v29) < 0 )
    {
      v11 = 0LL;
      v15 = 0;
      v4 = v23;
    }
    else
    {
      v11 = v27;
      RtlCaptureImageExceptionValues(v27, &v23, a2 + 20);
      v4 = v23;
      if ( v23 )
      {
        v12 = *(_DWORD *)(a2 + 20);
        if ( v12 && v12 == 12 * (v12 / 0xCuLL) )
        {
          if ( (v23 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v12 + v23 > 0x7FFFFFFF0000LL || v12 + v23 < v23 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        else
        {
          v4 = 0LL;
          v23 = 0LL;
        }
      }
      v15 = v28[0];
    }
    *(_QWORD *)(a2 + 8) = v11;
    *(_DWORD *)(a2 + 16) = v15;
    *(_QWORD *)a2 = v4;
    if ( !v4 )
      *(_DWORD *)(a2 + 20) = 0;
  }
  return v4;
}
