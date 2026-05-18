/*
 * XREFs of sub_1800C5690 @ 0x1800C5690
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007AC40 @ 0x18007AC40 (sub_18007AC40.c)
 *     sub_180084C98 @ 0x180084C98 (sub_180084C98.c)
 *     sub_1800C623C @ 0x1800C623C (sub_1800C623C.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_1800C5690(__int64 a1)
{
  int v2; // eax
  int result; // eax
  unsigned __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  sub_18007AC40((_QWORD *)a1);
  *(_BYTE *)(a1 + 1464) = 0;
  *(_BYTE *)(a1 + 1465) = 0;
  *(_BYTE *)(a1 + 1467) = 0;
  *(_BYTE *)(a1 + 1468) = 0;
  *(_BYTE *)(a1 + 1466) = 0;
  v2 = Mtx_lock((_Mtx_t)(a1 + 1552));
  if ( v2 )
  {
LABEL_4:
    std::_Throw_C_error(v2);
    JUMPOUT(0x1800C5740LL);
  }
  sub_1800C623C(a1 + 1496);
  v4[0] = *(_QWORD *)(a1 + 1496);
  sub_180084C98(*(unsigned __int64 **)(a1 + 1512), *(_QWORD *)(a1 + 1520), v4);
  result = Mtx_unlock((_Mtx_t)(a1 + 1552));
  if ( result )
  {
    std::_Throw_C_error(result);
    goto LABEL_4;
  }
  return result;
}
