/*
 * XREFs of ?MBC_RightJustifyMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C005EFC0
 * Callers:
 *     xxxMenuBarCompute @ 0x1C005EE48 (xxxMenuBarCompute.c)
 * Callees:
 *     MNIsOwnerDrawItem @ 0x1C00AECA0 (MNIsOwnerDrawItem.c)
 *     IsMDIItem @ 0x1C024FB78 (IsMDIItem.c)
 */

__int64 __fastcall MBC_RightJustifyMenu(_QWORD **a1)
{
  int v1; // r9d
  _QWORD **v2; // r8
  __int64 result; // rax
  int v4; // r11d
  __int64 v5; // r10
  __int64 j; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  _QWORD *v10; // rcx
  int v11; // edi
  int v12; // r11d
  _DWORD **i; // r10
  int v14; // eax
  _QWORD *v15; // rcx
  __int64 v16; // r14
  __int64 v17; // rsi
  int v18; // ebp
  unsigned int v19; // r10d
  unsigned int v20; // r12d
  unsigned int v21; // r15d
  int v22; // ecx
  __int64 v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r11
  __int64 v28; // rdx
  _DWORD *v29; // rax
  int v30; // ecx
  unsigned int v31; // r10d
  int v32; // ecx
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx

  v1 = 0;
  v2 = a1;
  result = *(_QWORD *)(**a1 + 40LL);
  if ( !*(_DWORD *)(result + 44) )
    return result;
  v4 = 0;
  v5 = *(_QWORD *)(**a1 + 88LL);
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) & 0x20) != 0 && *(_QWORD *)(**a1 + 80LL) )
  {
    v8 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 80LL) + 40LL) + 21LL) & 2;
    if ( *(int *)(*(_QWORD *)(**a1 + 40LL) + 44LL) > 0 )
    {
      while ( !v8 )
      {
        v10 = v2[2];
        if ( !v10 )
          v10 = (_QWORD *)**v2;
        if ( (**(_DWORD **)v5 & 4) == 0 )
        {
          v9 = MNIsOwnerDrawItem(v10, v5);
          goto LABEL_19;
        }
        if ( *(_QWORD *)(*(_QWORD *)v5 + 96LL) > 0xCuLL )
          goto LABEL_21;
LABEL_20:
        v5 = *(_QWORD *)(**v2 + 88LL) + 96LL * ++v4;
        if ( v4 >= *(_DWORD *)(*(_QWORD *)(**v2 + 40LL) + 44LL) )
          goto LABEL_21;
      }
      if ( v4 )
        goto LABEL_21;
      v9 = IsMDIItem(v5);
LABEL_19:
      if ( !v9 )
        goto LABEL_21;
      goto LABEL_20;
    }
LABEL_21:
    v11 = v4 - 1;
    if ( v4 != *(_DWORD *)(*(_QWORD *)(**v2 + 40LL) + 44LL) )
      v11 = v4;
    v12 = *(_DWORD *)(*(_QWORD *)(**v2 + 40LL) + 44LL) - 1;
    for ( i = (_DWORD **)(*(_QWORD *)(**v2 + 88LL) + 96LL * v12); ; i = (_DWORD **)(*(_QWORD *)(**v2 + 88LL) + 96LL * v12) )
    {
      if ( v12 <= v11 )
      {
LABEL_33:
        v16 = v11;
        v17 = 96LL * v11;
        v18 = *(_DWORD *)(**(_QWORD **)(**v2 + 88LL) + 68LL);
        v19 = *(_DWORD *)(**v2 + 64LL);
        v20 = v19;
        v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**v2 + 88LL) + v17) + 64LL);
        result = *(_QWORD *)(**v2 + 40LL);
        v22 = *(_DWORD *)(result + 44) - 1;
        if ( v22 > (__int64)v12 )
        {
          v23 = 96LL * v22;
          v24 = v22 - (__int64)v12;
          do
          {
            v25 = *(_QWORD *)(**v2 + 88LL);
            v26 = *(_QWORD *)(v23 + v25);
            v19 -= *(_DWORD *)(v26 + 72);
            *(_DWORD *)(v26 + 64) = v19;
            result = *(_QWORD *)(v23 + v25);
            v23 -= 96LL;
            *(_DWORD *)(result + 68) = v18;
            --v24;
          }
          while ( v24 );
        }
        if ( v16 <= v12 )
        {
          v27 = v12 - v16 + 1;
          do
          {
            v28 = *(_QWORD *)(**v2 + 88LL);
            v29 = *(_DWORD **)(v17 + v28);
            v30 = v29[18];
            v19 -= v30;
            if ( v19 <= v21 )
            {
              v21 = v1;
              v19 = v20 - v30;
              v18 += v29[19];
            }
            v29[16] = v19;
            result = *(_QWORD *)(v17 + v28);
            v17 += 96LL;
            *(_DWORD *)(result + 68) = v18;
            --v27;
          }
          while ( v27 );
        }
        return result;
      }
      if ( v8 )
      {
        v14 = IsMDIItem(i);
      }
      else
      {
        v15 = v2[2];
        if ( !v15 )
          v15 = (_QWORD *)**v2;
        if ( (**i & 4) != 0 )
          goto LABEL_31;
        v14 = MNIsOwnerDrawItem(v15, i);
      }
      if ( !v14 )
        goto LABEL_33;
LABEL_31:
      --v12;
    }
  }
  result = *(_QWORD *)(**a1 + 40LL);
  if ( *(int *)(result + 44) <= 0 )
    return result;
  for ( j = 0LL; ; j += 96LL )
  {
    v7 = *a1;
    if ( (**(_DWORD **)(j + *(_QWORD *)(**a1 + 88LL)) & 0x4000) != 0 )
      break;
    ++v1;
    result = *(_QWORD *)(*v7 + 40LL);
    if ( v1 >= *(_DWORD *)(result + 44) )
      return result;
  }
  v31 = *(_DWORD *)(*v7 + 64LL) + *(_DWORD *)(**(_QWORD **)(**a1 + 88LL) + 64LL);
  v32 = *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 44LL) - 1;
  result = v1;
  if ( v32 >= (__int64)v1 )
  {
    v33 = 96LL * v32;
    v34 = v32 - result + 1;
    do
    {
      result = *(_QWORD *)(**v2 + 88LL);
      v35 = *(_QWORD *)(v33 + result);
      v31 -= *(_DWORD *)(v35 + 72);
      if ( *(_DWORD *)(v35 + 64) < v31 )
        *(_DWORD *)(v35 + 64) = v31;
      v33 -= 96LL;
      --v34;
    }
    while ( v34 );
  }
  return result;
}
