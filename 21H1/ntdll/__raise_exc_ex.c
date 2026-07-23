/*
 * XREFs of __raise_exc_ex @ 0x4B2FDB09
 * Callers:
 *     __except1 @ 0x4B2FD7DF (__except1.c)
 *     __raise_exc @ 0x4B2FDAE6 (__raise_exc.c)
 * Callees:
 *     _RaiseException@16 @ 0x4B2FD740 (_RaiseException@16.c)
 *     __clrfp @ 0x4B2FDFBB (__clrfp.c)
 *     __statfp @ 0x4B2FE04F (__statfp.c)
 */

void __cdecl __noreturn _raise_exc_ex(ULONG_PTR Arguments, char a2, int a3, float *a4, float *a5, int a6)
{
  int v6; // esi
  DWORD v7; // ebx
  char v8; // al
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  char v13; // al
  int v14; // eax
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // eax
  int v18; // eax

  v6 = Arguments;
  v7 = 0;
  *(_DWORD *)(Arguments + 4) = 0;
  *(_DWORD *)(v6 + 8) = 0;
  *(_DWORD *)(v6 + 12) = 0;
  v8 = a2;
  if ( (a2 & 0x10) != 0 )
  {
    *(_DWORD *)(v6 + 4) |= 1u;
    v7 = -1073741681;
  }
  if ( (v8 & 2) != 0 )
  {
    *(_DWORD *)(v6 + 4) |= 2u;
    v7 = -1073741677;
  }
  if ( (v8 & 1) != 0 )
  {
    *(_DWORD *)(v6 + 4) |= 4u;
    v7 = -1073741679;
  }
  if ( (v8 & 4) != 0 )
  {
    *(_DWORD *)(v6 + 4) |= 8u;
    v7 = -1073741682;
  }
  if ( (v8 & 8) != 0 )
  {
    *(_DWORD *)(v6 + 4) |= 0x10u;
    v7 = -1073741680;
  }
  v9 = (_DWORD *)HIDWORD(Arguments);
  *(_DWORD *)(v6 + 8) ^= (*(_DWORD *)(v6 + 8) ^ ~(16 * *(_DWORD *)HIDWORD(Arguments))) & 0x10;
  v10 = *(_DWORD *)(v6 + 8) ^ (*(_DWORD *)(v6 + 8) ^ ~(2 * *v9)) & 8;
  *(_DWORD *)(v6 + 8) = v10;
  v11 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)~(unsigned __int8)(*v9 >> 1)) & 4;
  *(_DWORD *)(v6 + 8) = v11;
  v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)~(unsigned __int8)(*v9 >> 3)) & 2;
  *(_DWORD *)(v6 + 8) = v12;
  *(_DWORD *)(v6 + 8) = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)~(unsigned __int8)(*v9 >> 5)) & 1;
  v13 = _statfp();
  if ( (v13 & 1) != 0 )
    *(_DWORD *)(v6 + 12) |= 0x10u;
  if ( (v13 & 4) != 0 )
    *(_DWORD *)(v6 + 12) |= 8u;
  if ( (v13 & 8) != 0 )
    *(_DWORD *)(v6 + 12) |= 4u;
  if ( (v13 & 0x10) != 0 )
    *(_DWORD *)(v6 + 12) |= 2u;
  if ( (v13 & 0x20) != 0 )
    *(_DWORD *)(v6 + 12) |= 1u;
  v14 = *v9 & 0xC00;
  if ( v14 )
  {
    if ( v14 == 1024 )
    {
      v15 = *(_DWORD *)v6 & 0xFFFFFFFC | 1;
    }
    else
    {
      if ( v14 != 2048 )
      {
        if ( v14 == 3072 )
          *(_DWORD *)v6 |= 3u;
LABEL_30:
        v16 = *v9 & 0x300;
        if ( v16 )
        {
          if ( v16 != 512 )
          {
            if ( v16 == 768 )
              *(_DWORD *)v6 &= 0xFFFFFFE3;
LABEL_37:
            *(_DWORD *)v6 ^= (*(_DWORD *)v6 ^ (32 * a3)) & 0x1FFE0;
            v18 = *(_DWORD *)(v6 + 32);
            if ( a6 )
            {
              *(_DWORD *)(v6 + 32) = v18 & 0xFFFFFFE0 | 1;
              *(float *)(v6 + 16) = *a4;
              *(_DWORD *)(v6 + 96) = *(_DWORD *)(v6 + 96) & 0xFFFFFFE0 | 1;
              *(float *)(v6 + 80) = *a5;
            }
            else
            {
              *(_DWORD *)(v6 + 32) = v18 & 0xFFFFFFE0 | 3;
              *(double *)(v6 + 16) = *(double *)a4;
              *(_DWORD *)(v6 + 96) = *(_DWORD *)(v6 + 96) & 0xFFFFFFE0 | 3;
              *(double *)(v6 + 80) = *(double *)a5;
            }
            _clrfp();
            RaiseException(v7, 0, 1u, &Arguments);
          }
          v17 = *(_DWORD *)v6 & 0xFFFFFFE3 | 4;
        }
        else
        {
          v17 = *(_DWORD *)v6 & 0xFFFFFFE3 | 8;
        }
        *(_DWORD *)v6 = v17;
        goto LABEL_37;
      }
      v15 = *(_DWORD *)v6 & 0xFFFFFFFC | 2;
    }
    *(_DWORD *)v6 = v15;
    goto LABEL_30;
  }
  *(_DWORD *)v6 &= 0xFFFFFFFC;
  goto LABEL_30;
}
