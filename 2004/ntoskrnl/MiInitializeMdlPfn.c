/*
 * XREFs of MiInitializeMdlPfn @ 0x140313B6C
 * Callers:
 *     MiInitializeMdlLeafPfns @ 0x140313A64 (MiInitializeMdlLeafPfns.c)
 *     MmAllocateNonChargedSecurePages @ 0x14052EE3C (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x14054DF34 (MmAllocateSecureKernelPages.c)
 *     MiCreateEnclaveRegions @ 0x140A53250 (MiCreateEnclaveRegions.c)
 * Callees:
 *     MiAbortCombineScan @ 0x1402F7290 (MiAbortCombineScan.c)
 */

char __fastcall MiInitializeMdlPfn(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  char v5; // cl
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  v3 = a2;
  if ( (a2 & 0x100) != 0 )
  {
    v5 = *(_BYTE *)(a1 + 34);
    if ( (v5 & 7) != 5 )
      *(_BYTE *)(a1 + 34) = v5 & 0xF8 | 5;
    LOBYTE(v6) = 0;
    *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
    *(_WORD *)(a1 + 32) = 2;
    v7 = 0LL;
    if ( (a2 & 0x80000200) == 0 )
      v7 = 0xFFFFF68000000000uLL;
    *(_QWORD *)(a1 + 8) = v7;
    if ( (int)a2 < 0 )
      *(_QWORD *)(a1 + 24) &= ~0x4000000000000000uLL;
    if ( (a2 & 0x200) != 0 )
    {
      MiAbortCombineScan(a1, a2, a3);
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0x8FFFFFFFFFFFFFFFuLL | 0x3000000000000000LL;
      if ( (v3 & 0x20000) == 0 )
        _InterlockedIncrement64(&qword_140C4DE00);
    }
    LOBYTE(v6) = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
    *(_BYTE *)(a1 + 34) = v6;
    if ( v3 < 0 )
    {
      v6 = *(_QWORD *)(a1 + 40) & 0x8FFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
      *(_QWORD *)(a1 + 40) = v6;
    }
  }
  *(_BYTE *)(a1 + 35) &= 0xF8u;
  *(_DWORD *)(a1 + 36) = 0;
  return v6;
}
