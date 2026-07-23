/*
 * XREFs of CompareUnicodeStrings @ 0x1405F2F48
 * Callers:
 *     RtlInsertUnicodePrefix @ 0x1405F2CD0 (RtlInsertUnicodePrefix.c)
 *     RtlFindUnicodePrefix @ 0x1405F2E30 (RtlFindUnicodePrefix.c)
 * Callees:
 *     NLS_UPCASE @ 0x1402AB420 (NLS_UPCASE.c)
 */

__int64 __fastcall CompareUnicodeStrings(unsigned __int16 *a1, unsigned __int16 *a2, unsigned int a3)
{
  __int64 v4; // rbx
  unsigned int v6; // edi
  unsigned int v7; // ebp
  unsigned __int16 v8; // r10
  unsigned __int16 v9; // r11
  unsigned int v10; // r9d
  unsigned __int16 *v11; // r14
  unsigned __int16 *v12; // r15
  unsigned __int16 v13; // r11
  __int64 v15; // rcx

  v4 = *a1 >> 1;
  v6 = *a2 >> 1;
  if ( (_DWORD)v4 == 1 && **((_WORD **)a1 + 1) == 92 && v6 > 1 && **((_WORD **)a2 + 1) == 92 )
    return 1LL;
  v7 = *a1 >> 1;
  if ( (unsigned int)v4 >= v6 )
    v7 = *a2 >> 1;
  if ( a3 > v7 )
    a3 = v7;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( a3 )
  {
    v15 = *((_QWORD *)a1 + 1);
    do
    {
      v8 = *(_WORD *)(v15 + 2LL * v10);
      v9 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v10);
      if ( v8 != v9 )
        break;
      ++v10;
    }
    while ( v10 < a3 );
  }
  if ( v10 == a3 )
  {
    v11 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2LL * v10);
    v12 = (unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2LL * v10);
    if ( v10 >= v7 )
      goto LABEL_19;
    do
    {
      v8 = *v11++;
      v9 = *v12++;
      if ( v8 != v9 )
      {
        NLS_UPCASE(v8);
        v9 = NLS_UPCASE(v13);
        if ( v8 != v9 )
          break;
      }
      ++v10;
    }
    while ( v10 < v7 );
  }
  if ( v10 < v7 )
  {
    if ( v8 == 92 )
      return 0LL;
    if ( v9 == 92 )
      return 3LL;
    if ( v8 < v9 )
      return 0LL;
    if ( v8 > v9 )
      return 3LL;
  }
LABEL_19:
  if ( (unsigned int)v4 < v6 )
    return *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * v4) == 92;
  if ( (unsigned int)v4 > v6 )
    return 3LL;
  return 2LL;
}
