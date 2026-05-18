/*
 * XREFs of sub_1800CAF60 @ 0x1800CAF60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180080510 @ 0x180080510 (sub_180080510.c)
 *     sub_18008A568 @ 0x18008A568 (sub_18008A568.c)
 *     sub_1800CBB0C @ 0x1800CBB0C (sub_1800CBB0C.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_1800CAF60(__int64 a1)
{
  int v2; // eax
  int result; // eax
  unsigned __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  sub_180080510((_QWORD *)a1);
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
    JUMPOUT(0x1800CB010LL);
  }
  sub_1800CBB0C(a1 + 1496);
  v4[0] = *(_QWORD *)(a1 + 1496);
  sub_18008A568(*(unsigned __int64 **)(a1 + 1512), *(_QWORD *)(a1 + 1520), v4);
  result = Mtx_unlock((_Mtx_t)(a1 + 1552));
  if ( result )
  {
    std::_Throw_C_error(result);
    goto LABEL_4;
  }
  return result;
}
