/*
 * XREFs of _RtlClearBits@12 @ 0x4B2E1AE0
 * Callers:
 *     _LdrpInitializeTls@0 @ 0x4B2E14F7 (_LdrpInitializeTls@0.c)
 *     _LdrpAcquireTlsIndex@8 @ 0x4B2E185E (_LdrpAcquireTlsIndex@8.c)
 *     _RtlFindSetBitsAndClear@12 @ 0x4B34F1B0 (_RtlFindSetBitsAndClear@12.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

void __stdcall RtlClearBits(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  int v4; // ecx
  _BYTE *v5; // edi
  char v6; // al

  v3 = a3;
  if ( a3 )
  {
    v4 = a2 & 7;
    v5 = (_BYTE *)(*(_DWORD *)(a1 + 4) + (a2 >> 3));
    if ( v4 + a3 <= 8 )
    {
      v6 = ~(byte_4B288988[a3] << v4);
LABEL_4:
      *v5 &= v6;
      return;
    }
    if ( (a2 & 7) != 0 )
    {
      v3 = v4 + a3 - 8;
      *v5++ &= byte_4B288988[v4];
    }
    if ( v3 > 8 )
    {
      memset(v5, 0, v3 >> 3);
      v5 += v3 >> 3;
      v3 &= 7u;
    }
    if ( v3 )
    {
      v6 = byte_4B288994[v3];
      goto LABEL_4;
    }
  }
}
