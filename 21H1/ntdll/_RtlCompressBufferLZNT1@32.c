/*
 * XREFs of _RtlCompressBufferLZNT1@32 @ 0x4B372940
 * Callers:
 *     <none>
 * Callees:
 *     _LZNT1CompressChunk@28 @ 0x4B3724B6 (_LZNT1CompressChunk@28.c)
 */

int __stdcall RtlCompressBufferLZNT1(__int16 a1, char *a2, int a3, _BYTE *a4, int a5, int a6, _DWORD *a7, int a8)
{
  _BYTE *v8; // ecx
  char *v9; // edi
  bool v10; // bl
  unsigned int v11; // edx
  int (__thiscall *v12)(_DWORD, char *, int); // eax
  _BYTE *v13; // esi
  int result; // eax
  int v15; // [esp+10h] [ebp-Ch] BYREF
  _BYTE *v16; // [esp+14h] [ebp-8h]
  int (__thiscall *v17)(_DWORD, char *, int); // [esp+18h] [ebp-4h]

  v8 = a4;
  v9 = a2;
  v10 = 1;
  v11 = (unsigned int)&a2[a3];
  v16 = &a4[a5];
  if ( a1 )
  {
    if ( a1 != 256 )
      return -1073741637;
    v12 = (int (__thiscall *)(_DWORD, char *, int))LZNT1FindMatchMaximum;
  }
  else
  {
    v12 = (int (__thiscall *)(_DWORD, char *, int))LZNT1FindMatchStandard;
  }
  v17 = v12;
  v13 = a4;
  if ( (unsigned int)a2 >= v11 )
  {
LABEL_13:
    if ( v13 <= v16 - 2 )
      *(_WORD *)v13 = 0;
    *a7 = v13 - v8;
    return v10 ? 0x117 : 0;
  }
  else
  {
    while ( 1 )
    {
      result = LZNT1CompressChunk(v12, v9, v11, v13, (unsigned int)v16, &v15, a8);
      if ( result < 0 )
        break;
      v10 = v10 && result == 279;
      v13 += v15;
      v9 += 4096;
      v11 = (unsigned int)&a2[a3];
      v12 = v17;
      if ( v9 >= &a2[a3] )
      {
        v8 = a4;
        goto LABEL_13;
      }
    }
  }
  return result;
}
