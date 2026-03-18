/*
 * XREFs of ACPIGpeBuildWakeMasks @ 0x1C001D4E0
 * Callers:
 *     ACPIGpeBuildWakeMasks @ 0x1C001D4E0 (ACPIGpeBuildWakeMasks.c)
 *     ACPITableLoadCallBack @ 0x1C001F7F0 (ACPITableLoadCallBack.c)
 * Callees:
 *     ACPIGpeBuildWakeMasks @ 0x1C001D4E0 (ACPIGpeBuildWakeMasks.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C001D5CC (ACPIGpeIndexToGpeRegister.c)
 */

_QWORD **__fastcall ACPIGpeBuildWakeMasks(__int64 a1)
{
  _QWORD **v1; // rsi
  _QWORD **result; // rax
  _QWORD *v3; // r14
  _QWORD **v4; // rbx
  const signed __int64 *v5; // rdi
  __int64 v6; // r8
  int v7; // edx

  v1 = (_QWORD **)(a1 + 800);
  result = *(_QWORD ***)(a1 + 800);
  v3 = *result;
  while ( 1 )
  {
    v4 = result;
    if ( result == v1 )
      break;
    v5 = (const signed __int64 *)(result - 102);
    ACPIGpeBuildWakeMasks(result - 102);
    if ( (v5[1] & 0x10000) != 0 && (v5[125] & 0x500000000LL) == 0 )
    {
      v6 = (unsigned int)ACPIGpeIndexToGpeRegister(*((unsigned int *)v5 + 126));
      v7 = 1 << (v5[63] & 7);
      if ( ((unsigned __int8)v7 & *((_BYTE *)GpeEnable + v6)) != 0 )
      {
        if ( _bittest64(v5 + 1, 0x23u) )
        {
          *((_BYTE *)GpeSpecialHandler + v6) |= v7;
          *((_BYTE *)GpeWakeHandler + v6) &= ~(_BYTE)v7;
        }
        else if ( ((unsigned __int8)v7 & *((_BYTE *)GpeSpecialHandler + v6)) == 0 )
        {
          *((_BYTE *)GpeWakeHandler + v6) |= v7;
        }
      }
    }
    result = (_QWORD **)*v4;
    if ( (_QWORD *)**v4 == *v4 )
    {
      result = (_QWORD **)v3;
      v3 = (_QWORD *)*v3;
    }
    else
    {
      v3 = (_QWORD *)**v4;
    }
  }
  return result;
}
