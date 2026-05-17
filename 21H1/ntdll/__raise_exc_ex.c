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

void __cdecl __noreturn _raise_exc_ex(ULONG_PTR Arguments, _DWORD *a2, char a3, int a4, float *a5, float *a6, int a7)
{
  ULONG_PTR v7; // esi
  DWORD v8; // ebx
  char v9; // al
  _DWORD *v10; // edi
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  char v14; // al
  int v15; // eax
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // eax
  int v19; // eax

  v7 = Arguments;
  v8 = 0;
  *(_DWORD *)(Arguments + 4) = 0;
  *(_DWORD *)(v7 + 8) = 0;
  *(_DWORD *)(v7 + 12) = 0;
  v9 = a3;
  if ( (a3 & 0x10) != 0 )
  {
    *(_DWORD *)(v7 + 4) |= 1u;
    v8 = -1073741681;
  }
  if ( (v9 & 2) != 0 )
  {
    *(_DWORD *)(v7 + 4) |= 2u;
    v8 = -1073741677;
  }
  if ( (v9 & 1) != 0 )
  {
    *(_DWORD *)(v7 + 4) |= 4u;
    v8 = -1073741679;
  }
  if ( (v9 & 4) != 0 )
  {
    *(_DWORD *)(v7 + 4) |= 8u;
    v8 = -1073741682;
  }
  if ( (v9 & 8) != 0 )
  {
    *(_DWORD *)(v7 + 4) |= 0x10u;
    v8 = -1073741680;
  }
  v10 = a2;
  *(_DWORD *)(v7 + 8) ^= (*(_DWORD *)(v7 + 8) ^ ~(16 * *a2)) & 0x10;
  v11 = *(_DWORD *)(v7 + 8) ^ (*(_DWORD *)(v7 + 8) ^ ~(2 * *v10)) & 8;
  *(_DWORD *)(v7 + 8) = v11;
  v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)~(unsigned __int8)(*v10 >> 1)) & 4;
  *(_DWORD *)(v7 + 8) = v12;
  v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)~(unsigned __int8)(*v10 >> 3)) & 2;
  *(_DWORD *)(v7 + 8) = v13;
  *(_DWORD *)(v7 + 8) = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)~(unsigned __int8)(*v10 >> 5)) & 1;
  v14 = _statfp();
  if ( (v14 & 1) != 0 )
    *(_DWORD *)(v7 + 12) |= 0x10u;
  if ( (v14 & 4) != 0 )
    *(_DWORD *)(v7 + 12) |= 8u;
  if ( (v14 & 8) != 0 )
    *(_DWORD *)(v7 + 12) |= 4u;
  if ( (v14 & 0x10) != 0 )
    *(_DWORD *)(v7 + 12) |= 2u;
  if ( (v14 & 0x20) != 0 )
    *(_DWORD *)(v7 + 12) |= 1u;
  v15 = *v10 & 0xC00;
  if ( v15 )
  {
    if ( v15 == 1024 )
    {
      v16 = *(_DWORD *)v7 & 0xFFFFFFFC | 1;
    }
    else
    {
      if ( v15 != 2048 )
      {
        if ( v15 == 3072 )
          *(_DWORD *)v7 |= 3u;
LABEL_30:
        v17 = *v10 & 0x300;
        if ( v17 )
        {
          if ( v17 != 512 )
          {
            if ( v17 == 768 )
              *(_DWORD *)v7 &= 0xFFFFFFE3;
LABEL_37:
            *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ (32 * a4)) & 0x1FFE0;
            v19 = *(_DWORD *)(v7 + 32);
            if ( a7 )
            {
              *(_DWORD *)(v7 + 32) = v19 & 0xFFFFFFE0 | 1;
              *(float *)(v7 + 16) = *a5;
              *(_DWORD *)(v7 + 96) = *(_DWORD *)(v7 + 96) & 0xFFFFFFE0 | 1;
              *(float *)(v7 + 80) = *a6;
            }
            else
            {
              *(_DWORD *)(v7 + 32) = v19 & 0xFFFFFFE0 | 3;
              *(double *)(v7 + 16) = *(double *)a5;
              *(_DWORD *)(v7 + 96) = *(_DWORD *)(v7 + 96) & 0xFFFFFFE0 | 3;
              *(double *)(v7 + 80) = *(double *)a6;
            }
            _clrfp();
            RaiseException(v8, 0, 1u, &Arguments);
          }
          v18 = *(_DWORD *)v7 & 0xFFFFFFE3 | 4;
        }
        else
        {
          v18 = *(_DWORD *)v7 & 0xFFFFFFE3 | 8;
        }
        *(_DWORD *)v7 = v18;
        goto LABEL_37;
      }
      v16 = *(_DWORD *)v7 & 0xFFFFFFFC | 2;
    }
    *(_DWORD *)v7 = v16;
    goto LABEL_30;
  }
  *(_DWORD *)v7 &= 0xFFFFFFFC;
  goto LABEL_30;
}
