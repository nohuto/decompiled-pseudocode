/*
 * XREFs of NtQuerySystemEnvironmentValueEx @ 0x1406DC9F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x1402E0CA0 (RtlCheckTokenMembershipEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     PsIsProcessAppContainer @ 0x1406C9928 (PsIsProcessAppContainer.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1406DCAC0 (ExGetFirmwareEnvironmentVariable.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409FC784 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1409FCB38 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
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
  __int64 v13; // rbx
  unsigned __int16 v14; // cx
  size_t v15; // rdi
  char *v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // eax
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
    if ( PsIsProcessAppContainer((__int64)KeGetCurrentThread()->ApcState.Process) )
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
  if ( dword_140C15C70 != 2 )
    return 3221225474LL;
  if ( ((unsigned __int8)a1 & 3) != 0 )
    goto LABEL_35;
  v13 = 0x7FFFFFFF0000LL;
  *(_OWORD *)Src = *a1;
  v14 = _mm_cvtsi128_si32(*(__m128i *)Src);
  if ( !v14 )
    return 3221225477LL;
  if ( ((__int64)Src[1] & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = v14;
  v16 = (char *)Src[1] + v14;
  if ( (unsigned __int64)v16 > 0x7FFFFFFF0000LL || v16 < Src[1] )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( ((unsigned __int8)a2 & 3) != 0 )
LABEL_35:
    ExRaiseDatatypeMisalignment();
  v17 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
    v17 = (__int64)a4;
  *(_DWORD *)v17 = *(_DWORD *)v17;
  v18 = *a4;
  v23 = *a4;
  if ( !a3 )
  {
    v23 = 0;
    v18 = 0;
  }
  if ( v18 )
    ProbeForWrite(a3, v18, 1u);
  if ( a5 )
  {
    if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
      v13 = (__int64)a5;
    *(_DWORD *)v13 = *(_DWORD *)v13;
  }
  v27 = *a2;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v15 + 2, 0x72766E45u);
  v20 = PoolWithTag;
  P = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, Src[1], v15);
  v20[v15 >> 1] = 0;
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
