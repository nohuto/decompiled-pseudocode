/*
 * XREFs of _RtlpHpParametersVerify@4 @ 0x4B3708B8
 * Callers:
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 * Callees:
 *     _RtlCompareMemoryUlong@12 @ 0x4B307F80 (_RtlCompareMemoryUlong@12.c)
 */

int __thiscall RtlpHpParametersVerify(char *this)
{
  char *v2; // edi
  unsigned int v3; // ebx
  bool v4; // zf
  int v6; // eax
  int v7; // ebx

  v2 = this + 8;
  v3 = *((_DWORD *)this + 3);
  if ( *(_WORD *)this == 2
    && *((_WORD *)this + 1) == 48
    && (*((_DWORD *)this + 1) & 0xFFFFFFFE) == 0
    && RtlCompareMemoryUlong(this + 32, 0x10u, 0) == (char *)16 )
  {
    if ( (this[4] & 1) != 0 )
    {
      v4 = RtlCompareMemoryUlong(v2, 0x18u, 0) == (char *)24;
    }
    else
    {
      if ( *((_DWORD *)this + 1) )
        return 0;
      if ( *(_DWORD *)v2 )
        return 0;
      if ( !v3 )
        return 0;
      if ( v3 >= 0x10 )
        return 0;
      if ( (v3 & 2) != 0 )
        return 0;
      if ( *((_DWORD *)v2 + 2) != -1 )
        return 0;
      if ( RtlCompareMemoryUlong(v2 + 16, 8u, 0) != (char *)8 )
        return 0;
      if ( (v3 & 8) != 0 )
        return 0;
      v6 = v3 & 3;
      if ( *((_DWORD *)this + 5) )
      {
        if ( (v3 & 3) != 0 )
          return 0;
      }
      v7 = v3 & 0xC;
      if ( v7 == 8 )
        return 0;
      v4 = v7 == 0 || v6 == 0;
    }
    if ( v4 )
      return 1;
  }
  return 0;
}
