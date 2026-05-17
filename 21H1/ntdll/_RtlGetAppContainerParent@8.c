/*
 * XREFs of _RtlGetAppContainerParent@8 @ 0x4B3462F0
 * Callers:
 *     _RtlDefaultNpAcl@4 @ 0x4B335F90 (_RtlDefaultNpAcl@4.c)
 *     _RtlpGetTokenNamedObjectPath@16 @ 0x4B348B45 (_RtlpGetTokenNamedObjectPath@16.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlInitializeSid@12 @ 0x4B2D82C0 (_RtlInitializeSid@12.c)
 *     _RtlGetAppContainerSidType@8 @ 0x4B3463A0 (_RtlGetAppContainerSidType@8.c)
 */

int __stdcall RtlGetAppContainerParent(int a1, int *a2)
{
  int Heap; // eax
  int v3; // esi
  int v5; // edi
  _DWORD *v6; // ecx
  int v7; // edx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  *a2 = 0;
  if ( (int)RtlGetAppContainerSidType(a1, &v8) < 0 || v8 != 1 )
    return -1073741811;
  Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, 40);
  v3 = Heap;
  if ( !Heap )
    return -1073741670;
  v5 = RtlInitializeSid(Heap, (int)&RtlpAppPackageAuthority, 8u);
  if ( v5 < 0 )
  {
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  else
  {
    v6 = (_DWORD *)(v3 + 8);
    v7 = 8;
    do
    {
      *v6 = *(_DWORD *)((char *)v6 + a1 - v3);
      ++v6;
      --v7;
    }
    while ( v7 );
    v5 = 0;
    *a2 = v3;
  }
  return v5;
}
