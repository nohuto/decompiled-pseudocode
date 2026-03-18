/*
 * XREFs of ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C0057880
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C0059B40 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C001C4DC (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00572B0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?bUseMetaPtoD@DC@@QEBAHXZ @ 0x1C012E210 (-bUseMetaPtoD@DC@@QEBAHXZ.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

MAPPER *__fastcall MAPPER::MAPPER(
        MAPPER *this,
        struct XDCOBJ *a2,
        unsigned int *a3,
        struct _POINTL *a4,
        unsigned int *a5,
        const struct tagENUMLOGFONTEXDVW *a6,
        const unsigned __int16 *Src,
        unsigned int a8,
        int a9,
        char a10)
{
  const struct tagENUMLOGFONTEXDVW *v10; // rax
  int v11; // ebp
  const unsigned __int16 *v13; // rdx
  unsigned int v15; // r14d
  const unsigned __int16 *v16; // rdi
  unsigned __int16 i; // ax
  size_t v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  char v22; // cl
  unsigned int *v23; // rax
  DC **v24; // r10
  int v25; // r9d
  __int64 v26; // rax
  char v27; // di
  __int64 v28; // rcx
  int v29; // eax
  __int16 *v30; // rdx
  __int16 v31; // ax
  int v32; // eax
  int v33; // r15d
  int v34; // r14d
  struct _KTHREAD *CurrentThread; // r12
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int y; // r12d
  __int64 x; // rcx
  int v47; // eax
  struct _KTHREAD *v48; // r14
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rbx
  __int64 v57; // rax
  struct _POINTL *v58; // rax
  int v59; // edx
  int v60; // eax
  int v61; // eax
  int v62; // ecx
  struct _POINTL *v63; // rax
  int v64; // edx
  int v65; // ecx
  int v66; // ebp
  int v67; // ecx
  bool v68; // sf
  int v69; // ecx
  MAPPER *result; // rax
  int v71; // edx
  int v72; // r9d
  unsigned __int16 v73; // cx
  unsigned __int16 *v74; // rdi
  unsigned __int16 j; // ax
  unsigned __int16 v76; // dx
  int v77; // ecx
  int v78; // eax
  __int64 v79; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v82; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v84; // rax
  int v85; // ebx
  __int64 v86; // rcx
  __int64 v87; // rax
  struct _POINTL *v88; // [rsp+68h] [rbp+20h] BYREF

  v88 = a4;
  v10 = a6;
  v11 = 0;
  *(_QWORD *)this = a2;
  v13 = Src;
  *((_DWORD *)this + 63) = 0;
  v15 = 0;
  *((_QWORD *)this + 32) = 0LL;
  v16 = v13;
  *((_QWORD *)this + 1) = v10;
  *((_QWORD *)this + 2) = v13;
  *((_DWORD *)this + 22) = 0;
  for ( i = *v13; i; ++v16 )
  {
    if ( i == 95 && (unsigned __int16)(v16[1] - 48) <= 9u )
      break;
    i = v16[1];
  }
  v18 = 2LL * (unsigned int)(v16 - v13);
  memmove((char *)this + 24, v13, v18);
  *(_WORD *)((char *)this + v18 + 24) = 0;
  if ( *v16 == 95 )
  {
    v73 = v16[1];
    v74 = (unsigned __int16 *)(v16 + 1);
    if ( (unsigned __int16)(v73 - 48) <= 9u )
    {
      do
      {
        for ( j = v73; j; v73 = j )
        {
          if ( v73 >= 0x30u )
          {
            j = v73;
            if ( v73 <= 0x39u )
              break;
          }
          j = v74[1];
          ++v74;
        }
        v73 = j;
        if ( j )
        {
          v76 = v74[1];
          ++v74;
          v77 = j - 48;
          if ( v76 )
          {
            do
            {
              if ( (unsigned __int16)(v76 - 48) > 9u )
                break;
              ++v74;
              v78 = v76;
              v76 = *v74;
              v77 = v78 + 2 * (5 * v77 - 24);
            }
            while ( *v74 );
          }
          v79 = v15++;
          *((_DWORD *)this + v79 + 25) = v77;
          v73 = *v74;
        }
      }
      while ( v73 );
    }
  }
  *((_DWORD *)this + 24) = v15;
  *((_DWORD *)this + 23) = 134248036;
  *((_QWORD *)this + 36) = 0LL;
  if ( v15 )
  {
    *((_DWORD *)this + 22) |= 1u;
  }
  else
  {
    v19 = *((_QWORD *)this + 1);
    v20 = *(unsigned int *)(v19 + 352);
    if ( (_DWORD)v20 )
      memmove((char *)this + 92, (const void *)(v19 + 348), 4 * v20 + 8);
    else
      *((_WORD *)this + 12) = 0;
  }
  *((_DWORD *)this + 70) = a9;
  v21 = *((_QWORD *)this + 1);
  *((_DWORD *)this + 45) = -2;
  v22 = *(_BYTE *)(v21 + 23);
  v23 = a5;
  *((_QWORD *)this + 29) = a5;
  *((_BYTE *)this + 284) = v22;
  *v23 = 0;
  *((_QWORD *)this + 28) = v88;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = -1;
  *((_QWORD *)this + 27) = a3;
  *a3 = 0;
  **((_DWORD **)this + 28) = 1;
  *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
  v24 = *(DC ***)this;
  v25 = *((_DWORD *)this + 63) | ~(*(_DWORD *)(*(_QWORD *)(**(_QWORD **)this + 48LL) + 40LL) << 11) & 0x40000;
  *((_DWORD *)this + 63) = v25;
  v26 = *((_QWORD *)*v24 + 122);
  if ( *(_DWORD *)(v26 + 208) == 1 && ((*(_DWORD *)(v26 + 340) & 2) != 0 || !(unsigned int)DC::bUseMetaPtoD(*v24)) )
  {
    v27 = a10;
    v25 |= 0x1000u;
    *((_DWORD *)this + 63) = v25;
  }
  else
  {
    v27 = -65;
  }
  v28 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v28 + 26) == 2 )
  {
    v71 = *((_DWORD *)*v24 + 130);
    if ( (v71 & 1) == 0 || (v71 & 2) != 0 )
    {
      v25 |= 0x8000u;
      *((_DWORD *)this + 63) = v25;
    }
  }
  v29 = *(_DWORD *)(v28 + 16);
  if ( v29 == 400 || v29 == 700 )
  {
    v25 |= 0x10000000u;
    *((_DWORD *)this + 63) = v25;
  }
  v30 = (__int16 *)*((_QWORD *)this + 2);
  v31 = *v30;
  if ( *v30 == 77
    && v30[1] == 83
    && v30[2] == 32
    && v30[3] == 83
    && v30[4] == 72
    && v30[5] == 69
    && v30[6] == 76
    && v30[7] == 76
    && v30[8] == 32
    && v30[9] == 68
    && v30[10] == 76
    && v30[11] == 71
    && !v30[12] )
  {
    *((_DWORD *)this + 63) |= 0x8000000u;
  }
  else if ( v31 == 83 && v30[1] == 89 && v30[2] == 83 && v30[3] == 84 && v30[4] == 69 && v30[5] == 77 && !v30[6] )
  {
    *((_DWORD *)this + 63) = v25 | 0x2000;
    if ( (*(_BYTE *)(v28 + 27) & 0xF) == 1 )
      *((_QWORD *)this + 2) = L"FIXEDSYS";
  }
  else
  {
    if ( v31 == 84
      && v30[1] == 77
      && v30[2] == 83
      && v30[3] == 32
      && v30[4] == 82
      && v30[5] == 77
      && v30[6] == 78
      && !v30[7] )
    {
      v72 = v25 | 0x800000;
    }
    else if ( v31 == 83 && v30[1] == 89 && v30[2] == 77 && v30[3] == 66 && v30[4] == 79 && v30[5] == 76 )
    {
      v72 = v25 | 0x4000000;
    }
    else
    {
      if ( v31 != 64 )
        goto LABEL_19;
      v72 = v25 | 0x2000000;
    }
    *((_DWORD *)this + 63) = v72;
  }
LABEL_19:
  *((_DWORD *)this + 41) = *(_DWORD *)v28;
  v32 = *(_DWORD *)(v28 + 4);
  if ( v32 < 0 )
    v32 = -v32;
  *((_DWORD *)this + 42) = v32;
  LOBYTE(v33) = 18;
  LOBYTE(v34) = 18;
  v88 = (struct _POINTL *)*((_QWORD *)*v24 + 6);
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v88)
    || (CurrentProcess = PsGetCurrentProcess(v37, v36, v38),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v82),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v43 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_QWORD *)(v43 + 360) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v43 + 340) )
        {
          LOBYTE(v34) = *(_DWORD *)(v43 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v41, v40, v42);
          if ( CurrentProcessWin32Process )
            v34 = *(_DWORD *)(CurrentProcessWin32Process + 280);
        }
      }
    }
  }
  y = 96;
  x = (unsigned int)v88[5].x;
  if ( (x & 1) != 0 && (v34 & 0xFu) - 1 > 1 )
    v47 = 96;
  else
    v47 = v88[272].x;
  *((_DWORD *)this + 61) = v47;
  v48 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(x)
    || (v84 = PsGetCurrentProcess(v50, v49, v51),
        v85 = PsGetProcessSessionIdEx(v84),
        v87 = PsGetCurrentThreadProcess(v86),
        v85 == (unsigned int)PsGetProcessSessionIdEx(v87)) )
  {
    v52 = (__int64 *)PsGetThreadWin32Thread(v48);
    if ( v52 )
    {
      v56 = *v52;
      if ( *v52 )
      {
        if ( *(_QWORD *)(v56 + 360) )
          CaptureAndValidateUserModeDpiAwarenessContext(*v52);
        if ( *(_DWORD *)(v56 + 340) )
        {
          LOBYTE(v33) = *(_DWORD *)(v56 + 340);
        }
        else
        {
          v57 = PsGetCurrentProcessWin32Process(v54, v53, v55);
          if ( v57 )
            v33 = *(_DWORD *)(v57 + 280);
        }
      }
    }
  }
  v58 = v88;
  if ( (v88[5].x & 1) == 0 || (v33 & 0xFu) - 1 <= 1 )
    y = v88[272].y;
  *((_DWORD *)this + 62) = y;
  v59 = *((_DWORD *)this + 63) | ((unsigned int)v58[273].x >> 5) & 0x100;
  *((_DWORD *)this + 63) = v59;
  if ( (v58[273].x & 8) != 0 )
    v60 = 1024;
  else
    v60 = 0;
  *((_DWORD *)this + 63) = v60 | v59;
  if ( PDEVOBJ::cFonts((PDEVOBJ *)&v88) )
    v61 = 512;
  else
    v61 = 0;
  v62 = v61 | *((_DWORD *)this + 63);
  v63 = v88;
  *((_DWORD *)this + 63) = v62;
  if ( v63[267].y )
    v64 = 0;
  else
    v64 = 0x10000;
  v65 = v64 | v62;
  *((_DWORD *)this + 63) = v65;
  if ( v63[267].y == 4 )
    v11 = 0x20000000;
  v66 = v65 | v11;
  v67 = *((_DWORD *)this + 41);
  *((_DWORD *)this + 63) = v66;
  v68 = v67 < 0;
  if ( !v67 )
  {
    v67 = v63[228].y;
    v66 |= 8u;
    *((_DWORD *)this + 63) = v66;
    v68 = v67 < 0;
    *((_DWORD *)this + 41) = v67;
  }
  if ( v68 )
  {
    v66 |= 2u;
    *((_DWORD *)this + 63) = v66;
    *((_DWORD *)this + 41) = -v67;
  }
  v69 = *(_DWORD *)(*((_QWORD *)this + 1) + 16LL);
  *((_DWORD *)this + 43) = v69;
  if ( !v69 )
  {
    v66 |= 0x200000u;
    *((_DWORD *)this + 43) = 400;
    *((_DWORD *)this + 63) = v66;
  }
  if ( !**((_WORD **)this + 2) )
  {
    MAPPER::bGetFaceName(this);
    v66 = *((_DWORD *)this + 63);
  }
  result = this;
  *((_DWORD *)this + 63) = v66 | v27 & 0x40 | 1;
  return result;
}
