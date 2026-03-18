/*
 * XREFs of SmHpBufferProtectEx @ 0x140264530
 * Callers:
 *     SmHpBufferUpdateFullness @ 0x1402547B8 (SmHpBufferUpdateFullness.c)
 *     SmHpChunkHeapProtect @ 0x14025D8A0 (SmHpChunkHeapProtect.c)
 *     SmHpChunkUnprotect @ 0x1402644F4 (SmHpChunkUnprotect.c)
 *     SmHpUnprotectListNeighbors @ 0x14032D858 (SmHpUnprotectListNeighbors.c)
 * Callees:
 *     ExProtectPoolEx @ 0x140238434 (ExProtectPoolEx.c)
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x14030A8C8 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     SmPrepareForFatalHeapCorruption @ 0x14059E270 (SmPrepareForFatalHeapCorruption.c)
 */

__int64 __fastcall SmHpBufferProtectEx(__int64 a1, __int64 a2, char a3, unsigned __int64 a4)
{
  int v5; // r15d
  ULONG_PTR v6; // r12
  unsigned int v8; // ebx
  unsigned __int8 *v10; // r14
  int v11; // r9d
  const unsigned __int8 *v12; // rcx
  unsigned __int64 v13; // r9
  int v14; // eax
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+68h] [rbp+10h] BYREF

  v15 = a1;
  BugCheckParameter4 = 0LL;
  v5 = *(_DWORD *)(a2 + 12);
  v6 = (unsigned int)a4;
  v8 = 1;
  if ( v5 )
  {
    if ( (a3 & 3) != 0 )
    {
      v10 = *(unsigned __int8 **)a2;
      v15 = 0LL;
      MetroHash64::Hash(v10, 0x1000uLL, (unsigned __int8 *const)&v15, a4);
      v11 = v15;
      if ( !(_DWORD)v15 )
        v11 = 1;
      if ( v11 == v5 )
      {
        if ( (a3 & 1) != 0 )
        {
          ExProtectPoolEx((__int64)v10, (unsigned __int64)v10, 4096LL, 4u);
          *(_DWORD *)(a2 + 12) = 0;
        }
      }
      else
      {
        if ( (a3 & 4) == 0 )
        {
          SmPrepareForFatalHeapCorruption(v10, (__int64)&BugCheckParameter4);
          KeBugCheckEx(0x1C7u, v6, *(_QWORD *)a2, *(unsigned int *)(a2 + 12), BugCheckParameter4);
        }
        return 0;
      }
    }
  }
  else if ( (a3 & 3) == 0 )
  {
    ExProtectPoolEx(*(_QWORD *)a2, *(_QWORD *)a2, 4096LL, 2u);
    v12 = *(const unsigned __int8 **)a2;
    v15 = 0LL;
    MetroHash64::Hash(v12, 0x1000uLL, (unsigned __int8 *const)&v15, v13);
    v14 = v15;
    *(_DWORD *)(a2 + 12) = v15;
    if ( !v14 )
      *(_DWORD *)(a2 + 12) = 1;
  }
  return v8;
}
