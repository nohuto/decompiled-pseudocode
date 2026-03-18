/*
 * XREFs of NtUserMagSetContextInformation @ 0x1C01FEB10
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     MagSetLensContextInformation @ 0x1C01CCDE4 (MagSetLensContextInformation.c)
 */

__int64 __fastcall NtUserMagSetContextInformation(__int64 a1, int a2, ULONG64 a3, unsigned int a4)
{
  NTSTATUS v8; // ebx
  __int64 v9; // rdx
  ULONG64 v10; // rcx
  __int64 v11; // r8
  double *v12; // r14
  double *v13; // r15
  int v14; // eax
  __int64 v15; // rdi
  ULONG v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // r15d
  unsigned __int64 v23; // rax
  double *v24; // rax
  unsigned int i; // ecx
  double *v26; // r8
  double *v27; // rax
  unsigned int j; // edx
  ULONG64 v29; // r8
  __int64 ThreadWin32Thread; // rax
  double *Buf1; // [rsp+48h] [rbp-200h]
  __int64 v32; // [rsp+60h] [rbp-1E8h]
  double *v33; // [rsp+68h] [rbp-1E0h]
  double *v34; // [rsp+70h] [rbp-1D8h]
  double v35; // [rsp+C0h] [rbp-188h]
  __int128 v36; // [rsp+D8h] [rbp-170h]
  int v37; // [rsp+E8h] [rbp-160h]
  __int128 v38; // [rsp+100h] [rbp-148h]
  __int128 v39; // [rsp+110h] [rbp-138h]
  __int128 v40; // [rsp+120h] [rbp-128h]
  __int128 v41; // [rsp+130h] [rbp-118h]
  __int128 v42; // [rsp+140h] [rbp-108h]
  int v43; // [rsp+150h] [rbp-F8h]
  __int128 v44; // [rsp+178h] [rbp-D0h]
  _OWORD v45[7]; // [rsp+190h] [rbp-B8h] BYREF

  v8 = -1073741811;
  Buf1 = 0LL;
  memset(v45, 0, 0x68uLL);
  v33 = 0LL;
  v34 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a1 == -3 )
  {
    v32 = -1LL;
  }
  else if ( a1 )
  {
    v32 = ValidateHwnd(a1);
    if ( !v32 )
    {
LABEL_5:
      v12 = 0LL;
      v13 = 0LL;
LABEL_6:
      v14 = 0;
      v15 = 0LL;
      goto LABEL_7;
    }
  }
  else
  {
    v32 = 0LL;
  }
  if ( a2 >= 11 )
  {
    v8 = -1073741821;
    goto LABEL_5;
  }
  if ( a2 == 4 )
  {
    if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput )
    {
      UserSetLastError(5LL, v9, v11);
      v14 = 1;
      v12 = 0LL;
      v13 = 0LL;
      goto LABEL_131;
    }
    if ( (unsigned __int8)Enforced(grpdeskRitInput) && *(int *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) >= 0 )
    {
      UserSetLastError(5LL, v20, v21);
      EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 424LL), 0LL, 7LL);
      v8 = -1073741790;
      goto LABEL_5;
    }
  }
  if ( a2 <= 6 )
  {
    if ( a2 == 6 )
    {
      if ( !a3 )
      {
        v14 = 1;
        v12 = 0LL;
        v13 = 0LL;
        goto LABEL_131;
      }
      if ( a4 < 0x10 )
      {
        v8 = -1073741306;
        v14 = 1;
        v12 = 0LL;
        v13 = 0LL;
        goto LABEL_131;
      }
      v10 = a3 + 16;
      if ( a3 + 16 < a3 || v10 > MmUserProbeAddress )
      {
        v10 = MmUserProbeAddress;
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      v45[0] = *(_OWORD *)a3;
      if ( DWORD1(v45[0]) > 0x19 )
      {
        v8 = -1073741306;
        v14 = 1;
        v12 = 0LL;
        v13 = 0LL;
        goto LABEL_131;
      }
      v10 = LODWORD(v45[0]);
      if ( LODWORD(v45[0]) > 0x19 )
      {
        v8 = -1073741306;
        v14 = 1;
        v12 = 0LL;
        v13 = 0LL;
        goto LABEL_131;
      }
      v22 = DWORD1(v45[0]) + LODWORD(v45[0]);
      if ( (unsigned int)(DWORD1(v45[0]) + LODWORD(v45[0])) < LODWORD(v45[0]) )
      {
        v14 = 1;
        v12 = 0LL;
        v13 = 0LL;
        goto LABEL_131;
      }
      if ( v22 > 0x19 )
      {
        v8 = -1073741306;
        v14 = 1;
        v12 = 0LL;
        v13 = 0LL;
        goto LABEL_131;
      }
      v23 = 8LL * v22;
      if ( v23 > 0xFFFFFFFF )
      {
        v14 = 1;
        v12 = 0LL;
        v13 = 0LL;
        goto LABEL_131;
      }
      if ( (int)v23 + 8 < (unsigned int)v23 )
      {
        v14 = 1;
        v12 = 0LL;
        v13 = 0LL;
        goto LABEL_131;
      }
      v24 = (double *)Win32AllocPool((unsigned int)(v23 + 8), 1735226197LL);
      Buf1 = v24;
      if ( !v24 )
      {
        v8 = -1073741801;
        v14 = 1;
        v12 = 0LL;
        v13 = 0LL;
        goto LABEL_131;
      }
      v33 = v24;
      *v24 = *(double *)v45;
      for ( i = 0; i < v22; ++i )
      {
        v26 = (double *)(a3 + 8 + 8LL * i);
        if ( v26 + 1 < v26 || (unsigned __int64)(v26 + 1) > MmUserProbeAddress )
          v26 = (double *)MmUserProbeAddress;
        v24[i + 1] = *v26;
      }
    }
    else if ( a2 >= 0 )
    {
      if ( a2 <= 1 )
      {
        if ( a3 )
        {
          v14 = 1;
          v12 = 0LL;
          v13 = 0LL;
          goto LABEL_131;
        }
        Buf1 = 0LL;
      }
      else
      {
        switch ( a2 )
        {
          case 2:
            if ( !a3 )
            {
              v14 = 1;
              v12 = 0LL;
              v13 = 0LL;
              goto LABEL_131;
            }
            if ( a4 < 0x10 )
            {
              v8 = -1073741306;
              v14 = 1;
              v12 = 0LL;
              v13 = 0LL;
              goto LABEL_131;
            }
            if ( a3 + 16 < a3 || a3 + 16 > MmUserProbeAddress )
              a3 = MmUserProbeAddress;
            v45[0] = *(_OWORD *)a3;
            Buf1 = (double *)v45;
            break;
          case 3:
            if ( !a3 )
            {
              v14 = 1;
              v12 = 0LL;
              v13 = 0LL;
              goto LABEL_131;
            }
            if ( a4 < 0x20 )
            {
              v8 = -1073741306;
              v14 = 1;
              v12 = 0LL;
              v13 = 0LL;
              goto LABEL_131;
            }
            if ( a3 + 32 < a3 || a3 + 32 > MmUserProbeAddress )
              a3 = MmUserProbeAddress;
            v44 = *(_OWORD *)(a3 + 16);
            v45[0] = *(_OWORD *)a3;
            v45[1] = v44;
            Buf1 = (double *)v45;
            break;
          case 4:
            if ( !a3 )
            {
              v14 = 1;
              v12 = 0LL;
              v13 = 0LL;
              goto LABEL_131;
            }
            if ( a4 < 0x24 )
            {
              v8 = -1073741306;
              v14 = 1;
              v12 = 0LL;
              v13 = 0LL;
              goto LABEL_131;
            }
            if ( a3 + 36 < a3 || a3 + 36 > MmUserProbeAddress )
              a3 = MmUserProbeAddress;
            v36 = *(_OWORD *)(a3 + 16);
            v37 = *(_DWORD *)(a3 + 32);
            v45[0] = *(_OWORD *)a3;
            v45[1] = v36;
            LODWORD(v45[2]) = v37;
            Buf1 = (double *)v45;
            break;
          default:
            if ( !a3 )
            {
              v14 = 1;
              v12 = 0LL;
              v13 = 0LL;
              goto LABEL_131;
            }
            if ( a4 < 0x64 )
            {
              v8 = -1073741306;
              v14 = 1;
              v12 = 0LL;
              v13 = 0LL;
              goto LABEL_131;
            }
            if ( a3 + 100 < a3 || a3 + 100 > MmUserProbeAddress )
              a3 = MmUserProbeAddress;
            v38 = *(_OWORD *)(a3 + 16);
            v39 = *(_OWORD *)(a3 + 32);
            v40 = *(_OWORD *)(a3 + 48);
            v41 = *(_OWORD *)(a3 + 64);
            v42 = *(_OWORD *)(a3 + 80);
            v43 = *(_DWORD *)(a3 + 96);
            v45[0] = *(_OWORD *)a3;
            v45[1] = v38;
            v45[2] = v39;
            v45[3] = v40;
            v45[4] = v41;
            v45[5] = v42;
            LODWORD(v45[6]) = v43;
            Buf1 = (double *)v45;
            break;
        }
      }
    }
LABEL_129:
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v8 = MagSetLensContextInformation(*(_QWORD **)&gMagnContext, ThreadWin32Thread, v32, 0, a2, Buf1);
    v12 = v33;
    v13 = v34;
    v14 = 1;
    goto LABEL_131;
  }
  v10 = (unsigned int)(a2 - 7);
  if ( a2 != 7 )
  {
    v10 = (unsigned int)(a2 - 8);
    if ( a2 == 8 )
    {
      v14 = 1;
      v12 = 0LL;
      v13 = 0LL;
      goto LABEL_131;
    }
    v10 = (unsigned int)(a2 - 9);
    if ( a2 == 9 )
    {
      if ( !a3 )
      {
        v14 = 1;
        v12 = 0LL;
        v13 = 0LL;
        goto LABEL_131;
      }
      if ( a4 < 4 )
      {
        v8 = -1073741306;
        v14 = 1;
        v12 = 0LL;
        v13 = 0LL;
        goto LABEL_131;
      }
    }
    else
    {
      if ( !a3 )
      {
        v14 = 1;
        v12 = 0LL;
        v13 = 0LL;
        goto LABEL_131;
      }
      if ( a4 < 4 )
      {
        v8 = -1073741306;
        v14 = 1;
        v12 = 0LL;
        v13 = 0LL;
        goto LABEL_131;
      }
    }
    if ( a3 + 4 < a3 || a3 + 4 > MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    LODWORD(v45[0]) = *(_DWORD *)a3;
    Buf1 = (double *)v45;
    goto LABEL_129;
  }
  if ( !a3 )
  {
    v14 = 1;
    v12 = 0LL;
    v13 = 0LL;
    goto LABEL_131;
  }
  if ( a4 < 0x10 )
  {
    v8 = -1073741306;
    v14 = 1;
    v12 = 0LL;
    v13 = 0LL;
    goto LABEL_131;
  }
  v10 = a3 + 16;
  if ( a3 + 16 < a3 || v10 > MmUserProbeAddress )
  {
    v10 = MmUserProbeAddress;
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  v45[0] = *(_OWORD *)a3;
  if ( LODWORD(v45[0]) > 6 )
  {
    v8 = -1073741306;
    v14 = 1;
    v12 = 0LL;
    v13 = 0LL;
    goto LABEL_131;
  }
  v10 = 24LL * LODWORD(v45[0]);
  if ( v10 > 0xFFFFFFFF )
  {
    v14 = 1;
    v12 = 0LL;
    v13 = 0LL;
    goto LABEL_131;
  }
  if ( (int)v10 + 16 >= (unsigned int)v10 )
  {
    v27 = (double *)Win32AllocPool((unsigned int)(v10 + 16), 1735226197LL);
    v10 = (ULONG64)v27;
    Buf1 = v27;
    if ( !v27 )
    {
      v8 = -1073741801;
      v14 = 1;
      v12 = 0LL;
      v13 = 0LL;
      goto LABEL_131;
    }
    v34 = v27;
    *(_OWORD *)v27 = v45[0];
    for ( j = 0; j < *(_DWORD *)v27; ++j )
    {
      v29 = a3 + 16 + 24LL * j;
      if ( v29 + 24 < v29 || v29 + 24 > MmUserProbeAddress )
        v29 = MmUserProbeAddress;
      v35 = *(double *)(v29 + 16);
      *(_OWORD *)&v27[3 * j + 2] = *(_OWORD *)v29;
      v27[3 * j + 4] = v35;
    }
    goto LABEL_129;
  }
  v14 = 1;
  v12 = 0LL;
  v13 = 0LL;
LABEL_131:
  if ( v8 < 0 )
    goto LABEL_6;
  v15 = 1LL;
LABEL_7:
  if ( !v14 )
  {
    v16 = RtlNtStatusToDosError(v8);
    UserSetLastError(v16, v17, v18);
  }
  if ( v13 )
    Win32FreePool(v13);
  if ( v12 )
    Win32FreePool(v12);
  UserSessionSwitchLeaveCrit(v10);
  return v15;
}
