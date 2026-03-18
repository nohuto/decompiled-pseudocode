/*
 * XREFs of ?xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z @ 0x1C0150A8C
 * Callers:
 *     NtUserSetWindowWord @ 0x1C01509B0 (NtUserSetWindowWord.c)
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     FCallerOk @ 0x1C00F04EC (FCallerOk.c)
 */

__int64 __fastcall xxxSetWindowWord(struct tagWND *a1, int a2, unsigned __int16 a3)
{
  int v3; // r12d
  unsigned __int64 v4; // rsi
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  bool v14; // sf
  unsigned __int64 v15; // r9
  _WORD *v16; // rdx
  unsigned __int64 v17; // rdx
  int v18; // esi
  __int64 v19; // rdx
  unsigned __int16 *v20; // rax
  unsigned __int16 v21; // si
  __int64 result; // rax
  __int64 v23; // rcx
  __int64 v24; // r15
  __int64 v25; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rdx
  int *v36; // rdx
  int *v37; // rax
  int v38; // ebx
  unsigned int v39; // ecx
  _DWORD *v40; // r10
  __int64 v41; // rcx
  char v42; // [rsp+88h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v6 = 0;
  v42 = 0;
  if ( !(unsigned int)FCallerOk((__int64)a1) )
  {
LABEL_68:
    v23 = 5LL;
    goto LABEL_69;
  }
  v9 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v9 + 18) & 1) != 0 )
  {
    if ( v4 >= 8 && (v4 & 0x80000000) != 0LL || v4 > 0x16 && (int)v4 < 30 )
    {
      v23 = 1413LL;
LABEL_69:
      UserSetLastError(v23, v7, v8);
      return 0LL;
    }
    if ( (*(_WORD *)(v9 + 42) & 0x2FFF) == 0x2A4 )
    {
      if ( v4 + 2 <= *(unsigned int *)(v9 + 252) )
        goto LABEL_9;
      v24 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      if ( v24 == PsGetCurrentProcessWin32Process(v4 + 2, v7, v8)
        || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x800) != 0 )
      {
        goto LABEL_9;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25, v7, v8);
      if ( (unsigned __int8)CheckAccess(CurrentProcessWin32Process + 880, v24 + 880)
        || *(int *)(PsGetCurrentProcessWin32Process(v28, v27, v29) + 12) < 0 )
      {
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL));
        v6 = 1;
        goto LABEL_9;
      }
      goto LABEL_68;
    }
  }
  if ( (_DWORD)v4 == -21 )
  {
    result = *(unsigned __int16 *)(v9 + 216);
    *(_QWORD *)(v9 + 216) = v3 | ((unsigned __int16)HIWORD(*(_DWORD *)(v9 + 216)) << 16);
    return result;
  }
  if ( (_DWORD)v4 == -16 )
  {
    result = *(unsigned __int16 *)(v9 + 28);
    *(_DWORD *)(v9 + 28) = v3 | *(_DWORD *)(v9 + 28) & 0xFFFF0000;
    return result;
  }
  if ( (v4 & 0x80000000) == 0LL && v4 + 2 > *(unsigned int *)(v9 + 252) )
  {
    v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
    if ( v10 != PsGetCurrentProcessWin32Process(v4 + 2, v7, v8)
      && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x800) == 0 )
    {
      v30 = PsGetCurrentProcessWin32Process(v11, v7, v12);
      if ( (unsigned __int8)CheckAccess(v30 + 880, v10 + 880)
        || *(int *)(PsGetCurrentProcessWin32Process(v32, v31, v33) + 12) < 0 )
      {
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL));
        v6 = 1;
        v42 = 1;
        goto LABEL_8;
      }
      goto LABEL_68;
    }
  }
LABEL_8:
  v13 = *((_QWORD *)a1 + 5);
  v8 = *(_WORD *)(v13 + 42) & 0x2FFF;
  if ( (*(_WORD *)(v13 + 42) & 0x2FFF) == 0 )
  {
LABEL_9:
    v14 = (v4 & 0x80000000) != 0LL;
    goto LABEL_10;
  }
  if ( (v4 & 0x80000000) != 0LL )
  {
LABEL_43:
    v34 = 1413LL;
    goto LABEL_44;
  }
  v7 = (*(_WORD *)(v13 + 42) & 0x2FFFu) - 666;
  if ( (int)v4 >= *(unsigned __int16 *)(gpsi + 2 * v7 + 328) - 320 )
    goto LABEL_9;
  v8 = (unsigned int)(v8 - 673);
  if ( !(_DWORD)v8 )
  {
    if ( !(_DWORD)v4 )
    {
      v35 = **(_QWORD **)(v13 + 296);
      if ( !v35 || v35 == -1 )
      {
        if ( v6 )
          KeDetachProcess();
        return 0LL;
      }
      else
      {
        v36 = (int *)(v35 + 8);
        v37 = v36;
        if ( (unsigned __int64)v36 >= MmUserProbeAddress )
          v37 = (int *)MmUserProbeAddress;
        v38 = *v37;
        *v36 = v3;
        if ( v42 )
          KeDetachProcess();
        return (unsigned __int16)v38;
      }
    }
    goto LABEL_43;
  }
  if ( (_DWORD)v8 != 6 )
    goto LABEL_43;
  v14 = (v4 & 0x80000000) != 0LL;
  if ( (_DWORD)v4 )
    goto LABEL_43;
LABEL_10:
  if ( v14 )
    goto LABEL_43;
  v8 = *((_QWORD *)a1 + 5);
  v15 = *(unsigned int *)(v8 + 252);
  if ( (unsigned __int64)(unsigned int)v4 + 2 > (unsigned int)(v15 + *(_DWORD *)(v8 + 200)) )
    goto LABEL_43;
  v16 = *(_WORD **)(*((_QWORD *)a1 + 17) + 8LL);
  if ( (v16[3] & 0x100) != 0 )
  {
    v39 = 0;
    v40 = &gDefaultServerClasses;
    while ( *v16 != *(_WORD *)(gpsi + 2LL * ((*v40 >> 3) & 0x1F) + 868) )
    {
      ++v39;
      v40 += 12;
      if ( v39 >= 8 )
        goto LABEL_13;
    }
    if ( (int)v4 < *((_DWORD *)&gDefaultServerClasses + 12 * v39 + 6) )
    {
      v7 = *v40 & 0xF8;
      if ( (*(_BYTE *)v40 & 0xF8) != 0xB0 || v4 + 2 > 0xFFFFFFFFFFFFFEE0uLL )
      {
        v34 = 5LL;
LABEL_44:
        UserSetLastError(v34, v7, v8);
        if ( v6 )
          KeDetachProcess();
        return 0LL;
      }
    }
  }
LABEL_13:
  v17 = v4;
  if ( v4 + 2 <= v15 )
  {
    v41 = *((_QWORD *)a1 + 35);
    v21 = *(_WORD *)(v4 + v41);
    *(_WORD *)(v17 + v41) = v3;
  }
  else
  {
    v18 = v4 - v15;
    v19 = *(_QWORD *)(v8 + 296);
    if ( (*(_DWORD *)(v8 + 232) & 0x800) != 0 )
      v20 = (unsigned __int16 *)(v19 + v18 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL));
    else
      v20 = (unsigned __int16 *)(v18 + v19);
    v21 = *v20;
    *v20 = v3;
  }
  if ( v6 )
    KeDetachProcess();
  return v21;
}
