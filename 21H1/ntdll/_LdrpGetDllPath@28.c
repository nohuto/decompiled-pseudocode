/*
 * XREFs of _LdrpGetDllPath@28 @ 0x4B2B27D0
 * Callers:
 *     _LdrpComputeLazyDllPath@4 @ 0x4B2B2720 (_LdrpComputeLazyDllPath@4.c)
 *     _LdrGetDllPath@16 @ 0x4B2B27B0 (_LdrGetDllPath@16.c)
 * Callees:
 *     _LdrpLogRelativePathWithAlteredSearchError@4 @ 0x4B2A81DB (_LdrpLogRelativePathWithAlteredSearchError@4.c)
 *     _RtlpComputeDllPath@8 @ 0x4B2B2DF2 (_RtlpComputeDllPath@8.c)
 *     _RtlDetermineDosPathNameType_U@4 @ 0x4B2B3480 (_RtlDetermineDosPathNameType_U@4.c)
 *     _RtlpGetCachedPath@16 @ 0x4B2B34F6 (_RtlpGetCachedPath@16.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlCreateUnicodeString@8 @ 0x4B2D40C0 (_RtlCreateUnicodeString@8.c)
 *     _RtlBackoff@4 @ 0x4B2DBA90 (_RtlBackoff@4.c)
 *     _RtlpOptimizeSRWLockList@8 @ 0x4B2E3B53 (_RtlpOptimizeSRWLockList@8.c)
 *     _RtlpWakeSRWLock@12 @ 0x4B2E3BAB (_RtlpWakeSRWLock@12.c)
 *     _RtlpWaitCouldDeadlock@0 @ 0x4B2E7D50 (_RtlpWaitCouldDeadlock@0.c)
 *     _ZwTerminateProcess@8 @ 0x4B2F2C40 (_ZwTerminateProcess@8.c)
 *     _ZwWaitForAlertByThreadId@8 @ 0x4B2F4680 (_ZwWaitForAlertByThreadId@8.c)
 *     _LdrpLogEtwEvent@24 @ 0x4B330117 (_LdrpLogEtwEvent@24.c)
 */

