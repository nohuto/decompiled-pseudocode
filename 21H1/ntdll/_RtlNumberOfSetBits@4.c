/*
 * XREFs of _RtlNumberOfSetBits@4 @ 0x4B34F6C0
 * Callers:
 *     _RtlNumberOfClearBits@4 @ 0x4B34F670 (_RtlNumberOfClearBits@4.c)
 *     _TpSetPoolThreadCpuSets@12 @ 0x4B383E50 (_TpSetPoolThreadCpuSets@12.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlNumberOfSetBits(PRTL_BITMAP BitMapHeader)
{
  unsigned int v1; // ebx
  unsigned int v2; // esi
  unsigned int v3; // ecx
  unsigned int v4; // edx
  ULONG v5; // edi
  int v6; // esi
  unsigned int v7; // ecx
  int v8; // ebx
  unsigned int *v9; // esi
  char v10; // al
  unsigned int *v11; // esi
  int v12; // ebx
  char *v13; // eax
  char v14; // cl
  int v16; // [esp+Ch] [ebp-18h]
  unsigned int v17; // [esp+10h] [ebp-14h]
  unsigned int v18; // [esp+14h] [ebp-10h]
  unsigned int v19; // [esp+18h] [ebp-Ch]
  unsigned int v20; // [esp+18h] [ebp-Ch]
  int v21; // [esp+1Ch] [ebp-8h]
  unsigned int *Buffer; // [esp+20h] [ebp-4h]

  v1 = BitMapHeader->SizeOfBitMap & 7;
  v2 = BitMapHeader->SizeOfBitMap >> 3;
  Buffer = BitMapHeader->Buffer;
  v17 = v1;
  v3 = v2 + (v1 != 0);
  v4 = 4 - ((unsigned __int8)Buffer & 3);
  v5 = 0;
  v18 = v3;
  if ( v4 > v2 )
  {
    v6 = 0;
    v19 = 0;
    v4 = v3;
    v21 = 0;
    v7 = 0;
  }
  else
  {
    v6 = ((_BYTE)v2 - (_BYTE)v4) & 3;
    v21 = v6;
    if ( v1 )
      v21 = ++v6;
    v7 = v3 - v6 - v4;
    v19 = v7;
  }
  v8 = 0;
  if ( v4 )
  {
    v9 = BitMapHeader->Buffer;
    do
    {
      v10 = *(_BYTE *)v9;
      v9 = (unsigned int *)((char *)v9 + 1);
      if ( v8 == v18 - 1 && v17 )
        v10 &= byte_4B288988[v17];
      ++v8;
      v5 += (unsigned __int8)RtlpBitsClearTotal[(unsigned __int8)~v10];
      --v4;
    }
    while ( v4 );
    v7 = v19;
    Buffer = v9;
    v6 = v21;
  }
  if ( v7 )
  {
    v11 = Buffer;
    v20 = ((v7 - 1) >> 2) + 1;
    v16 = v8 + 4 * v20;
    do
    {
      v12 = *v11++;
      v5 += (unsigned __int8)(RtlpBitsClearTotal[(unsigned __int16)~(_WORD)v12 >> 8]
                            + RtlpBitsClearTotal[(unsigned __int8)~(_BYTE)v12]
                            + RtlpBitsClearTotal[(unsigned __int8)((unsigned int)~v12 >> 16)]
                            + RtlpBitsClearTotal[(unsigned int)~v12 >> 24]);
      --v20;
    }
    while ( v20 );
    v8 = v16;
    Buffer = v11;
    v6 = v21;
  }
  if ( v6 )
  {
    v13 = (char *)Buffer;
    do
    {
      v14 = *v13++;
      if ( v8 == v18 - 1 && v17 )
        v14 &= byte_4B288988[v17];
      ++v8;
      v5 += (unsigned __int8)RtlpBitsClearTotal[(unsigned __int8)~v14];
      --v6;
    }
    while ( v6 );
  }
  return v5;
}
