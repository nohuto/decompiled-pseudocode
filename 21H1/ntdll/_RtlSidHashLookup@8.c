/*
 * XREFs of _RtlSidHashLookup@8 @ 0x4B347420
 * Callers:
 *     <none>
 * Callees:
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

const void **__stdcall RtlSidHashLookup(unsigned int *a1, unsigned __int8 *Buf1)
{
  __int16 *v2; // edx
  int v3; // eax
  unsigned int v4; // eax
  bool v5; // zf
  unsigned int v6; // ebx
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // edi
  const void **v10; // edi
  unsigned int v11; // ebx
  int v12; // edi
  __int16 v13; // cx
  const void **i; // esi
  __int16 v16; // [esp+Ch] [ebp-18h]
  int v17; // [esp+10h] [ebp-14h]
  int v18; // [esp+14h] [ebp-10h]
  int v19; // [esp+18h] [ebp-Ch]
  int Size; // [esp+1Ch] [ebp-8h]
  char v21; // [esp+23h] [ebp-1h]

  if ( a1 )
  {
    v2 = (__int16 *)Buf1;
    if ( Buf1 )
    {
      v3 = Buf1[1];
      Size = 4 * v3 + 8;
      v16 = *(_WORD *)Buf1;
      v4 = Buf1[4 * v3 + 4];
      v6 = a1[(v4 & 0xF) + 2] & a1[(v4 >> 4) + 18];
      v5 = v6 == 0;
      LOBYTE(v7) = 0;
      while ( 1 )
      {
        v21 = v7;
        if ( v5 )
          break;
        LOBYTE(v8) = v6;
        if ( (_BYTE)v6 )
        {
          v9 = a1[1];
          v7 = (unsigned __int8)v7;
          v17 = (unsigned __int8)v7;
          do
          {
            v19 = (unsigned __int8)v8;
            v18 = (unsigned __int8)SidHashByteToIndexLookupTable[(unsigned __int8)v8];
            v10 = (const void **)(v9 + 8 * (v7 + v18));
            if ( *(_WORD *)*v10 == *v2 )
            {
              if ( !memcmp(v2, *v10, Size) )
                return v10;
              v2 = (__int16 *)Buf1;
            }
            v8 = v19 ^ (1 << v18);
            v9 = a1[1];
            v7 = v17;
          }
          while ( (_BYTE)v8 );
          LOBYTE(v7) = v21;
        }
        v6 >>= 8;
        LOBYTE(v7) = v7 + 8;
        v5 = v6 == 0;
      }
      v11 = *a1;
      v12 = 32;
      if ( *a1 > 0x20 )
      {
        v13 = *v2;
        for ( i = (const void **)(a1[1] + 256); ; i += 2 )
        {
          if ( *(_WORD *)*i == v13 )
          {
            if ( !memcmp(v2, *i, Size) )
              return i;
            v13 = v16;
          }
          if ( ++v12 >= v11 )
            return 0;
          v2 = (__int16 *)Buf1;
        }
      }
    }
  }
  return 0;
}
