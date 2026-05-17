/*
 * XREFs of _RtlpImageNtHeader@4 @ 0x4B32CB5D
 * Callers:
 *     _LdrpFixSectionProtection@12 @ 0x4B32C976 (_LdrpFixSectionProtection@12.c)
 * Callees:
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

int __thiscall RtlpImageNtHeader(_DWORD *this)
{
  int v1; // edx
  unsigned int v2; // eax

  v1 = 0;
  if ( this )
  {
    if ( this != (_DWORD *)-1 && *(_WORD *)this == 23117 )
    {
      v2 = this[15];
      if ( v2 < 0x10000000 )
        return *(_DWORD *)((char *)this + v2) == 17744 ? (unsigned int)this + v2 : 0;
    }
  }
  return v1;
}
