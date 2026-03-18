/*
 * XREFs of SeAccessCheckByType @ 0x14022A6B0
 * Callers:
 *     NtAccessCheck @ 0x14022AB60 (NtAccessCheck.c)
 *     NtAccessCheckByType @ 0x140315CC0 (NtAccessCheckByType.c)
 *     NtAccessCheckByTypeResultList @ 0x1405942F0 (NtAccessCheckByTypeResultList.c)
 * Callees:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140229080 (SeAccessCheckByTypeWithAdminlessChecks.c)
 */

__int64 __fastcall SeAccessCheckByType(
        __int16 *a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        _DWORD *Address,
        int *a9,
        unsigned int *a10,
        int *a11,
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
           (unsigned __int64)a9,
           a10,
           a11,
           a12,
           0);
}
