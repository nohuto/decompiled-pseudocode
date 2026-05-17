/*
 * XREFs of _AVrfpSetProcessVerifierOptions@4 @ 0x4B3394F3
 * Callers:
 *     _RtlSetProcessDebugInformation@12 @ 0x4B337540 (_RtlSetProcessDebugInformation@12.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __usercall AVrfpSetProcessVerifierOptions@<eax>(int a1@<ecx>, int a2@<esi>)
{
  int *v3; // ecx
  int v4; // [esp+0h] [ebp-4h] BYREF

  v4 = a1;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x2000100) == 0 )
    return 0;
  v3 = *(int **)(a1 + 72);
  if ( !v3 )
    return -1073741801;
  v4 = *v3;
  return dword_4B3A3798(dword_4B3A3798, 0, &v4, v3, a2);
}
