/*
 * XREFs of NtLoadKeyEx @ 0x14066E520
 * Callers:
 *     NtLoadKey @ 0x140781B80 (NtLoadKey.c)
 * Callees:
 *     CmLoadDifferencingKey @ 0x14066E58C (CmLoadDifferencingKey.c)
 */

__int64 __fastcall NtLoadKeyEx(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        ACCESS_MASK DesiredAccess,
        __int64 a7,
        __int64 a8)
{
  return CmLoadDifferencingKey(
           a1,
           a2,
           a3,
           a4,
           a5,
           DesiredAccess,
           a7,
           a8,
           0LL,
           0,
           0LL,
           KeGetCurrentThread()->PreviousMode);
}
