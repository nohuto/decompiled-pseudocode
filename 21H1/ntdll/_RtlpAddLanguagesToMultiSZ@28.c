/*
 * XREFs of _RtlpAddLanguagesToMultiSZ@28 @ 0x4B35313F
 * Callers:
 *     _RtlpAddLanguagesToMultiSZ@28 @ 0x4B35313F (_RtlpAddLanguagesToMultiSZ@28.c)
 *     _RtlpMUIGetAllInstalledLang@12 @ 0x4B354922 (_RtlpMUIGetAllInstalledLang@12.c)
 * Callees:
 *     _LdrpCalcAllocSize@8 @ 0x4B2AA0E1 (_LdrpCalcAllocSize@8.c)
 *     _RtlpGetNameFromLangInfoNode@12 @ 0x4B2AC660 (_RtlpGetNameFromLangInfoNode@12.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpLangNameInMultiSzString@8 @ 0x4B2D43C0 (_RtlpLangNameInMultiSzString@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlpAddLanguagesToMultiSZ@28 @ 0x4B35313F (_RtlpAddLanguagesToMultiSZ@28.c)
 */

char __fastcall RtlpAddLanguagesToMultiSZ(
        const void **a1,
        size_t *a2,
        unsigned int *a3,
        _WORD *a4,
        int a5,
        _DWORD *a6,
        int a7)
{
  void *Heap; // eax
  size_t v10; // edx
  unsigned int v11; // esi
  int v12; // eax
  void *v13; // esi
  char *v14; // esi
  _DWORD *v15; // edx
  unsigned __int16 v16; // bx
  int v17; // eax
  _WORD *v18; // ecx
  int v19; // [esp+14h] [ebp-40h]
  int v20; // [esp+20h] [ebp-34h] BYREF
  void *Src; // [esp+24h] [ebp-30h]
  _DWORD *v22; // [esp+28h] [ebp-2Ch]
  const void **v23; // [esp+2Ch] [ebp-28h]
  char v24; // [esp+33h] [ebp-21h]
  _WORD v25[14]; // [esp+34h] [ebp-20h] BYREF

  v22 = a6;
  v23 = a1;
  v24 = 1;
  memset(v25, 0, sizeof(v25));
  if ( a1 && a2 && a3 && a4 && a5 && v22 )
  {
    if ( (unsigned __int16)a7 > 2u )
      return 1;
    Heap = (void *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 170);
    v19 = (int)Heap;
    if ( !Heap )
      return v24;
    Src = Heap;
    v20 = 11141120;
    if ( RtlpGetNameFromLangInfoNode(a5, (int)a4, (unsigned __int16 *)&v20) >= 0 )
    {
      v10 = *a2;
      v11 = *a2 + (unsigned __int16)v20 + 2;
      if ( v11 >= (unsigned __int16)v20 && v11 >= v10 )
      {
        if ( v11 <= *a3 )
          goto LABEL_17;
        v12 = LdrpCalcAllocSize(*a3, 2u);
        if ( v12 )
        {
          v13 = (void *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, v12);
          if ( v13 )
          {
            memcpy(v13, *v23, *a2);
            RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)*v23);
            *v23 = v13;
            *a3 *= 2;
            v10 = *a2;
LABEL_17:
            v14 = (char *)*v23 + v10;
            if ( RtlpLangNameInMultiSzString((wchar_t *)*v23, (wchar_t *)Src) )
            {
              v15 = v22;
            }
            else
            {
              memcpy(v14, Src, (unsigned __int16)v20);
              v15 = v22;
              *(_WORD *)&v14[(unsigned __int16)v20] = 0;
              *a2 += (unsigned __int16)v20 + 2;
              ++*v15;
            }
            if ( (*a4 & 0x402) != 0 )
            {
              v16 = 0;
              while ( 1 )
              {
                v17 = ((unsigned __int16)a4[4] >> (2 * v16)) & 3;
                if ( v17 == 2 )
                  break;
                if ( v17 == 1 )
                {
                  v25[2] = a4[v16 + 6];
                  goto LABEL_28;
                }
                if ( v17 == 3 )
                {
                  v25[3] = a4[v16 + 6];
LABEL_28:
                  v18 = v25;
LABEL_30:
                  v24 = RtlpAddLanguagesToMultiSZ(a3, v18, a5, v15, a7 + 1);
                  if ( !v24 )
                    goto LABEL_32;
                }
                v15 = v22;
                if ( ++v16 >= 4u )
                  goto LABEL_32;
              }
              v18 = (_WORD *)(*(_DWORD *)(*(_DWORD *)(a5 + 20) + 12) + 28 * (__int16)a4[v16 + 6]);
              goto LABEL_30;
            }
            goto LABEL_32;
          }
          RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, 0);
        }
      }
    }
LABEL_32:
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v19);
    return v24;
  }
  return 0;
}
