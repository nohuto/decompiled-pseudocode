/*
 * XREFs of sub_18009CD60 @ 0x18009CD60
 * Callers:
 *     sub_18009DE18 @ 0x18009DE18 (sub_18009DE18.c)
 * Callees:
 *     sub_18009C518 @ 0x18009C518 (sub_18009C518.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18011F976 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

_QWORD *__fastcall sub_18009CD60(__int64 *a1, _QWORD *a2, char a3, _QWORD *a4, __int64 a5)
{
  _QWORD *v9; // rax
  _QWORD *v10; // r9
  __int64 v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // r10
  _QWORD *v14; // rcx
  _QWORD *v15; // r11
  __int64 *v16; // r8
  _QWORD *v17; // rax
  _QWORD *v18; // r8
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  _QWORD *v21; // r8
  __int64 v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rcx
  _QWORD *result; // rax

  if ( (unsigned __int64)a1[1] >= 0x3FFFFFFFFFFFFFELL )
    std::_Xlength_error("map/set<T> too long");
  v9 = sub_18009C518((__int64)a1, *a1, a5);
  ++a1[1];
  v10 = v9;
  v9[1] = a4;
  if ( a4 == (_QWORD *)*a1 )
  {
    *(_QWORD *)(*a1 + 8) = v9;
    *(_QWORD *)*a1 = v9;
    *(_QWORD *)(*a1 + 16) = v9;
  }
  else if ( a3 )
  {
    *a4 = v9;
    if ( a4 == *(_QWORD **)*a1 )
      *(_QWORD *)*a1 = v9;
  }
  else
  {
    a4[2] = v9;
    if ( a4 == *(_QWORD **)(*a1 + 16) )
      *(_QWORD *)(*a1 + 16) = v9;
  }
  v11 = v9[1];
  v12 = v10;
  while ( !*(_BYTE *)(v11 + 24) )
  {
    v13 = v12 + 1;
    v14 = (_QWORD *)v12[1];
    v15 = v14 + 1;
    v16 = (__int64 *)v14[1];
    v17 = (_QWORD *)*v16;
    if ( v14 == (_QWORD *)*v16 )
    {
      v17 = (_QWORD *)v16[2];
      if ( !*((_BYTE *)v17 + 24) )
        goto LABEL_31;
      v18 = (_QWORD *)v14[2];
      if ( v12 == v18 )
      {
        v12 = (_QWORD *)v12[1];
        v14[2] = *v18;
        if ( !*(_BYTE *)(*v18 + 25LL) )
          *(_QWORD *)(*v18 + 8LL) = v14;
        v18[1] = *v15;
        if ( v14 == *(_QWORD **)(*a1 + 8) )
        {
          *(_QWORD *)(*a1 + 8) = v18;
        }
        else
        {
          v19 = (_QWORD *)*v15;
          if ( v14 == *(_QWORD **)*v15 )
            *v19 = v18;
          else
            v19[2] = v18;
        }
        *v18 = v14;
        v13 = v14 + 1;
        *v15 = v18;
      }
      else
      {
        v18 = (_QWORD *)v12[1];
      }
      *((_BYTE *)v18 + 24) = 1;
      *(_BYTE *)(*(_QWORD *)(*v13 + 8LL) + 24LL) = 0;
      v20 = *(_QWORD **)(*v13 + 8LL);
      v21 = (_QWORD *)*v20;
      *v20 = *(_QWORD *)(*v20 + 16LL);
      v22 = v21[2];
      if ( !*(_BYTE *)(v22 + 25) )
        *(_QWORD *)(v22 + 8) = v20;
      v21[1] = v20[1];
      if ( v20 == *(_QWORD **)(*a1 + 8) )
      {
        *(_QWORD *)(*a1 + 8) = v21;
      }
      else
      {
        v23 = (_QWORD *)v20[1];
        if ( v20 == (_QWORD *)v23[2] )
          v23[2] = v21;
        else
          *v23 = v21;
      }
      v21[2] = v20;
    }
    else
    {
      if ( !*((_BYTE *)v17 + 24) )
      {
LABEL_31:
        *((_BYTE *)v14 + 24) = 1;
        *((_BYTE *)v17 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*v13 + 8LL) + 24LL) = 0;
        v12 = *(_QWORD **)(*v13 + 8LL);
        goto LABEL_50;
      }
      v24 = (_QWORD *)*v14;
      if ( v12 == (_QWORD *)*v14 )
      {
        v12 = (_QWORD *)v12[1];
        v14 = (_QWORD *)*v14;
        *v12 = v24[2];
        v25 = v24[2];
        if ( !*(_BYTE *)(v25 + 25) )
          *(_QWORD *)(v25 + 8) = v12;
        v14[1] = *v15;
        if ( v12 == *(_QWORD **)(*a1 + 8) )
        {
          *(_QWORD *)(*a1 + 8) = v14;
        }
        else
        {
          v26 = (_QWORD *)*v15;
          if ( v12 == *(_QWORD **)(*v15 + 16LL) )
            v26[2] = v14;
          else
            *v26 = v14;
        }
        v14[2] = v12;
        v13 = v15;
        *v15 = v14;
      }
      *((_BYTE *)v14 + 24) = 1;
      *(_BYTE *)(*(_QWORD *)(*v13 + 8LL) + 24LL) = 0;
      v20 = *(_QWORD **)(*v13 + 8LL);
      v21 = (_QWORD *)v20[2];
      v20[2] = *v21;
      if ( !*(_BYTE *)(*v21 + 25LL) )
        *(_QWORD *)(*v21 + 8LL) = v20;
      v21[1] = v20[1];
      if ( v20 == *(_QWORD **)(*a1 + 8) )
      {
        *(_QWORD *)(*a1 + 8) = v21;
      }
      else
      {
        v27 = (_QWORD *)v20[1];
        if ( v20 == (_QWORD *)*v27 )
          *v27 = v21;
        else
          v27[2] = v21;
      }
      *v21 = v20;
    }
    v20[1] = v21;
LABEL_50:
    v11 = v12[1];
  }
  v28 = *(_QWORD *)(*a1 + 8);
  result = a2;
  *a2 = v10;
  *(_BYTE *)(v28 + 24) = 1;
  return result;
}
