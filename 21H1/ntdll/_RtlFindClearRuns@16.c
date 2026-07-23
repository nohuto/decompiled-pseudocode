/*
 * XREFs of _RtlFindClearRuns@16 @ 0x4B34E950
 * Callers:
 *     _RtlFindLongestRunClear@8 @ 0x4B34ED10 (_RtlFindLongestRunClear@8.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindClearRuns(
        PRTL_BITMAP BitMapHeader,
        PRTL_BITMAP_RUN RunArray,
        ULONG SizeOfRunArray,
        BOOLEAN LocateLongestRuns)
{
  ULONG v4; // edx
  unsigned int v5; // esi
  BOOL v6; // ebx
  unsigned int v7; // eax
  ULONG v8; // edi
  bool v9; // zf
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int *v13; // ebx
  unsigned __int8 v14; // bl
  int v15; // ecx
  ULONG v16; // edi
  PRTL_BITMAP_RUN v17; // esi
  int v18; // eax
  _RTL_BITMAP_RUN *i; // ecx
  unsigned __int8 v20; // bl
  char v21; // bh
  int v22; // eax
  ULONG *v23; // ecx
  int v24; // eax
  ULONG *j; // ecx
  int v26; // esi
  _RTL_BITMAP_RUN *k; // ecx
  unsigned int v29; // [esp+Ch] [ebp-2Ch]
  int v30; // [esp+10h] [ebp-28h]
  int v31; // [esp+14h] [ebp-24h]
  ULONG v32; // [esp+14h] [ebp-24h]
  ULONG v33; // [esp+18h] [ebp-20h]
  unsigned int v34; // [esp+1Ch] [ebp-1Ch]
  ULONG v35; // [esp+20h] [ebp-18h]
  ULONG v36; // [esp+20h] [ebp-18h]
  unsigned int *Buffer; // [esp+24h] [ebp-14h]
  int v38; // [esp+28h] [ebp-10h]
  int v39; // [esp+2Ch] [ebp-Ch]
  unsigned int v40; // [esp+30h] [ebp-8h]
  ULONG *p_NumberOfBits; // [esp+34h] [ebp-4h]

  v4 = 0;
  v5 = BitMapHeader->SizeOfBitMap & 7;
  v33 = 0;
  v6 = v5 != 0;
  v34 = v5;
  v7 = BitMapHeader->SizeOfBitMap >> 3;
  v8 = 0;
  v9 = v7 + v6 == 0;
  v10 = v7 + v6;
  v11 = 0;
  v40 = v10;
  Buffer = BitMapHeader->Buffer;
  v39 = 0;
  if ( v9 )
    return v4;
  v38 = 0;
  v29 = v10 - 1;
  v12 = v10;
  do
  {
    v13 = Buffer;
    Buffer = (unsigned int *)((char *)Buffer + 1);
    v14 = *(_BYTE *)v13;
    if ( v11 == v29 && v5 )
      v14 |= byte_4B288994[v5];
    if ( !v14 )
    {
      v8 += 8;
      goto LABEL_39;
    }
    v15 = v14;
    v31 = (unsigned __int8)RtlpBitsClearLow[v14];
    v9 = v31 + v8 == 0;
    v16 = v31 + v8;
    v17 = RunArray;
    if ( !v9 )
    {
      if ( v4 < SizeOfRunArray )
      {
        ++v4;
LABEL_12:
        v18 = v4 - 2;
        v35 = v4 - 2;
        if ( LocateLongestRuns )
        {
          for ( i = &RunArray[v18 + 1]; v18 >= 0 && i[-1].NumberOfBits < v16; --i )
          {
            i->StartingIndex = i[-1].StartingIndex;
            i->NumberOfBits = i[-1].NumberOfBits;
            v18 = --v35;
          }
          v15 = v14;
        }
        RunArray[v18 + 1].NumberOfBits = v16;
        RunArray[v18 + 1].StartingIndex = v33;
        if ( !LocateLongestRuns && v4 >= SizeOfRunArray )
          return v4;
        goto LABEL_20;
      }
      if ( RunArray[v4 - 1].NumberOfBits < v16 )
        goto LABEL_12;
    }
LABEL_20:
    v8 = (unsigned __int8)RtlpBitsClearHigh[v15];
    v33 = v38 - v8 + 8;
    v20 = *((_BYTE *)&dword_4B28899C - v8) | byte_4B288988[v31] | v14;
    if ( v20 != 0xFF )
    {
      p_NumberOfBits = &RunArray[v4 - 1].NumberOfBits;
      do
      {
        if ( v4 >= SizeOfRunArray )
        {
          v17 = RunArray;
          if ( *p_NumberOfBits >= (unsigned __int8)RtlpBitsClearAnywhere[v20] )
            break;
        }
        v32 = (unsigned __int8)RtlpBitsClearAnywhere[v20];
        v21 = byte_4B288988[v32];
        v22 = 0;
        v30 = 0;
        if ( ((unsigned __int8)v21 & v20) != 0 )
        {
          do
          {
            v21 *= 2;
            ++v22;
          }
          while ( ((unsigned __int8)v21 & v20) != 0 );
          v30 = v22;
        }
        v23 = p_NumberOfBits;
        if ( v4 < SizeOfRunArray )
        {
          ++v4;
          v23 = p_NumberOfBits + 2;
          p_NumberOfBits += 2;
        }
        v24 = v4 - 2;
        v36 = v4 - 2;
        if ( LocateLongestRuns )
        {
          for ( j = v23 - 1; v24 >= 0 && *(j - 1) < v32; j -= 2 )
          {
            *j = *(j - 2);
            j[1] = *(j - 1);
            v24 = --v36;
          }
          v17 = RunArray;
        }
        v17[v24 + 1].NumberOfBits = v32;
        v17[v36 + 1].StartingIndex = v38 + v30;
        if ( !LocateLongestRuns && v4 >= SizeOfRunArray )
          return v4;
        v20 |= v21;
      }
      while ( v20 != 0xFF );
    }
    v12 = v40;
    v5 = v34;
    v11 = v39;
LABEL_39:
    v38 += 8;
    v39 = ++v11;
  }
  while ( v11 < v12 );
  if ( v8 )
  {
    if ( v4 < SizeOfRunArray )
    {
      ++v4;
      goto LABEL_46;
    }
    if ( RunArray[v4 - 1].NumberOfBits < v8 )
    {
LABEL_46:
      v26 = v4 - 2;
      if ( LocateLongestRuns )
      {
        for ( k = &RunArray[v26 + 1]; v26 >= 0 && k[-1].NumberOfBits < v8; --k )
        {
          --v26;
          k->StartingIndex = k[-1].StartingIndex;
          k->NumberOfBits = k[-1].NumberOfBits;
        }
      }
      RunArray[v26 + 1].NumberOfBits = v8;
      RunArray[v26 + 1].StartingIndex = v33;
    }
  }
  return v4;
}
