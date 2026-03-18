/*
 * XREFs of _xxxSetWindowLong@20 @ 0x3EF3C
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z @ 0x16172 (-xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z.c)
 *     _NtUserSetWindowLong@16 @ 0x3EEB2 (_NtUserSetWindowLong@16.c)
 *     _xxxCsDdeInitialize@20 @ 0xE3B3C (_xxxCsDdeInitialize@20.c)
 * Callees:
 *     ??1CProcessAttachDetach@@QAE@XZ @ 0x3F3E4 (--1CProcessAttachDetach@@QAE@XZ.c)
 *     _xxxSetWindowData@16 @ 0x3F3F0 (_xxxSetWindowData@16.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ??8?$RedirectedFieldcbWndServerExtra@I@tagWND@@QBEE$$QAI@Z @ 0xAAE66 (--8-$RedirectedFieldcbWndServerExtra@I@tagWND@@QBEE$$QAI@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __fastcall xxxSetWindowLong(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  int v6; // edi
  int v7; // ebx
  int v8; // ecx
  int CurrentProcess; // eax
  int v10; // ecx
  int v11; // edx
  int CurrentProcessWin32Process; // eax
  int v13; // edx
  unsigned int v14; // ecx
  int *v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // esi
  int v19; // esi
  int v21; // eax
  _DWORD *v22; // ecx
  unsigned int v23; // edx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // esi
  int v27; // edx
  int v28; // edi
  int v29; // edx
  unsigned int v30; // [esp+28h] [ebp-2Ch]
  int v32; // [esp+30h] [ebp-24h]
  int v33; // [esp+30h] [ebp-24h]
  __int16 *v34; // [esp+30h] [ebp-24h]
  __int16 v35; // [esp+30h] [ebp-24h]
  char v36; // [esp+3Bh] [ebp-19h] BYREF
  CPPEH_RECORD ms_exc; // [esp+3Ch] [ebp-18h]

  v6 = a1;
  v7 = 0;
  v36 = 0;
  v8 = *(_DWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v8 + 264) & 0xC) != 0 && (*(_BYTE *)(_gptiCurrent + 264) & 0xC) == 0 )
    goto LABEL_68;
  if ( PsGetThreadProcessId(*(PETHREAD *)v8) == (HANDLE)_gpidLogon
    && PsGetThreadProcessId((PETHREAD)*_gptiCurrent) != (HANDLE)_gpidLogon )
  {
    goto LABEL_68;
  }
  if ( !(unsigned __int8)Enforced() )
  {
    CurrentProcess = PsGetCurrentProcess();
    if ( !IsProcessDwm(CurrentProcess) )
    {
      v10 = *(_DWORD *)(*(_DWORD *)(v6 + 8) + 232);
      v11 = *(_DWORD *)(_gptiCurrent + 232);
      if ( *(_DWORD *)(v11 + 424) != *(_DWORD *)(v10 + 424) || *(_DWORD *)(v11 + 428) != *(_DWORD *)(v10 + 428) )
        goto LABEL_68;
    }
  }
  if ( a2 >= 0 && (unsigned int)(a2 + 4) > *(_DWORD *)(*(_DWORD *)(v6 + 20) + 160) )
  {
    v32 = *(_DWORD *)(*(_DWORD *)(v6 + 8) + 232);
    if ( v32 != PsGetCurrentProcessWin32Process() && (*(_DWORD *)(*(_DWORD *)(v6 + 20) + 144) & 0x800) == 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
      if ( (unsigned __int8)CheckAccess(CurrentProcessWin32Process + 496, v32 + 496)
        || *(int *)(PsGetCurrentProcessWin32Process() + 8) < 0 )
      {
        KeAttachProcess(**(PRKPROCESS **)(*(_DWORD *)(v6 + 8) + 232));
        v36 = 1;
        goto LABEL_16;
      }
LABEL_68:
      v16 = 5;
      goto LABEL_69;
    }
  }
LABEL_16:
  v13 = *(_DWORD *)(v6 + 20);
  v33 = v13;
  v14 = *(_WORD *)(v13 + 30) & 0x3FFF;
  if ( !v14 )
    goto LABEL_53;
  if ( (*(_BYTE *)(v13 + 10) & 1) != 0 )
  {
    if ( *(_DWORD *)(v13 + 160) )
      v15 = *(int **)(v6 + 164);
    else
      v15 = *(int **)(v13 + 192);
  }
  else
  {
    v15 = 0;
  }
  if ( v15 )
  {
    if ( !a2 )
    {
      ms_exc.registration.TryLevel = 0;
      v19 = *v15;
      *v15 = a3;
      ms_exc.registration.TryLevel = -2;
      CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)&v36);
      return v19;
    }
    if ( a2 == 8 )
    {
      a4 = 0;
      v18 = v33;
      if ( (unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==(&a4)
        && *(int *)(v33 + 128) >= 30 )
      {
        ms_exc.registration.TryLevel = 1;
        v7 = *(_DWORD *)(v17 + 8);
        *(_DWORD *)(v17 + 8) = a3;
        ms_exc.registration.TryLevel = -2;
      }
      else
      {
        a3 = 0;
        if ( !(unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==(&a3) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
          v18 = *(_DWORD *)(v6 + 20);
        }
        if ( *(int *)(v18 + 128) < 30 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
      }
      goto LABEL_70;
    }
    if ( (unsigned int)a2 <= 0x1D )
    {
      v16 = 1415;
LABEL_69:
      UserSetLastError(v16);
      goto LABEL_70;
    }
LABEL_53:
    if ( a2 < 0 )
      goto LABEL_54;
    goto LABEL_50;
  }
  if ( a2 < 0 )
  {
LABEL_54:
    v7 = xxxSetWindowData((struct tagWND *)v6, a3, a4);
LABEL_70:
    CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)&v36);
    return v7;
  }
  if ( a2 >= *(unsigned __int16 *)(_gpsi + 2 * v14 - 1168) - 204 )
    goto LABEL_53;
  if ( v14 < 0x2A1 )
    goto LABEL_51;
  if ( v14 <= 0x2A6 )
    goto LABEL_41;
  if ( v14 == 679 )
  {
    if ( !a2 )
      goto LABEL_50;
    if ( a2 == 4 )
    {
      ms_exc.registration.TryLevel = 3;
      goto LABEL_47;
    }
LABEL_51:
    v16 = 1413;
    goto LABEL_69;
  }
  if ( v14 > 0x2AA )
    goto LABEL_51;
LABEL_41:
  if ( a2 )
    goto LABEL_51;
  a4 = 0;
  if ( !(unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==(&a4) )
  {
    v21 = **(_DWORD **)(v6 + 164);
    goto LABEL_48;
  }
  ms_exc.registration.TryLevel = 2;
LABEL_47:
  v21 = **(_DWORD **)(v33 + 192);
  ms_exc.registration.TryLevel = -2;
LABEL_48:
  if ( v21 && *(char *)(*(_DWORD *)(v6 + 20) + 11) >= 0 )
    goto LABEL_51;
LABEL_50:
  v22 = *(_DWORD **)(v6 + 20);
  a4 = v22;
  v30 = v22[40];
  v23 = a2 + 4;
  if ( a2 + 4 > v30 + v22[32] )
    goto LABEL_51;
  if ( a5 )
  {
    v34 = *(__int16 **)(*(_DWORD *)(v6 + 76) + 4);
    if ( (v34[3] & 0x100) != 0 )
    {
      a5 = 0;
      v35 = *v34;
      v24 = 0;
      while ( 1 )
      {
        v25 = ((unsigned int)gDefaultServerClasses[v24] >> 3) & 0x1F;
        v6 = a1;
        v23 = a2 + 4;
        if ( v35 == *(_WORD *)(_gpsi + 2 * v25 + 468) )
          break;
        ++a5;
        v24 += 7;
        if ( v24 >= 56 )
          goto LABEL_60;
      }
      if ( a2 >= dword_24CC58[7 * a5] || v25 == 22 && v23 <= 0xFFFFFF58 )
      {
LABEL_60:
        v22 = a4;
        goto LABEL_61;
      }
      goto LABEL_68;
    }
  }
LABEL_61:
  if ( v23 <= v30 )
  {
    v29 = *(_DWORD *)(v6 + 164);
    v28 = *(_DWORD *)(v29 + a2);
    *(_DWORD *)(v29 + a2) = a3;
  }
  else
  {
    v26 = a2 - v30;
    v27 = v22[48];
    if ( (v22[36] & 0x800) != 0 )
      v27 = v22[48] + *(_DWORD *)(*(_DWORD *)(v6 + 12) + 64);
    ms_exc.registration.TryLevel = 4;
    v28 = *(_DWORD *)(v27 + v26);
    *(_DWORD *)(v27 + v26) = a3;
    ms_exc.registration.TryLevel = -2;
  }
  CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)&v36);
  return v28;
}