int __fastcall LdrpGetDllPath(
        WCHAR *DosFileName,
        int a2,
        const WCHAR **a3,
        _DWORD *a4,
        _DWORD *a5,
        void *a6,
        _DWORD *a7)
{
  unsigned int v8; // eax
  char v9; // cl
  int v10; // esi
  RTL_PATH_TYPE v11; // eax
  bool v12; // al
  char v13; // dl
  int result; // eax
  int v15; // eax
  _DWORD *CachedPath; // esi
  WCHAR *v17; // edi
  signed __int8 v18; // cf
  signed __int32 Value; // edx
  $64EDA4DD838E80CF9A7DD220E06F3FD2 v20; // esi
  unsigned __int32 v21; // edx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned __int64 v24; // kr00_8
  unsigned int v25; // ecx
  unsigned __int64 v26; // rax
  int i; // edx
  signed __int32 v28; // ecx
  int v29; // edi
  signed __int32 v30; // eax
  _DWORD *v31; // eax
  _DWORD *v32; // edi
  int v33; // eax
  const WCHAR *v34; // esi
  _DWORD *SharedData; // eax
  int v36; // eax
  char *v37; // eax
  const WCHAR *v38; // eax
  BOOLEAN v39; // al
  bool v40; // [esp+Dh] [ebp-53h]
  char v41; // [esp+Eh] [ebp-52h]
  char v42; // [esp+Fh] [ebp-51h]
  BOOLEAN v43; // [esp+Fh] [ebp-51h]
  unsigned int v44; // [esp+10h] [ebp-50h]
  int v45; // [esp+10h] [ebp-50h]
  unsigned int v46; // [esp+10h] [ebp-50h]
  WCHAR *v47; // [esp+14h] [ebp-4Ch]
  int v48; // [esp+14h] [ebp-4Ch]
  bool v49; // [esp+18h] [ebp-48h]
  unsigned __int32 v50; // [esp+1Ch] [ebp-44h]
  int v51; // [esp+20h] [ebp-40h] BYREF
  unsigned int v52; // [esp+24h] [ebp-3Ch]
  signed __int32 v53; // [esp+28h] [ebp-38h]
  PCWSTR SourceString; // [esp+2Ch] [ebp-34h]
  _UNICODE_STRING UnicodeString; // [esp+30h] [ebp-30h] BYREF
  _UNICODE_STRING DestinationString; // [esp+38h] [ebp-28h] BYREF
  unsigned int v57; // [esp+40h] [ebp-20h] BYREF
  unsigned int *v58; // [esp+44h] [ebp-1Ch]
  int v59; // [esp+48h] [ebp-18h]
  void *UniqueThread; // [esp+4Ch] [ebp-14h]
  int v61; // [esp+50h] [ebp-10h]
  signed __int32 v62[3]; // [esp+54h] [ebp-Ch] BYREF

  SourceString = DosFileName;
  v8 = a2 & 0xFFFFDFFF;
  v40 = (a2 & 0x2000) != 0;
  v44 = a2 & 0xFFFFDFFF;
  if ( (a2 & 8) != 0 )
  {
    if ( v8 != 8 )
      return -1073741811;
    LOWORD(v8) = 0;
    v9 = 1;
    v44 = 0;
    v41 = 1;
  }
  else
  {
    v9 = 0;
    v41 = 0;
    if ( v8 )
      goto LABEL_10;
  }
  v40 = (a2 & 0x2000) != 0;
  if ( LdrpDefaultDllDirectories )
  {
    if ( (a2 & 0x2000) != 0 || (v40 = 0, (LdrpDefaultDllDirectories & 0x2000) != 0) )
      v40 = 1;
    LOWORD(v8) = LdrpDefaultDllDirectories & 0xDFFF;
    v44 = LdrpDefaultDllDirectories & 0xFFFFDFFF;
  }
LABEL_10:
  v47 = 0;
  v10 = v8 & 0x100;
  if ( (v8 & 0x100) == 0 && !v9 )
    goto LABEL_26;
  v11 = RtlDetermineDosPathNameType_U(DosFileName);
  v12 = v11 != RtlPathTypeUncAbsolute
     && v11 != RtlPathTypeDriveAbsolute
     && (v11 != RtlPathTypeLocalDevice
      || DosFileName[2] != 63
      || RtlDetermineDosPathNameType_U(DosFileName + 4) != RtlPathTypeDriveAbsolute);
  v47 = DosFileName;
  if ( !v12 )
  {
    v9 = v41;
LABEL_26:
    v13 = LdrpPolicyBits;
    goto LABEL_27;
  }
  if ( !v41
    || (LdrpLogRelativePathWithAlteredSearchError(DosFileName), v13 = LdrpPolicyBits, (LdrpPolicyBits & 0x40) == 0)
    || (v9 = 0, v10) )
  {
    if ( v44 )
      return -1073741811;
    goto LABEL_34;
  }
LABEL_27:
  v15 = v44;
  if ( v44 )
  {
    if ( (v44 & 0x1000) != 0 )
    {
      v15 = v44 | 0xA00;
      if ( (v13 & 4) != 0 )
        v15 = v44 | 0xE00;
    }
    if ( v9 )
      v15 |= 0x100u;
    CachedPath = (_DWORD *)RtlpGetCachedPath(v15, v47);
    v45 = (int)CachedPath;
    goto LABEL_90;
  }
LABEL_34:
  v17 = v47;
  if ( v47 )
  {
    v42 = 0;
    CachedPath = 0;
  }
  else
  {
    v42 = 1;
    v51 = 0;
    v18 = _interlockedbittestandset((volatile signed __int32 *)&RtlpCachedPathLock, 0);
    if ( v18 )
    {
      Value = RtlpCachedPathLock.Value;
      while ( 1 )
      {
        v50 = Value;
        if ( (Value & 1) == 0 )
          break;
        if ( (unsigned __int8)RtlpWaitCouldDeadlock() )
        {
          ZwTerminateProcess((HANDLE)0xFFFFFFFF, -1073741749);
          v21 = v50;
          v22 = 1;
        }
        v49 = 0;
        UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
        v62[0] = 3;
        v59 = 0;
        if ( (v21 & 2) != 0 )
        {
          v58 = 0;
          v61 = -1;
          v57 = v21 & 0xFFFFFFF0;
          v23 = (unsigned int)&v57 | v21 & 8 | 7;
          v49 = (v21 & 4) == 0;
        }
        else
        {
          v58 = &v57;
          v61 = v21 >> 4;
          v23 = (unsigned int)&v57 | (v22 < v21 >> 4 ? 11 : 3);
          if ( !(v21 >> 4) )
            v61 = -2;
        }
        v20 = ($64EDA4DD838E80CF9A7DD220E06F3FD2)_InterlockedCompareExchange(
                                                   (volatile signed __int32 *)&RtlpCachedPathLock,
                                                   v23,
                                                   v21);
        if ( v20 != v21 )
          goto LABEL_39;
        if ( v49 )
          RtlpOptimizeSRWLockList(v23);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          if ( MEMORY[0x7FFE0297] )
          {
            v24 = __rdtsc();
            v46 = v24 + SRWLockSpinCycleCount;
            v53 = (v24 + (unsigned int)SRWLockSpinCycleCount) >> 32;
            while ( 1 )
            {
              __asm { monitorx eax, ecx, edx }
              if ( (v62[0] & 2) == 0 )
                break;
              v25 = HIDWORD(v24);
              v26 = __rdtsc();
              v52 = v24;
              v24 = v26;
              if ( v26 <= __PAIR64__(v25, v52) || v26 >= __PAIR64__(v53, v46) )
                break;
              __asm { mwaitx  eax, ecx, ebx }
            }
          }
          else
          {
            for ( i = 0; (v62[0] & 2) != 0 && i != SRWLockSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6]; ++i )
              _mm_pause();
          }
        }
        v18 = _interlockedbittestandreset(v62, 1u);
        if ( v18 )
        {
          do
            ZwWaitForAlertByThreadId(&RtlpCachedPathLock, 0);
          while ( (v62[0] & 4) == 0 );
          Value = (signed __int32)v20;
        }
        else
        {
LABEL_40:
          Value = (signed __int32)v20;
        }
      }
      if ( _InterlockedCompareExchange((volatile signed __int32 *)&RtlpCachedPathLock, Value + 1, Value) == Value )
      {
        v17 = 0;
        goto LABEL_65;
      }
LABEL_39:
      RtlBackoff(&v51);
      v20 = RtlpCachedPathLock.0;
      goto LABEL_40;
    }
