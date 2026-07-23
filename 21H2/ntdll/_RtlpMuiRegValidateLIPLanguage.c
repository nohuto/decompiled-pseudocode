/*
 * XREFs of _RtlpMuiRegValidateLIPLanguage @ 0x1801077EC
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x180107418 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLangInfoIndex @ 0x18007AAD8 (RtlpMuiRegGetInstalledLangInfoIndex.c)
 */

__int64 __fastcall RtlpMuiRegValidateLIPLanguage(__int64 a1, int a2)
{
  __int64 v3; // r10
  int v4; // ebp
  int v5; // r12d
  _WORD *v6; // rbx
  int v7; // edi
  unsigned __int8 v8; // dl
  __int64 v9; // r8
  __int64 v10; // rdx
  _WORD *v11; // r8
  __int16 v12; // ax
  __int16 v13; // ax
  __int64 v14; // r14
  __int16 v15; // r8
  __int16 v16; // r9
  __int16 v17; // dx
  __int16 v18; // dx
  __int16 v21; // [rsp+58h] [rbp+10h] BYREF

  v3 = a1;
  v4 = 0;
  v5 = 0;
  v6 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * a2);
  v7 = 0;
  while ( 1 )
  {
    v8 = (v6[4] >> (2 * v5)) & 3;
    if ( !v8 )
      goto LABEL_28;
    v9 = (__int16)v6[v5 + 6];
    if ( v8 == 2 )
      break;
    v14 = *(_QWORD *)(v3 + 24);
    v21 = -1;
    if ( (int)RtlpMuiRegGetInstalledLangInfoIndex(v14, v8, v9, &v21) < 0
      || (v15 = v21, v21 < 0)
      || v21 >= (int)*(unsigned __int16 *)(v14 + 6)
      || v21 == a2 )
    {
      v6[4] &= ~(3 << v7);
      goto LABEL_27;
    }
    v16 = *(_WORD *)(28LL * v21 + *(_QWORD *)(v14 + 16));
    v17 = ~(3 << v7);
    if ( (v16 & 4) != 0 )
    {
      v6[4] &= v17;
LABEL_27:
      v3 = a1;
      goto LABEL_28;
    }
    v18 = v6[4] & v17;
    v3 = a1;
    if ( (v16 & 0x1820) == 0x820 )
    {
      v6[4] = v18 | (2 << v7);
      v6[v5 + 6] = v15;
LABEL_25:
      ++v4;
      goto LABEL_28;
    }
    v6[4] = v18;
LABEL_28:
    ++v5;
    v7 += 2;
    if ( v7 >= 8 )
      goto LABEL_31;
  }
  if ( (v9 & 0x8000u) != 0LL
    || (v10 = *(_QWORD *)(v3 + 24), (int)v9 >= *(unsigned __int16 *)(v10 + 6))
    || (_DWORD)v9 == a2 )
  {
    v6[4] &= ~(3 << v7);
    v6[v5 + 6] = 0;
    goto LABEL_28;
  }
  v11 = (_WORD *)(*(_QWORD *)(v10 + 16) + 28 * v9);
  if ( (*v11 & 4) == 0 )
  {
    if ( (*v11 & 0x1820) != 0x820 )
    {
      if ( v11[2] )
      {
        v6[4] = v6[4] & ~(3 << v7) | (1 << v7);
        v12 = v11[2];
      }
      else
      {
        v13 = v6[4] & ~(3 << v7);
        if ( (__int16)v11[3] <= 0 )
        {
          v6[4] = v13;
          v12 = 0;
        }
        else
        {
          v6[4] = (3 << v7) | v13;
          v12 = v11[3];
        }
      }
      v6[v5 + 6] = v12;
      goto LABEL_28;
    }
    goto LABEL_25;
  }
  *v6 |= 0x1000u;
LABEL_31:
  if ( v4 >= 1 )
    return 0LL;
  *v6 |= 0x1000u;
  return 3221225473LL;
}
