/*
 * XREFs of KiGroupSchedulingMoveThread @ 0x140210580
 * Callers:
 *     KiGroupSchedulingMoveThread @ 0x140210580 (KiGroupSchedulingMoveThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402B4130 (KiSearchForNewThreadOnProcessor.c)
 * Callees:
 *     KiGroupSchedulingMoveThread @ 0x140210580 (KiGroupSchedulingMoveThread.c)
 *     KiRemoveThreadFromScbQueue @ 0x1402108CC (KiRemoveThreadFromScbQueue.c)
 *     KiCheckPrcbAffinityEx @ 0x140291EB8 (KiCheckPrcbAffinityEx.c)
 */

__int64 __fastcall KiGroupSchedulingMoveThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 j; // rbx
  __int64 result; // rax
  unsigned int i; // r9d
  unsigned int v9; // r11d
  __int64 **v10; // r14
  __int64 *v11; // r15
  int v12; // r9d
  unsigned int v13; // r11d
  __int64 v14; // rax
  _QWORD **v15; // rax
  unsigned __int64 v16; // rcx
  _QWORD *v17; // rcx

  v3 = *(_QWORD *)(a3 + 8);
  if ( (v3 & 1) != 0 )
  {
    if ( v3 == 1 )
      return 0LL;
    j = v3 ^ (a3 | 1);
  }
  else
  {
    j = *(_QWORD *)(a3 + 8);
  }
  if ( j )
  {
    while ( 1 )
    {
      for ( i = *(unsigned __int16 *)(j + 26); i; i = v12 ^ (1 << v13) )
      {
        _BitScanReverse(&v9, i);
        v10 = (__int64 **)(16LL * v9 + j + 48);
        v11 = *v10;
        do
        {
          if ( (unsigned __int8)KiCheckPrcbAffinityEx(v11[45], a1) )
          {
            KiRemoveThreadFromScbQueue(a2, j - 88, v11 - 27, v13);
            result = (__int64)(v11 - 27);
            *((_DWORD *)v11 + 80) = *(_DWORD *)(a1 + 36);
            return result;
          }
          v11 = (__int64 *)*v11;
        }
        while ( v11 != (__int64 *)v10 );
      }
      v14 = *(_QWORD *)(j + 304);
      if ( (*(_BYTE *)(j + 312) & 1) == 0 )
        goto LABEL_17;
      if ( v14 )
        break;
LABEL_19:
      v15 = *(_QWORD ***)(j + 8);
      v16 = j;
      if ( v15 )
      {
        v17 = *v15;
        for ( j = *(_QWORD *)(j + 8); v17; v17 = (_QWORD *)*v17 )
          j = (unsigned __int64)v17;
      }
      else
      {
        for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)j == v16 )
            break;
          v16 = j;
        }
      }
      if ( !j )
        return 0LL;
    }
    v14 ^= j + 304;
LABEL_17:
    if ( v14 )
    {
      result = KiGroupSchedulingMoveThread(a1, a2);
      if ( result )
        return result;
    }
    goto LABEL_19;
  }
  return 0LL;
}
