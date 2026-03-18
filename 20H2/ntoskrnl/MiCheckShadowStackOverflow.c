/*
 * XREFs of MiCheckShadowStackOverflow @ 0x1406BC158
 * Callers:
 *     MiCheckForUserStackOverflow @ 0x1406BBEC4 (MiCheckForUserStackOverflow.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x14022C070 (MiUnlockAndDereferenceVadShared.c)
 *     MiObtainReferencedVadEx @ 0x14027CA80 (MiObtainReferencedVadEx.c)
 *     ZwAllocateVirtualMemory @ 0x1403F8470 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall MiCheckShadowStackOverflow(unsigned __int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebp
  volatile signed __int32 *v6; // rax
  char *v7; // rbx
  unsigned __int64 v8; // rdi
  void *v9; // rax
  PVOID BaseAddress; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp+20h] BYREF

  BaseAddress = 0LL;
  v2 = 0;
  RegionSize = 0LL;
  if ( (MiFlags & 0x2000000) != 0 )
  {
    v6 = MiObtainReferencedVadEx(a1, 2, &v11);
    v7 = (char *)v6;
    if ( v6 )
    {
      if ( (v6[12] & 0x5100000) == 0x4100000 )
      {
        v2 = 1;
        v8 = (*((unsigned int *)v6 + 6) | ((unsigned __int64)*((unsigned __int8 *)v6 + 32) << 32)) << 12;
        MiUnlockAndDereferenceVadShared((char *)v6);
        *a2 = -1073741571;
        v7 = 0LL;
        v9 = (void *)((a1 & 0xFFFFFFFFFFFFF000uLL) - 4096);
        RegionSize = 4096LL;
        BaseAddress = v9;
        if ( (unsigned __int64)v9 > a1
          || (unsigned __int64)v9 <= v8
          || ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 0x102u) < 0 )
        {
          return v2;
        }
        *a2 = 275;
      }
      if ( v7 )
        MiUnlockAndDereferenceVadShared(v7);
    }
  }
  return v2;
}
