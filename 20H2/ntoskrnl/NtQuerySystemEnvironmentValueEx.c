/*
 * XREFs of NtQuerySystemEnvironmentValueEx @ 0x1406E0510
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x140340930 (RtlCheckTokenMembershipEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     PsIsProcessAppContainer @ 0x1406CF334 (PsIsProcessAppContainer.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1406E05E0 (ExGetFirmwareEnvironmentVariable.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140952C30 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140952FE4 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQuerySystemEnvironmentValueEx(
        _OWORD *a1,
        __int128 *a2,
        volatile void *a3,
        unsigned int *a4,
        _DWORD *a5)
{
  BOOLEAN v10; // bl
  int v11; // eax
  char v12; // cl
  unsigned __int16 v13; // cx
  size_t v14; // rdi
  char *v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rcx
  _WORD *PoolWithTag; // rax
  _WORD *v20; // rbx
  unsigned int FirmwareEnvironmentVariable; // edi
  char v22[4]; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-84h] BYREF
  int v24; // [rsp+38h] [rbp-80h] BYREF
  PVOID P; // [rsp+40h] [rbp-78h]
  void *Src[2]; // [rsp+58h] [rbp-60h]
  __int128 v27; // [rsp+68h] [rbp-50h] BYREF

  *(_OWORD *)Src = 0LL;
  P = 0LL;
  v27 = 0LL;
  v23 = 0;
  v24 = 0;
  if ( !KeGetCurrentThread()->PreviousMode )
    return ExGetFirmwareEnvironmentVariable((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, (_DWORD)a4, (__int64)a5);
  v10 = SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, 1);
  if ( !v10 )
  {
    if ( PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
      v10 = ExpFirmwareAccessAppContainerCheck(1LL);
    if ( !v10 )
    {
      v22[0] = 0;
      v11 = RtlCheckTokenMembershipEx(0LL, SeExports->SeUserModeDriversSid, 0, v22);
      v12 = v22[0];
      if ( v11 < 0 )
        v12 = 0;
      v22[0] = v12;
      if ( !v12 )
        return 3221225569LL;
    }
  }
  if ( dword_140C19690 != 2 )
    return 3221225474LL;
  if ( ((unsigned __int8)a1 & 3) != 0 )
    goto LABEL_35;
  *(_OWORD *)Src = *a1;
  v13 = _mm_cvtsi128_si32(*(__m128i *)Src);
  if ( !v13 )
    return 3221225477LL;
  if ( ((__int64)Src[1] & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = v13;
  v15 = (char *)Src[1] + v13;
  if ( (unsigned __int64)v15 > 0x7FFFFFFF0000LL || v15 < Src[1] )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( ((unsigned __int8)a2 & 3) != 0 )
LABEL_35:
    ExRaiseDatatypeMisalignment();
  v16 = (__int64)a4;
  if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
    v16 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v16 = *(_DWORD *)v16;
  v17 = *a4;
  v23 = *a4;
  if ( !a3 )
  {
    v23 = 0;
    v17 = 0;
  }
  if ( v17 )
    ProbeForWrite(a3, v17, 1u);
  if ( a5 )
  {
    v18 = (__int64)a5;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v18 = *(_DWORD *)v18;
  }
  v27 = *a2;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v14 + 2, 0x72766E45u);
  v20 = PoolWithTag;
  P = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, Src[1], v14);
  v20[v14 >> 1] = 0;
  FirmwareEnvironmentVariable = ExpGetFirmwareEnvironmentVariable(
                                  (_DWORD)v20,
                                  (unsigned int)&v27,
                                  (_DWORD)a3,
                                  (unsigned int)&v23,
                                  (__int64)&v24,
                                  1);
  ExFreePoolWithTag(v20, 0);
  *a4 = v23;
  if ( a5 )
    *a5 = v24;
  return FirmwareEnvironmentVariable;
}
