/*
 * XREFs of ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C00A6928
 * Callers:
 *     NtUserSetWindowLongPtr @ 0x1C00A6820 (NtUserSetWindowLongPtr.c)
 *     xxxCsDdeInitialize @ 0x1C011DD40 (xxxCsDdeInitialize.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C00A6E48 (--1CProcessAttachDetach@@QEAA@XZ.c)
 *     xxxSetWindowData @ 0x1C00A6E64 (xxxSetWindowData.c)
 *     ??8?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z @ 0x1C011AACC (--8-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxSetWindowLongPtr(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r15
  __int64 v6; // rsi
  __int64 v8; // rdi
  __int64 v9; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v11; // rcx
  HANDLE v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 CurrentProcess; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rcx
  __int64 v22; // r10
  __int64 *v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // r10
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r10
  __int64 v31; // rbx
  __int64 v32; // rcx
  unsigned __int64 v33; // r9
  __int64 v34; // r10
  _WORD *v35; // rdx
  unsigned int v36; // ecx
  _DWORD *v37; // r10
  int v38; // esi
  __int64 v39; // rdx
  __int64 *v40; // rax
  __int64 v42; // rcx
  _BYTE v43[4]; // [rsp+20h] [rbp-68h] BYREF
  int v44; // [rsp+24h] [rbp-64h] BYREF
  __int64 v45; // [rsp+28h] [rbp-60h]
  struct tagWND *v46; // [rsp+90h] [rbp+8h] BYREF
  int v47; // [rsp+98h] [rbp+10h]
  __int64 v48; // [rsp+A0h] [rbp+18h]

  v48 = a3;
  v47 = a2;
  v46 = a1;
  v5 = a3;
  v6 = (int)a2;
  v8 = 0LL;
  v43[0] = 0;
  v9 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v9 + 480) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 480LL) & 0xC) == 0 )
    goto LABEL_66;
  ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v9);
  v11 = gpidLogon;
  if ( ThreadProcessId == (HANDLE)gpidLogon )
  {
    v12 = PsGetThreadProcessId((PETHREAD)*gptiCurrent);
    v11 = gpidLogon;
    if ( v12 != (HANDLE)gpidLogon )
      goto LABEL_66;
  }
  if ( !(unsigned __int8)Enforced(v11) )
  {
    CurrentProcess = PsGetCurrentProcess(v13, a2, v14);
    if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
    {
      v16 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL);
      a2 = *(_QWORD *)(gptiCurrent + 416LL);
      if ( *(_DWORD *)(a2 + 780) != *(_DWORD *)(v16 + 780) || *(_DWORD *)(a2 + 784) != *(_DWORD *)(v16 + 784) )
        goto LABEL_66;
    }
  }
  if ( (int)v6 >= 0 )
  {
    v17 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 252LL);
    a2 = v6 + 8;
    if ( v6 + 8 > v17 )
    {
      v18 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL);
      if ( v18 != PsGetCurrentProcessWin32Process(v17) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x800) == 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
        if ( !(unsigned __int8)CheckAccess(CurrentProcessWin32Process + 880, v18 + 880)
          && *(int *)(PsGetCurrentProcessWin32Process(v21) + 12) >= 0 )
        {
          goto LABEL_66;
        }
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 416LL));
        v43[0] = 1;
      }
    }
  }
  v22 = *((_QWORD *)a1 + 5);
  a3 = *(_WORD *)(v22 + 42) & 0x3FFF;
  if ( (*(_WORD *)(v22 + 42) & 0x3FFF) != 0 )
  {
    if ( (*(_BYTE *)(v22 + 18) & 1) != 0 )
    {
      if ( *(_DWORD *)(v22 + 252) )
        v23 = (__int64 *)*((_QWORD *)a1 + 35);
      else
        v23 = *(__int64 **)(v22 + 296);
    }
    else
    {
      v23 = 0LL;
    }
    if ( v23 )
    {
      if ( !(_DWORD)v6 )
      {
        v31 = *v23;
        v45 = *v23;
        *v23 = v5;
        goto LABEL_72;
      }
      if ( (_DWORD)v6 == 16 )
      {
        LODWORD(v46) = 0;
        if ( (unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==((char *)a1 + 321, &v46)
          && *(int *)(v27 + 200) >= 30 )
        {
          v8 = *(_QWORD *)(v26 + 16);
          v45 = v8;
          *(_QWORD *)(v26 + 16) = v5;
        }
        else
        {
          LODWORD(v46) = 0;
          if ( !(unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==(v25, &v46) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28);
            v30 = *((_QWORD *)a1 + 5);
          }
          if ( *(int *)(v30 + 200) < 30 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28);
        }
        goto LABEL_68;
      }
      if ( (unsigned int)v6 <= 0x1D )
      {
        v24 = 1415LL;
LABEL_67:
        UserSetLastError(v24, a2, a3);
        goto LABEL_68;
      }
      goto LABEL_53;
    }
    if ( (int)v6 < 0 )
    {
LABEL_54:
      v8 = xxxSetWindowData(a1);
LABEL_68:
      CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v43);
      return v8;
    }
    a2 = (*(_WORD *)(v22 + 42) & 0x3FFFu) - 666;
    if ( (int)v6 < *(unsigned __int16 *)(gpsi + 2 * a2 + 328) - 320 )
    {
      if ( (unsigned int)a3 >= 0x2A1 )
      {
        if ( (unsigned int)a3 <= 0x2A6 )
        {
LABEL_49:
          if ( (_DWORD)v6 )
            goto LABEL_48;
          v44 = 0;
          if ( (unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==(
                                  (char *)a1 + 321,
                                  &v44) )
          {
            v32 = **(_QWORD **)(v34 + 296);
            v45 = v32;
          }
          else
          {
            v32 = **((_QWORD **)a1 + 35);
          }
          goto LABEL_45;
        }
        if ( (_DWORD)a3 != 679 )
        {
          if ( (unsigned int)(a3 - 680) > 2 )
            goto LABEL_48;
          goto LABEL_49;
        }
        if ( (_DWORD)v6 == 8 )
        {
          v32 = **(_QWORD **)(v22 + 296);
          v45 = v32;
LABEL_45:
          if ( v32 && *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
            goto LABEL_48;
          goto LABEL_47;
        }
      }
LABEL_48:
      v24 = 1413LL;
      goto LABEL_67;
    }
  }
LABEL_53:
  if ( (int)v6 < 0 )
    goto LABEL_54;
LABEL_47:
  a3 = *((_QWORD *)a1 + 5);
  v33 = *(unsigned int *)(a3 + 252);
  if ( (unsigned __int64)(unsigned int)v6 + 8 > (unsigned int)(v33 + *(_DWORD *)(a3 + 200)) )
    goto LABEL_48;
  if ( a5 )
  {
    v35 = *(_WORD **)(*((_QWORD *)a1 + 17) + 8LL);
    if ( (v35[3] & 0x100) != 0 )
    {
      v36 = 0;
      v37 = &gDefaultServerClasses;
      while ( *v35 != *(_WORD *)(gpsi + 2LL * ((*v37 >> 3) & 0x1F) + 868) )
      {
        ++v36;
        v37 += 12;
        if ( v36 >= 8 )
          goto LABEL_60;
      }
      if ( (int)v6 < *((_DWORD *)&gDefaultServerClasses + 12 * v36 + 6) )
      {
        a2 = *v37 & 0xF8;
        if ( (*(_BYTE *)v37 & 0xF8) != 0xB0 || (unsigned __int64)((int)v6 + 8LL) > 0xFFFFFFFFFFFFFEE0uLL )
        {
LABEL_66:
          v24 = 5LL;
          goto LABEL_67;
        }
      }
    }
  }
LABEL_60:
  if ( (int)v6 + 8LL <= v33 )
  {
    v42 = *((_QWORD *)a1 + 35);
    v31 = *(_QWORD *)((int)v6 + v42);
    *(_QWORD *)((int)v6 + v42) = v5;
  }
  else
  {
    v38 = v6 - v33;
    v39 = *(_QWORD *)(a3 + 296);
    if ( (*(_DWORD *)(a3 + 232) & 0x800) != 0 )
      v40 = (__int64 *)(v39 + v38 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL));
    else
      v40 = (__int64 *)(v38 + v39);
    v31 = *v40;
    v45 = *v40;
    *v40 = v5;
  }
LABEL_72:
  CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v43);
  return v31;
}
