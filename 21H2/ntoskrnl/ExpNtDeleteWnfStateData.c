/*
 * XREFs of ExpNtDeleteWnfStateData @ 0x1407CD80C
 * Callers:
 *     NtDeleteWnfStateData @ 0x1407CD7F0 (NtDeleteWnfStateData.c)
 *     ExWnfCrossVmCallback @ 0x140955CA0 (ExWnfCrossVmCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x14060F2E8 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x14060F344 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x14060F3B4 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x14060F4B4 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14060F928 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfCheckCallerAccess @ 0x14060FAA0 (ExpWnfCheckCallerAccess.c)
 *     ExpWnfDeleteStateData @ 0x140611174 (ExpWnfDeleteStateData.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x14062C0FC (ExpWnfCheckCrossScopeAccess.c)
 *     ExpWnfLookupPermanentName @ 0x14062C1A8 (ExpWnfLookupPermanentName.c)
 *     ExpCrossVmWnfPush @ 0x14095C660 (ExpCrossVmWnfPush.c)
 *     ExpWnfDeletePermanentStateData @ 0x14095CB14 (ExpWnfDeletePermanentStateData.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpNtDeleteWnfStateData(__int64 *a1, char *a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  __int64 v6; // r8
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r14
  int v10; // r13d
  PEPROCESS v11; // rax
  int v12; // eax
  int v13; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // [rsp+30h] [rbp-98h]
  int v18; // [rsp+38h] [rbp-90h]
  struct _EX_RUNDOWN_REF *v19; // [rsp+40h] [rbp-88h] BYREF
  int v20[2]; // [rsp+48h] [rbp-80h] BYREF
  int v21; // [rsp+50h] [rbp-78h]
  int v22; // [rsp+54h] [rbp-74h]
  unsigned __int64 v23; // [rsp+58h] [rbp-70h] BYREF
  int v24[2]; // [rsp+60h] [rbp-68h]
  PVOID P; // [rsp+68h] [rbp-60h] BYREF
  PSID Sid[2]; // [rsp+70h] [rbp-58h] BYREF
  __int128 v27; // [rsp+80h] [rbp-48h] BYREF
  int v28[2]; // [rsp+90h] [rbp-38h] BYREF
  __int64 v29; // [rsp+98h] [rbp-30h] BYREF

  v22 = a3;
  v23 = 0LL;
  Sid[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v20 = 0LL;
  v19 = 0LL;
  v18 = 0;
  v27 = 0LL;
  v17 = ExpCaptureWnfStateName(a1, &v23, PreviousMode);
  if ( v17 >= 0 )
  {
    v7 = v23;
    v8 = (v23 >> 4) & 3;
    v21 = (v23 >> 4) & 3;
    v9 = (v23 >> 6) & 0xF;
    v18 = (v23 >> 6) & 0xF;
    v17 = ExpWnfCaptureScopeInstanceId(v18, a2, v6, (__int64)Sid, (__int64)&v27);
    if ( v17 >= 0 )
    {
      if ( PreviousMode )
      {
        v10 = 0;
        if ( a2 )
        {
          v17 = ExpWnfCheckCrossScopeAccess(v7);
          if ( v17 < 0 )
            goto LABEL_21;
        }
      }
      else
      {
        v10 = 1;
      }
      if ( PreviousMode )
      {
        *(_QWORD *)v28 = KeGetCurrentThread();
        v11 = *(PEPROCESS *)(*(_QWORD *)v28 + 184LL);
        v7 = v23;
        LODWORD(v8) = v21;
        LODWORD(v9) = v18;
      }
      else
      {
        *(_QWORD *)v28 = 0LL;
        v11 = PsInitialSystemProcess;
      }
      *(_QWORD *)v24 = v11;
      if ( (_DWORD)v9 != 5
        || !v22
        || (v29 = v7 ^ 0x41C64E6DA3BC0074LL,
            v15 = ExpCrossVmWnfPush(-1547960204, 1, (unsigned int)&v29, 0, 0LL, 0),
            v17 = v15,
            (int)(v15 + 0x80000000) < 0)
        || v15 == -1073741822 )
      {
        v17 = ExpWnfResolveScopeInstance(
                (struct _EX_RUNDOWN_REF **)v20,
                *(__int64 *)v24,
                *(__int64 *)v28,
                v9,
                (__int64 *)Sid[0]);
        if ( v17 >= 0 )
        {
          v12 = ExpWnfLookupNameInstance(*(__int64 *)v20, v7, (__int64 *)&v19);
          v17 = v12;
          if ( v12 != -1073741772 || (_DWORD)v8 == 3 )
          {
            if ( v12 >= 0 )
            {
              if ( v10 || (v17 = ExpWnfCheckCallerAccess(v19[9].Ptr, 2u), v17 >= 0) )
              {
                if ( (_DWORD)v8 != 3 || v19[19].Count == *(_QWORD *)v24 )
                {
                  if ( (v7 & 0x400) == 0
                    || (v16 = ExpWnfDeletePermanentStateData(*(_QWORD *)v20, v7),
                        v17 = v16,
                        ((v16 + 0x80000000) & 0x80000000) != 0)
                    || v16 == -1073741772 )
                  {
                    ExpWnfDeleteStateData((__int64)v19);
                    if ( (_DWORD)v9 == 5 )
                    {
                      *(_QWORD *)v28 = v7 ^ 0x41C64E6DA3BC0074LL;
                      ExpCrossVmWnfPush(v13, 0, (unsigned int)v28, 0, 0LL, 0);
                    }
                    goto LABEL_20;
                  }
                }
                else
                {
                  v17 = -1073741790;
                }
              }
            }
          }
          else
          {
            v17 = ExpWnfLookupPermanentName(v7, (PSECURITY_DESCRIPTOR **)&P);
            if ( v17 >= 0 )
            {
              if ( v10 || (v17 = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), 2u), v17 >= 0) )
              {
                if ( (v7 & 0x400) == 0 || (v17 = ExpWnfDeletePermanentStateData(*(_QWORD *)v20, v7), v17 == -1073741772) )
LABEL_20:
                  v17 = 0;
              }
            }
          }
        }
      }
    }
  }
LABEL_21:
  if ( v19 )
    ExReleaseRundownProtection_0(v19 + 1);
  if ( *(_QWORD *)v20 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v20 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ExpWnfReleaseCapturedScopeInstanceId(v18, (PVOID *)&v27, PreviousMode);
  return (unsigned int)v17;
}
