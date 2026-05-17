/*
 * XREFs of _RtlpIsNameInExpressionPrivate@20 @ 0x4B361483
 * Callers:
 *     _RtlIsNameInExpression@16 @ 0x4B361340 (_RtlIsNameInExpression@16.c)
 *     _RtlIsNameInUnUpcasedExpression@16 @ 0x4B3613D0 (_RtlIsNameInUnUpcasedExpression@16.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _RtlDoesNameContainWildCards@4 @ 0x4B3612F0 (_RtlDoesNameContainWildCards@4.c)
 */

bool __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, unsigned __int16 *a2, char a3, char a4, int a5)
{
  unsigned int v6; // ebx
  _DWORD *v7; // edx
  int v8; // edi
  _WORD *v9; // eax
  int v10; // ecx
  size_t v11; // esi
  unsigned int v12; // edx
  unsigned __int16 v15; // si
  unsigned int v16; // eax
  int v17; // eax
  _WORD *v18; // ecx
  __int16 v19; // ax
  _BYTE *v20; // edi
  int v21; // esi
  int v22; // ecx
  unsigned int v23; // ecx
  int v24; // esi
  unsigned __int16 v25; // cx
  __int16 v26; // si
  char *Heap; // eax
  char *v28; // esi
  unsigned __int16 v29; // cx
  __int16 v30; // si
  unsigned __int16 v31; // cx
  unsigned int v32; // eax
  unsigned __int16 v33; // ax
  char *v34; // eax
  __int16 v35; // si
  unsigned int v36; // [esp+Ch] [ebp-90h]
  __int16 v37; // [esp+14h] [ebp-88h]
  int v38; // [esp+18h] [ebp-84h]
  int v39; // [esp+1Ch] [ebp-80h]
  __int16 v40; // [esp+20h] [ebp-7Ch]
  unsigned int v41; // [esp+24h] [ebp-78h]
  __int16 v42; // [esp+28h] [ebp-74h]
  __int16 v43; // [esp+28h] [ebp-74h]
  int v44; // [esp+2Ch] [ebp-70h]
  unsigned __int16 v45; // [esp+30h] [ebp-6Ch]
  unsigned __int16 v47; // [esp+38h] [ebp-64h]
  unsigned __int16 v48; // [esp+3Ch] [ebp-60h]
  unsigned int v49; // [esp+3Ch] [ebp-60h]
  unsigned int v50; // [esp+3Ch] [ebp-60h]
  char *v51; // [esp+40h] [ebp-5Ch]
  unsigned __int16 *v52; // [esp+44h] [ebp-58h]
  unsigned __int16 v53[2]; // [esp+48h] [ebp-54h] BYREF
  void *Buf1; // [esp+4Ch] [ebp-50h]
  int v55; // [esp+50h] [ebp-4Ch]
  char v56; // [esp+57h] [ebp-45h]
  _WORD v57[16]; // [esp+58h] [ebp-44h] BYREF
  _BYTE v58[32]; // [esp+78h] [ebp-24h] BYREF

  v6 = 0;
  v7 = a1;
  v52 = a2;
  v8 = *a2;
  v47 = 0;
  v44 = 0;
  v56 = 0;
  if ( !(_WORD)v8 || !*a1 )
    return v8 + *a1 == 0;
  if ( *a1 == 2 && **((_WORD **)a1 + 1) == 42 )
    return 1;
  v9 = (_WORD *)*((_DWORD *)a1 + 1);
  if ( *v9 == 42 )
  {
    v10 = *(_DWORD *)a1;
    v53[0] = *v7;
    Buf1 = v9 + 1;
    v53[1] = HIWORD(v10) - 2;
    v11 = (unsigned __int16)(v53[0] - 2);
    v53[0] -= 2;
    v48 = v53[0];
    if ( !RtlDoesNameContainWildCards(v53) )
    {
      if ( (unsigned __int16)v8 >= (unsigned __int16)(*a1 - 2) )
      {
        v12 = (v8 - (unsigned int)v48) >> 1;
        v49 = v12;
        if ( !a3 )
          return memcmp(Buf1, (const void *)(*((_DWORD *)v52 + 1) + 2 * v12), v11) == 0;
        v15 = (unsigned __int16)v11 >> 1;
        if ( v15 )
        {
          while ( 1 )
          {
            v16 = (unsigned __int16)v6 + v12;
            v12 = v49;
            v42 = *(_WORD *)(a5 + 2 * *(unsigned __int16 *)(*((_DWORD *)v52 + 1) + 2 * v16));
            v17 = *((unsigned __int16 *)Buf1 + (unsigned __int16)v6);
            if ( a4 )
              LOWORD(v17) = *(_WORD *)(a5 + 2 * v17);
            if ( v42 != (_WORD)v17 )
              break;
            LOWORD(v6) = v6 + 1;
            if ( (unsigned __int16)v6 >= v15 )
              return 1;
          }
          return 0;
        }
        return 1;
      }
      return 0;
    }
    v7 = a1;
  }
  v45 = 0;
  v57[0] = 0;
  v18 = v57;
  v19 = *(_WORD *)v7;
  v20 = v58;
  v51 = (char *)v57;
  v21 = 1;
  Buf1 = v58;
  v50 = 1;
  v40 = 2 * v19;
  do
  {
    if ( v45 >= *v52 )
    {
      v56 = 1;
      if ( v18[v21 - 1] == v40 )
        break;
    }
    else
    {
      v22 = v45 >> 1;
      v45 += 2;
      v47 = *(_WORD *)(*((_DWORD *)v52 + 1) + 2 * v22);
    }
    v23 = 0;
    v41 = 0;
    do
    {
      v38 = 0;
      v24 = (unsigned __int16)(((unsigned int)*(unsigned __int16 *)&v51[2 * v23] + 1) >> 1);
      v36 = v23 + 1;
      while ( 1 )
      {
        v25 = *a1;
        if ( (_WORD)v24 == *a1 )
          goto LABEL_60;
        v55 = v38 + v24;
        v38 = 2;
        v26 = 2 * v55;
        v43 = 2 * v55;
        if ( (_WORD)v55 == v25 )
        {
          *(_WORD *)&v20[2 * v6] = v40;
          goto LABEL_59;
        }
        v37 = *(_WORD *)(*((_DWORD *)a1 + 1) + 2 * ((unsigned __int16)v55 >> 1));
        if ( a3 && a4 )
          v37 = *(_WORD *)(a5 + 2 * *(unsigned __int16 *)(*((_DWORD *)a1 + 1) + 2 * ((unsigned __int16)v55 >> 1)));
        if ( v6 >= 0xE && !v44 )
        {
          v39 = v25 >> 1;
          Heap = (char *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 8 * v39 + 8);
          v44 = (int)Heap;
          if ( !Heap )
            RtlRaiseStatus(-1073741801);
          Buf1 = Heap;
          qmemcpy(Heap, v20, 0x20u);
          v28 = v51;
          v51 = &Heap[4 * v39 + 4];
          qmemcpy(v51, v28, 0x20u);
          v26 = v43;
          v20 = Heap;
        }
        if ( v37 == 42 )
          goto LABEL_35;
        if ( v37 == 60 )
        {
          if ( v56 || v47 != 46 )
            goto LABEL_35;
          v29 = v45;
          if ( v45 < *v52 )
          {
            while ( 1 )
            {
              v20 = Buf1;
              v26 = v43;
              if ( *(_WORD *)(*((_DWORD *)v52 + 1) + 2 * (v29 >> 1)) == 46 )
                break;
              v29 += 2;
              v20 = Buf1;
              if ( v29 >= *v52 )
                goto LABEL_42;
            }
LABEL_35:
            *(_WORD *)&v20[2 * v6] = v26;
            *(_WORD *)&v20[2 * v6 + 2] = v26 + 3;
            v6 += 2;
            goto LABEL_24;
          }
LABEL_42:
          *(_WORD *)&v20[2 * v6++] = v26 + 3;
          goto LABEL_24;
        }
        v30 = v26 + 4;
        if ( v37 == 62 )
        {
          if ( !v56 && v47 != 46 )
            goto LABEL_46;
          goto LABEL_24;
        }
        if ( v37 != 34 )
        {
          if ( v56 )
            goto LABEL_60;
          if ( v37 != 63 )
          {
            v31 = v47;
            goto LABEL_54;
          }
LABEL_46:
          *(_WORD *)&v20[2 * v6] = v30;
LABEL_59:
          ++v6;
          goto LABEL_60;
        }
        if ( !v56 )
          break;
LABEL_24:
        v24 = v55;
      }
      v31 = v47;
      if ( v47 == 46 )
        goto LABEL_46;
LABEL_54:
      if ( a3 )
      {
        v31 = *(_WORD *)(a5 + 2 * v31);
        v20 = Buf1;
      }
      if ( v37 == v31 )
        goto LABEL_46;
LABEL_60:
      v23 = v36;
      if ( v36 >= v50 )
        break;
      v32 = v41;
      do
      {
        if ( v32 >= v6 )
          break;
        if ( v23 < v50 )
        {
          v33 = *(_WORD *)&v20[2 * v32];
          do
          {
            if ( *(_WORD *)&v51[2 * v23] >= v33 )
              break;
            ++v23;
          }
          while ( v23 < v50 );
          v20 = Buf1;
          v32 = v41;
        }
        v41 = ++v32;
      }
      while ( v23 < v50 );
    }
    while ( v23 < v50 );
    if ( !v6 )
    {
      if ( v44 )
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v44);
      return 0;
    }
    v34 = v51;
    v21 = v6;
    v18 = v20;
    v50 = v6;
    v6 = 0;
    v51 = v20;
    v20 = v34;
    Buf1 = v34;
  }
  while ( !v56 );
  v35 = v18[v21 - 1];
  if ( v44 )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v44);
  return v35 == v40;
}
