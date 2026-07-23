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
  int v11; // esi
  unsigned int v12; // edx
  unsigned __int16 v15; // si
  unsigned int v16; // eax
  int v17; // eax
  wchar_t *v18; // ecx
  __int16 v19; // ax
  wchar_t *Buffer; // edi
  int v21; // esi
  int v22; // ecx
  unsigned int v23; // ecx
  int v24; // esi
  unsigned __int16 v25; // cx
  wchar_t v26; // si
  wchar_t *Heap; // eax
  wchar_t *v28; // esi
  unsigned __int16 v29; // cx
  wchar_t v30; // si
  unsigned __int16 v31; // cx
  unsigned int v32; // eax
  wchar_t v33; // ax
  wchar_t *v34; // eax
  wchar_t v35; // si
  size_t v36; // [esp-4h] [ebp-A0h]
  unsigned int v37; // [esp+Ch] [ebp-90h]
  __int16 v38; // [esp+14h] [ebp-88h]
  int v39; // [esp+18h] [ebp-84h]
  int v40; // [esp+1Ch] [ebp-80h]
  wchar_t v41; // [esp+20h] [ebp-7Ch]
  unsigned int v42; // [esp+24h] [ebp-78h]
  __int16 v43; // [esp+28h] [ebp-74h]
  wchar_t v44; // [esp+28h] [ebp-74h]
  wchar_t *BaseAddress; // [esp+2Ch] [ebp-70h]
  unsigned __int16 v46; // [esp+30h] [ebp-6Ch]
  unsigned __int16 v48; // [esp+38h] [ebp-64h]
  unsigned __int16 Length; // [esp+3Ch] [ebp-60h]
  unsigned int v50; // [esp+3Ch] [ebp-60h]
  unsigned int v51; // [esp+3Ch] [ebp-60h]
  wchar_t *v52; // [esp+40h] [ebp-5Ch]
  unsigned __int16 *v53; // [esp+44h] [ebp-58h]
  _UNICODE_STRING Expression; // [esp+48h] [ebp-54h] BYREF
  int v55; // [esp+50h] [ebp-4Ch]
  char v56; // [esp+57h] [ebp-45h]
  _WORD v57[16]; // [esp+58h] [ebp-44h] BYREF
  _BYTE v58[32]; // [esp+78h] [ebp-24h] BYREF

  v6 = 0;
  v7 = a1;
  v53 = a2;
  v8 = *a2;
  v48 = 0;
  BaseAddress = 0;
  v56 = 0;
  if ( !(_WORD)v8 || !*a1 )
    return v8 + *a1 == 0;
  if ( *a1 == 2 && **((_WORD **)a1 + 1) == 42 )
    return 1;
  v9 = (_WORD *)*((_DWORD *)a1 + 1);
  if ( *v9 == 42 )
  {
    v10 = *(_DWORD *)a1;
    Expression.Length = *v7;
    Expression.Buffer = v9 + 1;
    Expression.MaximumLength = HIWORD(v10) - 2;
    v11 = (unsigned __int16)(Expression.Length - 2);
    Expression.Length -= 2;
    Length = Expression.Length;
    if ( !RtlDoesNameContainWildCards(&Expression) )
    {
      if ( (unsigned __int16)v8 >= (unsigned __int16)(*a1 - 2) )
      {
        v12 = (v8 - (unsigned int)Length) >> 1;
        v50 = v12;
        if ( !a3 )
        {
          LODWORD(v36) = v11;
          return memcmp(Expression.Buffer, (const void *)(*((_DWORD *)v53 + 1) + 2 * v12), v36) == 0;
        }
        v15 = (unsigned __int16)v11 >> 1;
        if ( v15 )
        {
          while ( 1 )
          {
            v16 = (unsigned __int16)v6 + v12;
            v12 = v50;
            v43 = *(_WORD *)(a5 + 2 * *(unsigned __int16 *)(*((_DWORD *)v53 + 1) + 2 * v16));
            v17 = Expression.Buffer[(unsigned __int16)v6];
            if ( a4 )
              LOWORD(v17) = *(_WORD *)(a5 + 2 * v17);
            if ( v43 != (_WORD)v17 )
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
  v46 = 0;
  v57[0] = 0;
  v18 = v57;
  v19 = *(_WORD *)v7;
  Buffer = (wchar_t *)v58;
  v52 = v57;
  v21 = 1;
  Expression.Buffer = (wchar_t *)v58;
  v51 = 1;
  v41 = 2 * v19;
  do
  {
    if ( v46 >= *v53 )
    {
      v56 = 1;
      if ( v18[v21 - 1] == v41 )
        break;
    }
    else
    {
      v22 = v46 >> 1;
      v46 += 2;
      v48 = *(_WORD *)(*((_DWORD *)v53 + 1) + 2 * v22);
    }
    v23 = 0;
    v42 = 0;
    do
    {
      v39 = 0;
      v24 = (unsigned __int16)(((unsigned int)v52[v23] + 1) >> 1);
      v37 = v23 + 1;
      while ( 1 )
      {
        v25 = *a1;
        if ( (_WORD)v24 == *a1 )
          goto LABEL_60;
        v55 = v39 + v24;
        v39 = 2;
        v26 = 2 * v55;
        v44 = 2 * v55;
        if ( (_WORD)v55 == v25 )
        {
          Buffer[v6] = v41;
          goto LABEL_59;
        }
        v38 = *(_WORD *)(*((_DWORD *)a1 + 1) + 2 * ((unsigned __int16)v55 >> 1));
        if ( a3 && a4 )
          v38 = *(_WORD *)(a5 + 2 * *(unsigned __int16 *)(*((_DWORD *)a1 + 1) + 2 * ((unsigned __int16)v55 >> 1)));
        if ( v6 >= 0xE && !BaseAddress )
        {
          v40 = v25 >> 1;
          LODWORD(v36) = 8 * v40 + 8;
          Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v36);
          BaseAddress = Heap;
          if ( !Heap )
            RtlRaiseStatus(-1073741801);
          Expression.Buffer = Heap;
          qmemcpy(Heap, Buffer, 0x20u);
          v28 = v52;
          v52 = &Heap[2 * v40 + 2];
          qmemcpy(v52, v28, 0x20u);
          v26 = v44;
          Buffer = Heap;
        }
        if ( v38 == 42 )
          goto LABEL_35;
        if ( v38 == 60 )
        {
          if ( v56 || v48 != 46 )
            goto LABEL_35;
          v29 = v46;
          if ( v46 < *v53 )
          {
            while ( 1 )
            {
              Buffer = Expression.Buffer;
              v26 = v44;
              if ( *(_WORD *)(*((_DWORD *)v53 + 1) + 2 * (v29 >> 1)) == 46 )
                break;
              v29 += 2;
              Buffer = Expression.Buffer;
              if ( v29 >= *v53 )
                goto LABEL_42;
            }
LABEL_35:
            Buffer[v6] = v26;
            Buffer[v6 + 1] = v26 + 3;
            v6 += 2;
            goto LABEL_24;
          }
LABEL_42:
          Buffer[v6++] = v26 + 3;
          goto LABEL_24;
        }
        v30 = v26 + 4;
        if ( v38 == 62 )
        {
          if ( !v56 && v48 != 46 )
            goto LABEL_46;
          goto LABEL_24;
        }
        if ( v38 != 34 )
        {
          if ( v56 )
            goto LABEL_60;
          if ( v38 != 63 )
          {
            v31 = v48;
            goto LABEL_54;
          }
LABEL_46:
          Buffer[v6] = v30;
LABEL_59:
          ++v6;
          goto LABEL_60;
        }
        if ( !v56 )
          break;
LABEL_24:
        v24 = v55;
      }
      v31 = v48;
      if ( v48 == 46 )
        goto LABEL_46;
LABEL_54:
      if ( a3 )
      {
        v31 = *(_WORD *)(a5 + 2 * v31);
        Buffer = Expression.Buffer;
      }
      if ( v38 == v31 )
        goto LABEL_46;
LABEL_60:
      v23 = v37;
      if ( v37 >= v51 )
        break;
      v32 = v42;
      do
      {
        if ( v32 >= v6 )
          break;
        if ( v23 < v51 )
        {
          v33 = Buffer[v32];
          do
          {
            if ( v52[v23] >= v33 )
              break;
            ++v23;
          }
          while ( v23 < v51 );
          Buffer = Expression.Buffer;
          v32 = v42;
        }
        v42 = ++v32;
      }
      while ( v23 < v51 );
    }
    while ( v23 < v51 );
    if ( !v6 )
    {
      if ( BaseAddress )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      return 0;
    }
    v34 = v52;
    v21 = v6;
    v18 = Buffer;
    v51 = v6;
    v6 = 0;
    v52 = Buffer;
    Buffer = v34;
    Expression.Buffer = v34;
  }
  while ( !v56 );
  v35 = v18[v21 - 1];
  if ( BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return v35 == v41;
}
