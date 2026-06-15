/*
 * XREFs of sub_180108CC0 @ 0x180108CC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_180106A68 @ 0x180106A68 (sub_180106A68.c)
 *     sub_180106AC4 @ 0x180106AC4 (sub_180106AC4.c)
 *     sub_180108408 @ 0x180108408 (sub_180108408.c)
 *     sub_180108504 @ 0x180108504 (sub_180108504.c)
 *     sub_180108EE0 @ 0x180108EE0 (sub_180108EE0.c)
 *     sub_180109610 @ 0x180109610 (sub_180109610.c)
 */

void __fastcall sub_180108CC0(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  _QWORD *v3; // rbx
  unsigned int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 *v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  std::_Ref_count_base *v19; // rcx

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  sub_180109610(a1 + 576);
  sub_180108EE0(a1 + 344);
  v3 = (_QWORD *)(a1 + 232);
  if ( *(_QWORD *)(a1 + 240) && (v4 = 0, *(_DWORD *)(a1 + 248)) )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(*v3 + 8LL * v4);
      if ( v5 )
        break;
      if ( ++v4 >= *(_DWORD *)(a1 + 248) )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v5 = 0LL;
  }
  v6 = 0LL;
  *(_QWORD *)(a1 + 304) = v5;
  if ( v5 )
    v6 = sub_180106A68(a1 + 232, (__int64 *)(a1 + 304));
  while ( v6 )
  {
    sub_180108504(a1, v6);
    if ( *(_QWORD *)(a1 + 240) && (v7 = 0, *(_DWORD *)(a1 + 248)) )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(*v3 + 8LL * v7);
        if ( v8 )
          break;
        if ( ++v7 >= *(_DWORD *)(a1 + 248) )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      v8 = 0LL;
    }
    *(_QWORD *)(a1 + 304) = v8;
    v6 = 0LL;
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 104);
      if ( !v9 )
      {
        v9 = 0LL;
        v10 = (unsigned int)(*(_DWORD *)(v8 + 112) % *(_DWORD *)(a1 + 248) + 1);
        do
        {
          if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 248) )
            break;
          if ( *(_QWORD *)(*v3 + 8 * v10) )
            v9 = *(_QWORD *)(*v3 + 8 * v10);
          v10 = (unsigned int)(v10 + 1);
        }
        while ( !v9 );
      }
      *(_QWORD *)(a1 + 304) = v9;
      v6 = v8 + 8;
    }
  }
  v11 = (_QWORD *)(a1 + 152);
  if ( *(_QWORD *)(a1 + 160) && (v12 = 0, *(_DWORD *)(a1 + 168)) )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(*v11 + 8LL * v12);
      if ( v13 )
        break;
      if ( ++v12 >= *(_DWORD *)(a1 + 168) )
        goto LABEL_26;
    }
  }
  else
  {
LABEL_26:
    v13 = 0LL;
  }
  v14 = 0LL;
  *(_QWORD *)(a1 + 224) = v13;
  if ( v13 )
    v14 = (__int64 *)sub_180106AC4(a1 + 152, (__int64 *)(a1 + 224));
  while ( v14 )
  {
    if ( *v14 )
      sub_180108408(a1 + 152, *v14);
    if ( *(_QWORD *)(a1 + 160) && (v15 = 0, *(_DWORD *)(a1 + 168)) )
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)(*v11 + 8LL * v15);
        if ( v16 )
          break;
        if ( ++v15 >= *(_DWORD *)(a1 + 168) )
          goto LABEL_35;
      }
    }
    else
    {
LABEL_35:
      v16 = 0LL;
    }
    *(_QWORD *)(a1 + 224) = v16;
    v14 = 0LL;
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 40);
      if ( !v17 )
      {
        v17 = 0LL;
        v18 = (unsigned int)(*(_DWORD *)(v16 + 48) % *(_DWORD *)(a1 + 168) + 1);
        do
        {
          if ( (unsigned int)v18 >= *(_DWORD *)(a1 + 168) )
            break;
          if ( *(_QWORD *)(*v11 + 8 * v18) )
            v17 = *(_QWORD *)(*v11 + 8 * v18);
          v18 = (unsigned int)(v18 + 1);
        }
        while ( !v17 );
      }
      *(_QWORD *)(a1 + 224) = v17;
      v14 = (__int64 *)(v16 + 8);
    }
  }
  v19 = qword_18019EB00;
  qword_18019EAF8 = 0LL;
  qword_18019EB00 = 0LL;
  if ( v19 )
    sub_180052600(v19);
  *(_BYTE *)(a1 + 144) = 0;
  if ( v1 )
    LeaveCriticalSection(v1);
}
