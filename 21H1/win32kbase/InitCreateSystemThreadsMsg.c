/*
 * XREFs of InitCreateSystemThreadsMsg @ 0x1C004EB10
 * Callers:
 *     ?SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z @ 0x1C0125678 (-SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z.c)
 * Callees:
 *     CSTPush @ 0x1C004EB70 (CSTPush.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

__int64 __fastcall InitCreateSystemThreadsMsg(_DWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax

  if ( !(unsigned int)CSTPush(a2, a3) )
    return 0LL;
  memset(a1, 0, 0x3B8uLL);
  result = 1LL;
  *a1 = 62391184;
  a1[12] = 197636;
  return result;
}
