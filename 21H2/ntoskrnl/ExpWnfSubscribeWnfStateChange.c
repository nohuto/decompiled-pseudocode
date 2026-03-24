/*
 * XREFs of ExpWnfSubscribeWnfStateChange @ 0x14060EAF4
 * Callers:
 *     NtSubscribeWnfStateChange @ 0x14060EA20 (NtSubscribeWnfStateChange.c)
 *     ExSubscribeWnfStateChange @ 0x1406B17B0 (ExSubscribeWnfStateChange.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExpWnfCreateNameInstance @ 0x14060DA34 (ExpWnfCreateNameInstance.c)
 *     ExpCaptureWnfStateName @ 0x14060F344 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x14060F3B4 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x14060F4B4 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCheckCallerAccess @ 0x14060FAA0 (ExpWnfCheckCallerAccess.c)
 *     ExpWnfSubscribeNameInstance @ 0x14060FD38 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfLookupPermanentName @ 0x14062C1A8 (ExpWnfLookupPermanentName.c)
 *     ExpWnfNotifySubscription @ 0x1406AB524 (ExpWnfNotifySubscription.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfSubscribeWnfStateChange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        char a8)
{
  ACCESS_MASK v8; // r14d
  int v9; // esi
  char v10; // r8
  unsigned __int64 v11; // rbx
  __int64 v12; // r15
  int v13; // r13d
  struct _KPROCESS *Process; // rax
  int v15; // eax
  int v16; // r15d
  struct _EX_RUNDOWN_REF *v17; // rbx
  BOOL v18; // ecx
  int v19; // r8d
  __int64 v20; // r8
  struct _EX_RUNDOWN_REF *v22; // [rsp+68h] [rbp-70h] BYREF
  int v23; // [rsp+70h] [rbp-68h] BYREF
  PVOID P; // [rsp+78h] [rbp-60h] BYREF
  struct _KPROCESS *v25; // [rsp+80h] [rbp-58h]
  int v26[2]; // [rsp+88h] [rbp-50h] BYREF
  int v27; // [rsp+90h] [rbp-48h]
  unsigned __int64 v28; // [rsp+98h] [rbp-40h] BYREF
  struct _EX_RUNDOWN_REF *v29; // [rsp+A0h] [rbp-38h] BYREF

  v28 = 0LL;
  v23 = 0;
  P = 0LL;
  *(_QWORD *)v26 = 0LL;
  v22 = 0LL;
  v29 = 0LL;
  v8 = 0;
  v9 = ExpCaptureWnfStateName(a3, &v28);
  v27 = v9;
  if ( v9 >= 0 )
  {
    if ( (a7 & 0xFFFFFFE0) != 0 )
    {
      v9 = -1073741811;
      goto LABEL_24;
    }
    v11 = v28;
    v12 = (v28 >> 4) & 3;
    if ( v10 )
    {
      v13 = 0;
      v8 = (a7 & 0x11) != 0;
      if ( (a7 & 0xFFFFFFEE) != 0 )
        v8 |= 2u;
    }
    else
    {
      v13 = 1;
    }
    if ( v10 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v11 = v28;
    }
    else
    {
      Process = PsInitialSystemProcess;
    }
    v25 = Process;
    v9 = ExpWnfResolveScopeInstance((int)v26, (int)Process, 0, (v28 >> 6) & 0xF, 0LL);
    if ( v9 >= 0 )
    {
      v15 = ExpWnfLookupNameInstance(*(_QWORD *)v26, v11, &v22);
      v9 = v15;
      if ( v15 != -1073741772 || (_DWORD)v12 == 3 )
      {
        if ( v15 < 0 )
          goto LABEL_24;
        if ( !v13 )
        {
          v9 = ExpWnfCheckCallerAccess(v22[9].Ptr, v8);
          if ( v9 < 0 )
            goto LABEL_24;
        }
        v16 = (int)v25;
      }
      else
      {
        v9 = ExpWnfLookupPermanentName(v11, &P);
        if ( v9 < 0 )
          goto LABEL_24;
        if ( !v13 )
        {
          v9 = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), v8);
          if ( v9 < 0 )
            goto LABEL_24;
        }
        v16 = (int)v25;
        v9 = ExpWnfCreateNameInstance(*(unsigned __int64 *)v26, v11, (__int64)P, v25, &v22);
        ExFreePoolWithTag(P, 0x20666E57u);
        P = 0LL;
        if ( v9 < 0 )
          goto LABEL_24;
      }
      v17 = v22;
      v9 = ExpWnfSubscribeNameInstance((_DWORD)v22, v16, a5, a6, a4, a7, a8, a1, a2, (__int64)&v29, (__int64)&v23);
      if ( v9 >= 0 )
      {
        v18 = 0;
        if ( a4 != LODWORD(v17[12].Count) )
          v18 = v17[11].Count != 0;
        v19 = v18 | 8;
        if ( HIDWORD(v22[20].Ptr) )
          v19 = v18;
        if ( !v23 )
        {
          if ( LODWORD(v22[20].Count) )
            v19 |= 2u;
          else
            v19 |= 4u;
        }
        v20 = a7 & (unsigned int)v19;
        if ( (_DWORD)v20 )
          ExpWnfNotifySubscription(v22, v29, v20, a8 != 0);
      }
    }
  }
LABEL_24:
  if ( v29 )
    ExReleaseRundownProtection_0(v29 + 1);
  if ( v22 )
    ExReleaseRundownProtection_0(v22 + 1);
  if ( *(_QWORD *)v26 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v26 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  return (unsigned int)v9;
}
