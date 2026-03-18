/*
 * XREFs of PiDqPropertyCallback @ 0x1405D2AD0
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x1403CEAD0 (_wcsicmp.c)
 *     PiDqOpenObjectRegKey @ 0x1405D19A4 (PiDqOpenObjectRegKey.c)
 *     PiDqGetPnpObjectType @ 0x1405D2C80 (PiDqGetPnpObjectType.c)
 *     PiDqPnPGetObjectProperty @ 0x1405DB8E4 (PiDqPnPGetObjectProperty.c)
 */

__int64 __fastcall PiDqPropertyCallback(__int64 *a1, __int64 a2, _DWORD *a3, _DWORD *a4, _QWORD *a5)
{
  unsigned int v9; // edi
  __int64 v10; // r13
  unsigned int v11; // ebp
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  const wchar_t *v15; // rcx
  const wchar_t *v16; // rdx
  int v18; // ecx
  int v19; // ebp
  int v20; // eax
  int PnpObjectType; // eax
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx

  v9 = 0;
  LODWORD(v10) = 0;
  v11 = 0;
  if ( !*((_DWORD *)a1 + 6) )
  {
LABEL_11:
    v18 = *(_DWORD *)(a2 + 20);
    if ( v18 )
    {
      if ( v18 != 1 )
        return (unsigned int)-1073741811;
      v19 = 0;
      if ( !*a1 )
      {
        PnpObjectType = PiDqGetPnpObjectType(*(unsigned int *)(*(_QWORD *)(a1[5] + 24) + 16LL));
        v9 = PiDqOpenObjectRegKey(1, a1[4], PnpObjectType, 1, 0, v22, a1);
        if ( v9 == -1073741772 )
        {
          *a1 = -1LL;
          v9 = 0;
        }
      }
      v10 = *a1;
      if ( *a1 == -1 )
      {
        v23 = a1[2];
        v24 = 6LL * *((unsigned int *)a1 + 6);
        *(_OWORD *)(v23 + 8 * v24) = *(_OWORD *)a2;
        *(_OWORD *)(v23 + 8 * v24 + 16) = *(_OWORD *)(a2 + 16);
        ++*((_DWORD *)a1 + 6);
        goto LABEL_29;
      }
    }
    else
    {
      v19 = PiDqGetPnpObjectType(*(unsigned int *)(*(_QWORD *)(a1[5] + 24) + 16LL));
    }
    if ( (v9 & 0x80000000) != 0 )
      return v9;
    v20 = PiDqPnPGetObjectProperty(
            a1[4],
            v19,
            v10,
            a2,
            *(_DWORD *)(a2 + 20),
            0LL,
            a1[2] + 48LL * *((unsigned int *)a1 + 6));
    v9 = v20;
    if ( v20 != -1073741811 )
    {
      if ( v20 >= 0 )
      {
        *a3 = *(_DWORD *)(a1[2] + 48LL * *((unsigned int *)a1 + 6) + 32);
        *a4 = *(_DWORD *)(a1[2] + 48LL * *((unsigned int *)a1 + 6) + 36);
        *a5 = *(_QWORD *)(a1[2] + 48LL * (unsigned int)(*((_DWORD *)a1 + 6))++ + 40);
      }
      return v9;
    }
    v9 = 0;
LABEL_29:
    *a3 = 0;
    *a4 = 0;
    *a5 = 0LL;
    return v9;
  }
  while ( 1 )
  {
    v12 = a1[2];
    v13 = 48LL * v11;
    if ( *(_DWORD *)(a2 + 16) == *(_DWORD *)(v13 + v12 + 16) )
    {
      v14 = *(_QWORD *)a2 - *(_QWORD *)(v13 + v12);
      if ( *(_QWORD *)a2 == *(_QWORD *)(v13 + v12) )
        v14 = *(_QWORD *)(a2 + 8) - *(_QWORD *)(v13 + v12 + 8);
      if ( !v14 && *(_DWORD *)(a2 + 20) == *(_DWORD *)(v13 + v12 + 20) )
      {
        v15 = *(const wchar_t **)(a2 + 24);
        v16 = *(const wchar_t **)(v13 + v12 + 24);
        if ( v15 == v16 || v15 && v16 && !wcsicmp(v15, v16) )
          break;
      }
    }
    if ( ++v11 >= *((_DWORD *)a1 + 6) )
      goto LABEL_11;
  }
  *a3 = *(_DWORD *)(a1[2] + 48LL * v11 + 32);
  *a4 = *(_DWORD *)(a1[2] + 48LL * v11 + 36);
  *a5 = *(_QWORD *)(a1[2] + 48LL * v11 + 40);
  return v9;
}
