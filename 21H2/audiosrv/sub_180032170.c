/*
 * XREFs of sub_180032170 @ 0x180032170
 * Callers:
 *     sub_1800320B0 @ 0x1800320B0 (sub_1800320B0.c)
 * Callees:
 *     sub_1800E2E68 @ 0x1800E2E68 (sub_1800E2E68.c)
 *     sub_1800E2FE0 @ 0x1800E2FE0 (sub_1800E2FE0.c)
 *     sub_1800E3598 @ 0x1800E3598 (sub_1800E3598.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@2@@Z @ 0x1800E6E28 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std@@@.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@PEAX@2@@Z @ 0x1800E6FF4 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXU_Mutex_count_pair@-A0xd833279a@@@std@@@.c)
 */

__int64 *__fastcall sub_180032170(_QWORD *a1, __int64 *a2, __int64 *a3, unsigned int *a4, __int64 a5)
{
  __int64 *v6; // r9
  __int64 *v7; // rbx
  _QWORD *v8; // r11
  __int64 *v9; // rdi
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v13; // rax
  __int64 *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned int v18; // r14d
  unsigned int v19; // r10d
  bool v20; // cf
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 i; // rcx
  __int64 v24; // r9
  char v25; // [rsp+30h] [rbp-18h] BYREF
  __int64 *v26; // [rsp+50h] [rbp+8h] BYREF

  v6 = a3;
  v7 = a2;
  v8 = a1;
  v9 = (__int64 *)*a1;
  if ( a1[1] )
  {
    if ( a3 == (__int64 *)*v9 )
    {
      if ( *a4 < *((_DWORD *)a3 + 7) )
      {
        LOBYTE(a3) = 1;
        sub_1800E2E68((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, (_DWORD)v6);
        return v7;
      }
    }
    else if ( a3 == v9 )
    {
      v17 = v9[2];
      if ( *(_DWORD *)(v17 + 28) < *a4 )
      {
        sub_1800E2E68((_DWORD)a1, (_DWORD)a2, 0, v17);
        return v7;
      }
    }
    else
    {
      v18 = *a4;
      v19 = *((_DWORD *)a3 + 7);
      v20 = v19 < *a4;
      if ( v19 > *a4 )
      {
        v21 = a3;
        if ( *((_BYTE *)a3 + 25) )
        {
          v21 = (__int64 *)a3[2];
        }
        else if ( *(_BYTE *)(*a3 + 25) )
        {
          v22 = a3[1];
          if ( !*(_BYTE *)(v22 + 25) )
          {
            a2 = a3;
            do
            {
              a3 = (__int64 *)v22;
              if ( a2 != *(__int64 **)v22 )
                break;
              v21 = (__int64 *)v22;
              v22 = *(_QWORD *)(v22 + 8);
              a2 = v21;
            }
            while ( !*(_BYTE *)(v22 + 25) );
          }
          if ( !*((_BYTE *)v21 + 25) )
            v21 = (__int64 *)v22;
        }
        else
        {
          v21 = (__int64 *)*a3;
          for ( i = *(_QWORD *)(*a3 + 16); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
            v21 = (__int64 *)i;
        }
        if ( *((_DWORD *)v21 + 7) < v18 )
        {
          if ( *(_BYTE *)(v21[2] + 25) )
          {
            sub_1800E2E68((_DWORD)v8, (_DWORD)v7, 0, (_DWORD)v21);
          }
          else
          {
            LOBYTE(a3) = 1;
            sub_1800E2E68((_DWORD)v8, (_DWORD)v7, (_DWORD)a3, (_DWORD)v6);
          }
          return v7;
        }
        v20 = v19 < v18;
      }
      if ( v20 )
      {
        v26 = v6;
        sub_1800E3598(&v26, a2, a3);
        if ( v26 == v9 || v18 < *((_DWORD *)v26 + 7) )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v24 + 16) + 25LL) )
          {
            sub_1800E2E68((_DWORD)v8, (_DWORD)v7, 0, v24);
          }
          else
          {
            LOBYTE(a3) = 1;
            sub_1800E2E68((_DWORD)v8, (_DWORD)v7, (_DWORD)a3, (_DWORD)v26);
          }
          return v7;
        }
      }
    }
    *v7 = *(_QWORD *)sub_1800E2FE0((_DWORD)v8, (unsigned int)&v25, (_DWORD)a3, (_DWORD)a4, a5);
    return v7;
  }
  a1[1] = 1LL;
  v10 = a5;
  *(_QWORD *)(a5 + 8) = v9;
  if ( v9 == (__int64 *)*a1 )
  {
    *(_QWORD *)(*a1 + 8LL) = v10;
    *(_QWORD *)*a1 = v10;
    *(_QWORD *)(*a1 + 16LL) = v10;
  }
  else
  {
    *v9 = v10;
    if ( v9 == *(__int64 **)*a1 )
      *(_QWORD *)*a1 = v10;
  }
  v11 = v10;
  while ( !*(_BYTE *)(*(_QWORD *)(v11 + 8) + 24LL) )
  {
    v13 = *(_QWORD *)(v11 + 8);
    v14 = *(__int64 **)(v13 + 8);
    v15 = *v14;
    if ( v13 == *v14 )
    {
      v16 = v14[2];
      if ( *(_BYTE *)(v16 + 24) )
      {
        if ( v11 == *(_QWORD *)(v13 + 16) )
          std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Lrotate(
            v8,
            v13);
        *(_BYTE *)(*(_QWORD *)(v11 + 8) + 24LL) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) + 24LL) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Rrotate(
          v8,
          *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL),
          a3,
          v10);
      }
      else
      {
        *(_BYTE *)(v13 + 24) = 1;
        *(_BYTE *)(v16 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) + 24LL) = 0;
        v11 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL);
      }
    }
    else if ( *(_BYTE *)(v15 + 24) )
    {
      if ( v11 == *(_QWORD *)v13 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Rrotate(
          v8,
          v13,
          a3,
          v10);
      *(_BYTE *)(*(_QWORD *)(v11 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>::_Lrotate(
        v8,
        *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL));
    }
    else
    {
      *(_BYTE *)(v13 + 24) = 1;
      *(_BYTE *)(v15 + 24) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) + 24LL) = 0;
      v11 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL);
    }
  }
  *(_BYTE *)(*(_QWORD *)(*v8 + 8LL) + 24LL) = 1;
  *v7 = v10;
  return v7;
}
