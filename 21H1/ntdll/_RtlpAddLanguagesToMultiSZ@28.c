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
        unsigned int *a2,
        unsigned int *a3,
        _WORD *a4,
        int a5,
        _DWORD *a6,
        int a7)
{
  wchar_t *Heap; // eax
  unsigned int v10; // edx
  unsigned int v11; // esi
  int v12; // eax
  PVOID v13; // esi
  char *v14; // esi
  _DWORD *v15; // edx
  unsigned __int16 v16; // bx
  int v17; // eax
  _WORD *v18; // ecx
  SIZE_T v19; // [esp-4h] [ebp-58h]
  SIZE_T v20; // [esp-4h] [ebp-58h]
  size_t v21; // [esp-4h] [ebp-58h]
  wchar_t *BaseAddress; // [esp+14h] [ebp-40h]
  _UNICODE_STRING String; // [esp+20h] [ebp-34h] BYREF
  _DWORD *v24; // [esp+28h] [ebp-2Ch]
  const void **v25; // [esp+2Ch] [ebp-28h]
  char v26; // [esp+33h] [ebp-21h]
  _WORD v27[14]; // [esp+34h] [ebp-20h] BYREF

  v24 = a6;
  v25 = a1;
  v26 = 1;
  memset(v27, 0, sizeof(v27));
  if ( a1 && a2 && a3 && a4 && a5 && v24 )
  {
    if ( (unsigned __int16)a7 > 2u )
      return 1;
    LODWORD(v19) = 170;
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v19);
    BaseAddress = Heap;
    if ( !Heap )
      return v26;
    String.Buffer = Heap;
    *(_DWORD *)&String.Length = 11141120;
    if ( RtlpGetNameFromLangInfoNode(a5, (int)a4, &String) >= 0 )
    {
      v10 = *a2;
      v11 = *a2 + String.Length + 2;
      if ( v11 >= String.Length && v11 >= v10 )
      {
        if ( v11 <= *a3 )
          goto LABEL_17;
        v12 = LdrpCalcAllocSize(*a3, 2u);
        if ( v12 )
        {
          LODWORD(v20) = v12;
          v13 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v20);
          if ( v13 )
          {
            LODWORD(v21) = *a2;
            memcpy(v13, *v25, v21);
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)*v25);
            *v25 = v13;
            *a3 *= 2;
            v10 = *a2;
LABEL_17:
            v14 = (char *)*v25 + v10;
            if ( RtlpLangNameInMultiSzString((wchar_t *)*v25, String.Buffer) )
            {
              v15 = v24;
            }
            else
            {
              LODWORD(v20) = String.Length;
              memcpy(v14, String.Buffer, v20);
              v15 = v24;
              *(_WORD *)&v14[String.Length] = 0;
              *a2 += String.Length + 2;
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
                  v27[2] = a4[v16 + 6];
                  goto LABEL_28;
                }
                if ( v17 == 3 )
                {
                  v27[3] = a4[v16 + 6];
LABEL_28:
                  v18 = v27;
LABEL_30:
                  v26 = RtlpAddLanguagesToMultiSZ(a3, v18, a5, v15, a7 + 1);
                  if ( !v26 )
                    goto LABEL_32;
                }
                v15 = v24;
                if ( ++v16 >= 4u )
                  goto LABEL_32;
              }
              v18 = (_WORD *)(*(_DWORD *)(*(_DWORD *)(a5 + 20) + 12) + 28 * (__int16)a4[v16 + 6]);
              goto LABEL_30;
            }
            goto LABEL_32;
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, 0);
        }
      }
    }
LABEL_32:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    return v26;
  }
  return 0;
}
