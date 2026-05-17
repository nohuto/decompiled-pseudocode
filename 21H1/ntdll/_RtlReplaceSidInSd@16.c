/*
 * XREFs of _RtlReplaceSidInSd@16 @ 0x4B346EC0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlGetDaclSecurityDescriptor@16 @ 0x4B2E5690 (_RtlGetDaclSecurityDescriptor@16.c)
 *     _RtlGetOwnerSecurityDescriptor@12 @ 0x4B2EAA80 (_RtlGetOwnerSecurityDescriptor@12.c)
 *     _RtlGetSaclSecurityDescriptor@16 @ 0x4B2EC050 (_RtlGetSaclSecurityDescriptor@16.c)
 *     _RtlGetGroupSecurityDescriptor@12 @ 0x4B2ECDD0 (_RtlGetGroupSecurityDescriptor@12.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __stdcall RtlReplaceSidInSd(int a1, _BYTE *a2, int a3, _DWORD *a4)
{
  size_t v4; // ebx
  int result; // eax
  int v6; // edi
  unsigned __int8 v7; // al
  unsigned __int8 v8; // cl
  void *v9; // edi
  int v10; // edi
  unsigned __int8 v11; // al
  unsigned __int8 v12; // cl
  void *v13; // edi
  int v14; // edi
  int v15; // eax
  int v16; // ecx
  int v17; // ebx
  unsigned __int8 v18; // al
  unsigned __int8 v19; // cl
  int v20; // eax
  int v21; // edi
  int v22; // ecx
  int v23; // ebx
  unsigned __int8 v24; // al
  unsigned __int8 v25; // cl
  void *v26; // [esp+8h] [ebp-10h]
  void *v27; // [esp+8h] [ebp-10h]
  size_t Size; // [esp+Ch] [ebp-Ch]
  int v29; // [esp+10h] [ebp-8h] BYREF
  bool v30; // [esp+16h] [ebp-2h] BYREF
  bool v31; // [esp+17h] [ebp-1h] BYREF

  v29 = 0;
  *a4 = 0;
  v4 = 4 * (unsigned __int8)a2[1];
  Size = v4;
  result = RtlGetOwnerSecurityDescriptor(a1, &v29, &v31);
  if ( result >= 0 )
  {
    v6 = v29;
    if ( v29 )
    {
      if ( *(_BYTE *)v29 == *a2 )
      {
        v7 = *(_BYTE *)(v29 + 1);
        v8 = a2[1];
        if ( (v7 == v8 || v7 == v8 + 1) && !memcmp((const void *)(v29 + 2), a2 + 2, 6u) )
        {
          v9 = (void *)(v6 + 8);
          if ( !memcmp(v9, a2 + 8, v4) )
          {
            memcpy(v9, (const void *)(a3 + 8), v4);
            ++*a4;
          }
        }
      }
    }
    v29 = 0;
    result = RtlGetGroupSecurityDescriptor(a1, &v29, &v31);
    if ( result >= 0 )
    {
      v10 = v29;
      if ( v29 )
      {
        if ( *(_BYTE *)v29 == *a2 )
        {
          v11 = *(_BYTE *)(v29 + 1);
          v12 = a2[1];
          if ( (v11 == v12 || v11 == v12 + 1) && !memcmp((const void *)(v29 + 2), a2 + 2, 6u) )
          {
            v13 = (void *)(v10 + 8);
            if ( !memcmp(v13, a2 + 8, v4) )
            {
              memcpy(v13, (const void *)(a3 + 8), v4);
              ++*a4;
            }
          }
        }
      }
      v29 = 0;
      result = RtlGetDaclSecurityDescriptor(a1, &v30, &v29, &v31);
      if ( result >= 0 )
      {
        if ( v30 )
        {
          if ( v29 )
          {
            v14 = v29 + 8;
            v15 = *(unsigned __int16 *)(v29 + 4);
            v29 = v15;
            if ( v15 )
            {
              v16 = v15;
              while ( *(_BYTE *)v14 > 3u )
              {
                if ( *(_BYTE *)v14 == 4 )
                {
                  v17 = 4 * *(unsigned __int8 *)(v14 + 13) + 20;
LABEL_26:
                  if ( *(_BYTE *)(v17 + v14) == *a2 )
                  {
                    v18 = *(_BYTE *)(v17 + v14 + 1);
                    v19 = a2[1];
                    if ( (v18 == v19 || v18 == v19 + 1) && !memcmp((const void *)(v17 + v14 + 2), a2 + 2, 6u) )
                    {
                      v26 = (void *)(v14 + v17 + 8);
                      if ( !memcmp(v26, a2 + 8, Size) )
                      {
                        memcpy(v26, (const void *)(a3 + 8), Size);
                        ++*a4;
                      }
                    }
                    v16 = v29;
                  }
                }
                --v16;
                v14 += *(unsigned __int16 *)(v14 + 2);
                v29 = v16;
                if ( !v16 )
                  goto LABEL_34;
              }
              v17 = 8;
              goto LABEL_26;
            }
          }
        }
LABEL_34:
        v29 = 0;
        result = RtlGetSaclSecurityDescriptor(a1, &v30, &v29, &v31);
        if ( result >= 0 && v30 && v29 )
        {
          v20 = *(unsigned __int16 *)(v29 + 4);
          v21 = v29 + 8;
          v29 = v20;
          if ( v20 )
          {
            v22 = v20;
            while ( *(_BYTE *)v21 > 3u )
            {
              if ( *(_BYTE *)v21 == 4 )
              {
                v23 = 4 * *(unsigned __int8 *)(v21 + 13) + 20;
LABEL_43:
                if ( *(_BYTE *)(v23 + v21) == *a2 )
                {
                  v24 = *(_BYTE *)(v23 + v21 + 1);
                  v25 = a2[1];
                  if ( (v24 == v25 || v24 == v25 + 1) && !memcmp((const void *)(v23 + v21 + 2), a2 + 2, 6u) )
                  {
                    v27 = (void *)(v21 + v23 + 8);
                    if ( !memcmp(v27, a2 + 8, Size) )
                    {
                      memcpy(v27, (const void *)(a3 + 8), Size);
                      ++*a4;
                    }
                  }
                  v22 = v29;
                }
              }
              --v22;
              v21 += *(unsigned __int16 *)(v21 + 2);
              v29 = v22;
              if ( !v22 )
                return 0;
            }
            v23 = 8;
            goto LABEL_43;
          }
          return 0;
        }
      }
    }
  }
  return result;
}
