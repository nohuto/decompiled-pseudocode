/*
 * XREFs of __GetRegisteredRawInputDevices@8 @ 0x144474
 * Callers:
 *     _NtUserGetRegisteredRawInputDevices@12 @ 0x164796 (_NtUserGetRegisteredRawInputDevices@12.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?SortRegisteredDevices@@YGXPAUtagRAWINPUTDEVICE@@H@Z @ 0x143F0C (-SortRegisteredDevices@@YGXPAUtagRAWINPUTDEVICE@@H@Z.c)
 */

int __fastcall _GetRegisteredRawInputDevices(char *a1, unsigned int *a2)
{
  int v3; // ebx
  unsigned int v4; // edi
  int v5; // ecx
  _DWORD *i; // eax
  _DWORD *j; // eax
  _DWORD **v8; // ecx
  _DWORD *k; // eax
  unsigned int *v10; // ecx
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // esi
  int *v15; // edx
  int v16; // ecx
  unsigned int v17; // edi
  int v18; // eax
  int v19; // ecx
  int *v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int *v25; // edi
  int v26; // ecx
  int v27; // edx
  int v28; // edx
  int v29; // eax
  int *v30; // edi
  int v31; // edi
  __int16 v32; // cx
  int v33; // eax
  int *v34; // ecx
  int v35; // eax
  int v37; // [esp-4h] [ebp-A8h]
  __int16 v38; // [esp+12h] [ebp-92h]
  int v39; // [esp+2Ch] [ebp-78h]
  int v40; // [esp+30h] [ebp-74h]
  int *v41; // [esp+5Ch] [ebp-48h]
  int v42; // [esp+60h] [ebp-44h]
  __int16 v43; // [esp+60h] [ebp-44h]
  __int16 v44; // [esp+68h] [ebp-3Ch]
  int CurrentProcessWin32Process; // [esp+6Ch] [ebp-38h]
  int v46; // [esp+70h] [ebp-34h]
  unsigned int v47; // [esp+74h] [ebp-30h]
  unsigned int v48; // [esp+7Ch] [ebp-28h]
  __int16 v49; // [esp+80h] [ebp-24h]

  v3 = 0;
  v4 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v5 = *(_DWORD *)(CurrentProcessWin32Process + 472);
  if ( v5 )
  {
    for ( i = *(_DWORD **)(v5 + 8); i != (_DWORD *)(v5 + 8); i = (_DWORD *)*i )
      ++v4;
    for ( j = *(_DWORD **)(v5 + 16); j != (_DWORD *)(v5 + 16); j = (_DWORD *)*j )
      ++v4;
    v8 = (_DWORD **)(v5 + 24);
    for ( k = *v8; k != v8; k = (_DWORD *)*k )
      ++v4;
    v46 = v4;
  }
  else
  {
    v46 = 0;
  }
  if ( !a1 )
  {
    if ( (unsigned int)a2 >= _MmUserProbeAddress )
      a2 = (unsigned int *)_MmUserProbeAddress;
    *a2 = v4;
    return v3;
  }
  v10 = a2;
  if ( (unsigned int)a2 >= _MmUserProbeAddress )
    v10 = (unsigned int *)_MmUserProbeAddress;
  v11 = *v10;
  v47 = *v10;
  if ( !*v10 )
  {
    v37 = 87;
LABEL_21:
    v3 = -1;
    UserSetLastError((struct _NT_TIB *)v37);
    return v3;
  }
  if ( v11 > 0x15555555 )
    ExRaiseAccessViolation();
  ProbeForWrite(a1, 12 * v11, 4u);
  v12 = CurrentProcessWin32Process;
  v13 = *(_DWORD *)(CurrentProcessWin32Process + 472);
  if ( v13 )
  {
    if ( v47 < v4 )
    {
      if ( (unsigned int)a2 >= _MmUserProbeAddress )
        a2 = (unsigned int *)_MmUserProbeAddress;
      *a2 = v4;
      v37 = 122;
      goto LABEL_21;
    }
    v14 = 0;
    v15 = *(int **)(v13 + 8);
    while ( 1 )
    {
      v48 = v14;
      v16 = *(_DWORD *)(v12 + 472);
      v42 = v16;
      v17 = v47;
      if ( v15 == (int *)(v16 + 8) || v14 >= v47 )
        break;
      v18 = 0;
      v39 = 0;
      v19 = v15[3];
      if ( (v19 & 1) != 0 )
      {
        v18 = (v19 & 2) != 0 ? 4096 : 256;
        v39 = v18;
      }
      v44 = *((_WORD *)v15 + 4);
      v49 = *((_WORD *)v15 + 5);
      v20 = (int *)v15[5];
      if ( v20 )
        v21 = *v20;
      else
        v21 = 0;
      v40 = v21;
      v22 = 1;
      if ( *((_WORD *)v15 + 4) != 1 || v49 != 6 )
        v22 = 0;
      if ( v22 && (*(_BYTE *)(v42 + 52) & 0x20) != 0 )
        goto LABEL_47;
      if ( v44 != 1 || (v23 = 1, v49 != 2) )
        v23 = 0;
      if ( v23 && (*(_BYTE *)(v42 + 52) & 2) != 0 )
      {
LABEL_47:
        v18 |= 0x30u;
        v39 = v18;
      }
      if ( v44 != 1 )
        goto LABEL_54;
      if ( v49 == 6 && (*(_DWORD *)(v42 + 52) & 0x200) != 0 )
      {
        v18 |= 0x200u;
        v39 = v18;
      }
      if ( v49 == 6 )
        v24 = 1;
      else
LABEL_54:
        v24 = 0;
      if ( v24 && (*(_DWORD *)(v42 + 52) & 0x400) != 0 )
      {
        v18 |= 0x400u;
        v39 = v18;
      }
      if ( v44 == 1 && v49 == 2 && (*(_DWORD *)(v42 + 52) & 0x100) != 0 )
        v39 = v18 | 0x200;
      v25 = (int *)&a1[12 * v14];
      *v25++ = v15[2];
      *v25 = v39;
      v25[1] = v40;
      v15 = (int *)*v15;
      ++v14;
      v12 = CurrentProcessWin32Process;
    }
    v26 = *(_DWORD *)(v16 + 16);
    while ( 1 )
    {
      v41 = (int *)v26;
      v27 = *(_DWORD *)(CurrentProcessWin32Process + 472);
      if ( v26 == v27 + 16 || v14 >= v17 )
        break;
      v28 = 32;
      v29 = *(_DWORD *)(v26 + 12);
      if ( (v29 & 1) != 0 )
        v28 = (v29 & 2) != 0 ? 4128 : 288;
      v43 = *(_WORD *)(v26 + 8);
      v30 = *(int **)(v26 + 20);
      if ( v30 )
        v31 = *v30;
      else
        v31 = 0;
      v32 = *(_WORD *)(v26 + 10);
      v33 = 12 * v14;
      *(_WORD *)&a1[v33] = v43;
      *(_WORD *)&a1[v33 + 2] = v32;
      *(_DWORD *)&a1[v33 + 4] = v28;
      *(_DWORD *)&a1[v33 + 8] = v31;
      v26 = *v41;
      v14 = ++v48;
      v17 = v47;
    }
    v34 = *(int **)(v27 + 24);
    while ( v34 != (int *)(*(_DWORD *)(CurrentProcessWin32Process + 472) + 24) && v14 < v17 )
    {
      v38 = *((_WORD *)v34 + 5);
      v35 = 12 * v14;
      *(_WORD *)&a1[v35] = *((_WORD *)v34 + 4);
      *(_WORD *)&a1[v35 + 2] = v38;
      *(_DWORD *)&a1[v35 + 4] = 16;
      *(_DWORD *)&a1[v35 + 8] = 0;
      v34 = (int *)*v34;
      ++v14;
      v17 = v47;
    }
    v3 = v46;
    SortRegisteredDevices((unsigned __int16 *)a1, v46);
  }
  return v3;
}
