/*
 * XREFs of ExpNtDeleteWnfStateData @ 0x1407B7B4C
 * Callers:
 *     NtDeleteWnfStateData @ 0x1407B7B30 (NtDeleteWnfStateData.c)
 *     ExWnfCrossVmCallback @ 0x140951370 (ExWnfCrossVmCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ExpWnfDeleteStateData @ 0x140666870 (ExpWnfDeleteStateData.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x140668BF8 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x140668C54 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x140668CC4 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140668DC4 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140669238 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfCheckCallerAccess @ 0x1406693B0 (ExpWnfCheckCallerAccess.c)
 *     ExpWnfLookupPermanentName @ 0x14068A1F4 (ExpWnfLookupPermanentName.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x14068C1EC (ExpWnfCheckCrossScopeAccess.c)
 *     ExpCrossVmWnfPush @ 0x140957C80 (ExpCrossVmWnfPush.c)
 *     ExpWnfDeletePermanentStateData @ 0x140958134 (ExpWnfDeletePermanentStateData.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpNtDeleteWnfStateData(__int64 *a1, char *a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r14
  int v12; // r13d
  PEPROCESS v13; // rax
  int v14; // eax
  int v15; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // [rsp+30h] [rbp-98h]
  int v20; // [rsp+38h] [rbp-90h]
  struct _EX_RUNDOWN_REF *v21; // [rsp+40h] [rbp-88h] BYREF
  int v22[2]; // [rsp+48h] [rbp-80h] BYREF
  int v23; // [rsp+50h] [rbp-78h]
  int v24; // [rsp+54h] [rbp-74h]
  unsigned __int64 v25; // [rsp+58h] [rbp-70h] BYREF
  int v26[2]; // [rsp+60h] [rbp-68h]
  PVOID P; // [rsp+68h] [rbp-60h] BYREF
  PSID Sid[2]; // [rsp+70h] [rbp-58h] BYREF
  __int128 v29; // [rsp+80h] [rbp-48h] BYREF
  int v30[2]; // [rsp+90h] [rbp-38h] BYREF
  __int64 v31; // [rsp+98h] [rbp-30h] BYREF

  v24 = a3;
  v25 = 0LL;
  Sid[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v22 = 0LL;
  v21 = 0LL;
  v20 = 0;
  v29 = 0LL;
  v19 = ExpCaptureWnfStateName(a1, &v25, PreviousMode);
  if ( v19 >= 0 )
  {
    v9 = v25;
    v10 = (v25 >> 4) & 3;
    v23 = (v25 >> 4) & 3;
    v11 = (v25 >> 6) & 0xF;
    v20 = (v25 >> 6) & 0xF;
    v19 = ExpWnfCaptureScopeInstanceId(v20, a2, v7, (__int64)Sid, (__int64)&v29);
    if ( v19 >= 0 )
    {
      if ( PreviousMode )
      {
        v12 = 0;
        if ( a2 )
        {
          v19 = ExpWnfCheckCrossScopeAccess(v9);
          if ( v19 < 0 )
            goto LABEL_21;
        }
      }
      else
      {
        v12 = 1;
      }
      if ( PreviousMode )
      {
        *(_QWORD *)v30 = KeGetCurrentThread();
        v13 = *(PEPROCESS *)(*(_QWORD *)v30 + 184LL);
        v9 = v25;
        LODWORD(v10) = v23;
        LODWORD(v11) = v20;
      }
      else
      {
        *(_QWORD *)v30 = 0LL;
        v13 = PsInitialSystemProcess;
      }
      *(_QWORD *)v26 = v13;
      if ( (_DWORD)v11 != 5
        || !v24
        || (v31 = v9 ^ 0x41C64E6DA3BC0074LL,
            v17 = ExpCrossVmWnfPush(-1547960204, 1, (unsigned int)&v31, 0, 0LL, 0),
            v19 = v17,
            (int)(v17 + 0x80000000) < 0)
        || v17 == -1073741822 )
      {
        v19 = ExpWnfResolveScopeInstance(
                (struct _EX_RUNDOWN_REF **)v22,
                *(__int64 *)v26,
                *(__int64 *)v30,
                v11,
                (__int64 *)Sid[0]);
        if ( v19 >= 0 )
        {
          v14 = ExpWnfLookupNameInstance(*(__int64 *)v22, v9, (__int64 *)&v21);
          v19 = v14;
          if ( v14 != -1073741772 || (_DWORD)v10 == 3 )
          {
            if ( v14 >= 0 )
            {
              if ( v12 || (v19 = ExpWnfCheckCallerAccess(v21[9].Ptr, 2u), v19 >= 0) )
              {
                if ( (_DWORD)v10 != 3 || v21[19].Count == *(_QWORD *)v26 )
                {
                  if ( (v9 & 0x400) == 0
                    || (v18 = ExpWnfDeletePermanentStateData(*(_QWORD *)v22, v9),
                        v19 = v18,
                        ((v18 + 0x80000000) & 0x80000000) != 0)
                    || v18 == -1073741772 )
                  {
                    ExpWnfDeleteStateData((__int64)v21);
                    if ( (_DWORD)v11 == 5 )
                    {
                      *(_QWORD *)v30 = v9 ^ 0x41C64E6DA3BC0074LL;
                      ExpCrossVmWnfPush(v15, 0, (unsigned int)v30, 0, 0LL, 0);
                    }
                    goto LABEL_20;
                  }
                }
                else
                {
                  v19 = -1073741790;
                }
              }
            }
          }
          else
          {
            v19 = ExpWnfLookupPermanentName(v9, (PSECURITY_DESCRIPTOR **)&P);
            if ( v19 >= 0 )
            {
              if ( v12 || (v19 = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), 2u), v19 >= 0) )
              {
                if ( (v9 & 0x400) == 0 || (v19 = ExpWnfDeletePermanentStateData(*(_QWORD *)v22, v9), v19 == -1073741772) )
LABEL_20:
                  v19 = 0;
              }
            }
          }
        }
      }
    }
  }
LABEL_21:
  if ( v21 )
    ExReleaseRundownProtection_0(v21 + 1);
  if ( *(_QWORD *)v22 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v22 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
  ExpWnfReleaseCapturedScopeInstanceId(v20, (PVOID *)&v29, PreviousMode);
  return (unsigned int)v19;
}
