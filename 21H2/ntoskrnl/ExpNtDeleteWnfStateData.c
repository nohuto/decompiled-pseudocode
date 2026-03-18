/*
 * XREFs of ExpNtDeleteWnfStateData @ 0x14085EB0C
 * Callers:
 *     NtDeleteWnfStateData @ 0x14085EAF0 (NtDeleteWnfStateData.c)
 *     ExWnfCrossVmCallback @ 0x140A01DB0 (ExWnfCrossVmCallback.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExpCrossVmWnfPush @ 0x1406E7820 (ExpCrossVmWnfPush.c)
 *     ExpWnfLookupPermanentName @ 0x14075A12C (ExpWnfLookupPermanentName.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x14075ADF8 (ExpWnfCheckCrossScopeAccess.c)
 *     ExpWnfDeleteStateData @ 0x14079204C (ExpWnfDeleteStateData.c)
 *     ExpWnfCheckCallerAccess @ 0x140794654 (ExpWnfCheckCallerAccess.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1407946F8 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x14079474C (ExpCaptureWnfStateName.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1407947BC (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfLookupNameInstance @ 0x140798234 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140798334 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfDeletePermanentStateData @ 0x140A082E4 (ExpWnfDeletePermanentStateData.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpNtDeleteWnfStateData(__int64 *a1, char *a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r15
  unsigned __int64 v6; // r14
  int v7; // esi
  __int64 v8; // r8
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r12
  PEPROCESS v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  int v15; // eax
  int v16; // [rsp+34h] [rbp-94h]
  int v17; // [rsp+38h] [rbp-90h]
  struct _EX_RUNDOWN_REF *v18; // [rsp+40h] [rbp-88h] BYREF
  int v19[2]; // [rsp+48h] [rbp-80h] BYREF
  int v20; // [rsp+50h] [rbp-78h]
  int v21; // [rsp+54h] [rbp-74h]
  unsigned __int64 v22; // [rsp+58h] [rbp-70h] BYREF
  int v23[2]; // [rsp+60h] [rbp-68h]
  PVOID P; // [rsp+68h] [rbp-60h] BYREF
  PSID Sid; // [rsp+70h] [rbp-58h] BYREF
  int v26[2]; // [rsp+78h] [rbp-50h]
  __int128 v27; // [rsp+88h] [rbp-40h] BYREF
  __int64 v28; // [rsp+98h] [rbp-30h] BYREF

  v21 = a3;
  v22 = 0LL;
  Sid = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v19 = 0LL;
  v18 = 0LL;
  LODWORD(v6) = 0;
  v27 = 0LL;
  v7 = ExpCaptureWnfStateName(a1, &v22, PreviousMode);
  if ( v7 >= 0 )
  {
    v9 = v22;
    v10 = (v22 >> 4) & 3;
    v20 = (v22 >> 4) & 3;
    v6 = (v22 >> 6) & 0xF;
    v17 = (v22 >> 6) & 0xF;
    v7 = ExpWnfCaptureScopeInstanceId(v17, a2, v8, (__int64)&Sid, (__int64)&v27);
    if ( v7 >= 0 )
    {
      if ( PreviousMode )
      {
        v16 = 0;
        if ( a2 )
        {
          v7 = ExpWnfCheckCrossScopeAccess(v9);
          if ( v7 < 0 )
            goto LABEL_21;
        }
      }
      else
      {
        v16 = 1;
      }
      if ( PreviousMode )
      {
        *(_QWORD *)v26 = KeGetCurrentThread();
        v11 = *(PEPROCESS *)(*(_QWORD *)v26 + 184LL);
        v9 = v22;
        LODWORD(v10) = v20;
        LODWORD(v6) = v17;
      }
      else
      {
        *(_QWORD *)v26 = 0LL;
        v11 = PsInitialSystemProcess;
      }
      *(_QWORD *)v23 = v11;
      if ( (_DWORD)v6 != 5
        || !v21
        || (v28 = v9 ^ 0x41C64E6DA3BC0074LL,
            v15 = ExpCrossVmWnfPush(0x41C64E6DA3BC0074LL, 1u, (__int64)&v28, 0, 0LL, 0),
            (v7 = v15, (int)(v15 + 0x80000000) < 0) || v15 == -1073741822) )
      {
        v7 = ExpWnfResolveScopeInstance(
               (struct _EX_RUNDOWN_REF **)v19,
               *(__int64 *)v23,
               *(__int64 *)v26,
               v6,
               (__int64 *)Sid);
        if ( v7 >= 0 )
        {
          v12 = ExpWnfLookupNameInstance(*(__int64 *)v19, v9, (__int64 *)&v18);
          v7 = v12;
          if ( v12 != -1073741772 || (_DWORD)v10 == 3 )
          {
            if ( v12 >= 0 )
            {
              if ( v16 || (v7 = ExpWnfCheckCallerAccess(v18[9].Ptr, 2u), v7 >= 0) )
              {
                if ( (_DWORD)v10 != 3 || v18[19].Count == *(_QWORD *)v23 )
                {
                  if ( (v9 & 0x400) == 0
                    || (v7 = ExpWnfDeletePermanentStateData(*(_QWORD *)v19, v9), ((v7 + 0x80000000) & 0x80000000) != 0)
                    || v7 == -1073741772 )
                  {
                    ExpWnfDeleteStateData((__int64)v18);
                    if ( (_DWORD)v6 == 5 )
                    {
                      v28 = v9 ^ 0x41C64E6DA3BC0074LL;
                      ExpCrossVmWnfPush(v13, 0, (__int64)&v28, 0, 0LL, 0);
                    }
                    goto LABEL_20;
                  }
                }
                else
                {
                  v7 = -1073741790;
                }
              }
            }
          }
          else
          {
            v7 = ExpWnfLookupPermanentName(v9, (PSECURITY_DESCRIPTOR **)&P);
            if ( v7 >= 0 )
            {
              if ( v16 || (v7 = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), 2u), v7 >= 0) )
              {
                if ( (v9 & 0x400) == 0 || (v7 = ExpWnfDeletePermanentStateData(*(_QWORD *)v19, v9), v7 == -1073741772) )
LABEL_20:
                  v7 = 0;
              }
            }
          }
        }
      }
    }
  }
LABEL_21:
  if ( v18 )
    ExReleaseRundownProtection(v18 + 1);
  if ( *(_QWORD *)v19 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v19 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegion();
  ExpWnfReleaseCapturedScopeInstanceId(v6, (PVOID *)&v27, PreviousMode);
  return (unsigned int)v7;
}
