/*
 * XREFs of KiIntSteerCalculateUniformDistribution @ 0x140578254
 * Callers:
 *     KiIntSteerCalculateDistribution @ 0x1402FF310 (KiIntSteerCalculateDistribution.c)
 * Callees:
 *     KiIntSteerGetNextProcessorTarget @ 0x140578414 (KiIntSteerGetNextProcessorTarget.c)
 */

unsigned __int64 __fastcall KiIntSteerCalculateUniformDistribution(_QWORD *a1, __int64 *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rsi
  unsigned __int64 result; // rax
  _QWORD *v7; // rdi
  int NextProcessorTarget; // eax
  unsigned int v9; // ecx
  _QWORD *v10; // rcx
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)*a1;
  v3 = *a2;
  v11 = 0LL;
  result = *((unsigned __int16 *)a2 + 4);
  WORD4(v11) = *((_WORD *)a2 + 4);
  for ( *(_QWORD *)&v11 = v3; v2 != a1; v2 = (_QWORD *)*v2 )
  {
    v7 = v2 - 26;
    result = *(v2 - 18);
    if ( (result & *a2) != 0 )
    {
      NextProcessorTarget = KiIntSteerGetNextProcessorTarget(v2 - 26, &v11);
      if ( NextProcessorTarget == -1 )
      {
        v3 |= *a2 & v7[8];
        *(_QWORD *)&v11 = v3;
        NextProcessorTarget = KiIntSteerGetNextProcessorTarget(v2 - 26, &v11);
      }
      v9 = KiProcessorIndexToNumberMappingTable[NextProcessorTarget];
      v3 &= ~(1LL << (v9 & 0x3F));
      *(_DWORD *)((char *)v7 + 186) = 0;
      *((_WORD *)v7 + 95) = 0;
      *((_WORD *)v7 + 92) = v9 >> 6;
      v7[22] = 1LL << (v9 & 0x3F);
      v10 = (_QWORD *)*v2;
      *(_QWORD *)&v11 = v3;
      if ( (_QWORD *)v10[1] != v2 || (result = v2[1], *(_QWORD **)result != v2) )
        __fastfail(3u);
      *(_QWORD *)result = v10;
      v10[1] = result;
    }
  }
  return result;
}
