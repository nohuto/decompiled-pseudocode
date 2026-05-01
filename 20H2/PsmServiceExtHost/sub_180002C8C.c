/*
 * XREFs of sub_180002C8C @ 0x180002C8C
 * Callers:
 *     sub_18000334C @ 0x18000334C (sub_18000334C.c)
 *     sub_180003420 @ 0x180003420 (sub_180003420.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_180002C8C(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4, _QWORD *a5, __int64 *a6)
{
  _QWORD *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r11
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 *result; // rax

  v6 = (_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v7 = *a3;
    v8 = 1LL;
    v9 = (0xC4CEB9FE1A85EC53uLL
        * ((0xFF51AFD7ED558CCDuLL * (*a3 ^ ((unsigned __int64)*a3 >> 33))) ^ ((0xFF51AFD7ED558CCDuLL
                                                                             * (*a3 ^ ((unsigned __int64)*a3 >> 33))) >> 33))) ^ ((0xC4CEB9FE1A85EC53uLL * ((0xFF51AFD7ED558CCDuLL * (*a3 ^ ((unsigned __int64)*a3 >> 33))) ^ ((0xFF51AFD7ED558CCDuLL * (*a3 ^ ((unsigned __int64)*a3 >> 33))) >> 33))) >> 33);
    v10 = *(_QWORD *)(a1 + 16) + 16 * (v9 & ((8LL << *(_BYTE *)(a1 + 32)) - 1));
    v11 = *(_QWORD **)v10;
    if ( *(_QWORD *)v10 )
    {
      while ( v11 != **(_QWORD ***)(v10 + 8) )
      {
        if ( v11[2] >= v9 )
        {
          if ( v11[2] > v9 )
            break;
          if ( v7 == v11[3] )
          {
            *a4 = v11;
            v6 = (_QWORD *)*v11;
            goto LABEL_8;
          }
        }
        v11 = (_QWORD *)*v11;
      }
    }
  }
  *a4 = v6;
  v8 = 0LL;
LABEL_8:
  *a5 = v6;
  result = a6;
  *a6 = v8;
  return result;
}
