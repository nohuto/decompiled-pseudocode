/*
 * XREFs of ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YGXPAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PAU_MOVESIZEDATA@@PAJ@Z @ 0x174574
 * Callers:
 *     ?xxxArrangeWindow@@YGXPAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x173243 (-xxxArrangeWindow@@YGXPAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 * Callees:
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _xxxInitializeMoveSizeData@20 @ 0x176FCC (_xxxInitializeMoveSizeData@20.c)
 */

int __fastcall xxxInitializeMoveSizeDataProgrammaticArrangement(int a1, int a2, int a3, int a4, _DWORD *a5, int *a6)
{
  unsigned int v7; // eax
  int *Prop; // esi
  int *v9; // esi
  int v10; // edi
  unsigned __int16 v11; // cx
  int v12; // edx
  unsigned __int16 v13; // ax
  INT DpiForSystem; // eax
  int result; // eax
  int v16; // ecx
  int v17; // [esp-8h] [ebp-30h]
  int v18; // [esp-4h] [ebp-2Ch]
  int v19; // [esp+10h] [ebp-18h]
  int v20; // [esp+14h] [ebp-14h]
  int v23; // [esp+38h] [ebp+10h]

  v7 = a5[46] & 0xFFFC7FFF | 0x30000;
  a5[2] = a1;
  a5[46] = v7;
  if ( a3 == 5 )
    Prop = (int *)_GetProp(a1, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1);
  else
    Prop = (int *)(*(_DWORD *)(a1 + 20) + 52);
  v23 = 0;
  v19 = *Prop;
  v9 = Prop + 1;
  v20 = *v9;
  v10 = (unsigned __int16)(v19 + (v9[1] - v19) / 2);
  if ( a4 )
  {
    if ( a4 == 1 )
      v23 = 6;
  }
  else
  {
    v23 = 18;
  }
  v11 = 0;
  v12 = 0;
  if ( a2 == 3 )
  {
    v13 = v20 + 2;
    v18 = 3;
  }
  else
  {
    if ( (unsigned int)(a2 - 4) > 3 )
      goto LABEL_17;
    if ( !a3 || a3 == 3 )
    {
      DpiForSystem = GetDpiForSystem();
      v13 = v20 - 1 + GetDpiDependentMetric(2, DpiForSystem);
    }
    else
    {
      v13 = v20 + 2;
    }
    v18 = 9;
  }
  v12 = v18;
  v11 = v13;
LABEL_17:
  v17 = v10 | (v11 << 16);
  *a6 = v17;
  result = xxxInitializeMoveSizeData(a1, a5, v12, v17, v23);
  if ( a2 == 3 )
  {
    a5[46] |= 0x400u;
  }
  else if ( a2 > 3 )
  {
    if ( a2 <= 5 )
    {
      result = (*((_BYTE *)a5 + 184) ^ (unsigned __int8)((a5[46] | 0x800u) >> 5)) & 0x80;
      v16 = result ^ (a5[46] | 0x800);
      a5[46] = v16;
      if ( (((unsigned int)&loc_1FFFFC + 4) & v16) != 0 )
      {
        result = 4;
        if ( a3 == 4 )
          a5[52] = 4;
      }
      if ( (v23 & 4) != 0 )
      {
        a5[39] = 0;
        a5[40] = 0;
      }
    }
    else if ( a2 <= 7 )
    {
      result = (a5[46] | 0xC00) ^ (*((_BYTE *)a5 + 184) ^ (unsigned __int8)((a5[46] | 0xC00u) >> 5)) & 0x80;
      a5[46] = result;
    }
  }
  return result;
}
