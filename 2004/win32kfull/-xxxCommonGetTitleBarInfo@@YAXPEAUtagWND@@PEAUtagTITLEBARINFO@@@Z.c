/*
 * XREFs of ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C009FBB0
 * Callers:
 *     NtUserGetTitleBarInfo @ 0x1C009C230 (NtUserGetTitleBarInfo.c)
 *     xxxGetTitleBarInfoEx @ 0x1C01124B4 (xxxGetTitleBarInfoEx.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C00A0088 (GetDpiCacheSlot.c)
 *     xxxMNCanClose @ 0x1C00A00C0 (xxxMNCanClose.c)
 *     _HasCaptionIcon @ 0x1C00A08F8 (_HasCaptionIcon.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01EA970 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01EA9F0 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

void __fastcall xxxCommonGetTitleBarInfo(struct tagWND *a1, struct tagTITLEBARINFO *a2)
{
  int v4; // edx
  __int64 v5; // r8
  int v6; // ecx
  unsigned __int16 v7; // ax
  unsigned int v8; // esi
  __int64 v9; // r14
  __int64 v10; // rax
  struct _KTHREAD *CurrentThread; // r12
  int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rcx
  int v18; // r12d
  __int64 v19; // r8
  int v20; // ebx
  __int64 v21; // rdx
  int v22; // r14d
  int v23; // r15d
  int v24; // r14d
  __int64 v25; // rbx
  int v26; // edx
  int v27; // eax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rax
  char v32; // cl
  __int64 v33; // rax
  char v34; // cl
  char *v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v44; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v46; // r8
  unsigned int v47; // r11d
  int DpiDependentMetric; // eax
  __int64 v49; // r8
  unsigned int v50; // [rsp+50h] [rbp+8h]

  v4 = *((_DWORD *)a2 + 5) | 0x100000;
  *((_DWORD *)a2 + 5) = v4;
  v5 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v5 + 30) & 0xC0) == 0xC0 )
  {
    if ( (*(_BYTE *)(v5 + 31) & 0x20) != 0 || (*(_BYTE *)(v5 + 16) & 8) != 0 )
    {
      v6 = *(_DWORD *)(v5 + 288) & 0xF;
      if ( v6 == 3 )
      {
        v8 = (*(_DWORD *)(v5 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v5 + 232) & 0x8000000) != 0 )
      {
        v7 = *(_WORD *)(v5 + 286);
        if ( !v7 )
          v7 = *(_WORD *)(v5 + 284);
        v8 = v7;
      }
      else if ( !v6
             && (v36 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v36 + 8) + 64LL) & 1) != 0 )
      {
        v8 = 96;
      }
      else
      {
        v8 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
      }
      v9 = 0LL;
      *(_OWORD *)((char *)a2 + 4) = *(_OWORD *)(v5 + 88);
      v10 = *((_QWORD *)a1 + 5);
      CurrentThread = KeGetCurrentThread();
      v12 = *(_DWORD *)(v10 + 24);
      v50 = *(_DWORD *)(v10 + 28);
      if ( !(unsigned __int8)KeIsAttachedProcess(v50)
        || (CurrentProcess = PsGetCurrentProcess(v14, v13, v15),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v44),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v9 = *ThreadWin32Thread;
      }
      v18 = 0;
      if ( *(_DWORD *)(v9 + 624) <= 0x9900u )
        v18 = *(_DWORD *)(v9 + 640);
      v19 = 1LL;
      if ( (v12 & 0x100) != 0 )
        v20 = 2;
      else
        v20 = (v12 & 0x20000) != 0;
      v21 = v50;
      v22 = v50 & 0xC00000;
      if ( (v50 & 0xC00000) != 0 || (v12 & 1) != 0 )
        ++v20;
      if ( (v18 & 0x10000000) != 0 || (v18 & 0x20000000) != 0 )
      {
        v23 = 0;
      }
      else
      {
        v17 = gpsi;
        if ( v8 == *(unsigned __int16 *)(gpsi + 6998LL) )
        {
          v23 = *(_DWORD *)(gpsi + 2400LL);
        }
        else if ( v8 == 96 )
        {
          v23 = *(_DWORD *)(gpsi + 2520LL);
        }
        else
        {
          if ( (unsigned int)GetDpiCacheSlot(v8) == -1 )
            DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(v47, v8);
          else
            DpiDependentMetric = GetDpiDependentMetric(v47, v8, v46);
          v21 = v50;
          v19 = 1LL;
          v23 = DpiDependentMetric;
        }
      }
      if ( (v21 & 0x40000) != 0
        || v23 > 0
        && (LOBYTE(v17) = v22 != 12582912, v22 == 12582912 || (v21 & 0x40000) != 0)
        && (v18 & 0x30000000) == 0 )
      {
        if ( (v18 & 0x10000000) != 0 )
        {
          v24 = 1;
        }
        else
        {
          v24 = (int)(v8 * *(_DWORD *)(Get96DpiServerInfo(v17, v21, 1LL) + 4) + 48) / 96;
          if ( (v18 & 0x20000000) != 0 )
          {
            if ( v8 == *(unsigned __int16 *)(gpsi + 6998LL) )
            {
              v37 = *(_DWORD *)(gpsi + 2400LL);
            }
            else if ( v8 == 96 )
            {
              v37 = *(_DWORD *)(gpsi + 2520LL);
            }
            else if ( (unsigned int)GetDpiCacheSlot(v8) == -1 )
            {
              v37 = ScaleSystemMetricForDPIWithoutCache(29LL, v8);
            }
            else
            {
              v37 = GetDpiDependentMetric(29LL, v8, v49);
            }
            v24 += v37;
          }
        }
        v20 += v23 + v24;
      }
      *((_DWORD *)a2 + 1) += v20;
      *((_DWORD *)a2 + 3) -= v20;
      *((_DWORD *)a2 + 2) += v20;
      *((_DWORD *)a2 + 4) -= v20;
      if ( *(char *)(*((_QWORD *)a1 + 5) + 24LL) < 0 )
      {
        v27 = *((_DWORD *)a2 + 2) + GetDpiDependentMetric(22LL, v8, v19);
      }
      else
      {
        v25 = 120LL * (int)GetDpiCacheSlot(v8);
        v26 = *(_DWORD *)(v25 + gpsi + 2292);
        if ( v26 == -1 )
        {
          EnsureDpiDepSysMetCacheForPlateau(v8);
          v26 = *(_DWORD *)(v25 + gpsi + 2292);
          if ( v26 == -1 )
            v26 = 0;
        }
        v27 = v26 + *((_DWORD *)a2 + 2);
      }
      *((_DWORD *)a2 + 4) = v27;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 && (unsigned int)HasCaptionIcon(a1) )
      {
        v28 = *((_DWORD *)a2 + 4);
        v29 = *((_DWORD *)a2 + 2);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
          *((_DWORD *)a2 + 3) += v29 - v28 + 1;
        else
          *((_DWORD *)a2 + 1) += v28 - v29 - 1;
      }
      v30 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v30 + 30) & 8) != 0 || (*(_BYTE *)(v30 + 21) & 2) == 0 )
      {
        if ( !(unsigned int)xxxMNCanClose(a1) )
          *((_DWORD *)a2 + 10) |= 1u;
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x10) != 0 )
          *((_DWORD *)a2 + 10) |= 8u;
      }
      else
      {
        *((_DWORD *)a2 + 10) |= 0x8000u;
      }
      v31 = *((_QWORD *)a1 + 5);
      v32 = *(_BYTE *)(v31 + 30);
      if ( (v32 & 8) != 0 || (*(_BYTE *)(v31 + 21) & 2) == 0 )
      {
        if ( (v32 & 1) == 0 )
        {
          v38 = *((_DWORD *)a2 + 8);
          if ( (v32 & 2) != 0 )
            v39 = v38 | 1;
          else
            v39 = v38 | 0x8000;
          *((_DWORD *)a2 + 8) = v39;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x20) != 0 )
          *((_DWORD *)a2 + 8) |= 8u;
      }
      else
      {
        *((_DWORD *)a2 + 8) |= 0x8000u;
      }
      v33 = *((_QWORD *)a1 + 5);
      v34 = *(_BYTE *)(v33 + 30);
      if ( (v34 & 8) != 0 || (*(_BYTE *)(v33 + 21) & 2) == 0 )
      {
        if ( (v34 & 2) == 0 )
        {
          v40 = *((_DWORD *)a2 + 7);
          if ( (v34 & 1) != 0 )
            v41 = v40 | 1;
          else
            v41 = v40 | 0x8000;
          *((_DWORD *)a2 + 7) = v41;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 0x40) != 0 )
          *((_DWORD *)a2 + 7) |= 8u;
      }
      else
      {
        *((_DWORD *)a2 + 7) |= 0x8000u;
      }
      v35 = (char *)*((_QWORD *)a1 + 5);
      if ( (v35[25] & 4) == 0 || (v35[30] & 3) != 0 )
      {
        *((_DWORD *)a2 + 9) |= 0x8000u;
      }
      else if ( v35[21] < 0 )
      {
        *((_DWORD *)a2 + 9) |= 8u;
      }
      *((_DWORD *)a2 + 6) = 0x8000;
    }
    else
    {
      *((_DWORD *)a2 + 5) = v4 | 0x10000;
      *(_OWORD *)((char *)a2 + 4) = 0LL;
    }
  }
  else
  {
    *((_DWORD *)a2 + 5) = v4 | 0x8000;
  }
}
