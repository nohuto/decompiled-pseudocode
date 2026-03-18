/*
 * XREFs of KiGroupSchedulingMoveThread @ 0x1402F130C
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x14020CFA0 (KiSearchForNewThreadOnProcessor.c)
 *     KiGroupSchedulingMoveThread @ 0x1402F130C (KiGroupSchedulingMoveThread.c)
 * Callees:
 *     KiPrcbInGroupAffinity @ 0x1402EF758 (KiPrcbInGroupAffinity.c)
 *     KiGroupSchedulingMoveThread @ 0x1402F130C (KiGroupSchedulingMoveThread.c)
 *     KiRemoveThreadFromScbQueue @ 0x1402F1420 (KiRemoveThreadFromScbQueue.c)
 */

__int64 __fastcall KiGroupSchedulingMoveThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 j; // rbx
  __int64 result; // rax
  unsigned int i; // r8d
  unsigned int v9; // r11d
  _QWORD *v10; // rsi
  _QWORD *v11; // r9
  __int64 v12; // rdi
  int v13; // r8d
  _QWORD *v14; // r9
  unsigned int v15; // r11d
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  _QWORD **v18; // rax
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rcx

  v3 = *(_QWORD *)(a3 + 8);
  if ( (v3 & 1) == 0 )
  {
    j = *(_QWORD *)(a3 + 8);
    goto LABEL_3;
  }
  if ( v3 != 1 )
  {
    j = v3 ^ (a3 | 1);
    while ( 1 )
    {
LABEL_3:
      if ( !j )
        return 0LL;
      for ( i = *(unsigned __int16 *)(j + 26); i; i = v13 ^ (1 << v15) )
      {
        _BitScanReverse(&v9, i);
        v10 = (_QWORD *)(16LL * v9 + j + 48);
        v11 = (_QWORD *)*v10;
        do
        {
          v12 = (__int64)(v11 - 27);
          if ( KiPrcbInGroupAffinity(a1, (__int64)(v11 + 45)) )
          {
            KiRemoveThreadFromScbQueue(a2, j - 88, v12, v15);
            result = v12;
            *(_DWORD *)(v12 + 536) = *(_DWORD *)(a1 + 36);
            return result;
          }
          v11 = (_QWORD *)*v14;
        }
        while ( v11 != v10 );
      }
      v16 = j + 304;
      v17 = *(_QWORD *)(j + 304);
      if ( (*(_BYTE *)(j + 312) & 1) != 0 )
      {
        if ( !v17 )
          goto LABEL_20;
        v17 ^= v16;
      }
      if ( v17 )
      {
        result = KiGroupSchedulingMoveThread(a1, a2, v16);
        if ( result )
          return result;
      }
LABEL_20:
      v18 = *(_QWORD ***)(j + 8);
      v19 = j;
      if ( v18 )
      {
        v20 = *v18;
        for ( j = *(_QWORD *)(j + 8); v20; v20 = (_QWORD *)*v20 )
          j = (unsigned __int64)v20;
      }
      else
      {
        while ( 1 )
        {
          j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !j || *(_QWORD *)j == v19 )
            break;
          v19 = j;
        }
      }
    }
  }
  return 0LL;
}
