/*
 * XREFs of ApiSetValidateSchemaFormat @ 0x1405BE514
 * Callers:
 *     ApiSetComposeSchema @ 0x1405BE7D0 (ApiSetComposeSchema.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x1403A3480 (ApiSetpSearchForApiSet.c)
 */

__int64 __fastcall ApiSetValidateSchemaFormat(_DWORD *a1, unsigned int a2)
{
  unsigned int v4; // esi
  __int64 v5; // r14
  unsigned int v6; // eax
  unsigned int v7; // ebp
  __int64 v8; // r15
  __int64 v9; // r12
  unsigned int *v10; // rdi
  unsigned int v11; // ecx
  __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // r9
  int v16; // ecx
  __int64 i; // rdx
  _DWORD *v18; // rax
  unsigned int v19; // r8d
  unsigned int v20; // r10d
  unsigned int v21; // ecx
  unsigned int v22; // r8d
  unsigned int v23; // ecx
  int v24; // ecx
  unsigned int v25; // eax

  if ( *a1 > 4u )
  {
    if ( a2 >= 0x1C )
    {
      v4 = a1[1];
      if ( v4 <= a2 )
      {
        v5 = (unsigned int)a1[3];
        v6 = 24 * v5;
        if ( (unsigned __int64)(24 * v5) > 0xFFFFFFFF )
          return (unsigned int)-1073741675;
        v7 = v6 + 28;
        if ( v6 >= 0xFFFFFFE4 )
          return (unsigned int)-1073741675;
        if ( v7 <= v4 )
        {
          v8 = 0LL;
          if ( (_DWORD)v5 )
          {
            v9 = (unsigned int)a1[4];
            do
            {
              v10 = (_DWORD *)((char *)&a1[6 * v8] + v9);
              v11 = v10[2];
              if ( v11 > 0xFFFF )
                return (unsigned int)-1073741596;
              if ( v10[3] > 0xFFFF )
                return (unsigned int)-1073741596;
              v12 = v10[1];
              if ( (_DWORD)v12 )
              {
                if ( (unsigned int)v12 < v7 )
                  return (unsigned int)-1073741596;
              }
              v13 = v12 + v11;
              if ( v13 < (unsigned int)v12 )
                return (unsigned int)-1073741675;
              if ( v13 > v4 )
                return (unsigned int)-1073741596;
              if ( (unsigned int *)ApiSetpSearchForApiSet(
                                     a1,
                                     (const WCHAR *)((char *)a1 + v12),
                                     *((_WORD *)v10 + 6) >> 1) != v10 )
                return (unsigned int)-1073741596;
              v14 = v10[4];
              if ( v14 )
              {
                if ( v14 < v7 )
                  return (unsigned int)-1073741596;
              }
              v15 = v10[5];
              v16 = 20 * v15;
              if ( (unsigned __int64)(20 * v15) > 0xFFFFFFFF || v14 + v16 < v14 )
                return (unsigned int)-1073741675;
              if ( v14 + v16 > v4 )
                return (unsigned int)-1073741596;
              for ( i = 0LL; (unsigned int)i < (unsigned int)v15; i = (unsigned int)(i + 1) )
              {
                v18 = (_DWORD *)((char *)&a1[5 * i] + v10[4]);
                v19 = v18[2];
                if ( v19 > 0xFFFF )
                  return (unsigned int)-1073741596;
                v20 = v18[4];
                if ( v20 > 0xFFFF )
                  return (unsigned int)-1073741596;
                v21 = v18[1];
                if ( v21 )
                {
                  if ( v21 < v7 )
                    return (unsigned int)-1073741596;
                }
                v22 = v21 + v19;
                if ( v22 < v21 )
                  return (unsigned int)-1073741675;
                if ( v22 > v4 )
                  return (unsigned int)-1073741596;
                v23 = v18[3];
                if ( v23 )
                {
                  if ( v23 < v7 )
                    return (unsigned int)-1073741596;
                }
                if ( v20 + v23 < v23 )
                  return (unsigned int)-1073741675;
                if ( v20 + v23 > v4 )
                  return (unsigned int)-1073741596;
              }
              v8 = (unsigned int)(v8 + 1);
            }
            while ( (unsigned int)v8 < (unsigned int)v5 );
          }
          v24 = 8 * v5;
          if ( (unsigned __int64)(8 * v5) <= 0xFFFFFFFF )
          {
            v25 = a1[5];
            if ( v25 + v24 >= v25 )
              return v4 < v25 + v24 ? 0xC00000E4 : 0;
          }
          return (unsigned int)-1073741675;
        }
      }
    }
    return (unsigned int)-1073741596;
  }
  return (unsigned int)-1073741637;
}
