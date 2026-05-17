/*
 * XREFs of _RtlpIsQualifiedLanguage@12 @ 0x4B2A9F90
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpFreeTraverseNodes@4 @ 0x4B2AA053 (_RtlpFreeTraverseNodes@4.c)
 *     _RtlpTraverseParents@24 @ 0x4B2AA078 (_RtlpTraverseParents@24.c)
 *     _LdrpCalcAllocSize@8 @ 0x4B2AA0E1 (_LdrpCalcAllocSize@8.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

int __stdcall RtlpIsQualifiedLanguage(int a1, __int16 *a2, char a3)
{
  int Heap; // edi
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v8; // ebx
  int v9; // ecx
  __int16 v10; // dx
  __int16 v11; // bx
  bool v12; // zf
  __int16 v13; // bx
  int v14; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h]

  Heap = 0;
  if ( a1 && a2 )
  {
    v4 = LdrpCalcAllocSize(42, 8);
    if ( !v4 )
      return -1073741675;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8, v4);
    if ( !Heap )
      return -1073741801;
    v5 = 0;
    if ( !(unsigned __int8)RtlpTraverseParents(a1, 0, 0, 42) )
      v5 = -1073741823;
    v6 = 0;
    v14 = 0;
    do
    {
      if ( (_WORD)v6 && *(_DWORD *)(Heap + 8 * (__int16)v6 + 4) && (__int16)v6 > 0 )
      {
        v8 = (unsigned __int16)v6;
        v9 = Heap + 2;
        v15 = (unsigned __int16)v6;
        do
        {
          if ( *(_DWORD *)(v9 + 2) )
          {
            v10 = *(_WORD *)(v9 - 2);
            if ( v10 )
            {
              v11 = *(_WORD *)(Heap + 8 * (__int16)v6);
              if ( v11 )
              {
                v12 = v10 == v11;
                v8 = v15;
                if ( v12 )
                  v5 = -1073741823;
              }
              else
              {
                v8 = v15;
              }
            }
            if ( *(__int16 *)v9 > 0 )
            {
              v13 = *(_WORD *)(Heap + 8 * (__int16)v6 + 2);
              if ( v13 <= 0 )
              {
                v8 = v15;
              }
              else
              {
                v12 = *(_WORD *)v9 == (unsigned __int16)v13;
                v8 = v15;
                if ( v12 )
                  v5 = -1073741823;
              }
            }
          }
          v9 += 8;
          v15 = --v8;
        }
        while ( v8 );
        v6 = v14;
      }
      v14 = ++v6;
    }
    while ( (__int16)v6 < 42 );
    if ( a3 == 1 && *a2 < 0 )
      v5 = -1073741823;
  }
  else
  {
    v5 = -1073741811;
  }
  if ( Heap )
    RtlpFreeTraverseNodes(Heap);
  return v5;
}
