/*
 * XREFs of sub_18011BD94 @ 0x18011BD94
 * Callers:
 *     sub_18011A4A8 @ 0x18011A4A8 (sub_18011A4A8.c)
 * Callees:
 *     memcpy @ 0x18007443F (memcpy.c)
 *     sub_1800BB868 @ 0x1800BB868 (sub_1800BB868.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18011BD94(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // ebp
  int v8; // edi
  _WORD *v9; // rbx
  unsigned int v10; // ecx
  _WORD *v11; // r9
  int v12; // r8d
  _DWORD *v13; // rdx
  unsigned int v14; // ecx
  _WORD *v15; // r9
  int v16; // r8d
  _WORD *v17; // rdx
  unsigned int v18; // ecx
  _WORD *v19; // r9
  int v20; // r8d
  _WORD *v21; // rdx
  unsigned int v22; // ecx
  _DWORD *v23; // r9
  int v24; // r8d
  _DWORD *v25; // rdx
  unsigned int v26; // eax
  _WORD *v27; // rax
  LPVOID pv; // [rsp+50h] [rbp+8h] BYREF

  pv = 0LL;
  v6 = (unsigned int)(*(__int16 *)(a1 + 232)
                    + *(__int16 *)(a1 + 230)
                    + 2 * (*(__int16 *)(a1 + 234) + *(__int16 *)(a1 + 228)));
  v7 = *(_DWORD *)(a1 + 4332) + 10 + 2 * v6;
  v8 = sub_1800BB868(v6, 1, v7, &pv);
  v9 = pv;
  if ( v8 >= 0 )
  {
    if ( v7 >= 2 )
    {
      *(_WORD *)pv = 10;
      if ( v7 - 2 >= 2 )
      {
        v9[1] = *(_WORD *)(a1 + 228);
        v10 = v7 - 4;
        v11 = v9 + 2;
        v12 = 0;
        if ( *(__int16 *)(a1 + 228) <= 0 )
        {
LABEL_9:
          if ( v10 >= 2 )
          {
            *v11 = *(_WORD *)(a1 + 230);
            v14 = v10 - 2;
            v15 = v11 + 1;
            v16 = 0;
            if ( *(__int16 *)(a1 + 230) <= 0 )
            {
LABEL_14:
              if ( v14 >= 2 )
              {
                *v15 = *(_WORD *)(a1 + 232);
                v18 = v14 - 2;
                v19 = v15 + 1;
                v20 = 0;
                if ( *(__int16 *)(a1 + 232) <= 0 )
                {
LABEL_19:
                  if ( v18 >= 2 )
                  {
                    *v19 = *(_WORD *)(a1 + 234);
                    v22 = v18 - 2;
                    v23 = v19 + 1;
                    v24 = 0;
                    if ( *(__int16 *)(a1 + 234) <= 0 )
                    {
LABEL_24:
                      v26 = *(_DWORD *)(a1 + 4332);
                      if ( v22 >= v26 )
                      {
                        memcpy(v23, (const void *)(a1 + 236), v26);
                        *a3 = v7;
                        v27 = v9;
                        v9 = 0LL;
                        *a2 = v27;
                        goto LABEL_26;
                      }
                    }
                    else
                    {
                      v25 = (_DWORD *)(a1 + 164);
                      while ( v22 >= 4 )
                      {
                        *v23 = *v25;
                        v22 -= 4;
                        ++v23;
                        ++v24;
                        ++v25;
                        if ( v24 >= *(__int16 *)(a1 + 234) )
                          goto LABEL_24;
                      }
                    }
                  }
                }
                else
                {
                  v21 = (_WORD *)(a1 + 100);
                  while ( v18 >= 2 )
                  {
                    *v19 = *v21;
                    v18 -= 2;
                    ++v19;
                    ++v20;
                    v21 += 2;
                    if ( v20 >= *(__int16 *)(a1 + 232) )
                      goto LABEL_19;
                  }
                }
              }
            }
            else
            {
              v17 = (_WORD *)(a1 + 68);
              while ( v14 >= 2 )
              {
                *v15 = *v17;
                v14 -= 2;
                ++v15;
                ++v16;
                v17 += 2;
                if ( v16 >= *(__int16 *)(a1 + 230) )
                  goto LABEL_14;
              }
            }
          }
        }
        else
        {
          v13 = (_DWORD *)(a1 + 4);
          while ( v10 >= 4 )
          {
            *(_DWORD *)v11 = *v13;
            v10 -= 4;
            v11 += 2;
            ++v12;
            ++v13;
            if ( v12 >= *(__int16 *)(a1 + 228) )
              goto LABEL_9;
          }
        }
      }
    }
    v8 = -2147024774;
  }
LABEL_26:
  CoTaskMemFree(v9);
  return (unsigned int)v8;
}
