/*
 * XREFs of sub_180081F98 @ 0x180081F98
 * Callers:
 *     sub_1800635C4 @ 0x1800635C4 (sub_1800635C4.c)
 * Callees:
 *     sub_180082F4C @ 0x180082F4C (sub_180082F4C.c)
 */

char __fastcall sub_180081F98(__int64 a1)
{
  __int64 v1; // rbx
  bool v3; // zf
  unsigned __int64 v4; // rcx
  char result; // al
  int v6; // ebp
  _QWORD *v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx

  v1 = a1 + 40;
  v3 = (*(_BYTE *)(a1 + 48) & 1) == 0;
  v4 = *(_QWORD *)(a1 + 40);
  if ( !v3 && v4 )
    v4 ^= v1;
  result = *(_BYTE *)(v1 + 8);
  v6 = result & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v4 )
        {
          v7 = (_QWORD *)v4;
          if ( v6 )
            v4 ^= *(_QWORD *)v4;
          else
            v4 = *(_QWORD *)v4;
          *v7 = 0LL;
        }
        v8 = *(_QWORD *)(v4 + 8);
        if ( !v8 )
          break;
        v9 = v4;
        if ( v6 )
          v4 ^= v8;
        else
          v4 = *(_QWORD *)(v4 + 8);
        *(_QWORD *)(v9 + 8) = 0LL;
      }
      v10 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v6 && v10 )
        v10 ^= v4;
      sub_180082F4C(v4, a1 + 24);
      if ( !v10 )
        break;
      v4 = v10;
    }
    result = *(_BYTE *)(v1 + 8);
  }
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  if ( (result & 1) != 0 )
    *(_BYTE *)(v1 + 8) = 1;
  if ( *(_QWORD *)(a1 + 16) )
    result = Pdcv2ActivationClientUnregister();
  v11 = *(_QWORD *)(a1 + 64);
  if ( v11 )
    return TpReleaseWork(v11);
  return result;
}
