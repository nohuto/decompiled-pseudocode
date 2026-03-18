/*
 * XREFs of SeAccessCheckByType @ 0x140294B50
 * Callers:
 *     NtAccessCheck @ 0x14033A040 (NtAccessCheck.c)
 *     NtAccessCheckByType @ 0x140344F60 (NtAccessCheckByType.c)
 *     NtAccessCheckByTypeResultList @ 0x140590850 (NtAccessCheckByTypeResultList.c)
 * Callees:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140294C80 (SeAccessCheckByTypeWithAdminlessChecks.c)
 */

__int64 __fastcall SeAccessCheckByType(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        volatile void *Address,
        int *a9,
        __int64 a10,
        volatile void *a11,
        char a12)
{
  int v13; // edx
  __int64 v14; // rax
  SIZE_T Length; // [rsp+40h] [rbp-48h]

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
      v14 = (__int64)a9;
    v13 = *(_DWORD *)v14;
  }
  else
  {
    v13 = *a9;
  }
  LODWORD(Length) = v13;
  return SeAccessCheckByTypeWithAdminlessChecks(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           Address,
           Length,
           (__int64)a9,
           a10,
           a11,
           a12,
           0);
}
