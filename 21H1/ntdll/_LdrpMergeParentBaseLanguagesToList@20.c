/*
 * XREFs of _LdrpMergeParentBaseLanguagesToList@20 @ 0x4B3516E9
 * Callers:
 *     _RtlGetUserPreferredUILanguages@20 @ 0x4B2AA700 (_RtlGetUserPreferredUILanguages@20.c)
 *     _LdrpMergeLangFallbackLists@36 @ 0x4B2D4925 (_LdrpMergeLangFallbackLists@36.c)
 *     _RtlGetSystemPreferredUILanguages@20 @ 0x4B352400 (_RtlGetSystemPreferredUILanguages@20.c)
 * Callees:
 *     _RtlpFreeTraverseNodes@4 @ 0x4B2AA053 (_RtlpFreeTraverseNodes@4.c)
 *     _RtlpTraverseParents@24 @ 0x4B2AA078 (_RtlpTraverseParents@24.c)
 *     _LdrpCalcAllocSize@8 @ 0x4B2AA0E1 (_LdrpCalcAllocSize@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _LdrpLangFallbackListAppendNode@24 @ 0x4B2D5467 (_LdrpLangFallbackListAppendNode@24.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __fastcall LdrpMergeParentBaseLanguagesToList(int *a1, _WORD *a2, _DWORD *a3, int a4, int a5)
{
  wchar_t *v5; // ebx
  _DWORD *Heap; // edi
  int v7; // eax
  int appended; // esi
  _WORD *v9; // eax
  int v10; // ecx
  __int16 v11; // cx
  SIZE_T v13; // [esp-4h] [ebp-28h]
  SIZE_T v14; // [esp-4h] [ebp-28h]
  _UNICODE_STRING String; // [esp+10h] [ebp-14h] BYREF
  int *v16; // [esp+18h] [ebp-Ch]
  _WORD *v17; // [esp+1Ch] [ebp-8h]
  int v18; // [esp+20h] [ebp-4h] BYREF

  v16 = a1;
  v17 = a2;
  v5 = 0;
  Heap = 0;
  if ( !a1 || !*a1 || !a2 || !a3 )
  {
    appended = -1073741811;
    goto LABEL_27;
  }
  v7 = LdrpCalcAllocSize(0x2Au, 8u);
  if ( !v7 )
    return -1073741675;
  LODWORD(v13) = v7;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v13);
  if ( !Heap )
    return -1073741801;
  appended = 0;
  if ( !RtlpTraverseParents(v17, (int)Heap, (int)a3, a4, 0, 42) )
  {
    appended = -1073741823;
    goto LABEL_29;
  }
  LODWORD(v14) = 170;
  v5 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v14);
  if ( !v5 )
  {
    appended = -1073741801;
    goto LABEL_29;
  }
  v9 = 0;
  v17 = 0;
  while ( !(_WORD)v9 || !Heap[2 * (__int16)v9 + 1] )
  {
LABEL_23:
    v9 = (_WORD *)((char *)v9 + 1);
    v17 = v9;
    if ( (__int16)v9 >= 42 )
      goto LABEL_27;
  }
  if ( LOWORD(Heap[2 * (__int16)v9]) )
  {
    String.Buffer = v5;
    *(_DWORD *)&String.Length = 11141120;
    if ( !RtlLCIDToCultureName(LOWORD(Heap[2 * (__int16)v9]), &String) )
    {
      appended = -1073741595;
      goto LABEL_27;
    }
    goto LABEL_21;
  }
  v11 = HIWORD(Heap[2 * (__int16)v9]);
  if ( v11 >= 0 )
  {
    RtlInitUnicodeString(
      &String,
      (PCWSTR)(*(_DWORD *)(a3[6] + 16) + 2 * *(__int16 *)(*(_DWORD *)(a3[6] + 12) + 2 * v11)));
LABEL_21:
    appended = LdrpLangFallbackListAppendNode(v16, a3, 0, (__int16 *)&v18, (PCWSTR)String.Buffer, v10);
    if ( appended < 0 )
      goto LABEL_27;
    v9 = v17;
    goto LABEL_23;
  }
  appended = -1073741595;
LABEL_27:
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
LABEL_29:
  if ( Heap )
    RtlpFreeTraverseNodes(Heap);
  return appended;
}
