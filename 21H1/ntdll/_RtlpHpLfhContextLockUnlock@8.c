/*
 * XREFs of _RtlpHpLfhContextLockUnlock@8 @ 0x4B3766A8
 * Callers:
 *     _RtlpHpLockHeapForCloning@4 @ 0x4B379304 (_RtlpHpLockHeapForCloning@4.c)
 *     _RtlpHpUnlockHeapForCloning@8 @ 0x4B379A6D (_RtlpHpUnlockHeapForCloning@8.c)
 * Callees:
 *     _RtlpHpLfhOwnerLockUnlock@8 @ 0x4B37691E (_RtlpHpLfhOwnerLockUnlock@8.c)
 */

int __fastcall RtlpHpLfhContextLockUnlock(int a1, int a2)
{
  int v3; // edi
  int *v4; // esi
  int result; // eax
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // edx

  v3 = 129;
  v4 = (int *)(a1 + 128);
  do
  {
    result = *v4;
    if ( (*v4 & 1) == 0 )
    {
      v6 = a2;
      v7 = *v4;
      if ( (a2 & 2) != 0 )
      {
        v8 = 0;
        if ( *(_BYTE *)(a1 + 28) )
        {
          do
          {
            *(_BYTE *)(v8 + *(_DWORD *)(v7 + 48)) = 0;
            ++v8;
          }
          while ( v8 < *(unsigned __int8 *)(a1 + 28) );
          v6 = a2;
        }
      }
      result = RtlpHpLfhOwnerLockUnlock(v7, v6);
    }
    ++v4;
    --v3;
  }
  while ( v3 );
  return result;
}
