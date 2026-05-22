/*
 * XREFs of ??$_Eqrange@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@2@$00@std@@@std@@IEBA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@V12@@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1800D546C
 * Callers:
 *     ?RemoveSpatialObjectDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEB_W@Z @ 0x1800D87D0 (-RemoveSpatialObjectDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@2@$00@std@@@std@@QEAA_KAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x1800DB28C (-erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocato_ea_1800DB28C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>>,1>>::_Eqrange<std::wstring>(
        _QWORD *a1,
        _QWORD *a2,
        char *a3)
{
  __int64 *v3; // r14
  __int64 *v6; // rbp
  __int64 **v7; // r15
  __int64 *v8; // r9
  char *v9; // rax
  char *v10; // rcx
  char *v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r8
  signed __int64 v14; // rdx
  unsigned __int16 v15; // r11
  int v16; // ecx
  bool v17; // sf
  char *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int16 v21; // r8
  int v22; // eax
  bool v23; // sf
  __int64 *v24; // rcx
  char *v25; // rax
  char *v26; // r8
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int16 v30; // r11
  int v31; // eax
  bool v32; // sf
  _QWORD *result; // rax

  v3 = (__int64 *)*a1;
  v6 = (__int64 *)*a1;
  v7 = (__int64 **)(*a1 + 8LL);
  v8 = *v7;
  while ( !*((_BYTE *)v8 + 25) )
  {
    v9 = (char *)(v8 + 4);
    v10 = a3;
    if ( *((_QWORD *)a3 + 3) >= 8uLL )
      v10 = *(char **)a3;
    v11 = (char *)(v8 + 4);
    if ( (unsigned __int64)v8[7] >= 8 )
      v11 = *(char **)v9;
    v12 = v8[6];
    v13 = *((_QWORD *)a3 + 2);
    if ( v13 >= v12 )
      v13 = v8[6];
    if ( v13 )
    {
      v14 = v11 - v10;
      while ( 1 )
      {
        v15 = *(_WORD *)&v10[v14];
        if ( v15 != *(_WORD *)v10 )
          break;
        v10 += 2;
        if ( !--v13 )
          goto LABEL_12;
      }
      v16 = v15 < *(_WORD *)v10 ? -1 : 1;
    }
    else
    {
LABEL_12:
      v16 = 0;
    }
    v17 = v16 < 0;
    if ( !v16 )
    {
      if ( v12 < *((_QWORD *)a3 + 2) )
        goto LABEL_39;
      if ( v12 > *((_QWORD *)a3 + 2) )
        goto LABEL_18;
      v17 = 0;
    }
    if ( v17 )
    {
LABEL_39:
      v8 = (__int64 *)v8[2];
    }
    else
    {
LABEL_18:
      if ( !*((_BYTE *)v6 + 25) )
        goto LABEL_36;
      if ( (unsigned __int64)v8[7] >= 8 )
        v9 = *(char **)v9;
      v18 = a3;
      if ( *((_QWORD *)a3 + 3) >= 8uLL )
        v18 = *(char **)a3;
      v19 = v8[6];
      if ( v12 >= *((_QWORD *)a3 + 2) )
        v19 = *((_QWORD *)a3 + 2);
      if ( v19 )
      {
        v20 = v18 - v9;
        while ( 1 )
        {
          v21 = *(_WORD *)&v9[v20];
          if ( v21 != *(_WORD *)v9 )
            break;
          v9 += 2;
          if ( !--v19 )
            goto LABEL_29;
        }
        v22 = v21 < *(_WORD *)v9 ? -1 : 1;
      }
      else
      {
LABEL_29:
        v22 = 0;
      }
      v23 = v22 < 0;
      if ( v22 )
        goto LABEL_34;
      if ( *((_QWORD *)a3 + 2) >= v12 )
      {
        if ( *((_QWORD *)a3 + 2) > v12 )
          goto LABEL_36;
        v23 = 0;
LABEL_34:
        if ( !v23 )
          goto LABEL_36;
      }
      v6 = v8;
LABEL_36:
      v3 = v8;
      v8 = (__int64 *)*v8;
    }
  }
  if ( !*((_BYTE *)v6 + 25) )
    v7 = (__int64 **)v6;
  v24 = *v7;
  while ( 2 )
  {
    if ( !*((_BYTE *)v24 + 25) )
    {
      v25 = (char *)(v24 + 4);
      if ( (unsigned __int64)v24[7] >= 8 )
        v25 = (char *)v24[4];
      v26 = a3;
      if ( *((_QWORD *)a3 + 3) >= 8uLL )
        v26 = *(char **)a3;
      v27 = v24[6];
      v28 = v27;
      if ( v27 >= *((_QWORD *)a3 + 2) )
        v28 = *((_QWORD *)a3 + 2);
      if ( v28 )
      {
        v29 = v26 - v25;
        while ( 1 )
        {
          v30 = *(_WORD *)&v25[v29];
          if ( v30 != *(_WORD *)v25 )
            break;
          v25 += 2;
          if ( !--v28 )
            goto LABEL_54;
        }
        v31 = v30 < *(_WORD *)v25 ? -1 : 1;
      }
      else
      {
LABEL_54:
        v31 = 0;
      }
      v32 = v31 < 0;
      if ( !v31 )
      {
        if ( *((_QWORD *)a3 + 2) < v27 )
        {
LABEL_62:
          v6 = v24;
          v24 = (__int64 *)*v24;
          continue;
        }
        if ( *((_QWORD *)a3 + 2) > v27 )
          goto LABEL_60;
        v32 = 0;
      }
      if ( !v32 )
      {
LABEL_60:
        v24 = (__int64 *)v24[2];
        continue;
      }
      goto LABEL_62;
    }
    break;
  }
  result = a2;
  a2[1] = v6;
  *a2 = v3;
  return result;
}
