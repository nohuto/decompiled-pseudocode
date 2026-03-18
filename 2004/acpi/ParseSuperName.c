/*
 * XREFs of ParseSuperName @ 0x1C0008F90
 * Callers:
 *     ParseTerm @ 0x1C00070C0 (ParseTerm.c)
 *     ParseArg @ 0x1C0021E34 (ParseArg.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C0003690 (FreeNameSpaceObjects.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0008DA0 (GetNameSpaceObjectNoLock.c)
 *     GetBaseData @ 0x1C000B204 (GetBaseData.c)
 *     ParseNameTail @ 0x1C0021340 (ParseNameTail.c)
 *     RtlStringCchCopyA @ 0x1C0022CF0 (RtlStringCchCopyA.c)
 *     PushTerm @ 0x1C0028CB4 (PushTerm.c)
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
 *     ConPrintf @ 0x1C0065BD0 (ConPrintf.c)
 */

__int64 __fastcall ParseSuperName(_QWORD *a1, __int64 a2, char a3, int a4)
{
  unsigned int v4; // edi
  char *v7; // rdx
  __int64 v8; // rbx
  __int64 v10; // rcx
  __int64 v12; // r9
  _QWORD *v13; // rsi
  int v14; // eax
  int NameSpaceObjectNoLock; // r14d
  __int64 v16; // rcx
  char v17; // al
  int v18; // r12d
  char *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r10
  __int64 v22; // r9
  char v23; // al
  size_t v24; // rbx
  _BYTE *PoolWithTag; // rsi
  KIRQL v26; // bl
  __int64 j; // rcx
  char v28; // al
  unsigned __int64 v29; // rcx
  __int64 v30; // rbx
  char *v31; // rdx
  _BYTE *v32; // rax
  unsigned int i; // r12d
  _BYTE *v34; // rcx
  __int64 v35; // rbx
  int v36; // esi
  unsigned __int64 v37; // rcx
  unsigned __int64 v39; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+40h] [rbp-C0h]
  char Src; // [rsp+50h] [rbp-B0h] BYREF
  char v42; // [rsp+51h] [rbp-AFh] BYREF
  _BYTE P[128]; // [rsp+150h] [rbp+50h] BYREF

  v4 = 0;
  v7 = (char *)a1[15];
  v8 = 0LL;
  v39 = 0LL;
  v10 = (unsigned __int8)*v7;
  if ( !(_BYTE)v10 )
  {
    a1[15] = v7 + 1;
    return v4;
  }
  if ( (_BYTE)v10 == 91 && v7[1] == 49 )
  {
    a1[15] = v7 + 2;
    *(_WORD *)(a2 + 2) = 16;
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf("Debug");
    return v4;
  }
  v12 = (__int64)*(&OpcodeTable + v10);
  v13 = a1 + 15;
  if ( !v12 )
    goto LABEL_91;
  v14 = *(_DWORD *)(v12 + 28);
  if ( (v14 & 0x20) != 0 )
  {
    v40 = a1[10];
    if ( (_BYTE)v10 == 92 )
    {
      RtlStringCchCopyA(&Src, 0x100uLL, "\\");
      ++*v13;
    }
    else
    {
      if ( (_BYTE)v10 != 94 )
      {
        Src = 0;
        NameSpaceObjectNoLock = 0;
        v16 = -1LL;
        do
          ++v16;
        while ( *(&Src + v16) );
        v17 = *v7;
        if ( !*v7 )
        {
          *v13 = v7 + 1;
          goto LABEL_25;
        }
        if ( v17 != 47 )
        {
          if ( v17 == 46 )
          {
            v18 = 2;
            *v13 = v7 + 1;
          }
          else
          {
            v18 = 1;
          }
          while ( 1 )
          {
LABEL_15:
            if ( (unsigned __int64)(unsigned int)v16 + 4 >= 0x100 )
            {
              NameSpaceObjectNoLock = -1073741562;
              LogError(3221225734LL);
              AcpiDiagTraceAmlError(a1, 3221225734LL);
              PrintDebugMessage(130, (unsigned int)&Src, 0, 0, 0LL);
              goto LABEL_25;
            }
            v19 = &Src + (unsigned int)v16;
            v20 = (unsigned int)(256 - v16);
            if ( (unsigned __int64)(v20 - 1) <= 0x7FFFFFFE )
              break;
            if ( 256 != (_DWORD)v16 )
              goto LABEL_23;
LABEL_24:
            *v13 += 4LL;
            LODWORD(v16) = v16 + 4;
            if ( !--v18 )
              goto LABEL_25;
            v36 = v16 + 1;
            if ( (unsigned int)(v16 + 1) < 0x100 )
            {
              RtlStringCchCopyA(&Src + (unsigned int)v16, (unsigned int)(256 - v16), ".");
              LODWORD(v16) = v36;
            }
            v13 = a1 + 15;
          }
          v21 = 4 - v20;
          v22 = *v13 - (_QWORD)v19;
          while ( v21 + v20 )
          {
            v23 = v19[v22];
            if ( !v23 )
              break;
            *v19++ = v23;
            if ( !--v20 )
              goto LABEL_74;
          }
          if ( v20 )
            goto LABEL_23;
LABEL_74:
          --v19;
LABEL_23:
          *v19 = 0;
          goto LABEL_24;
        }
        *v13 = v7 + 1;
        v18 = (unsigned __int8)v7[1];
        *v13 = v7 + 2;
        if ( v18 )
          goto LABEL_15;
LABEL_25:
        if ( !NameSpaceObjectNoLock )
        {
          if ( (gDebugger & 0xD0) != 0 )
            ConPrintf("%s");
          v24 = -1LL;
          do
            ++v24;
          while ( *(&Src + v24) );
          if ( v24 + 1 >= 0x80 )
          {
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v24 + 1, 0x69706341u);
            if ( !PoolWithTag )
              return (unsigned int)-1073741670;
          }
          else
          {
            PoolWithTag = P;
          }
          memmove(PoolWithTag, &Src, v24);
          PoolWithTag[v24] = 0;
          v26 = ExAcquireSpinLockShared(&ACPINamespaceLock);
          NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(PoolWithTag, v40, (__int64 *)&v39, 0);
          ExReleaseSpinLockShared(&ACPINamespaceLock, v26);
          if ( P != PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
          if ( NameSpaceObjectNoLock == -1073741772 )
          {
            if ( a3 )
              return v4;
            LogError(3221225524LL);
            AcpiDiagTraceAmlError(a1, 3221225524LL);
            PrintDebugMessage(120, (unsigned int)&Src, 0, 0, 0LL);
          }
          v8 = v39;
        }
        goto LABEL_36;
      }
      RtlStringCchCopyA(&Src, 0x100uLL, "^");
      ++*v13;
      v31 = &v42;
      v32 = (_BYTE *)*v13;
      for ( i = 1; i < 0xFF; ++i )
      {
        v34 = v32;
        if ( *v32 != 94 )
          break;
        ++v32;
        *v31++ = 94;
        *v13 = v32;
        v34 = v32;
      }
      *(&Src + i) = 0;
      if ( *v34 == 94 )
      {
        NameSpaceObjectNoLock = -1073741562;
        LogError(3221225734LL);
        AcpiDiagTraceAmlError(a1, 3221225734LL);
        PrintDebugMessage(129, (unsigned int)&Src, 0, 0, 0LL);
LABEL_36:
        v4 = NameSpaceObjectNoLock;
        if ( !NameSpaceObjectNoLock && v8 )
        {
          *(_WORD *)(a2 + 2) = 128;
          for ( j = v8; *(_WORD *)(j + 66) == 128; j = *(_QWORD *)(j + 80) )
            ;
          if ( (gdwfAMLI & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(j + 112));
            v8 = v39;
          }
          v28 = gdwfAMLI;
          *(_QWORD *)(a2 + 16) = j;
          if ( (v28 & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 112), 0xFFFFFFFF) == 1 )
          {
            v37 = v39;
            *(_WORD *)(v39 + 64) |= 4u;
            if ( (*(_WORD *)(v37 + 64) & 0x40) == 0 )
              FreeNameSpaceObjects(v37);
          }
          v29 = *(_QWORD *)(a2 + 16);
          if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 112), 0xFFFFFFFF) == 1 )
          {
            *(_WORD *)(v29 + 64) |= 4u;
            if ( (*(_WORD *)(v29 + 64) & 0x40) == 0 )
              FreeNameSpaceObjects(v29);
          }
        }
        return v4;
      }
    }
    NameSpaceObjectNoLock = ParseNameTail(a1, a1 + 15, &Src);
    goto LABEL_25;
  }
  if ( (v14 & 2) == 0 )
  {
    if ( (v14 & 4) != 0 )
    {
      a1[15] = v7 + 1;
      v30 = (unsigned int)(v10 - 96);
      if ( (gDebugger & 0xD0) != 0 )
        ConPrintf("Local%d");
      *(_WORD *)(a2 + 2) = 129;
      *(_QWORD *)(a2 + 16) = a1[12] + 8 * (v30 + 4 * v30 + 9);
      return v4;
    }
    if ( (v14 & 0x80u) != 0 )
    {
      v4 = PushTerm((_DWORD)a1, (_DWORD)v7, a4, v12, a2);
      a1[15] = *v13 + 1LL;
      return v4;
    }
LABEL_91:
    LogError(3222536199LL);
    AcpiDiagTraceAmlError(a1, 3222536199LL);
    PrintDebugMessage(141, *(unsigned __int8 *)*v13, *v13, 0, 0LL);
    return (unsigned int)-1072431097;
  }
  a1[15] = v7 + 1;
  v35 = (unsigned int)(v10 - 104);
  if ( (unsigned int)v35 >= *(_DWORD *)(a1[12] + 60LL) )
  {
    LogError(3222536197LL);
    AcpiDiagTraceAmlError(a1, 3222536197LL);
    PrintDebugMessage(142, v35, 0, 0, 0LL);
    return (unsigned int)-1072431099;
  }
  else
  {
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf("Arg%d");
    *(_WORD *)(a2 + 2) = 129;
    *(_QWORD *)(a2 + 16) = GetBaseData(*(_QWORD *)(a1[12] + 64LL) + 40 * v35);
  }
  return v4;
}
