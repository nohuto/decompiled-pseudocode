/*
 * XREFs of AlpcpGetEffectiveTokenMessage @ 0x1405E350C
 * Callers:
 *     AlpcpQuerySidMessage @ 0x1405E33A4 (AlpcpQuerySidMessage.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x1408C254C (AlpcpQueryTokenModifiedIdMessage.c)
 * Callees:
 *     SeCreateClientSecurityEx @ 0x140652D80 (SeCreateClientSecurityEx.c)
 */

__int64 __fastcall AlpcpGetEffectiveTokenMessage(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, _BYTE *a5)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rcx

  if ( (*(_DWORD *)(a2 + 40) & 0x80u) != 0 )
    return 3221227267LL;
  v8 = *(_QWORD *)(a2 + 136);
  if ( v8 )
  {
    if ( *(int *)(v8 + 36) >= 1 )
    {
      v9 = *(_QWORD *)(v8 + 48);
LABEL_5:
      *a3 = v9;
      *a5 = 0;
      return 0LL;
    }
    return 3221225506LL;
  }
  v11 = *(_QWORD *)(a2 + 24);
  if ( (*(_DWORD *)(a1 + 416) & 6) != 2 )
    return 3221225506LL;
  if ( !v11 )
    return 3221225506LL;
  v12 = *(_DWORD *)(v11 + 416);
  if ( (v12 & 6) != 4 )
    return 3221225506LL;
  if ( (v12 & 0x400) == 0 )
  {
    v9 = *(_QWORD *)(v11 + 80);
    if ( v9 )
      goto LABEL_5;
    return 3221225506LL;
  }
  v13 = *(_QWORD *)(a2 + 32);
  if ( !v13 )
    return 3221225506LL;
  result = SeCreateClientSecurityEx(v13, v11 + 260, 0LL);
  if ( (int)result >= 0 )
  {
    *a3 = *(_QWORD *)(a4 + 16);
    *a5 = 1;
    return 0LL;
  }
  return result;
}
