/*
 * XREFs of sub_1800B3E78 @ 0x1800B3E78
 * Callers:
 *     sub_1800B4104 @ 0x1800B4104 (sub_1800B4104.c)
 *     sub_1800B42E0 @ 0x1800B42E0 (sub_1800B42E0.c)
 * Callees:
 *     sub_1800B5C44 @ 0x1800B5C44 (sub_1800B5C44.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180125246 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

_QWORD *__fastcall sub_1800B3E78(_QWORD *a1, _QWORD *a2, char a3, _QWORD *a4, int a5, _QWORD *a6)
{
  unsigned __int64 v6; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // r11
  _QWORD *v13; // rcx
  _QWORD *v14; // rbx
  __int64 *v15; // r8
  _QWORD *v16; // rax
  _QWORD *v17; // r8
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // r8
  __int64 v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  _QWORD *result; // rax

  v6 = a1[1];
  if ( v6 >= 0x38E38E38E38E38DLL )
  {
    sub_1800B5C44(a1, a6);
    std::_Xlength_error("map/set<T> too long");
  }
  a1[1] = v6 + 1;
  a6[1] = a4;
  if ( a4 == (_QWORD *)*a1 )
  {
    *(_QWORD *)(*a1 + 8LL) = a6;
    *(_QWORD *)*a1 = a6;
    v9 = *a1;
LABEL_8:
    *(_QWORD *)(v9 + 16) = a6;
    goto LABEL_9;
  }
  if ( a3 )
  {
    *a4 = a6;
    if ( a4 == *(_QWORD **)*a1 )
      *(_QWORD *)*a1 = a6;
    goto LABEL_9;
  }
  a4[2] = a6;
  v9 = *a1;
  if ( a4 == *(_QWORD **)(*a1 + 16LL) )
    goto LABEL_8;
LABEL_9:
  v10 = a6[1];
  v11 = a6;
  while ( !*(_BYTE *)(v10 + 24) )
  {
    v12 = v11 + 1;
    v13 = (_QWORD *)v11[1];
    v14 = v13 + 1;
    v15 = (__int64 *)v13[1];
    v16 = (_QWORD *)*v15;
    if ( v13 == (_QWORD *)*v15 )
    {
      v16 = (_QWORD *)v15[2];
      if ( !*((_BYTE *)v16 + 24) )
        goto LABEL_31;
      v17 = (_QWORD *)v13[2];
      if ( v11 == v17 )
      {
        v11 = (_QWORD *)v11[1];
        v13[2] = *v17;
        if ( !*(_BYTE *)(*v17 + 25LL) )
          *(_QWORD *)(*v17 + 8LL) = v13;
        v17[1] = *v14;
        if ( v13 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v17;
        }
        else
        {
          v18 = (_QWORD *)*v14;
          if ( v13 == *(_QWORD **)*v14 )
            *v18 = v17;
          else
            v18[2] = v17;
        }
        *v17 = v13;
        v12 = v13 + 1;
        *v14 = v17;
      }
      else
      {
        v17 = (_QWORD *)v11[1];
      }
      *((_BYTE *)v17 + 24) = 1;
      *(_BYTE *)(*(_QWORD *)(*v12 + 8LL) + 24LL) = 0;
      v19 = *(_QWORD **)(*v12 + 8LL);
      v20 = (_QWORD *)*v19;
      *v19 = *(_QWORD *)(*v19 + 16LL);
      v21 = v20[2];
      if ( !*(_BYTE *)(v21 + 25) )
        *(_QWORD *)(v21 + 8) = v19;
      v20[1] = v19[1];
      if ( v19 == *(_QWORD **)(*a1 + 8LL) )
      {
        *(_QWORD *)(*a1 + 8LL) = v20;
      }
      else
      {
        v22 = (_QWORD *)v19[1];
        if ( v19 == (_QWORD *)v22[2] )
          v22[2] = v20;
        else
          *v22 = v20;
      }
      v20[2] = v19;
    }
    else
    {
      if ( !*((_BYTE *)v16 + 24) )
      {
LABEL_31:
        *((_BYTE *)v13 + 24) = 1;
        *((_BYTE *)v16 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*v12 + 8LL) + 24LL) = 0;
        v11 = *(_QWORD **)(*v12 + 8LL);
        goto LABEL_50;
      }
      v23 = (_QWORD *)*v13;
      if ( v11 == (_QWORD *)*v13 )
      {
        v11 = (_QWORD *)v11[1];
        v13 = (_QWORD *)*v13;
        *v11 = v23[2];
        v24 = v23[2];
        if ( !*(_BYTE *)(v24 + 25) )
          *(_QWORD *)(v24 + 8) = v11;
        v13[1] = *v14;
        if ( v11 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v13;
        }
        else
        {
          v25 = (_QWORD *)*v14;
          if ( v11 == *(_QWORD **)(*v14 + 16LL) )
            v25[2] = v13;
          else
            *v25 = v13;
        }
        v13[2] = v11;
        v12 = v14;
        *v14 = v13;
      }
      *((_BYTE *)v13 + 24) = 1;
      *(_BYTE *)(*(_QWORD *)(*v12 + 8LL) + 24LL) = 0;
      v19 = *(_QWORD **)(*v12 + 8LL);
      v20 = (_QWORD *)v19[2];
      v19[2] = *v20;
      if ( !*(_BYTE *)(*v20 + 25LL) )
        *(_QWORD *)(*v20 + 8LL) = v19;
      v20[1] = v19[1];
      if ( v19 == *(_QWORD **)(*a1 + 8LL) )
      {
        *(_QWORD *)(*a1 + 8LL) = v20;
      }
      else
      {
        v26 = (_QWORD *)v19[1];
        if ( v19 == (_QWORD *)*v26 )
          *v26 = v20;
        else
          v26[2] = v20;
      }
      *v20 = v19;
    }
    v19[1] = v20;
LABEL_50:
    v10 = v11[1];
  }
  v27 = *a1;
  *a2 = a6;
  v28 = *(_QWORD *)(v27 + 8);
  result = a2;
  *(_BYTE *)(v28 + 24) = 1;
  return result;
}
