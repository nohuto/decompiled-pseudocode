/*
 * XREFs of _CitGetWindowInfo@8 @ 0xA7234
 * Callers:
 *     <none>
 * Callees:
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     __MonitorFromRect@12 @ 0x336E0 (__MonitorFromRect@12.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __stdcall CitGetWindowInfo(int a1, _WORD *a2)
{
  int result; // eax
  int *v3; // esi
  int v4; // edi
  __int16 v5; // si
  int v6; // eax
  int v7; // ecx
  char v8; // al
  char v9; // dl
  __int16 v10; // ax
  __int16 v11; // dx
  int v12; // ecx
  __int16 v13; // cx
  unsigned int v14; // eax
  int v15; // edx
  int *Prop; // eax
  __int16 v17; // [esp-4h] [ebp-2Ch]
  __int16 v18; // [esp-4h] [ebp-2Ch]
  int v19; // [esp+10h] [ebp-18h]
  int v20; // [esp+14h] [ebp-14h] BYREF
  int v21; // [esp+18h] [ebp-10h]
  int v22; // [esp+1Ch] [ebp-Ch]
  int v23; // [esp+20h] [ebp-8h]

  result = _GetTopLevelWindow(a1);
  v19 = result;
  if ( !result )
    return result;
  v3 = (int *)(*(_DWORD *)(result + 20) + 52);
  v20 = *v3++;
  v21 = *v3++;
  v22 = *v3;
  v23 = v3[1];
  v4 = result;
  if ( (*(_BYTE *)(*(_DWORD *)(result + 20) + 23) & 0x20) != 0 )
  {
    Prop = (int *)_GetProp(result, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1);
    if ( Prop )
    {
      v20 = *Prop;
      v21 = Prop[1];
      v22 = Prop[2];
      v23 = Prop[3];
      v4 = v19;
    }
  }
  v5 = 0;
  LogicalToPhysicalDPIRect(&v20, &v20, *(_DWORD *)(*(_DWORD *)(v4 + 20) + 184), 0);
  *a2 = v22 - v20;
  a2[1] = v23 - v21;
  v6 = _MonitorFromRect(&v20, 1, 18);
  if ( v6 )
    CitGetMonitorInfo(v6, a2);
  v7 = *(_DWORD *)(v4 + 20);
  v8 = *(_BYTE *)(v7 + 23);
  if ( (v8 & 0x20) != 0 )
  {
    v10 = 1;
  }
  else
  {
    if ( (v8 & 1) != 0 )
    {
      v17 = 2;
    }
    else
    {
      v9 = *(_BYTE *)(v7 + 145);
      if ( (v9 & 3) == 3 )
      {
        v17 = 5;
      }
      else if ( (v9 & 1) != 0 )
      {
        v17 = 3;
      }
      else if ( (v9 & 2) != 0 )
      {
        v17 = 4;
      }
      else
      {
        v10 = 0;
        if ( *(char *)(v7 + 146) >= 0 )
          goto LABEL_11;
        v17 = 6;
      }
    }
    v10 = v17;
  }
LABEL_11:
  v11 = 0;
  v12 = (*(_DWORD *)(v7 + 184) & 0xF) - 1;
  if ( v12 )
  {
    if ( v12 == 1 )
      v11 = 2;
  }
  else
  {
    v11 = 1;
  }
  v13 = v10 | (8 * v11);
  a2[4] = v13;
  v14 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)(v4 + 8) + 232) + 160);
  if ( (unsigned __int16)v14 <= 0x60u )
    goto LABEL_15;
  if ( v14 <= 0x78 )
  {
    v18 = 32;
LABEL_32:
    v5 = v18;
    goto LABEL_15;
  }
  if ( (unsigned __int16)v14 <= 0x90u )
  {
    v18 = 64;
    goto LABEL_32;
  }
  if ( (unsigned __int16)v14 <= 0xA8u )
  {
    v18 = 96;
    goto LABEL_32;
  }
  if ( (unsigned __int16)v14 > 0xC0u )
  {
    if ( (unsigned __int16)v14 > 0xF0u )
      v5 = (unsigned __int16)v14 > 0x120u ? 224 : 192;
    else
      v5 = 160;
  }
  else
  {
    v5 = 128;
  }
LABEL_15:
  v15 = (unsigned __int16)atomDWMProp;
  a2[4] = v5 | v13;
  result = _GetProp(v4, v15, 1);
  if ( result )
  {
    if ( (*(_DWORD *)result & 0x2000) != 0 )
    {
      result = 256;
      a2[4] |= 0x100u;
    }
  }
  return result;
}
