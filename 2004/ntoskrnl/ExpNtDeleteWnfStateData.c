/*
 * XREFs of ExpNtDeleteWnfStateData @ 0x1407BACBC
 * Callers:
 *     NtDeleteWnfStateData @ 0x1407BACA0 (NtDeleteWnfStateData.c)
 *     ExWnfCrossVmCallback @ 0x140952710 (ExWnfCrossVmCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ExpWnfDeleteStateData @ 0x140621150 (ExpWnfDeleteStateData.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1406234D8 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x140623534 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x1406235A4 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1406236A4 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140623B18 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfCheckCallerAccess @ 0x140623C90 (ExpWnfCheckCallerAccess.c)
 *     ExpWnfLookupPermanentName @ 0x14063CBD0 (ExpWnfLookupPermanentName.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x140707BF4 (ExpWnfCheckCrossScopeAccess.c)
 *     ExpCrossVmWnfPush @ 0x140959020 (ExpCrossVmWnfPush.c)
 *     ExpWnfDeletePermanentStateData @ 0x1409594D4 (ExpWnfDeletePermanentStateData.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpNtDeleteWnfStateData(__int64 *a1, _DWORD *a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  char v6; // r8
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r14
  int v10; // r13d
  PEPROCESS v11; // rax
  int v12; // eax
  int v13; // ecx
  __int64 v14; // r9
  int v16; // eax
  int v17; // eax
  int v18; // [rsp+30h] [rbp-98h]
  int v19; // [rsp+38h] [rbp-90h]
  struct _EX_RUNDOWN_REF *v20; // [rsp+40h] [rbp-88h] BYREF
  int v21[2]; // [rsp+48h] [rbp-80h] BYREF
  int v22; // [rsp+50h] [rbp-78h]
  int v23; // [rsp+54h] [rbp-74h]
  unsigned __int64 v24; // [rsp+58h] [rbp-70h] BYREF
  int v25[2]; // [rsp+60h] [rbp-68h]
  PVOID P; // [rsp+68h] [rbp-60h] BYREF
  PSID Sid[2]; // [rsp+70h] [rbp-58h] BYREF
  __int128 v28; // [rsp+80h] [rbp-48h] BYREF
  int v29[2]; // [rsp+90h] [rbp-38h] BYREF
  __int64 v30; // [rsp+98h] [rbp-30h] BYREF

  v23 = a3;
  v24 = 0LL;
  Sid[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v21 = 0LL;
  v20 = 0LL;
  v19 = 0;
  v28 = 0LL;
  v18 = ExpCaptureWnfStateName(a1, &v24, PreviousMode);
  if ( v18 >= 0 )
  {
    v7 = v24;
    v8 = (v24 >> 4) & 3;
    v22 = (v24 >> 4) & 3;
    v9 = (v24 >> 6) & 0xF;
    v19 = (v24 >> 6) & 0xF;
    v18 = ExpWnfCaptureScopeInstanceId(v19, a2, v6, (__int64 *)Sid, (__int64)&v28);
    if ( v18 >= 0 )
    {
      if ( PreviousMode )
      {
        v10 = 0;
        if ( a2 )
        {
          v18 = ExpWnfCheckCrossScopeAccess(v7);
          if ( v18 < 0 )
            goto LABEL_21;
        }
      }
      else
      {
        v10 = 1;
      }
      if ( PreviousMode )
      {
        *(_QWORD *)v29 = KeGetCurrentThread();
        v11 = *(PEPROCESS *)(*(_QWORD *)v29 + 184LL);
        v7 = v24;
        LODWORD(v8) = v22;
        LODWORD(v9) = v19;
      }
      else
      {
        *(_QWORD *)v29 = 0LL;
        v11 = PsInitialSystemProcess;
      }
      *(_QWORD *)v25 = v11;
      if ( (_DWORD)v9 != 5
        || !v23
        || (v30 = v7 ^ 0x41C64E6DA3BC0074LL,
            v16 = ExpCrossVmWnfPush(-1547960204, 1, (unsigned int)&v30, 0, 0LL, 0),
            v18 = v16,
            (int)(v16 + 0x80000000) < 0)
        || v16 == -1073741822 )
      {
        v18 = ExpWnfResolveScopeInstance(
                (struct _EX_RUNDOWN_REF **)v21,
                *(__int64 *)v25,
                *(__int64 *)v29,
                v9,
                (__int64 *)Sid[0]);
        if ( v18 >= 0 )
        {
          v12 = ExpWnfLookupNameInstance(*(__int64 *)v21, v7, (__int64 *)&v20);
          v18 = v12;
          if ( v12 != -1073741772 || (_DWORD)v8 == 3 )
          {
            if ( v12 >= 0 )
            {
              if ( v10 || (v18 = ExpWnfCheckCallerAccess(v20[9].Ptr, 2u), v18 >= 0) )
              {
                if ( (_DWORD)v8 != 3 || v20[19].Count == *(_QWORD *)v25 )
                {
                  if ( (v7 & 0x400) == 0
                    || (v17 = ExpWnfDeletePermanentStateData(*(_QWORD *)v21, v7),
                        v18 = v17,
                        ((v17 + 0x80000000) & 0x80000000) != 0)
                    || v17 == -1073741772 )
                  {
                    ExpWnfDeleteStateData((__int64)v20);
                    if ( (_DWORD)v9 == 5 )
                    {
                      *(_QWORD *)v29 = v7 ^ 0x41C64E6DA3BC0074LL;
                      ExpCrossVmWnfPush(v13, 0, (unsigned int)v29, 0, 0LL, 0);
                    }
                    goto LABEL_20;
                  }
                }
                else
                {
                  v18 = -1073741790;
                }
              }
            }
          }
          else
          {
            v18 = ExpWnfLookupPermanentName(v7, (PSECURITY_DESCRIPTOR **)&P);
            if ( v18 >= 0 )
            {
              if ( v10 || (v18 = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), 2u), v18 >= 0) )
              {
                if ( (v7 & 0x400) == 0 || (v18 = ExpWnfDeletePermanentStateData(*(_QWORD *)v21, v7), v18 == -1073741772) )
LABEL_20:
                  v18 = 0;
              }
            }
          }
        }
      }
    }
  }
LABEL_21:
  if ( v20 )
    ExReleaseRundownProtection_0(v20 + 1);
  if ( *(_QWORD *)v21 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v21 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ExpWnfReleaseCapturedScopeInstanceId(v19, (PVOID *)&v28, PreviousMode, v14);
  return (unsigned int)v18;
}