LABEL_65:
    CachedPath = (_DWORD *)RtlpDllSearchPath;
    v45 = RtlpDllSearchPath;
    if ( RtlpDllSearchPath
      && *(_DWORD *)(RtlpDllSearchPath + 60) == LdrpAppPackagesPathVersion
      && (*(_BYTE *)(RtlpDllSearchPath + 72)
       || *(_DWORD *)(RtlpDllSearchPath + 56) == NtCurrentPeb()->ProcessParameters->EnvironmentVersion) )
    {
      ++*(_DWORD *)(RtlpDllSearchPath + 52);
      v28 = _InterlockedCompareExchange((volatile signed __int32 *)&RtlpCachedPathLock, 0, 1);
      if ( v28 != 1 )
      {
        while ( 1 )
        {
          v29 = (v28 & 4) != 0 || (v28 & 2) == 0 ? -1 : 3;
          v53 = v29 + v28;
          v30 = _InterlockedCompareExchange((volatile signed __int32 *)&RtlpCachedPathLock, v29 + v28, v28);
          if ( v30 == v28 )
            break;
          v28 = v30;
        }
        if ( v29 == 3 )
          RtlpWakeSRWLock(v53);
        CachedPath = (_DWORD *)v45;
      }
      goto LABEL_90;
    }
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  }
  v31 = (_DWORD *)RtlpComputeDllPath(v17, 0);
  v48 = (int)v31;
  if ( !v31 )
    goto LABEL_117;
  v31[13] = 1;
  if ( v42 )
  {
    v32 = 0;
    RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
    if ( (_DWORD *)RtlpDllSearchPath == CachedPath )
    {
      RtlpDllSearchPath = v48;
      ++*(_DWORD *)(v48 + 52);
      if ( CachedPath )
        v32 = --CachedPath[13] == 0 ? CachedPath : 0;
    }
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
    if ( v32 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v32);
    v31 = (_DWORD *)v48;
  }
  CachedPath = v31;
  v45 = (int)v31;
LABEL_90:
  if ( CachedPath )
  {
    *a7 = CachedPath[16];
    if ( a6 )
      qmemcpy(a6, CachedPath, 0x34u);
    *a3 = (const WCHAR *)(v45 + 80);
    if ( a4 )
    {
      if ( v40 )
        v33 = *(_DWORD *)(v45 + 76);
      else
        v33 = 0;
      *a4 = v33;
    }
    if ( a5 )
      *a5 = *(_DWORD *)(v45 + 68);
    v34 = *a3;
    *(_DWORD *)&DestinationString.Length = 0;
    DestinationString.Buffer = 0;
    *(_DWORD *)&UnicodeString.Length = 0;
    UnicodeString.Buffer = 0;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v36 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v36 = 2147353476;
    if ( *(_BYTE *)v36 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v37 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
      if ( (*v37 & 0x20) != 0 )
      {
        v38 = SourceString;
        if ( !SourceString )
          v38 = (const WCHAR *)&dword_4B285DEC;
        v43 = RtlCreateUnicodeString(&DestinationString, v38);
        v39 = RtlCreateUnicodeString(&UnicodeString, v34);
        if ( v43 )
        {
          if ( v39 )
          {
            LdrpLogEtwEvent(0, 0, &UnicodeString, &DestinationString);
            RtlFreeAnsiString(&UnicodeString);
          }
          RtlFreeAnsiString(&DestinationString);
        }
      }
    }
    return 0;
  }
LABEL_117:
  *a3 = 0;
  if ( a4 )
    *a4 = 0;
  result = -1073741801;
  *a7 = 0;
  return result;
}
