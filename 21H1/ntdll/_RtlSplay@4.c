/*
 * XREFs of _RtlSplay@4 @ 0x4B2E8250
 * Callers:
 *     _RtlInsertElementGenericTableFull@24 @ 0x4B2A7DA0 (_RtlInsertElementGenericTableFull@24.c)
 *     _RtlLookupElementGenericTableFull@16 @ 0x4B2A7F10 (_RtlLookupElementGenericTableFull@16.c)
 *     _RtlDelete@4 @ 0x4B2A7FC0 (_RtlDelete@4.c)
 *     _PfxFindPrefix@8 @ 0x4B345160 (_PfxFindPrefix@8.c)
 *     _PfxInsertPrefix@12 @ 0x4B345220 (_PfxInsertPrefix@12.c)
 *     _RtlEnumerateGenericTable@8 @ 0x4B35E0A0 (_RtlEnumerateGenericTable@8.c)
 *     _RtlpTpIoLookup@12 @ 0x4B385A3D (_RtlpTpIoLookup@12.c)
 * Callees:
 *     <none>
 */

_DWORD *__stdcall RtlSplay(_DWORD *a1)
{
  _DWORD *result; // eax
  _DWORD *i; // ecx
  _DWORD *v3; // esi
  _DWORD *v4; // edx
  _DWORD *v5; // edx
  _DWORD *v6; // esi
  _DWORD *v7; // esi
  _DWORD *v8; // esi
  _DWORD *v9; // edx
  _DWORD *v10; // esi
  _DWORD *v11; // esi
  _DWORD *v12; // esi
  _DWORD *v13; // esi
  _DWORD *v14; // esi
  _DWORD *v15; // esi
  _DWORD *v16; // esi
  _DWORD *v17; // esi

  result = a1;
  for ( i = (_DWORD *)*a1; (_DWORD *)*a1 != a1; i = (_DWORD *)*a1 )
  {
    v3 = (_DWORD *)i[1];
    v4 = (_DWORD *)*i;
    if ( v3 == a1 )
    {
      if ( v4 != i )
      {
        if ( (_DWORD *)v4[1] != i )
        {
          v13 = (_DWORD *)a1[1];
          v4[2] = v13;
          if ( v13 )
            *v13 = v4;
          v14 = (_DWORD *)a1[2];
          i[1] = v14;
          if ( v14 )
            *v14 = i;
          if ( (_DWORD *)*v4 == v4 )
          {
            *a1 = a1;
          }
          else
          {
            *a1 = *v4;
            v15 = (_DWORD *)(*v4 + 4);
            if ( (_DWORD *)*v15 != v4 )
              v15 = (_DWORD *)(*v4 + 8);
            *v15 = a1;
          }
          a1[1] = v4;
          *v4 = a1;
          a1[2] = i;
          *i = a1;
          continue;
        }
        v10 = (_DWORD *)a1[2];
        i[1] = v10;
        if ( v10 )
          *v10 = i;
        v11 = (_DWORD *)i[2];
        v4[1] = v11;
        if ( v11 )
          *v11 = v4;
        if ( (_DWORD *)*v4 == v4 )
        {
          *a1 = a1;
        }
        else
        {
          *a1 = *v4;
          v12 = (_DWORD *)(*v4 + 4);
          if ( (_DWORD *)*v12 != v4 )
            v12 = (_DWORD *)(*v4 + 8);
          *v12 = a1;
        }
        a1[2] = i;
        i[2] = v4;
LABEL_56:
        *i = a1;
        *v4 = i;
        continue;
      }
      v9 = (_DWORD *)a1[2];
      i[1] = v9;
      if ( v9 )
        *v9 = i;
      a1[2] = i;
    }
    else
    {
      if ( v4 != i )
      {
        if ( (_DWORD *)v4[2] != i )
        {
          v6 = (_DWORD *)a1[1];
          i[2] = v6;
          if ( v6 )
            *v6 = i;
          v7 = (_DWORD *)a1[2];
          v4[1] = v7;
          if ( v7 )
            *v7 = v4;
          if ( (_DWORD *)*v4 == v4 )
          {
            *a1 = a1;
          }
          else
          {
            *a1 = *v4;
            v8 = (_DWORD *)(*v4 + 4);
            if ( (_DWORD *)*v8 != v4 )
              v8 = (_DWORD *)(*v4 + 8);
            *v8 = a1;
          }
          a1[1] = i;
          *i = a1;
          a1[2] = v4;
          *v4 = a1;
          continue;
        }
        v4[2] = v3;
        if ( v3 )
          *v3 = v4;
        v16 = (_DWORD *)a1[1];
        i[2] = v16;
        if ( v16 )
          *v16 = i;
        if ( (_DWORD *)*v4 == v4 )
        {
          *a1 = a1;
        }
        else
        {
          *a1 = *v4;
          v17 = (_DWORD *)(*v4 + 4);
          if ( (_DWORD *)*v17 != v4 )
            v17 = (_DWORD *)(*v4 + 8);
          *v17 = a1;
        }
        a1[1] = i;
        i[1] = v4;
        goto LABEL_56;
      }
      v5 = (_DWORD *)a1[1];
      i[2] = v5;
      if ( v5 )
        *v5 = i;
      a1[1] = i;
    }
    *i = a1;
    *a1 = a1;
  }
  return result;
}
