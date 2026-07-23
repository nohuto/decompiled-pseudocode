/*
 * XREFs of NtQuerySystemEnvironmentValueEx @ 0x1406EA3F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x14035C130 (RtlCheckTokenMembershipEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     PsIsProcessAppContainer @ 0x1406D8FA4 (PsIsProcessAppContainer.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1406EA4C0 (ExGetFirmwareEnvironmentVariable.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x14094BAD0 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14094BE84 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __cdecl NtQuerySystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        PCGUID VendorGuid,
        PVOID Value,
        PULONG ValueLength,
        PULONG Attributes)
{
  BOOLEAN v10; // bl
  NTSTATUS v11; // eax
  BOOLEAN v12; // cl
  unsigned __int16 v13; // cx
  size_t v14; // rdi
  char *v15; // rcx
  __int64 v16; // rcx
  ULONG v17; // eax
  __int64 v18; // rcx
  _WORD *PoolWithTag; // rax
  _WORD *v20; // rbx
  NTSTATUS FirmwareEnvironmentVariable; // edi
  BOOLEAN IsMember[4]; // [rsp+30h] [rbp-88h] BYREF
  ULONG v23; // [rsp+34h] [rbp-84h] BYREF
  ULONG v24; // [rsp+38h] [rbp-80h] BYREF
  PVOID P; // [rsp+40h] [rbp-78h]
  void *Src[2]; // [rsp+58h] [rbp-60h]
  GUID v27; // [rsp+68h] [rbp-50h] BYREF

  *(_OWORD *)Src = 0LL;
  P = 0LL;
  v27 = 0LL;
  v23 = 0;
  v24 = 0;
  if ( !KeGetCurrentThread()->PreviousMode )
    return ExGetFirmwareEnvironmentVariable(
             (_DWORD)VariableName,
             (_DWORD)VendorGuid,
             (_DWORD)Value,
             (_DWORD)ValueLength,
             (__int64)Attributes);
  v10 = SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, 1);
  if ( !v10 )
  {
    if ( PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
      v10 = ExpFirmwareAccessAppContainerCheck(1LL);
    if ( !v10 )
    {
      IsMember[0] = 0;
      v11 = RtlCheckTokenMembershipEx(0LL, SeExports->SeUserModeDriversSid, 0, IsMember);
      v12 = IsMember[0];
      if ( v11 < 0 )
        v12 = 0;
      IsMember[0] = v12;
      if ( !v12 )
        return -1073741727;
    }
  }
  if ( dword_140C19730 != 2 )
    return -1073741822;
  if ( ((unsigned __int8)VariableName & 3) != 0 )
    goto LABEL_35;
  *(UNICODE_STRING *)Src = *VariableName;
  v13 = _mm_cvtsi128_si32(*(__m128i *)Src);
  if ( !v13 )
    return -1073741819;
  if ( ((__int64)Src[1] & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = v13;
  v15 = (char *)Src[1] + v13;
  if ( (unsigned __int64)v15 > 0x7FFFFFFF0000LL || v15 < Src[1] )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( ((unsigned __int8)VendorGuid & 3) != 0 )
LABEL_35:
    ExRaiseDatatypeMisalignment();
  v16 = (__int64)ValueLength;
  if ( (unsigned __int64)ValueLength >= 0x7FFFFFFF0000LL )
    v16 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v16 = *(_DWORD *)v16;
  v17 = *ValueLength;
  v23 = *ValueLength;
  if ( !Value )
  {
    v23 = 0;
    v17 = 0;
  }
  if ( v17 )
    ProbeForWrite(Value, v17, 1u);
  if ( Attributes )
  {
    v18 = (__int64)Attributes;
    if ( (unsigned __int64)Attributes >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v18 = *(_DWORD *)v18;
  }
  v27 = *VendorGuid;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v14 + 2, 0x72766E45u);
  v20 = PoolWithTag;
  P = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memmove(PoolWithTag, Src[1], v14);
  v20[v14 >> 1] = 0;
  FirmwareEnvironmentVariable = ExpGetFirmwareEnvironmentVariable(
                                  (_DWORD)v20,
                                  (unsigned int)&v27,
                                  (_DWORD)Value,
                                  (unsigned int)&v23,
                                  (__int64)&v24,
                                  1);
  ExFreePoolWithTag(v20, 0);
  *ValueLength = v23;
  if ( Attributes )
    *Attributes = v24;
  return FirmwareEnvironmentVariable;
}
