/*
 * XREFs of _RtlpHpParametersVerify@4 @ 0x4B3708B8
 * Callers:
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 * Callees:
 *     _RtlCompareMemoryUlong@12 @ 0x4B307F80 (_RtlCompareMemoryUlong@12.c)
 */

int __thiscall RtlpHpParametersVerify(_DWORD *this)
{
  _DWORD *v2; // edi
  unsigned int v3; // ebx
  bool v4; // zf
  int v6; // eax
  int v7; // ebx
  ULONG v8; // [esp+0h] [ebp-Ch]
  ULONG v9; // [esp+0h] [ebp-Ch]

  v2 = this + 2;
  v3 = this[3];
  if ( *(_WORD *)this == 2
    && *((_WORD *)this + 1) == 48
    && (this[1] & 0xFFFFFFFE) == 0
    && (unsigned int)RtlCompareMemoryUlong(this + 8, 0x10uLL, v8) == 16 )
  {
    if ( (this[1] & 1) != 0 )
    {
      v4 = (unsigned int)RtlCompareMemoryUlong(v2, 0x18uLL, v9) == 24;
    }
    else
    {
      if ( this[1] )
        return 0;
      if ( *v2 )
        return 0;
      if ( !v3 )
        return 0;
      if ( v3 >= 0x10 )
        return 0;
      if ( (v3 & 2) != 0 )
        return 0;
      if ( v2[2] != -1 )
        return 0;
      if ( (unsigned int)RtlCompareMemoryUlong(v2 + 4, 8uLL, v9) != 8 )
        return 0;
      if ( (v3 & 8) != 0 )
        return 0;
      v6 = v3 & 3;
      if ( this[5] )
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
