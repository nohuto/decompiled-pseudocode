/*
 * XREFs of sub_18002B7A0 @ 0x18002B7A0
 * Callers:
 *     sub_18002BF90 @ 0x18002BF90 (sub_18002BF90.c)
 *     sub_18002C0F4 @ 0x18002C0F4 (sub_18002C0F4.c)
 *     sub_18004073C @ 0x18004073C (sub_18004073C.c)
 *     sub_180062A5C @ 0x180062A5C (sub_180062A5C.c)
 *     sub_18007BCE0 @ 0x18007BCE0 (sub_18007BCE0.c)
 *     sub_1800A5AE0 @ 0x1800A5AE0 (sub_1800A5AE0.c)
 *     sub_1800B0484 @ 0x1800B0484 (sub_1800B0484.c)
 *     sub_1800D4FE8 @ 0x1800D4FE8 (sub_1800D4FE8.c)
 *     sub_18011BD00 @ 0x18011BD00 (sub_18011BD00.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_18002B7A0(_QWORD *a1, __int64 *a2)
{
  __int64 ***v2; // r11
  __int64 *i; // rax
  __int64 *v5; // r10
  __int64 *v6; // rdx
  __int64 **v7; // r9
  __int64 *v8; // r8
  __int64 *j; // rdx
  __int64 *v10; // rcx
  __int64 *v11; // rax
  __int64 *v12; // rcx
  __int64 **v13; // rcx
  char v14; // dl
  bool k; // zf
  __int64 *v16; // r11
  __int64 *v17; // rcx
  __int64 *v18; // rcx
  __int64 **v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 *v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rax
  __int64 *v27; // rcx
  __int64 **v28; // rax
  __int64 *v29; // rdx
  __int64 **v30; // rax
  __int64 v31; // rax
  __int64 **v32; // rax
  __int64 v33; // rcx

  v2 = (__int64 ***)(a2 + 2);
  i = (__int64 *)a2[2];
  v5 = a2;
  if ( *((_BYTE *)i + 25) )
  {
    for ( i = (__int64 *)a2[1]; !*((_BYTE *)i + 25) && a2 == (__int64 *)i[2]; i = (__int64 *)i[1] )
      a2 = i;
  }
  else
  {
    v6 = (__int64 *)*i;
    if ( !*(_BYTE *)(*i + 25) )
    {
      do
      {
        i = v6;
        v6 = (__int64 *)*v6;
      }
      while ( !*((_BYTE *)v6 + 25) );
    }
  }
  v7 = *v2;
  if ( !*(_BYTE *)(*v5 + 25) )
  {
    if ( *((_BYTE *)v7 + 25) )
    {
      v7 = (__int64 **)*v5;
    }
    else
    {
      v7 = (__int64 **)i[2];
      if ( i != v5 )
      {
        *(_QWORD *)(*v5 + 8) = i;
        *i = *v5;
        if ( i == (__int64 *)*v2 )
        {
          v8 = i;
        }
        else
        {
          v8 = (__int64 *)i[1];
          if ( !*((_BYTE *)v7 + 25) )
            v7[1] = v8;
          *v8 = (__int64)v7;
          i[2] = (__int64)*v2;
          (*v2)[1] = i;
        }
        if ( *(__int64 **)(*a1 + 8LL) == v5 )
        {
          *(_QWORD *)(*a1 + 8LL) = i;
        }
        else
        {
          v13 = (__int64 **)v5[1];
          if ( *v13 == v5 )
            *v13 = i;
          else
            v13[2] = i;
        }
        v14 = *((_BYTE *)i + 24);
        i[1] = v5[1];
        *((_BYTE *)i + 24) = *((_BYTE *)v5 + 24);
        *((_BYTE *)v5 + 24) = v14;
        goto LABEL_44;
      }
    }
  }
  v8 = (__int64 *)v5[1];
  if ( !*((_BYTE *)v7 + 25) )
    v7[1] = v8;
  if ( *(__int64 **)(*a1 + 8LL) == v5 )
  {
    *(_QWORD *)(*a1 + 8LL) = v7;
  }
  else if ( (__int64 *)*v8 == v5 )
  {
    *v8 = (__int64)v7;
  }
  else
  {
    v8[2] = (__int64)v7;
  }
  if ( *(__int64 **)*a1 == v5 )
  {
    if ( *((_BYTE *)v7 + 25) )
    {
      j = v8;
    }
    else
    {
      v10 = *v7;
      for ( j = (__int64 *)v7; !*((_BYTE *)v10 + 25); v10 = (__int64 *)*v10 )
        j = v10;
    }
    *(_QWORD *)*a1 = j;
  }
  if ( *(__int64 **)(*a1 + 16LL) == v5 )
  {
    if ( *((_BYTE *)v7 + 25) )
    {
      v11 = v8;
    }
    else
    {
      v12 = v7[2];
      v11 = (__int64 *)v7;
      while ( !*((_BYTE *)v12 + 25) )
      {
        v11 = v12;
        v12 = (__int64 *)v12[2];
      }
    }
    *(_QWORD *)(*a1 + 16LL) = v11;
  }
LABEL_44:
  if ( *((_BYTE *)v5 + 24) != 1 )
    goto LABEL_111;
  for ( k = v7 == *(__int64 ***)(*a1 + 8LL); !k; k = v16 == *(__int64 **)(*a1 + 8LL) )
  {
    v16 = v8;
    if ( *((_BYTE *)v7 + 24) != 1 )
      break;
    v17 = (__int64 *)*v8;
    if ( v7 == (__int64 **)*v8 )
    {
      v17 = (__int64 *)v8[2];
      if ( !*((_BYTE *)v17 + 24) )
      {
        *((_BYTE *)v17 + 24) = 1;
        v18 = (__int64 *)v8[2];
        *((_BYTE *)v8 + 24) = 0;
        v8[2] = *v18;
        if ( !*(_BYTE *)(*v18 + 25) )
          *(_QWORD *)(*v18 + 8) = v8;
        v18[1] = v8[1];
        if ( v8 == *(__int64 **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v18;
        }
        else
        {
          v19 = (__int64 **)v8[1];
          if ( v8 == *v19 )
            *v19 = v18;
          else
            v19[2] = v18;
        }
        *v18 = (__int64)v8;
        v8[1] = (__int64)v18;
        v17 = (__int64 *)v8[2];
      }
      if ( !*((_BYTE *)v17 + 25) )
      {
        if ( *(_BYTE *)(*v17 + 24) != 1 || *(_BYTE *)(v17[2] + 24) != 1 )
        {
          if ( *(_BYTE *)(v17[2] + 24) == 1 )
          {
            *(_BYTE *)(*v17 + 24) = 1;
            v20 = *v17;
            *((_BYTE *)v17 + 24) = 0;
            *v17 = *(_QWORD *)(v20 + 16);
            v21 = *(_QWORD *)(v20 + 16);
            if ( !*(_BYTE *)(v21 + 25) )
              *(_QWORD *)(v21 + 8) = v17;
            *(_QWORD *)(v20 + 8) = v17[1];
            if ( v17 == *(__int64 **)(*a1 + 8LL) )
            {
              *(_QWORD *)(*a1 + 8LL) = v20;
            }
            else
            {
              v26 = (_QWORD *)v17[1];
              if ( v17 == (__int64 *)v26[2] )
                v26[2] = v20;
              else
                *v26 = v20;
            }
            *(_QWORD *)(v20 + 16) = v17;
            v17[1] = v20;
            v17 = (__int64 *)v8[2];
          }
          *((_BYTE *)v17 + 24) = *((_BYTE *)v8 + 24);
          *((_BYTE *)v8 + 24) = 1;
          *(_BYTE *)(v17[2] + 24) = 1;
          v27 = (__int64 *)v8[2];
          v8[2] = *v27;
          if ( !*(_BYTE *)(*v27 + 25) )
            *(_QWORD *)(*v27 + 8) = v8;
          v27[1] = v8[1];
          if ( v8 == *(__int64 **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v27;
          }
          else
          {
            v28 = (__int64 **)v8[1];
            if ( v8 == *v28 )
              *v28 = v27;
            else
              v28[2] = v27;
          }
          *v27 = (__int64)v8;
LABEL_109:
          v8[1] = (__int64)v27;
          break;
        }
LABEL_78:
        *((_BYTE *)v17 + 24) = 0;
      }
    }
    else
    {
      if ( !*((_BYTE *)v17 + 24) )
      {
        *((_BYTE *)v17 + 24) = 1;
        v22 = (__int64 *)*v8;
        *((_BYTE *)v8 + 24) = 0;
        *v8 = v22[2];
        v23 = v22[2];
        if ( !*(_BYTE *)(v23 + 25) )
          *(_QWORD *)(v23 + 8) = v8;
        v22[1] = v8[1];
        if ( v8 == *(__int64 **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v22;
        }
        else
        {
          v24 = (_QWORD *)v8[1];
          if ( v8 == (__int64 *)v24[2] )
            v24[2] = v22;
          else
            *v24 = v22;
        }
        v22[2] = (__int64)v8;
        v8[1] = (__int64)v22;
        v17 = (__int64 *)*v8;
      }
      if ( !*((_BYTE *)v17 + 25) )
      {
        v25 = v17[2];
        if ( *(_BYTE *)(v25 + 24) != 1 || *(_BYTE *)(*v17 + 24) != 1 )
        {
          if ( *(_BYTE *)(*v17 + 24) == 1 )
          {
            *(_BYTE *)(v25 + 24) = 1;
            v29 = (__int64 *)v17[2];
            *((_BYTE *)v17 + 24) = 0;
            v17[2] = *v29;
            if ( !*(_BYTE *)(*v29 + 25) )
              *(_QWORD *)(*v29 + 8) = v17;
            v29[1] = v17[1];
            if ( v17 == *(__int64 **)(*a1 + 8LL) )
            {
              *(_QWORD *)(*a1 + 8LL) = v29;
            }
            else
            {
              v30 = (__int64 **)v17[1];
              if ( v17 == *v30 )
                *v30 = v29;
              else
                v30[2] = v29;
            }
            *v29 = (__int64)v17;
            v17[1] = (__int64)v29;
            v17 = (__int64 *)*v8;
          }
          *((_BYTE *)v17 + 24) = *((_BYTE *)v8 + 24);
          *((_BYTE *)v8 + 24) = 1;
          *(_BYTE *)(*v17 + 24) = 1;
          v27 = (__int64 *)*v8;
          *v8 = *(_QWORD *)(*v8 + 16);
          v31 = v27[2];
          if ( !*(_BYTE *)(v31 + 25) )
            *(_QWORD *)(v31 + 8) = v8;
          v27[1] = v8[1];
          if ( v8 == *(__int64 **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v27;
          }
          else
          {
            v32 = (__int64 **)v8[1];
            if ( v8 == v32[2] )
              v32[2] = v27;
            else
              *v32 = v27;
          }
          v27[2] = (__int64)v8;
          goto LABEL_109;
        }
        goto LABEL_78;
      }
    }
    v7 = (__int64 **)v8;
    v8 = (__int64 *)v8[1];
  }
  *((_BYTE *)v7 + 24) = 1;
LABEL_111:
  v33 = a1[1];
  if ( v33 )
    a1[1] = v33 - 1;
  return v5;
}
