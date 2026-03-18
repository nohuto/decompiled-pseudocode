/*
 * XREFs of ?xxxSetWindowWord@@YGGPAUtagWND@@HG@Z @ 0x1A5BF6
 * Callers:
 *     _NtUserSetWindowWord@12 @ 0x16A5F6 (_NtUserSetWindowWord@12.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _FCallerOk@4 @ 0x1A5FD7 (_FCallerOk@4.c)
 */

__int16 __userpurge xxxSetWindowWord@<ax>(
        int a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagWND *a3,
        int a4,
        unsigned __int16 a5)
{
  _DWORD *v6; // ebx
  int v7; // edi
  int v8; // ecx
  int CurrentProcessWin32Process; // eax
  bool v10; // sf
  _DWORD *v11; // edi
  unsigned int v12; // ecx
  __int16 *v13; // edx
  int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // esi
  int v18; // edx
  __int16 v19; // di
  __int16 result; // ax
  int v21; // eax
  char v22; // al
  int v23; // edi
  int v24; // edx
  int v25; // edx
  int v26; // ecx
  int v27; // ecx
  _DWORD *v28; // edx
  _DWORD *v29; // ecx
  __int16 v30; // si
  int v31; // edx
  unsigned int v32; // [esp+18h] [ebp-34h]
  _DWORD *v33; // [esp+1Ch] [ebp-30h]
  int v35; // [esp+28h] [ebp-24h]
  __int16 v36; // [esp+28h] [ebp-24h]
  int v37; // [esp+28h] [ebp-24h]
  char v38; // [esp+33h] [ebp-19h]

  v6 = a2;
  v38 = 0;
  if ( !FCallerOk() )
    goto LABEL_67;
  v7 = v6[5];
  if ( (*(_BYTE *)(v7 + 10) & 1) != 0 )
  {
    if ( a1 < 0 || (unsigned int)a1 > 0xA && a1 < 30 )
    {
      v8 = 1413;
LABEL_68:
      UserSetLastError((struct _NT_TIB *)v8);
      return 0;
    }
    if ( (*(_WORD *)(v7 + 30) & 0x3FFF) == 0x2A4 )
    {
      if ( (unsigned int)(a1 + 2) <= *(_DWORD *)(v7 + 160) )
        goto LABEL_14;
      v35 = *(_DWORD *)(v6[2] + 232);
      if ( v35 == PsGetCurrentProcessWin32Process() || (*(_DWORD *)(v6[5] + 144) & 0x800) != 0 )
        goto LABEL_14;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
      if ( (unsigned __int8)CheckAccess(CurrentProcessWin32Process + 496, v35 + 496)
        || *(int *)(PsGetCurrentProcessWin32Process() + 8) < 0 )
      {
        KeAttachProcess(**(PRKPROCESS **)(v6[2] + 232));
        v38 = 1;
LABEL_14:
        v10 = a1 < 0;
        goto LABEL_15;
      }
LABEL_67:
      v8 = 5;
      goto LABEL_68;
    }
  }
  if ( a1 == -21 )
  {
    result = *(_WORD *)(v7 + 136);
    *(_DWORD *)(v7 + 136) = (unsigned __int16)a3 | *(_DWORD *)(v7 + 136) & 0xFFFF0000;
    return result;
  }
  if ( a1 == -16 )
  {
    result = *(_WORD *)(v7 + 20);
    *(_DWORD *)(v7 + 20) = (unsigned __int16)a3 | *(_DWORD *)(v7 + 20) & 0xFFFF0000;
    return result;
  }
  if ( a1 < 0
    || (unsigned int)(a1 + 2) <= *(_DWORD *)(v7 + 160)
    || (v37 = *(_DWORD *)(v6[2] + 232), v37 == PsGetCurrentProcessWin32Process())
    || (*(_DWORD *)(v6[5] + 144) & 0x800) != 0 )
  {
    v22 = 0;
  }
  else
  {
    v21 = PsGetCurrentProcessWin32Process();
    if ( !(unsigned __int8)CheckAccess(v21 + 496, v37 + 496) && *(int *)(PsGetCurrentProcessWin32Process() + 8) >= 0 )
      goto LABEL_67;
    KeAttachProcess(**(PRKPROCESS **)(v6[2] + 232));
    v22 = 1;
    v38 = 1;
  }
  v23 = v6[5];
  v24 = *(_WORD *)(v23 + 30) & 0x3FFF;
  if ( !v24 )
    goto LABEL_14;
  if ( a1 < 0 )
  {
LABEL_44:
    v26 = 1413;
    goto LABEL_45;
  }
  if ( a1 >= *(unsigned __int16 *)(_gpsi + 2 * v24 - 1168) - 204 )
    goto LABEL_14;
  v25 = v24 - 673;
  if ( !v25 )
  {
    if ( !a1 )
    {
      v27 = **(_DWORD **)(v23 + 192);
      if ( !v27 || v27 == -1 )
      {
        if ( v22 )
          KeDetachProcess();
        return 0;
      }
      v28 = (_DWORD *)(v27 + 4);
      v29 = (_DWORD *)(v27 + 4);
      if ( (unsigned int)v29 >= _MmUserProbeAddress )
        v29 = (_DWORD *)_MmUserProbeAddress;
      v30 = *v29;
      *v28 = (unsigned __int16)a3;
      if ( v38 )
        KeDetachProcess();
      return v30;
    }
    goto LABEL_44;
  }
  if ( v25 != 6 )
    goto LABEL_44;
  v10 = a1 < 0;
  if ( a1 )
    goto LABEL_44;
LABEL_15:
  if ( v10 )
    goto LABEL_44;
  v11 = (_DWORD *)v6[5];
  v33 = v11;
  v32 = v11[40];
  v12 = a1 + 2;
  if ( a1 + 2 > v32 + v11[32] )
    goto LABEL_44;
  v13 = *(__int16 **)(v6[19] + 4);
  if ( (v13[3] & 0x100) != 0 )
  {
    v36 = *v13;
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      v16 = ((unsigned int)gDefaultServerClasses[v15] >> 3) & 0x1F;
      v6 = a2;
      v11 = v33;
      if ( v36 == *(_WORD *)(_gpsi + 2 * v16 + 468) )
        break;
      ++v14;
      v15 += 7;
      if ( v15 >= 56 )
        goto LABEL_21;
    }
    if ( a1 >= dword_24CC58[7 * v14] )
    {
LABEL_21:
      v12 = a1 + 2;
      goto LABEL_22;
    }
    if ( v16 != 22 || (v12 = a1 + 2, (unsigned int)(a1 + 2) > 0xFFFFFF58) )
    {
      v26 = 5;
LABEL_45:
      UserSetLastError((struct _NT_TIB *)v26);
      if ( v38 )
        KeDetachProcess();
      return 0;
    }
  }
LABEL_22:
  if ( v12 <= v32 )
  {
    v31 = v6[41];
    v19 = *(_WORD *)(v31 + a1);
    *(_WORD *)(v31 + a1) = (_WORD)a3;
  }
  else
  {
    v17 = a1 - v32;
    v18 = v11[48];
    if ( (v11[36] & 0x800) != 0 )
      v18 = v11[48] + *(_DWORD *)(v6[3] + 64);
    v19 = *(_WORD *)(v18 + v17);
    *(_WORD *)(v18 + v17) = (_WORD)a3;
  }
  if ( v38 )
    KeDetachProcess();
  return v19;
}
