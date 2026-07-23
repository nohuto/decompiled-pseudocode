/*
 * XREFs of ExpNtDeleteWnfStateData @ 0x1407CD97C
 * Callers:
 *     NtDeleteWnfStateData @ 0x1407CD960 (NtDeleteWnfStateData.c)
 *     ExWnfCrossVmCallback @ 0x140955E70 (ExWnfCrossVmCallback.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x140618AC4 (ExpWnfCheckCrossScopeAccess.c)
 *     ExpWnfLookupPermanentName @ 0x140663338 (ExpWnfLookupPermanentName.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x14069ED98 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x14069EDF4 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x14069EE64 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x14069EF64 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14069F3D8 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfCheckCallerAccess @ 0x14069F550 (ExpWnfCheckCallerAccess.c)
 *     ExpWnfDeleteStateData @ 0x1406A0C24 (ExpWnfDeleteStateData.c)
 *     ExpCrossVmWnfPush @ 0x14095C820 (ExpCrossVmWnfPush.c)
 *     ExpWnfDeletePermanentStateData @ 0x14095CCD4 (ExpWnfDeletePermanentStateData.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpNtDeleteWnfStateData(__int64 *a1, unsigned int *a2, int a3)
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
  __int64 v16; // r9
  int v18; // eax
  int v19; // eax
  int v20; // [rsp+30h] [rbp-98h]
  int v21; // [rsp+38h] [rbp-90h]
  struct _EX_RUNDOWN_REF *v22; // [rsp+40h] [rbp-88h] BYREF
  int v23[2]; // [rsp+48h] [rbp-80h] BYREF
  int v24; // [rsp+50h] [rbp-78h]
  int v25; // [rsp+54h] [rbp-74h]
  unsigned __int64 v26; // [rsp+58h] [rbp-70h] BYREF
  int v27[2]; // [rsp+60h] [rbp-68h]
  PVOID P; // [rsp+68h] [rbp-60h] BYREF
  PSID Sid[2]; // [rsp+70h] [rbp-58h] BYREF
  __int128 v30; // [rsp+80h] [rbp-48h] BYREF
  int v31[2]; // [rsp+90h] [rbp-38h] BYREF
  __int64 v32; // [rsp+98h] [rbp-30h] BYREF

  v25 = a3;
  v26 = 0LL;
  Sid[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v23 = 0LL;
  v22 = 0LL;
  v21 = 0;
  v30 = 0LL;
  v20 = ExpCaptureWnfStateName(a1, &v26, PreviousMode);
  if ( v20 >= 0 )
  {
    v9 = v26;
    v10 = (v26 >> 4) & 3;
    v24 = (v26 >> 4) & 3;
    v11 = (v26 >> 6) & 0xF;
    v21 = (v26 >> 6) & 0xF;
    v20 = ExpWnfCaptureScopeInstanceId(v21, a2, v7, (__int64 *)Sid, (__int64)&v30);
    if ( v20 >= 0 )
    {
      if ( PreviousMode )
      {
        v12 = 0;
        if ( a2 )
        {
          v20 = ExpWnfCheckCrossScopeAccess(v9);
          if ( v20 < 0 )
            goto LABEL_21;
        }
      }
      else
      {
        v12 = 1;
      }
      if ( PreviousMode )
      {
        *(_QWORD *)v31 = KeGetCurrentThread();
        v13 = *(PEPROCESS *)(*(_QWORD *)v31 + 184LL);
        v9 = v26;
        LODWORD(v10) = v24;
        LODWORD(v11) = v21;
      }
      else
      {
        *(_QWORD *)v31 = 0LL;
        v13 = PsInitialSystemProcess;
      }
      *(_QWORD *)v27 = v13;
      if ( (_DWORD)v11 != 5
        || !v25
        || (v32 = v9 ^ 0x41C64E6DA3BC0074LL,
            v18 = ExpCrossVmWnfPush(-1547960204, 1, (unsigned int)&v32, 0, 0LL, 0),
            v20 = v18,
            (int)(v18 + 0x80000000) < 0)
        || v18 == -1073741822 )
      {
        v20 = ExpWnfResolveScopeInstance(
                (struct _EX_RUNDOWN_REF **)v23,
                *(__int64 *)v27,
                *(__int64 *)v31,
                v11,
                (__int64 *)Sid[0]);
        if ( v20 >= 0 )
        {
          v14 = ExpWnfLookupNameInstance(*(__int64 *)v23, v9, (__int64 *)&v22);
          v20 = v14;
          if ( v14 != -1073741772 || (_DWORD)v10 == 3 )
          {
            if ( v14 >= 0 )
            {
              if ( v12 || (v20 = ExpWnfCheckCallerAccess(v22[9].Ptr, 2u), v20 >= 0) )
              {
                if ( (_DWORD)v10 != 3 || v22[19].Count == *(_QWORD *)v27 )
                {
                  if ( (v9 & 0x400) == 0
                    || (v19 = ExpWnfDeletePermanentStateData(*(_QWORD *)v23, v9),
                        v20 = v19,
                        ((v19 + 0x80000000) & 0x80000000) != 0)
                    || v19 == -1073741772 )
                  {
                    ExpWnfDeleteStateData((__int64)v22);
                    if ( (_DWORD)v11 == 5 )
                    {
                      *(_QWORD *)v31 = v9 ^ 0x41C64E6DA3BC0074LL;
                      ExpCrossVmWnfPush(v15, 0, (unsigned int)v31, 0, 0LL, 0);
                    }
                    goto LABEL_20;
                  }
                }
                else
                {
                  v20 = -1073741790;
                }
              }
            }
          }
          else
          {
            v20 = ExpWnfLookupPermanentName(v9, (PSECURITY_DESCRIPTOR **)&P);
            if ( v20 >= 0 )
            {
              if ( v12 || (v20 = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), 2u), v20 >= 0) )
              {
                if ( (v9 & 0x400) == 0 || (v20 = ExpWnfDeletePermanentStateData(*(_QWORD *)v23, v9), v20 == -1073741772) )
LABEL_20:
                  v20 = 0;
              }
            }
          }
        }
      }
    }
  }
LABEL_21:
  if ( v22 )
    ExReleaseRundownProtection(v22 + 1);
  if ( *(_QWORD *)v23 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v23 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
  ExpWnfReleaseCapturedScopeInstanceId(v21, (PVOID *)&v30, PreviousMode, v16);
  return (unsigned int)v20;
}
