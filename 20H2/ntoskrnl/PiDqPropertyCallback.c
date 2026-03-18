/*
 * XREFs of PiDqPropertyCallback @ 0x140641490
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x1403D1760 (_wcsicmp.c)
 *     PiDqPnPGetObjectProperty @ 0x1406401C4 (PiDqPnPGetObjectProperty.c)
 *     PiDqGetPnpObjectType @ 0x140641640 (PiDqGetPnpObjectType.c)
 *     PiDqOpenObjectRegKey @ 0x1406D3940 (PiDqOpenObjectRegKey.c)
 */

__int64 __fastcall PiDqPropertyCallback(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4, _QWORD *a5)
{
  _DWORD *v6; // r12
  __int64 v7; // rsi
  unsigned int v9; // edi
  __int64 v10; // r13
  unsigned int v11; // ebp
  __int64 v12; // rcx
  const wchar_t *v13; // rcx
  int v15; // ecx
  unsigned int v16; // ebp
  int v17; // eax
  int PnpObjectType; // eax
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rcx

  v6 = a3;
  v7 = a2;
  v9 = 0;
  v10 = 0LL;
  v11 = 0;
  if ( !*(_DWORD *)(a1 + 24) )
  {
LABEL_11:
    v15 = *(_DWORD *)(v7 + 20);
    if ( v15 )
    {
      if ( v15 != 1 )
        return (unsigned int)-1073741811;
      v16 = 0;
      if ( !*(_QWORD *)a1 )
      {
        PnpObjectType = PiDqGetPnpObjectType(
                          *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL) + 16LL),
                          a2,
                          a3,
                          *(_QWORD *)(a1 + 40) + 32LL);
        v9 = PiDqOpenObjectRegKey(1, *(_QWORD *)(a1 + 32), PnpObjectType, 1, 0, v19, a1);
        if ( v9 == -1073741772 )
        {
          *(_QWORD *)a1 = -1LL;
          v9 = 0;
        }
      }
      v10 = *(_QWORD *)a1;
      if ( *(_QWORD *)a1 == -1LL )
      {
        v20 = *(_QWORD *)(a1 + 16);
        v21 = 6LL * *(unsigned int *)(a1 + 24);
        *(_OWORD *)(v20 + 8 * v21) = *(_OWORD *)v7;
        *(_OWORD *)(v20 + 8 * v21 + 16) = *(_OWORD *)(v7 + 16);
        ++*(_DWORD *)(a1 + 24);
        goto LABEL_29;
      }
    }
    else
    {
      v16 = PiDqGetPnpObjectType(*(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL) + 16LL), a2, a3, a4);
    }
    if ( (v9 & 0x80000000) != 0 )
      return v9;
    v17 = PiDqPnPGetObjectProperty(
            *(_QWORD *)(a1 + 32),
            v16,
            v10,
            v7,
            *(_DWORD *)(v7 + 20),
            0LL,
            (_OWORD *)(*(_QWORD *)(a1 + 16) + 48LL * *(unsigned int *)(a1 + 24)));
    v9 = v17;
    if ( v17 != -1073741811 )
    {
      if ( v17 >= 0 )
      {
        *v6 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48LL * *(unsigned int *)(a1 + 24) + 32);
        *a4 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48LL * *(unsigned int *)(a1 + 24) + 36);
        *a5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL * (unsigned int)(*(_DWORD *)(a1 + 24))++ + 40);
      }
      return v9;
    }
    v9 = 0;
LABEL_29:
    *v6 = 0;
    *a4 = 0;
    *a5 = 0LL;
    return v9;
  }
  while ( 1 )
  {
    a3 = *(_DWORD **)(a1 + 16);
    a2 = 48LL * v11;
    if ( *(_DWORD *)(v7 + 16) == *(_DWORD *)((char *)a3 + a2 + 16) )
    {
      v12 = *(_QWORD *)v7 - *(_QWORD *)((char *)a3 + a2);
      if ( *(_QWORD *)v7 == *(_QWORD *)((char *)a3 + a2) )
        v12 = *(_QWORD *)(v7 + 8) - *(_QWORD *)((char *)a3 + a2 + 8);
      if ( !v12 && *(_DWORD *)(v7 + 20) == *(_DWORD *)((char *)a3 + a2 + 20) )
      {
        v13 = *(const wchar_t **)(v7 + 24);
        a2 = *(_QWORD *)((char *)a3 + a2 + 24);
        if ( v13 == (const wchar_t *)a2 || v13 && a2 && !wcsicmp(v13, (const wchar_t *)a2) )
          break;
      }
    }
    if ( ++v11 >= *(_DWORD *)(a1 + 24) )
      goto LABEL_11;
  }
  *v6 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48LL * v11 + 32);
  *a4 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48LL * v11 + 36);
  *a5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL * v11 + 40);
  return v9;
}
