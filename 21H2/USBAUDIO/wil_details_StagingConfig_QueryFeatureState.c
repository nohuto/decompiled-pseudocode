/*
 * XREFs of wil_details_StagingConfig_QueryFeatureState @ 0x1C0003080
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1C0002958 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_StagingConfig_QueryFeatureState(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // r12
  int v5; // r11d
  __int64 v6; // rbx
  int v7; // eax
  int v10; // ebp
  unsigned int v11; // r10d
  int v12; // r14d
  unsigned int v13; // esi
  __int64 result; // rax
  __int64 v15; // rax
  int v16; // eax
  int v17; // r8d
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // edx
  _DWORD *v21; // rcx
  __int64 v22; // [rsp+0h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = a3;
  v22 = 0LL;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( *(_WORD *)(v4 + 4) )
  {
    do
    {
      if ( *(_DWORD *)(v6 + 12LL * v13) == v7 )
      {
        if ( a4 && *(_DWORD *)(a1 + 48) )
        {
          if ( (*(_DWORD *)(v6 + 12LL * v13 + 4) & 1) == 0 )
          {
            v12 = *(_DWORD *)(v6 + 12LL * v13 + 8);
            v22 = *(_QWORD *)(v6 + 12LL * v13);
            v11 = HIDWORD(v22);
            goto LABEL_12;
          }
        }
        else
        {
          v10 = 1;
          v12 = *(_DWORD *)(v6 + 12LL * v13 + 8);
          v22 = *(_QWORD *)(v6 + 12LL * v13);
          if ( (*(_DWORD *)(v6 + 12LL * v13 + 4) & 1) != 0 )
            break;
        }
        v7 = a3;
      }
      ++v13;
    }
    while ( v13 < *(unsigned __int16 *)(v4 + 4) );
    v11 = HIDWORD(v22);
  }
  result = 0LL;
  if ( v10 )
  {
LABEL_12:
    if ( !a4 || (v15 = 12LL, !*(_DWORD *)(a1 + 48)) )
      v15 = 8LL;
    v16 = *(_DWORD *)(v15 + v4);
    if ( (v16 & 4) != 0 )
      v11 = HIDWORD(v22) & 0xFFFFCFFF;
    if ( (v16 & 2) != 0 )
      v11 &= 0xFFFFF3FF;
    if ( (v16 & 1) != 0 )
      v11 &= 0xFFFFFCFF;
    if ( (v16 & 8) != 0 )
    {
      v11 &= 0xC0FFFFFF;
      v12 = 0;
    }
    if ( (_DWORD)v22
      && (((BYTE1(v11) | (unsigned __int8)((v11 >> 10) | (v11 >> 12))) & 3) != 0
       || (v11 & 0x3F000000) != 0
       || (v11 & 2) != 0) )
    {
      *(_DWORD *)(a2 + 12) = v12;
      *(_DWORD *)(a2 + 8) = v11 >> 30;
      *(_BYTE *)(a2 + 4) = HIBYTE(v11) & 0x3F;
      *(_DWORD *)(a2 + 20) = (v11 >> 1) & 1;
      v17 = (v11 >> 12) & 3;
      if ( v17 )
      {
        *(_DWORD *)a2 = v17;
      }
      else
      {
        v18 = (v11 >> 10) & 3;
        if ( v18 )
        {
          *(_DWORD *)a2 = v18;
        }
        else
        {
          v19 = (v11 >> 8) & 3;
          if ( v19 )
            *(_DWORD *)a2 = v19;
        }
      }
      result = 1LL;
    }
    else
    {
      result = 0LL;
    }
  }
  v20 = 0;
  v21 = *(_DWORD **)(a1 + 40);
  if ( *(_WORD *)(v4 + 6) )
  {
    while ( *v21 != a3 )
    {
      ++v20;
      v21 += 4;
      if ( v20 >= *(unsigned __int16 *)(v4 + 6) )
        goto LABEL_40;
    }
    v5 = 1;
  }
LABEL_40:
  *(_DWORD *)(a2 + 16) = v5;
  return result;
}
