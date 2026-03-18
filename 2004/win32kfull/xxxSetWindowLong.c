/*
 * XREFs of xxxSetWindowLong @ 0x1C00A488C
 * Callers:
 *     NtUserSetWindowLong @ 0x1C00A46B0 (NtUserSetWindowLong.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00BB6EC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     FCallerOk @ 0x1C00A47B8 (FCallerOk.c)
 *     ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C00A6E48 (--1CProcessAttachDetach@@QEAA@XZ.c)
 *     xxxSetWindowData @ 0x1C00A6E64 (xxxSetWindowData.c)
 *     ??8?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z @ 0x1C011AACC (--8-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z.c)
 *     safe_cast_wf_to_PDIALOG @ 0x1C0154178 (safe_cast_wf_to_PDIALOG.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxSetWindowLong(struct tagWND *a1, int a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v6; // rsi
  unsigned int v8; // edi
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rcx
  __int64 v16; // r9
  unsigned int *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r9
  unsigned int v25; // ebx
  __int64 v27; // rcx
  int v28; // ecx
  _WORD *v29; // rdx
  unsigned int v30; // ecx
  _DWORD *v31; // r10
  int v32; // esi
  __int64 v33; // rdx
  unsigned int *v34; // rax
  __int64 v35; // rcx
  _BYTE v36[4]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v37; // [rsp+24h] [rbp-54h]
  _DWORD v38[20]; // [rsp+28h] [rbp-50h] BYREF

  v6 = a2;
  v8 = 0;
  v36[0] = 0;
  if ( !(unsigned int)FCallerOk((__int64)a1) )
    goto LABEL_54;
  if ( (int)v6 >= 0 )
  {
    v11 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 252LL);
    v9 = v6 + 4;
    if ( v6 + 4 > v11 )
    {
      v12 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL);
      if ( v12 != PsGetCurrentProcessWin32Process(v11) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x800) == 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
        if ( !(unsigned __int8)CheckAccess(CurrentProcessWin32Process + 880, v12 + 880)
          && *(int *)(PsGetCurrentProcessWin32Process(v15) + 12) >= 0 )
        {
          goto LABEL_54;
        }
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 416LL));
        v36[0] = 1;
      }
    }
  }
  v16 = *((_QWORD *)a1 + 5);
  v10 = *(_WORD *)(v16 + 42) & 0x3FFF;
  if ( (*(_WORD *)(v16 + 42) & 0x3FFF) != 0 )
  {
    v17 = (unsigned int *)safe_cast_wf_to_PDIALOG(a1);
    if ( v17 )
    {
      if ( !(_DWORD)v6 )
      {
        v25 = *v17;
        v37 = *v17;
        *(_QWORD *)v17 = (int)a3;
LABEL_24:
        CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v36);
        return v25;
      }
      if ( (_DWORD)v6 == 16 )
      {
        v38[0] = 0;
        if ( (unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==((char *)a1 + 321, v38)
          && *(int *)(v20 + 200) >= 30 )
        {
          v8 = *(_DWORD *)(v21 + 16);
          v37 = v8;
          *(_QWORD *)(v21 + 16) = (int)a3;
        }
        else
        {
          v38[0] = 0;
          if ( !(unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==(v19, v38) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22);
            v24 = *((_QWORD *)a1 + 5);
          }
          if ( *(int *)(v24 + 200) < 30 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22);
        }
        goto LABEL_56;
      }
      if ( (unsigned int)v6 <= 0x1D )
      {
        v18 = 1415LL;
LABEL_55:
        UserSetLastError(v18, v9, v10);
        goto LABEL_56;
      }
    }
    else if ( (int)v6 >= 0 )
    {
      v9 = (unsigned int)(v10 - 666);
      if ( (int)v6 < *(unsigned __int16 *)(gpsi + 2 * v9 + 328) - 320 )
      {
        if ( (_DWORD)v10 != 679 )
        {
LABEL_34:
          v18 = 1413LL;
          goto LABEL_55;
        }
        v27 = v16;
        if ( (_DWORD)v6 )
        {
          if ( (_DWORD)v6 != 8 )
            goto LABEL_34;
          v37 = **(_DWORD **)(v16 + 296);
          if ( v37 )
          {
            if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
              goto LABEL_34;
          }
          v16 = *((_QWORD *)a1 + 5);
          v27 = v16;
        }
LABEL_33:
        v10 = *(unsigned int *)(v27 + 252);
        if ( (unsigned __int64)(unsigned int)v6 + 4 > (unsigned int)(v10 + *(_DWORD *)(v27 + 200)) )
          goto LABEL_34;
        if ( !a5 )
          goto LABEL_48;
        v29 = *(_WORD **)(*((_QWORD *)a1 + 17) + 8LL);
        if ( (v29[3] & 0x100) == 0 )
          goto LABEL_48;
        v30 = 0;
        v31 = &gDefaultServerClasses;
        while ( *v29 != *(_WORD *)(gpsi + 2LL * ((*v31 >> 3) & 0x1F) + 868) )
        {
          ++v30;
          v31 += 12;
          if ( v30 >= 8 )
            goto LABEL_48;
        }
        if ( (int)v6 >= *((_DWORD *)&gDefaultServerClasses + 12 * v30 + 6)
          || (v9 = *v31 & 0xF8, (*(_BYTE *)v31 & 0xF8) == 0xB0)
          && (unsigned __int64)((int)v6 + 4LL) <= 0xFFFFFFFFFFFFFEE0uLL )
        {
LABEL_48:
          if ( (int)v6 + 4LL <= v10 )
          {
            v35 = *((_QWORD *)a1 + 35);
            v25 = *(_DWORD *)((int)v6 + v35);
            *(_DWORD *)((int)v6 + v35) = a3;
          }
          else
          {
            v32 = v6 - v10;
            v33 = *(_QWORD *)(v16 + 296);
            if ( (*(_DWORD *)(v16 + 232) & 0x800) != 0 )
              v34 = (unsigned int *)(v33 + v32 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL));
            else
              v34 = (unsigned int *)(v32 + v33);
            v25 = *v34;
            v37 = *v34;
            *v34 = a3;
          }
          goto LABEL_24;
        }
LABEL_54:
        v18 = 5LL;
        goto LABEL_55;
      }
    }
  }
  v27 = v16;
  if ( (int)v6 >= 0 )
    goto LABEL_33;
  if ( (unsigned int)(v6 + 21) > 9 )
    goto LABEL_34;
  v28 = 547;
  if ( !_bittest(&v28, v6 + 21) )
    goto LABEL_34;
  v8 = xxxSetWindowData(a1);
LABEL_56:
  CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v36);
  return v8;
}
