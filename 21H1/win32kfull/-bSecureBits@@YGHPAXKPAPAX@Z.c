/*
 * XREFs of ?bSecureBits@@YGHPAXKPAPAX@Z @ 0x216E2F
 * Callers:
 *     _NtGdiEngCreatePalette@24 @ 0x217FBE (_NtGdiEngCreatePalette@24.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

BOOL __userpurge bSecureBits@<eax>(SIZE_T a1@<edx>, char *a2@<ecx>, _DWORD *a3, unsigned int a4, void **a5)
{
  int v5; // esi
  HANDLE v6; // eax

  v5 = 1;
  *a3 = 0;
  if ( a2 )
  {
    if ( a1 && ((unsigned int)&a2[a1] > _MmUserProbeAddress || &a2[a1] < a2) )
      *(_BYTE *)_MmUserProbeAddress = 0;
    v6 = MmSecureVirtualMemory(a2, a1, 2u);
    *a3 = v6;
    return v6 != 0;
  }
  return v5;
}
