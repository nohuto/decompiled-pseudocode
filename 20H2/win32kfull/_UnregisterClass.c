/*
 * XREFs of _UnregisterClass @ 0x1C00D5C6C
 * Callers:
 *     NtUserUnregisterClass @ 0x1C00D5B40 (NtUserUnregisterClass.c)
 * Callees:
 *     DestroyClass @ 0x1C00D30CC (DestroyClass.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UnregisterClass(unsigned __int16 *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int16 *v5; // rdi
  int v6; // r12d
  __int64 v7; // r8
  __int64 v8; // rdx
  unsigned __int16 *v9; // rax
  int v10; // r10d
  __int64 v11; // r10
  struct _CALLPROCDATA ***v12; // rdx
  __int64 v13; // rcx
  struct _CALLPROCDATA **v15; // r8
  struct _CALLPROCDATA *v16; // r9
  struct _CALLPROCDATA **v17; // rcx
  struct _CALLPROCDATA *v18; // rax
  unsigned __int64 v19; // rsi
  unsigned int v20; // edx
  int v21; // [rsp+B8h] [rbp+20h]

  v5 = a1;
  v6 = 0;
  if ( gpresUser )
  {
    if ( (unsigned int)((__int64 (*)(void))UserIsUserCritSecInExclusive)() )
    {
      ++gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v21 = ++gdwAtomicCheckSerial;
        a1 = 0LL;
        if ( gdwAtomicCheckLogSize )
        {
          while ( *(_DWORD *)(((unsigned __int64)(unsigned int)a1 << 6) + gpAtomickCheckStacks) )
          {
            a1 = (unsigned __int16 *)(unsigned int)((_DWORD)a1 + 1);
            if ( (unsigned int)a1 >= gdwAtomicCheckLogSize )
              goto LABEL_4;
          }
          v19 = (unsigned __int64)(unsigned int)a1 << 6;
          *(_DWORD *)(v19 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
          *(_DWORD *)(v19 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
          *(_DWORD *)(v19 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                       * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          RtlWalkFrameChain((PVOID *)(v19 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
        }
      }
    }
  }
LABEL_4:
  if ( ((unsigned __int64)v5 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v7 = 2147483646LL;
    v8 = 256LL;
    v9 = gawchAtomScratch;
    v10 = 0;
    a1 = 0LL;
    while ( v8 )
    {
      if ( !v7 || !*v5 )
        goto LABEL_10;
      *v9++ = *v5++;
      --v8;
      --v7;
      a1 = (unsigned __int16 *)((char *)a1 + 1);
    }
    --v9;
    a1 = (unsigned __int16 *)((char *)a1 - 1);
    v10 = -2147483643;
LABEL_10:
    *v9 = 0;
    if ( v10 < 0 )
      LOWORD(v5) = 0;
    else
      LOWORD(v5) = UserFindAtom(gawchAtomScratch);
  }
  if ( gpresUser )
  {
    if ( (unsigned int)UserIsUserCritSecInExclusive(a1) )
    {
      --gdwInAtomicOperation;
      if ( gpAtomickCheckStacks )
      {
        v20 = 0;
        if ( gdwAtomicCheckLogSize )
        {
          while ( *(_DWORD *)(((unsigned __int64)v20 << 6) + gpAtomickCheckStacks) != v21 )
          {
            if ( ++v20 >= gdwAtomicCheckLogSize )
              goto LABEL_18;
          }
          *(_DWORD *)(((unsigned __int64)v20 << 6) + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_18:
  v11 = *(_QWORD *)(gptiCurrent + 424LL);
  v12 = (struct _CALLPROCDATA ***)(v11 + 344);
  if ( !(_WORD)v5 )
    goto LABEL_19;
  v15 = *v12;
  if ( *v12 )
  {
    while ( 1 )
    {
      v16 = v15[1];
      if ( *(_WORD *)v16 == (_WORD)v5
        && (!a2 || HIWORD(*((_DWORD *)v16 + 16)) == WORD1(a2))
        && (*((_BYTE *)v16 + 6) & 4) == 0 )
      {
        break;
      }
      v12 = (struct _CALLPROCDATA ***)v15;
      v15 = (struct _CALLPROCDATA **)*v15;
      if ( !v15 )
        goto LABEL_25;
    }
  }
  else
  {
LABEL_25:
    v12 = 0LL;
  }
  if ( !v12 )
  {
LABEL_19:
    v12 = (struct _CALLPROCDATA ***)(v11 + 352);
    if ( !(_WORD)v5 )
      goto LABEL_20;
    v17 = *v12;
    if ( *v12 )
    {
      while ( 1 )
      {
        v18 = v17[1];
        if ( *(_WORD *)v18 == (_WORD)v5 && (*((_BYTE *)v18 + 6) & 4) == 0 )
          break;
        v12 = (struct _CALLPROCDATA ***)v17;
        v17 = (struct _CALLPROCDATA **)*v17;
        if ( !v17 )
          goto LABEL_37;
      }
    }
    else
    {
LABEL_37:
      v12 = 0LL;
    }
    if ( !v12 )
    {
LABEL_20:
      v13 = 1411LL;
LABEL_21:
      UserSetLastError(v13);
      return 0LL;
    }
    v6 = 1;
  }
  if ( *((_DWORD *)*v12 + 18) )
  {
    v13 = 1412LL;
    goto LABEL_21;
  }
  *a3 = *((_QWORD *)(*v12)[1] + 2);
  a3[1] = *((_QWORD *)(*v12)[1] + 3);
  a3[2] = 0LL;
  if ( v6 )
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) &= ~0x2000u;
  DestroyClass(*(struct tagPROCESSINFO **)(gptiCurrent + 424LL), v12);
  return 1LL;
}
