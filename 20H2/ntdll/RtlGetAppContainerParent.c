/*
 * XREFs of RtlGetAppContainerParent @ 0x180043E50
 * Callers:
 *     RtlpGetTokenNamedObjectPath @ 0x180044080 (RtlpGetTokenNamedObjectPath.c)
 *     RtlDefaultNpAcl @ 0x1800D6CF0 (RtlDefaultNpAcl.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlInitializeSid @ 0x1800400B0 (RtlInitializeSid.c)
 *     RtlGetAppContainerSidType @ 0x1800446C0 (RtlGetAppContainerSidType.c)
 */

__int64 __fastcall RtlGetAppContainerParent(__int64 a1, __int64 *a2)
{
  __int64 Heap; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  int v7; // edi
  _DWORD *v8; // rcx
  __int64 v9; // rsi
  int v11; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( (int)RtlGetAppContainerSidType(a1, &v11) < 0 || v11 != 1 )
    return 3221225485LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, 40LL);
  v5 = Heap;
  if ( !Heap )
    return 3221225626LL;
  v6 = 8LL;
  v7 = RtlInitializeSid(Heap, (__int64)&RtlpAppPackageAuthority, 8u);
  if ( v7 < 0 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  }
  else
  {
    v8 = (_DWORD *)(v5 + 8);
    v9 = a1 - v5;
    do
    {
      *v8 = *(_DWORD *)((char *)v8 + v9);
      ++v8;
      --v6;
    }
    while ( v6 );
    *a2 = v5;
    return 0;
  }
  return (unsigned int)v7;
}
