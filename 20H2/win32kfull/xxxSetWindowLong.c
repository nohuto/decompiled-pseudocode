/*
 * XREFs of xxxSetWindowLong @ 0x1C00F0128
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C0073F0C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtUserSetWindowLong @ 0x1C00F0020 (NtUserSetWindowLong.c)
 * Callees:
 *     ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C00B25FC (--1CProcessAttachDetach@@QEAA@XZ.c)
 *     xxxSetWindowData @ 0x1C00B2618 (xxxSetWindowData.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     FCallerOk @ 0x1C00F04EC (FCallerOk.c)
 *     ??8?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z @ 0x1C011B89C (--8-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z.c)
 *     safe_cast_wf_to_PDIALOG @ 0x1C0156AA8 (safe_cast_wf_to_PDIALOG.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxSetWindowLong(struct tagWND *a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v6; // r15
  __int64 v7; // rsi
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // ebx
  __int64 v29; // r9
  unsigned __int64 v30; // r9
  int v31; // ecx
  _WORD *v32; // rdx
  unsigned int v33; // ecx
  _DWORD *v34; // r10
  int v35; // esi
  __int64 v36; // rdx
  unsigned int *v37; // rax
  __int64 v38; // rcx
  _BYTE v39[4]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v40; // [rsp+24h] [rbp-54h]
  _DWORD v41[20]; // [rsp+28h] [rbp-50h] BYREF

  v6 = a3;
  v7 = a2;
  v9 = 0;
  v39[0] = 0;
  if ( !(unsigned int)FCallerOk(a1) )
    goto LABEL_53;
  if ( (int)v7 >= 0 )
  {
    v12 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 252LL);
    v10 = v7 + 4;
    if ( v7 + 4 > v12 )
    {
      v13 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      if ( v13 != PsGetCurrentProcessWin32Process(v12, v10, v11)
        && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x800) == 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14, v10, v11);
        if ( !(unsigned __int8)CheckAccess(CurrentProcessWin32Process + 880, v13 + 880)
          && *(int *)(PsGetCurrentProcessWin32Process(v17, v16, v18) + 12) >= 0 )
        {
          goto LABEL_53;
        }
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL));
        v39[0] = 1;
      }
    }
  }
  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0 )
    goto LABEL_34;
  v19 = (unsigned int *)safe_cast_wf_to_PDIALOG(a1);
  if ( v19 )
  {
    if ( !(_DWORD)v7 )
    {
      v27 = *v19;
      v40 = *v19;
      *(_QWORD *)v19 = (int)v6;
LABEL_24:
      CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v39);
      return v27;
    }
    if ( (_DWORD)v7 == 16 )
    {
      v41[0] = 0;
      if ( (unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==((char *)a1 + 321, v41)
        && *(int *)(*((_QWORD *)a1 + 5) + 200LL) >= 30 )
      {
        v9 = *(_DWORD *)(v22 + 16);
        v40 = v9;
        *(_QWORD *)(v22 + 16) = (int)v6;
      }
      else
      {
        v41[0] = 0;
        if ( !(unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==(v21, v41) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25, v26);
        if ( *(int *)(*((_QWORD *)a1 + 5) + 200LL) < 30 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25, v26);
      }
      goto LABEL_55;
    }
    if ( (unsigned int)v7 <= 0x1D )
    {
      v20 = 1415LL;
LABEL_54:
      UserSetLastError(v20, v10, v11);
      goto LABEL_55;
    }
    goto LABEL_34;
  }
  if ( (int)v7 >= 0 )
  {
    v29 = *((_QWORD *)a1 + 5);
    v11 = *(_WORD *)(v29 + 42) & 0x2FFF;
    v10 = (unsigned int)(v11 - 666);
    if ( (int)v7 < *(unsigned __int16 *)(gpsi + 2 * v10 + 328) - 320 )
    {
      if ( (_DWORD)v11 != 679 )
        goto LABEL_33;
      if ( (_DWORD)v7 )
      {
        if ( (_DWORD)v7 != 8 )
          goto LABEL_33;
        v40 = **(_DWORD **)(v29 + 296);
        if ( v40 )
        {
          if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
            goto LABEL_33;
        }
      }
      goto LABEL_32;
    }
LABEL_34:
    if ( (int)v7 < 0 )
      goto LABEL_35;
LABEL_32:
    v11 = *((_QWORD *)a1 + 5);
    v30 = *(unsigned int *)(v11 + 252);
    if ( (unsigned __int64)(unsigned int)v7 + 4 > (unsigned int)(v30 + *(_DWORD *)(v11 + 200)) )
    {
LABEL_33:
      v20 = 1413LL;
      goto LABEL_54;
    }
    if ( !a5 )
      goto LABEL_47;
    v32 = *(_WORD **)(*((_QWORD *)a1 + 17) + 8LL);
    if ( (v32[3] & 0x100) == 0 )
      goto LABEL_47;
    v33 = 0;
    v34 = &gDefaultServerClasses;
    while ( *v32 != *(_WORD *)(gpsi + 2LL * ((*v34 >> 3) & 0x1F) + 868) )
    {
      ++v33;
      v34 += 12;
      if ( v33 >= 8 )
        goto LABEL_47;
    }
    if ( (int)v7 >= *((_DWORD *)&gDefaultServerClasses + 12 * v33 + 6)
      || (v10 = *v34 & 0xF8, (*(_BYTE *)v34 & 0xF8) == 0xB0)
      && (unsigned __int64)((int)v7 + 4LL) <= 0xFFFFFFFFFFFFFEE0uLL )
    {
LABEL_47:
      if ( (int)v7 + 4LL <= v30 )
      {
        v38 = *((_QWORD *)a1 + 35);
        v27 = *(_DWORD *)((int)v7 + v38);
        *(_DWORD *)((int)v7 + v38) = v6;
      }
      else
      {
        v35 = v7 - v30;
        v36 = *(_QWORD *)(v11 + 296);
        if ( (*(_DWORD *)(v11 + 232) & 0x800) != 0 )
          v37 = (unsigned int *)(v36 + v35 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL));
        else
          v37 = (unsigned int *)(v35 + v36);
        v27 = *v37;
        v40 = *v37;
        *v37 = v6;
      }
      goto LABEL_24;
    }
LABEL_53:
    v20 = 5LL;
    goto LABEL_54;
  }
LABEL_35:
  if ( (unsigned int)(v7 + 21) > 9 )
    goto LABEL_33;
  v31 = 547;
  if ( !_bittest(&v31, v7 + 21) )
    goto LABEL_33;
  v9 = xxxSetWindowData(a1, v7, v6, a4);
LABEL_55:
  CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v39);
  return v9;
}
