/*
 * XREFs of MiInitializeDriverPtes @ 0x140A67EF8
 * Callers:
 *     MiInitializeDriverImages @ 0x140A4F6F4 (MiInitializeDriverImages.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140327920 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     MiReserveBootDriverPtes @ 0x140A68334 (MiReserveBootDriverPtes.c)
 */

__int64 __fastcall MiInitializeDriverPtes(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx
  bool v4; // r8
  _QWORD *Pool; // rax
  _QWORD *v6; // r9
  unsigned __int64 v7; // r10
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  PVOID i; // rsi
  unsigned int v16; // ebx
  unsigned int v17; // ebp
  unsigned int v18; // r9d
  unsigned int v19; // edx
  int v20; // r10d
  __int64 v21; // r11
  unsigned int v22; // edi
  unsigned int v23; // ecx
  __int64 *v24; // rdx
  __int64 j; // r8
  unsigned __int64 v26; // rax
  unsigned int v27; // edx
  __int64 v28; // rdi
  unsigned int v29; // r14d
  unsigned int v30; // ebp
  unsigned int v31; // r9d
  unsigned int v32; // edx
  int v33; // r10d
  __int64 v34; // rbx
  unsigned int v35; // r11d
  unsigned int v36; // ecx
  _QWORD *v37; // rdx
  __int64 k; // r8
  unsigned __int64 v39; // rax
  unsigned int v40; // edx
  unsigned __int64 v41; // r14
  int v42; // ebp
  int v43; // edx
  unsigned __int64 *v44; // rax
  unsigned __int64 *m; // rbx
  unsigned __int64 *v46; // rcx
  unsigned __int64 **v47; // rax
  unsigned __int64 *v48; // rdi
  unsigned __int64 *v49; // rcx
  unsigned int v51; // edx
  _QWORD *v52; // [rsp+70h] [rbp+18h] BYREF

  v1 = 0LL;
  v2 = (_QWORD *)(a1 + 16);
  v3 = *(_QWORD **)(a1 + 16);
  v52 = 0LL;
  while ( v3 != v2 )
  {
    if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v3[6]) )
    {
      Pool = MiAllocatePool(64, 0x20uLL, 0x70446D4Du);
      v6 = Pool;
      if ( !Pool )
        return 0LL;
      v4 = 0;
      Pool[3] = v3;
      v7 = v3[6];
      if ( v1 )
      {
        while ( 1 )
        {
          v8 = v1[3];
          v9 = *(_QWORD *)(v8 + 48);
          if ( v7 <= v9 + (unsigned int)(*(_DWORD *)(v8 + 64) - 1) && v7 < v9 )
          {
            v10 = (_QWORD *)*v1;
            if ( !*v1 )
              break;
          }
          else
          {
            v10 = (_QWORD *)v1[1];
            if ( !v10 )
            {
              v4 = 1;
              break;
            }
          }
          v1 = v10;
        }
      }
      RtlAvlInsertNodeEx((unsigned __int64 *)&v52, (unsigned __int64)v1, v4, v6);
      v1 = v52;
    }
    v3 = (_QWORD *)*v3;
  }
  v11 = 0LL;
  while ( v1 )
  {
    v11 = v1;
    v1 = (_QWORD *)*v1;
  }
  while ( v11 )
  {
    if ( !(unsigned int)MiReserveBootDriverPtes(
                          ((*(_QWORD *)(v11[3] + 48LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                          *(_DWORD *)(v11[3] + 64LL) >> 12) )
      return 0LL;
    v13 = (_QWORD *)v11[1];
    v14 = v11;
    if ( v13 )
    {
      v12 = (_QWORD *)*v13;
      v11 = (_QWORD *)v11[1];
      if ( *v13 )
      {
        do
        {
          v11 = v12;
          v12 = (_QWORD *)*v12;
        }
        while ( v12 );
      }
    }
    else
    {
      while ( 1 )
      {
        v11 = (_QWORD *)(v11[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v11 || (_QWORD *)*v11 == v14 )
          break;
        v14 = v11;
      }
    }
  }
  for ( i = qword_140C4CD70; i; i = *(PVOID *)i )
  {
    v16 = 0;
    do
    {
      v17 = *((_DWORD *)i + 4);
      v18 = v16 < v17 ? v16 : 0;
      v19 = v17 - 1;
      v20 = (*((_DWORD *)i + 6) & 4) != 0LL ? 0x20 : 0;
      v21 = *((_QWORD *)i + 3) - ((*((_QWORD *)i + 3) & 4LL) != 0 ? 4 : 0);
      while ( 1 )
      {
        v22 = v20 + v19;
        v23 = v20 + v18;
        if ( v19 - v18 == -1 )
          goto LABEL_65;
        v24 = (__int64 *)(v21 + 8 * ((unsigned __int64)v23 >> 6));
        for ( j = *v24 | ((1LL << (v23 & 0x3F)) - 1); j == -1; j = *v24 )
        {
          if ( (unsigned __int64)++v24 > v21 + 8 * ((unsigned __int64)v22 >> 6) )
            goto LABEL_65;
        }
        _BitScanForward64(&v26, ~j);
        v27 = v26 + ((unsigned int)(((__int64)v24 - v21) >> 3) << 6);
        if ( v27 > v22 )
        {
LABEL_65:
          v27 = -1;
        }
        else if ( v27 != -1 )
        {
          break;
        }
        if ( !v18 )
          break;
        v51 = v16 + 1;
        if ( v16 + 1 > v17 )
          v51 = *((_DWORD *)i + 4);
        v19 = v51 - 1;
        v18 = 0;
      }
      v28 = v27 - v20;
      if ( v27 == -1 )
        v28 = 0xFFFFFFFFLL;
      if ( (unsigned int)v28 < v16 || (_DWORD)v28 == -1 )
        break;
      v29 = *((_DWORD *)i + 4);
      v30 = v28 + 1;
      v31 = v30 < v29 ? v30 : 0;
      v32 = v29 - 1;
      v33 = (*((_DWORD *)i + 6) & 4) != 0LL ? 0x20 : 0;
      v34 = *((_QWORD *)i + 3) - ((*((_QWORD *)i + 3) & 4LL) != 0 ? 4 : 0);
      while ( 1 )
      {
        v35 = v33 + v32;
        v36 = v33 + v31;
        if ( v32 - v31 == -1 )
          goto LABEL_60;
        v37 = (_QWORD *)(v34 + 8 * ((unsigned __int64)v36 >> 6));
        for ( k = ~*v37 | ((1LL << (v36 & 0x3F)) - 1); k == -1; k = ~*v37 )
        {
          if ( (unsigned __int64)++v37 > v34 + 8 * ((unsigned __int64)v35 >> 6) )
            goto LABEL_60;
        }
        _BitScanForward64(&v39, ~k);
        v40 = v39 + ((unsigned int)(((__int64)v37 - v34) >> 3) << 6);
        if ( v40 > v35 )
        {
LABEL_60:
          v40 = -1;
        }
        else if ( v40 != -1 )
        {
          break;
        }
        if ( !v31 )
          break;
        v43 = v28 + 2;
        if ( (int)v28 + 2 > v29 )
          v43 = *((_DWORD *)i + 4);
        v32 = v43 - 1;
        v31 = 0;
      }
      v16 = v40 - v33;
      if ( v40 == -1 )
        v16 = -1;
      if ( v16 < v30 || v16 == -1 )
        v16 = *((_DWORD *)i + 4);
      v41 = *((_QWORD *)i + 1) + 8 * v28;
      v42 = v16 - v28;
      if ( v16 != (_DWORD)v28 )
      {
        do
        {
          if ( MI_READ_PTE_LOCK_FREE(v41) )
            _bittestandset(*((signed __int32 **)i + 3), v28);
          LODWORD(v28) = v28 + 1;
          v41 += 8LL;
          --v42;
        }
        while ( v42 );
      }
    }
    while ( v16 < *((_DWORD *)i + 4) );
  }
  if ( (KiSpeculationFeatures & 0x40000000000LL) != 0 )
    qword_140C4E138 = (unsigned __int64)(((__int64)((*((_QWORD *)qword_140C4CD70 + 1) << 25)
                                                  + ((unsigned __int64)*((unsigned int *)qword_140C4CD70 + 4) << 28)) >> 16)
                                       - qword_140C4E140) >> 21;
  v44 = v52;
  m = 0LL;
  while ( v44 )
  {
    m = v44;
    v44 = (unsigned __int64 *)*v44;
  }
  while ( m )
  {
    v47 = (unsigned __int64 **)m[1];
    v48 = m;
    v49 = m;
    if ( v47 )
    {
      v46 = *v47;
      for ( m = (unsigned __int64 *)m[1]; v46; v46 = (unsigned __int64 *)*v46 )
        m = v46;
    }
    else
    {
      while ( 1 )
      {
        m = (unsigned __int64 *)(m[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !m || (unsigned __int64 *)*m == v49 )
          break;
        v49 = m;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)&v52, v48);
    ExFreePoolWithTag(v48, 0);
  }
  return 1LL;
}
