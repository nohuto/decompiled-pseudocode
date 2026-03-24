/*
 * XREFs of NtSetSystemEnvironmentValueEx @ 0x140955660
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403D2210 (_wcsnicmp.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140627640 (SeSinglePrivilegeCheck.c)
 *     PsIsProcessAppContainer @ 0x1406AD854 (PsIsProcessAppContainer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BDF0 (ExRaiseDatatypeMisalignment.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x14094F4A0 (ExSetFirmwareEnvironmentVariable.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140950400 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x140951ECC (ExpSetFirmwareEnvironmentVariable.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall NtSetSystemEnvironmentValueEx(__m128i *a1, __int128 *a2, unsigned __int64 a3, int a4, int a5)
{
  unsigned __int16 v8; // cx
  size_t v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  size_t *PoolWithTag; // rax
  size_t *v13; // rdi
  __int64 v14; // rax
  unsigned int v15; // ebx
  char v16; // [rsp+30h] [rbp-78h]
  unsigned int v17; // [rsp+38h] [rbp-70h]
  __m128i Src; // [rsp+50h] [rbp-58h]
  __int128 v19; // [rsp+68h] [rbp-40h] BYREF

  v19 = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return ExSetFirmwareEnvironmentVariable((__int64)a1, (int)a2, a3, a4, a5);
  if ( dword_140C19850 != 2 )
    return 3221225474LL;
  if ( ((unsigned __int8)a1 & 3) != 0 )
    goto LABEL_31;
  Src = *a1;
  v8 = _mm_cvtsi128_si32(*a1);
  if ( !v8 )
    return 3221225477LL;
  if ( (Src.m128i_i8[8] & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = v8;
  v10 = v8 + Src.m128i_i64[1];
  if ( v10 > 0x7FFFFFFF0000LL || v10 < Src.m128i_i64[1] )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( ((unsigned __int8)a2 & 3) != 0 )
LABEL_31:
    ExRaiseDatatypeMisalignment();
  v17 = a3 != 0 ? a4 : 0;
  if ( v17 )
  {
    v11 = a3 + (a4 & (unsigned int)-(a3 != 0));
    if ( v11 > 0x7FFFFFFF0000LL || v11 < a3 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v16 = SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, 1);
  if ( v16 )
    goto LABEL_23;
  if ( PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
    v16 = ExpFirmwareAccessAppContainerCheck(2);
  if ( !v16 )
    return 3221225569LL;
LABEL_23:
  v19 = *a2;
  PoolWithTag = (size_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v9 + 2, 0x72766E45u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, (const void *)Src.m128i_i64[1], v9);
  *((_WORD *)v13 + (v9 >> 1)) = 0;
  v14 = v19 - ExpSecureBootVendorGuid;
  if ( (_QWORD)v19 == ExpSecureBootVendorGuid )
    v14 = *((_QWORD *)&v19 + 1) - 0x4B788FE7F42860BDLL;
  if ( v14 || wcsnicmp((const wchar_t *)v13, L"Kernel_", 7uLL) )
  {
    v15 = ExpSetFirmwareEnvironmentVariable(v13, (__int64)&v19, a3, v17, a5, 1);
    ExFreePoolWithTag(v13, 0);
    return v15;
  }
  else
  {
    ExFreePoolWithTag(v13, 0);
    return 3221225506LL;
  }
}
