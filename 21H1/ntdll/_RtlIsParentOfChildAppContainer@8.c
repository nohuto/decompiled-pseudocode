/*
 * XREFs of _RtlIsParentOfChildAppContainer@8 @ 0x4B346550
 * Callers:
 *     <none>
 * Callees:
 *     _RtlGetAppContainerSidType@8 @ 0x4B3463A0 (_RtlGetAppContainerSidType@8.c)
 */

char __stdcall RtlIsParentOfChildAppContainer(int a1, int a2)
{
  _DWORD *v2; // edx
  unsigned int v3; // edi
  int v5; // [esp+Ch] [ebp-4h] BYREF

  if ( RtlGetAppContainerSidType(a1, &v5) >= 0 && v5 == 2 && RtlGetAppContainerSidType(a2, &v5) >= 0 && v5 == 1 )
  {
    v2 = (_DWORD *)(a2 + 12);
    v3 = 1;
    while ( *(_DWORD *)((char *)v2 + a1 - a2) == *v2 )
    {
      ++v3;
      ++v2;
      if ( v3 >= 8 )
        return 1;
    }
  }
  return 0;
}
