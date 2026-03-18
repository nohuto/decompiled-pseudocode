/*
 * XREFs of ?RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1C02E9F10
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015D6E8 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C015D7A8 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 * Callees:
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C0130190 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RemoveAllNonDesktopPaths(__int64 this, unsigned __int8 *a2)
{
  unsigned __int16 v2; // r9
  unsigned __int8 *v3; // r11
  unsigned int v4; // r10d
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // r8
  unsigned __int16 v8; // ax
  _OWORD *v9; // rax
  __int128 v10; // xmm0
  __int64 v11; // rax

  v2 = 0;
  v3 = a2;
  v4 = 0;
  v5 = 0;
  v6 = this;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v6 + 64);
    v8 = v7 ? *(_WORD *)(v7 + 20) : 0;
    if ( v4 >= v8 )
      break;
    a2 = (unsigned __int8 *)(272LL * v4 + v7 + 48);
    this = 0x1000000000LL;
    if ( (*(_QWORD *)a2 & 0x1000000000LL) != 0 )
    {
      *v3 = 1;
    }
    else
    {
      if ( v4 != v5 )
      {
        v9 = (_OWORD *)(272LL * v5 + v7 + 48);
        this = 2LL;
        do
        {
          v10 = *(_OWORD *)a2;
          a2 += 128;
          *v9 = v10;
          v9 += 8;
          *(v9 - 7) = *((_OWORD *)a2 - 7);
          *(v9 - 6) = *((_OWORD *)a2 - 6);
          *(v9 - 5) = *((_OWORD *)a2 - 5);
          *(v9 - 4) = *((_OWORD *)a2 - 4);
          *(v9 - 3) = *((_OWORD *)a2 - 3);
          *(v9 - 2) = *((_OWORD *)a2 - 2);
          *(v9 - 1) = *((_OWORD *)a2 - 1);
          --this;
        }
        while ( this );
        *v9 = *(_OWORD *)a2;
      }
      ++v5;
    }
    ++v4;
  }
  if ( *v3 )
  {
    if ( v7 )
      v2 = *(_WORD *)(v7 + 22);
    if ( v5 > v2 )
    {
      v11 = WdLogNewEntry5_WdAssertion(this, a2);
      WdLogEvent5_WdAssertion(v11);
      v7 = *(_QWORD *)(v6 + 64);
    }
    *(_WORD *)(v7 + 20) = v5;
    CCD_TOPOLOGY::ClearModalitySetId((void **)v6);
  }
  return 0LL;
}
