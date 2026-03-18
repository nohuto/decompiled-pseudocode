/*
 * XREFs of ProcessorpFindIdtEntriesApic @ 0x1C0092C10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C0092E50 (ProcessorpFindAffinitizedIdtEntries.c)
 *     IcIsInterruptTypeSecondary @ 0x1C00931C8 (IcIsInterruptTypeSecondary.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C0093390 (ProcessorGetDeviceIdtAssignment.c)
 *     ProcessorpValidateTargetSet @ 0x1C0093EF8 (ProcessorpValidateTargetSet.c)
 *     IrqPolicyGetDevicePolicy @ 0x1C0094728 (IrqPolicyGetDevicePolicy.c)
 *     ProcessorpSelectProcessorSet @ 0x1C009584C (ProcessorpSelectProcessorSet.c)
 *     IrqPolicyQueryInterruptSteeringEnabled @ 0x1C0097758 (IrqPolicyQueryInterruptSteeringEnabled.c)
 *     ProcessorpGetSecondaryInterruptAffinity @ 0x1C00B6B34 (ProcessorpGetSecondaryInterruptAffinity.c)
 */

__int64 __fastcall ProcessorpFindIdtEntriesApic(
        PDEVICE_OBJECT Pdo,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        char a7,
        unsigned int a8)
{
  int DeviceIdtAssignment; // r14d
  int DevicePolicy; // eax
  char v13; // r14
  unsigned __int16 v14; // si
  char IsInterruptTypeSecondary; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r8d
  char v19; // al
  int v20; // r9d
  __int64 result; // rax
  __int128 v22; // xmm0
  char v23; // al
  int SecondaryInterruptAffinity; // ecx
  int v25; // r8d
  int v26; // r9d
  __int128 v27; // xmm0
  __int128 v28; // xmm0
  unsigned int v29; // r13d
  int v30; // r8d
  int v31; // r9d
  char v32; // cl
  _BYTE v33[4]; // [rsp+50h] [rbp-69h] BYREF
  _WORD v34[2]; // [rsp+54h] [rbp-65h] BYREF
  int v35; // [rsp+58h] [rbp-61h] BYREF
  unsigned int v36; // [rsp+5Ch] [rbp-5Dh]
  __int128 v37; // [rsp+60h] [rbp-59h] BYREF
  int v38; // [rsp+70h] [rbp-49h]
  PDEVICE_OBJECT v39; // [rsp+78h] [rbp-41h]
  __int128 v40; // [rsp+80h] [rbp-39h] BYREF
  __int64 v41; // [rsp+90h] [rbp-29h]
  __int128 v42; // [rsp+98h] [rbp-21h] BYREF
  __int128 v43; // [rsp+A8h] [rbp-11h]

  v36 = a4;
  v39 = Pdo;
  v38 = 0;
  v33[0] = 0;
  v35 = 0;
  v34[0] = 0;
  v41 = 0LL;
  v40 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v37 = 0LL;
  DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(0LL, a5, a8, &v42);
  if ( DeviceIdtAssignment >= 0 )
  {
    v28 = v42;
    *(_DWORD *)(a3 + 32) = DWORD1(v43);
    v34[0] = IrqMachinePolicy;
    *(_BYTE *)(a3 + 4) = 1;
    *(_OWORD *)(a3 + 16) = v28;
    IrqPolicyGetDevicePolicy(Pdo, (__int64)v34, (__int64)v33);
    *(_WORD *)(a3 + 6) = v34[0];
    return (unsigned int)DeviceIdtAssignment;
  }
  if ( *(_BYTE *)(a3 + 4) )
  {
    v14 = *(_WORD *)(a3 + 6);
    v13 = *(_BYTE *)(a3 + 8);
    v37 = *(_OWORD *)(a3 + 16);
  }
  else
  {
    DevicePolicy = IrqPolicyGetDevicePolicy(Pdo, (__int64)v34, (__int64)v33);
    v13 = v33[0];
    if ( DevicePolicy < 0 )
    {
      v14 = IrqMachinePolicy;
      v37 = 0LL;
    }
    else
    {
      v14 = v34[0];
    }
  }
  IsInterruptTypeSecondary = IcIsInterruptTypeSecondary(a5);
  v18 = 0;
  if ( IsInterruptTypeSecondary )
  {
    v29 = v36;
    SecondaryInterruptAffinity = ProcessorpGetSecondaryInterruptAffinity(v17, v36, &v37);
    if ( SecondaryInterruptAffinity >= 0 )
    {
      v13 = 0;
      LOBYTE(v31) = a7 & 1;
      SecondaryInterruptAffinity = ProcessorpFindAffinitizedIdtEntries(
                                     (_DWORD)v39,
                                     (unsigned int)&v37,
                                     v30,
                                     v31,
                                     v29,
                                     a5,
                                     a6,
                                     a8,
                                     (__int64)&v35);
LABEL_16:
      if ( SecondaryInterruptAffinity >= 0 )
      {
        v27 = v37;
        *(_DWORD *)(a3 + 32) = v35;
        *(_OWORD *)(a3 + 16) = v27;
        *(_WORD *)(a3 + 6) = v14;
        *(_BYTE *)(a3 + 8) = v13;
        *(_BYTE *)(a3 + 4) = 1;
      }
    }
    return (unsigned int)SecondaryInterruptAffinity;
  }
  if ( !(_QWORD)v37 )
    goto LABEL_11;
  v19 = ProcessorpValidateTargetSet(&v37, v16, 0LL);
  v18 = 0;
  if ( v19 )
  {
    LOBYTE(v20) = a7 & 1;
    result = ProcessorpFindAffinitizedIdtEntries(
               (_DWORD)v39,
               (unsigned int)&v37,
               0,
               v20,
               v36,
               a5,
               a6,
               a8,
               (__int64)&v35);
    v18 = 0;
    LODWORD(v16) = result;
    if ( (int)result >= 0 )
    {
      v22 = v37;
      *(_DWORD *)(a3 + 32) = v35;
      *(_OWORD *)(a3 + 16) = v22;
      *(_WORD *)(a3 + 6) = v14;
      *(_BYTE *)(a3 + 8) = v13;
      *(_BYTE *)(a3 + 4) = 1;
      return result;
    }
  }
  else
  {
    LODWORD(v16) = -1073741637;
  }
  if ( v14 != 4 )
  {
LABEL_11:
    if ( IrqMachinePolicy == 6 )
    {
      v42 = 0LL;
      LODWORD(v42) = a5;
      BYTE6(v42) = 1;
      *(_QWORD *)&v43 = 0LL;
      v32 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
      if ( a5 + 0x100000 > 0xFFFFE )
        v32 = 1;
      BYTE4(v42) = v32;
      BYTE5(v42) = a6 & 1;
      *((_QWORD *)&v42 + 1) = KeQueryGroupAffinity(0);
      v23 = IrqPolicyQueryInterruptSteeringEnabled(&v42);
      v18 = 0;
    }
    else
    {
      v23 = 0;
    }
    v35 = 0;
    while ( 1 )
    {
      LOBYTE(v18) = v23;
      LOBYTE(v16) = v13;
      SecondaryInterruptAffinity = ProcessorpSelectProcessorSet(v14, v16, v18, (unsigned int)&v37, (__int64)&v40);
      if ( SecondaryInterruptAffinity < 0 )
        return (unsigned int)SecondaryInterruptAffinity;
      LOBYTE(v26) = a7 & 1;
      SecondaryInterruptAffinity = ProcessorpFindAffinitizedIdtEntries(
                                     (_DWORD)v39,
                                     (unsigned int)&v37,
                                     v25,
                                     v26,
                                     v36,
                                     a5,
                                     a6,
                                     a8,
                                     (__int64)&v35);
      v23 = 0;
      if ( SecondaryInterruptAffinity >= 0 )
        goto LABEL_16;
    }
  }
  if ( !a2 || (*(_BYTE *)(a2 + 4) & 4) == 0 )
  {
    v14 = IrqMachinePolicy;
    goto LABEL_11;
  }
  return (unsigned int)v16;
}
