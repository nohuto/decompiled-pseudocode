/*
 * XREFs of ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C00B20A8
 * Callers:
 *     NtUserSetWindowLongPtr @ 0x1C00B1FA0 (NtUserSetWindowLongPtr.c)
 *     xxxCsDdeInitialize @ 0x1C011F460 (xxxCsDdeInitialize.c)
 * Callees:
 *     ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C00B25FC (--1CProcessAttachDetach@@QEAA@XZ.c)
 *     xxxSetWindowData @ 0x1C00B2618 (xxxSetWindowData.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ??8?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z @ 0x1C011B89C (--8-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxSetWindowLongPtr(struct tagWND *a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // r14
  __int64 v8; // rdi
  __int64 v9; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v11; // rcx
  HANDLE v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 CurrentProcess; // rax
  __int64 v18; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r10
  int v24; // eax
  int v25; // ecx
  __int64 *v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // r10
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r10
  __int64 v36; // rbx
  unsigned int v37; // r8d
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned __int64 v40; // r9
  __int64 v41; // r10
  _WORD *v42; // rdx
  unsigned int v43; // ecx
  _DWORD *v44; // r10
  int v45; // r14d
  __int64 v46; // rdx
  __int64 *v47; // rax
  __int64 v49; // rcx
  _BYTE v50[4]; // [rsp+20h] [rbp-68h] BYREF
  int v51; // [rsp+24h] [rbp-64h] BYREF
  __int64 v52; // [rsp+28h] [rbp-60h]
  struct tagWND *v53; // [rsp+90h] [rbp+8h] BYREF
  int v54; // [rsp+98h] [rbp+10h]
  __int64 v55; // [rsp+A0h] [rbp+18h]

  v55 = a3;
  v54 = a2;
  v53 = a1;
  v6 = a2;
  v8 = 0LL;
  v50[0] = 0;
  v9 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v9 + 488) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 0xC) == 0 )
    goto LABEL_69;
  ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v9);
  v11 = gpidLogon;
  if ( ThreadProcessId == (HANDLE)gpidLogon )
  {
    v12 = PsGetThreadProcessId((PETHREAD)*gptiCurrent);
    v11 = gpidLogon;
    if ( v12 != (HANDLE)gpidLogon )
      goto LABEL_69;
  }
  if ( !(unsigned __int8)Enforced(v11) )
  {
    CurrentProcess = PsGetCurrentProcess(v14, v13, v15);
    if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
    {
      v14 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      v13 = *(_QWORD *)(gptiCurrent + 424LL);
      if ( *(_DWORD *)(v13 + 780) != *(_DWORD *)(v14 + 780) || *(_DWORD *)(v13 + 784) != *(_DWORD *)(v14 + 784) )
        goto LABEL_69;
    }
  }
  if ( (int)v6 >= 0 )
  {
    v14 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 252LL);
    v13 = v6 + 8;
    if ( v6 + 8 > v14 )
    {
      v18 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      if ( v18 != PsGetCurrentProcessWin32Process(v14, v13, v15)
        && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x800) == 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14, v13, v15);
        if ( !(unsigned __int8)CheckAccess(CurrentProcessWin32Process + 880, v18 + 880)
          && *(int *)(PsGetCurrentProcessWin32Process(v21, v20, v22) + 12) >= 0 )
        {
          goto LABEL_69;
        }
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL));
        v50[0] = 1;
      }
    }
  }
  v23 = *((_QWORD *)a1 + 5);
  v24 = *(unsigned __int16 *)(v23 + 42);
  if ( (v24 & 0xFFFF2FFF) != 0 )
  {
    if ( (v24 & 0x1000) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
      v23 = *((_QWORD *)a1 + 5);
    }
    v25 = *(unsigned __int16 *)(v23 + 42);
    if ( (v25 & 0x1000) == 0 )
    {
      if ( (*(_BYTE *)(v23 + 18) & 1) != 0 )
        v26 = *(_DWORD *)(v23 + 252) ? (__int64 *)*((_QWORD *)a1 + 35) : *(__int64 **)(v23 + 296);
      else
        v26 = 0LL;
      if ( v26 )
      {
        if ( !(_DWORD)v6 )
        {
          v36 = *v26;
          v52 = *v26;
          *v26 = a3;
          goto LABEL_75;
        }
        if ( (_DWORD)v6 == 16 )
        {
          LODWORD(v53) = 0;
          if ( (unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==(
                                  (char *)a1 + 321,
                                  &v53)
            && *(int *)(v30 + 200) >= 30 )
          {
            v8 = *(_QWORD *)(v29 + 16);
            v52 = v8;
            *(_QWORD *)(v29 + 16) = a3;
          }
          else
          {
            LODWORD(v53) = 0;
            if ( !(unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==(v28, &v53) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33, v34);
              v35 = *((_QWORD *)a1 + 5);
            }
            if ( *(int *)(v35 + 200) < 30 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33, v34);
          }
          goto LABEL_71;
        }
        if ( (unsigned int)v6 <= 0x1D )
        {
          v27 = 1415LL;
LABEL_70:
          UserSetLastError(v27);
          goto LABEL_71;
        }
        goto LABEL_56;
      }
    }
    if ( (int)v6 < 0 )
    {
LABEL_57:
      v8 = xxxSetWindowData(a1);
LABEL_71:
      CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v50);
      return v8;
    }
    if ( (int)v6 < *(unsigned __int16 *)(gpsi + 2LL * ((v25 & 0xFFFF2FFF) - 666) + 328) - 320 )
    {
      v37 = v25 & 0xFFFF2FFF;
      if ( (v25 & 0xFFFF2FFF) >= 0x2A1 )
      {
        if ( v37 <= 0x2A6 )
        {
LABEL_52:
          if ( (_DWORD)v6 )
            goto LABEL_51;
          v51 = 0;
          if ( (unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==(
                                  (char *)a1 + 321,
                                  &v51) )
          {
            v38 = **(_QWORD **)(v41 + 296);
            v52 = v38;
          }
          else
          {
            v38 = **((_QWORD **)a1 + 35);
          }
          goto LABEL_48;
        }
        if ( v37 != 679 )
        {
          if ( v37 - 680 > 2 )
            goto LABEL_51;
          goto LABEL_52;
        }
        if ( (_DWORD)v6 == 8 )
        {
          v38 = **(_QWORD **)(v23 + 296);
          v52 = v38;
LABEL_48:
          if ( v38 && *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
            goto LABEL_51;
          goto LABEL_50;
        }
      }
LABEL_51:
      v27 = 1413LL;
      goto LABEL_70;
    }
  }
LABEL_56:
  if ( (int)v6 < 0 )
    goto LABEL_57;
LABEL_50:
  v39 = *((_QWORD *)a1 + 5);
  v40 = *(unsigned int *)(v39 + 252);
  if ( (unsigned __int64)(unsigned int)v6 + 8 > (unsigned int)(v40 + *(_DWORD *)(v39 + 200)) )
    goto LABEL_51;
  if ( a5 )
  {
    v42 = *(_WORD **)(*((_QWORD *)a1 + 17) + 8LL);
    if ( (v42[3] & 0x100) != 0 )
    {
      v43 = 0;
      v44 = &gDefaultServerClasses;
      while ( *v42 != *(_WORD *)(gpsi + 2LL * ((*v44 >> 3) & 0x1F) + 868) )
      {
        ++v43;
        v44 += 12;
        if ( v43 >= 8 )
          goto LABEL_63;
      }
      if ( (int)v6 < *((_DWORD *)&gDefaultServerClasses + 12 * v43 + 6)
        && ((*v44 & 0xF8) != 0xB0 || (unsigned __int64)((int)v6 + 8LL) > 0xFFFFFFFFFFFFFEE0uLL) )
      {
LABEL_69:
        v27 = 5LL;
        goto LABEL_70;
      }
    }
  }
LABEL_63:
  if ( (int)v6 + 8LL <= v40 )
  {
    v49 = *((_QWORD *)a1 + 35);
    v36 = *(_QWORD *)((int)v6 + v49);
    *(_QWORD *)((int)v6 + v49) = a3;
  }
  else
  {
    v45 = v6 - v40;
    v46 = *(_QWORD *)(v39 + 296);
    if ( (*(_DWORD *)(v39 + 232) & 0x800) != 0 )
      v47 = (__int64 *)(v46 + v45 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL));
    else
      v47 = (__int64 *)(v45 + v46);
    v36 = *v47;
    v52 = *v47;
    *v47 = a3;
  }
LABEL_75:
  CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v50);
  return v36;
}
