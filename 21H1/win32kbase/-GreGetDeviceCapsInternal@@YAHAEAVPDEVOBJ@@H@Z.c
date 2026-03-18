/*
 * XREFs of ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C00CF0B4
 * Callers:
 *     GreGetDeviceCaps @ 0x1C00AA530 (GreGetDeviceCaps.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     IsGetColorManagementCapsSupported @ 0x1C00555DC (IsGetColorManagementCapsSupported.c)
 *     ?cFonts@PDEVOBJ@@QEAAKXZ @ 0x1C0055610 (-cFonts@PDEVOBJ@@QEAAKXZ.c)
 *     GetColorManagementCapsWrap @ 0x1C0055648 (GetColorManagementCapsWrap.c)
 *     EngMulDiv @ 0x1C006C3E0 (EngMulDiv.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C006DC9C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreReleaseSemaphoreInternal @ 0x1C007B8F0 (GreReleaseSemaphoreInternal.c)
 */

__int64 __fastcall GreGetDeviceCapsInternal(struct PDEVOBJ *a1, int a2)
{
  unsigned int *v2; // rdi
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // ecx
  int v8; // ebx
  int v10; // eax
  int v11; // r8d
  __int64 v12; // rcx
  char CurrentThreadDpiAwarenessContext; // al
  unsigned int v14; // ebp
  int v15; // r14d
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx

  v2 = (unsigned int *)(*(_QWORD *)a1 + 2136LL);
  v5 = 0;
  if ( a2 > 36 )
  {
    if ( a2 > 110 )
    {
      switch ( a2 )
      {
        case 'o':
          v5 = *(_DWORD *)(*(_QWORD *)a1 + 2236LL);
          goto LABEL_97;
        case 'p':
          return *(unsigned int *)(*(_QWORD *)a1 + 2224LL);
        case 'q':
          return *(unsigned int *)(*(_QWORD *)a1 + 2228LL);
        case 't':
          return *(unsigned int *)(*(_QWORD *)a1 + 2384LL);
        case 'u':
          return *(unsigned int *)(*(_QWORD *)a1 + 2156LL);
        case 'v':
          return *(unsigned int *)(*(_QWORD *)a1 + 2152LL);
        case 'w':
          return *(unsigned int *)(*(_QWORD *)a1 + 2388LL);
        case 'x':
          return *(unsigned int *)(*(_QWORD *)a1 + 2440LL);
      }
      if ( a2 == 121 && (int)IsGetColorManagementCapsSupported() >= 0 )
        GetColorManagementCapsWrap(*(_QWORD *)a1);
    }
    else
    {
      if ( a2 == 110 )
        return *(unsigned int *)(*(_QWORD *)a1 + 2232LL);
      if ( a2 > 90 )
      {
        switch ( a2 )
        {
          case '^':
            EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
            EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
            v12 = *(_QWORD *)(*(_QWORD *)a1 + 2576LL);
            if ( ((v12 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
            {
              v5 = (*(_DWORD *)(v12 + 160) & 8) << 11;
              if ( (*(_DWORD *)(v12 + 160) & 0x2000000) != 0 )
                v5 |= 0x8000u;
            }
            EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v11);
            GreReleaseSemaphoreInternal(ghsemDriverMgmt);
            return v5;
          case 'h':
            return *(unsigned int *)(*(_QWORD *)a1 + 2240LL);
          case 'j':
            return 20;
          case 'l':
            return (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 2188LL)
                                + *(_DWORD *)(*(_QWORD *)a1 + 2192LL)
                                + *(_DWORD *)(*(_QWORD *)a1 + 2196LL));
        }
        goto LABEL_88;
      }
      switch ( a2 )
      {
        case 'Z':
          v5 = *(_DWORD *)(*(_QWORD *)a1 + 2180LL);
          goto LABEL_101;
        case '&':
          return *(unsigned int *)(*(_QWORD *)a1 + 2172LL);
        case '(':
          return *(unsigned int *)(*(_QWORD *)a1 + 2200LL);
        case '*':
          return *(unsigned int *)(*(_QWORD *)a1 + 2204LL);
        case ',':
          return *(unsigned int *)(*(_QWORD *)a1 + 2208LL);
        case 'X':
          v5 = *(_DWORD *)(*(_QWORD *)a1 + 2176LL);
          goto LABEL_101;
      }
    }
LABEL_88:
    v5 = 0;
LABEL_97:
    if ( a2 != 8 && a2 != 10 && a2 != 88 && a2 != 90 )
      return v5;
    goto LABEL_101;
  }
  if ( a2 == 36 )
    return 1;
  if ( a2 > 16 )
  {
    if ( a2 != 18 )
    {
      switch ( a2 )
      {
        case 20:
          return 0;
        case 22:
          return (unsigned int)PDEVOBJ::cFonts(a1);
        case 24:
          return *(unsigned int *)(*(_QWORD *)a1 + 2168LL);
        case 26:
          return 0;
        case 28:
          return 511;
        case 30:
          return 254;
        case 32:
          return 255;
        case 34:
          v7 = *(_DWORD *)(*(_QWORD *)a1 + 2184LL);
          v8 = v2[12] | 0x4000;
          if ( !v2[1] )
            v8 = v7;
          return v8 | 0x1800u;
      }
      goto LABEL_88;
    }
    v10 = *(_DWORD *)(*(_QWORD *)a1 + 2168LL);
    if ( v10 != -1 )
      return (unsigned int)(5 * v10);
    return (unsigned int)-1;
  }
  if ( a2 == 16 )
    return (unsigned int)-1;
  if ( a2 <= 6 )
  {
    switch ( a2 )
    {
      case 6:
        v6 = *(_DWORD *)(*(_QWORD *)a1 + 2148LL);
        return (v6 + 500) / 0x3E8u;
      case -2147483648:
        return *(unsigned int *)(*(_QWORD *)a1 + 2144LL);
      case -2147483646:
        return *(unsigned int *)(*(_QWORD *)a1 + 2148LL);
      case 0:
        return *v2;
      case 2:
        return *(unsigned int *)(*(_QWORD *)a1 + 2140LL);
      case 4:
        v6 = *(_DWORD *)(*(_QWORD *)a1 + 2144LL);
        return (v6 + 500) / 0x3E8u;
    }
    goto LABEL_88;
  }
  switch ( a2 )
  {
    case 8:
      v5 = *(_DWORD *)(*(_QWORD *)a1 + 2152LL);
      break;
    case 10:
      v5 = *(_DWORD *)(*(_QWORD *)a1 + 2156LL);
      break;
    case 12:
      v5 = *(_DWORD *)(*(_QWORD *)a1 + 2160LL);
      if ( v5 == 15 )
        return 16;
      return v5;
    case 14:
      return *(unsigned int *)(*(_QWORD *)a1 + 2164LL);
    default:
      goto LABEL_88;
  }
LABEL_101:
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1) != 0 )
  {
    v14 = 96;
    v15 = CurrentThreadDpiAwarenessContext & 0xF;
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 0 )
    {
      v14 = v2[11];
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(*(_QWORD *)a1);
      if ( CurrentProcessWin32Process )
      {
        v17 = *(unsigned __int16 *)(CurrentProcessWin32Process + 284);
        if ( (_WORD)v17 )
          v14 = v17;
      }
    }
    if ( ((a2 - 88) & 0xFFFFFFFD) == 0 )
      return v14;
    if ( v15 != 2 )
    {
      v18 = *(_QWORD *)a1;
      v19 = *(_DWORD *)(*(_QWORD *)a1 + 2464LL);
      if ( !v19
        && ((*(_DWORD *)(v18 + 40) & 0x20000) == 0
         || (v20 = *(_QWORD *)(*(_QWORD *)(v18 + 1800) + 40LL)) == 0
         || (*(_DWORD *)(v20 + 40) & 1) == 0
         || (v19 = *(_DWORD *)(v20 + 2464)) == 0) )
      {
        v19 = 100;
      }
      return (unsigned int)EngMulDiv(v5, v14, (96 * v19 + 50) / 0x64u);
    }
  }
  return v5;
}
