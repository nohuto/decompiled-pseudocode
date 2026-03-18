/*
 * XREFs of WRITE_PM1_CONTROL @ 0x1C000FA30
 * Callers:
 *     ACPIReleaseGlobalLock @ 0x1C000F0E4 (ACPIReleaseGlobalLock.c)
 *     ACPIEnableInitializeACPI @ 0x1C000FC80 (ACPIEnableInitializeACPI.c)
 *     ACPIReleaseHardwareGlobalLock @ 0x1C005C498 (ACPIReleaseHardwareGlobalLock.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WRITE_PM1_CONTROL(__int16 a1, char a2)
{
  int (__fastcall *v2)(__int64); // rax
  __int64 result; // rax
  __int16 *v4; // r8
  __int16 v5; // [rsp+40h] [rbp+10h] BYREF
  __int16 v6; // [rsp+48h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0;
  v2 = *(int (__fastcall **)(__int64))(PmHalDispatchTable + 120);
  if ( !a2 )
  {
    if ( v2(1LL) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 128))(
        1LL,
        0LL,
        &v6,
        2LL,
        0LL);
      v6 |= v5;
      (*(void (__fastcall **)(__int64, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 136))(
        1LL,
        0LL,
        &v6,
        2LL,
        0LL);
    }
    result = (*(__int64 (__fastcall **)(__int64))(PmHalDispatchTable + 120))(4LL);
    if ( (int)result < 0 )
      return result;
    (*(void (__fastcall **)(__int64, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 128))(
      4LL,
      0LL,
      &v6,
      2LL,
      0LL);
    v4 = &v6;
    v6 |= v5;
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 136))(
             4LL,
             0LL,
             v4,
             2LL,
             0LL);
  }
  if ( v2(1LL) >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 136))(
      1LL,
      0LL,
      &v5,
      2LL,
      0LL);
  result = (*(__int64 (__fastcall **)(__int64))(PmHalDispatchTable + 120))(4LL);
  if ( (int)result >= 0 )
  {
    v4 = &v5;
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 136))(
             4LL,
             0LL,
             v4,
             2LL,
             0LL);
  }
  return result;
}
