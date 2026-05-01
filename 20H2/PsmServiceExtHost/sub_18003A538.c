/*
 * XREFs of sub_18003A538 @ 0x18003A538
 * Callers:
 *     sub_18003A464 @ 0x18003A464 (sub_18003A464.c)
 * Callees:
 *     sub_180066C5C @ 0x180066C5C (sub_180066C5C.c)
 */

__int64 __fastcall sub_18003A538(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // r15
  int v5; // r10d
  __int64 v6; // r11
  int v11; // edi
  unsigned int v12; // r9d
  __int64 i; // rdx
  unsigned int v14; // r9d
  unsigned int v15; // ecx
  _DWORD *v16; // rax
  __int64 result; // rax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // r8
  bool v22; // zf
  int v23; // eax
  unsigned int v24; // r8d
  int v25; // eax
  int v26; // r8d
  __int64 v27; // [rsp+20h] [rbp-10h] BYREF
  int v28; // [rsp+28h] [rbp-8h]

  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 32);
  v11 = 0;
  v12 = *(unsigned __int16 *)(v4 + 4);
  for ( i = 0LL; (unsigned int)i < v12; i = (unsigned int)(i + 1) )
  {
    if ( *(_DWORD *)(v6 + 12LL * (unsigned int)i) == a3 )
    {
      if ( a4 && *(_DWORD *)(a1 + 48) )
      {
        if ( (*(_BYTE *)(v6 + 12LL * (unsigned int)i + 4) & 1) == 0 )
        {
          v18 = *(_DWORD *)(v6 + 12LL * (unsigned int)i + 8);
          v27 = *(_QWORD *)(v6 + 12LL * (unsigned int)i);
          v28 = v18;
          goto LABEL_10;
        }
      }
      else
      {
        v11 = 1;
        v22 = (*(_BYTE *)(v6 + 12LL * (unsigned int)i + 4) & 1) == 0;
        v23 = *(_DWORD *)(v6 + 12LL * (unsigned int)i + 8);
        v27 = *(_QWORD *)(v6 + 12LL * (unsigned int)i);
        v28 = v23;
        if ( !v22 )
          break;
      }
    }
  }
  v14 = 0;
  if ( v11 )
  {
LABEL_10:
    if ( !a4 || (v19 = 12LL, !*(_DWORD *)(a1 + 48)) )
      v19 = 8LL;
    v20 = *(_DWORD *)(v19 + v4);
    if ( (v20 & 4) != 0 )
    {
      v21 = HIDWORD(v27) & 0xFFFFCFFF;
      HIDWORD(v27) &= 0xFFFFCFFF;
    }
    else
    {
      v21 = HIDWORD(v27);
    }
    if ( (v20 & 2) != 0 )
    {
      v21 = (unsigned int)v21 & 0xFFFFF3FF;
      HIDWORD(v27) = v21;
    }
    if ( (v20 & 1) != 0 )
    {
      v21 = (unsigned int)v21 & 0xFFFFFCFF;
      HIDWORD(v27) = v21;
    }
    if ( (v20 & 8) != 0 )
    {
      v21 = (unsigned int)v21 & 0xC0FFFFFF;
      v28 = 0;
      HIDWORD(v27) = v21;
    }
    if ( (unsigned int)sub_180066C5C(&v27, i, v21) )
    {
      *(_DWORD *)(a2 + 12) = v28;
      *(_DWORD *)(a2 + 8) = v24 >> 30;
      *(_BYTE *)(a2 + 4) = HIBYTE(v24) & 0x3F;
      *(_DWORD *)(a2 + 20) = (v24 >> 1) & 1;
      v25 = (v24 >> 12) & 3;
      if ( v25 || (v25 = (v24 >> 10) & 3) != 0 )
      {
        *(_DWORD *)a2 = v25;
      }
      else
      {
        v26 = (v24 >> 8) & 3;
        if ( v26 )
          *(_DWORD *)a2 = v26;
      }
      v14 = 1;
    }
  }
  v15 = v5;
  v16 = *(_DWORD **)(a1 + 40);
  if ( *(_WORD *)(v4 + 6) )
  {
    while ( *v16 != a3 )
    {
      ++v15;
      v16 += 4;
      if ( v15 >= *(unsigned __int16 *)(v4 + 6) )
        goto LABEL_4;
    }
    v5 = 1;
  }
LABEL_4:
  result = v14;
  *(_DWORD *)(a2 + 16) = v5;
  return result;
}
