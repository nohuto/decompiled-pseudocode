/*
 * XREFs of LdrpLoadKnownDll @ 0x180014398
 * Callers:
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18006C260 (LdrpFindOrPrepareLoadingModule.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     LdrpMapDllWithSectionHandle @ 0x180014A90 (LdrpMapDllWithSectionHandle.c)
 *     LdrpFindKnownDll @ 0x1800150E0 (LdrpFindKnownDll.c)
 *     LdrpLogDllState @ 0x18001A6CC (LdrpLogDllState.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x1800212F0 (LdrpFindLoadedDllByNameLockHeld.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpHashUnicodeString @ 0x1800610A0 (LdrpHashUnicodeString.c)
 *     LdrpLoadContextReplaceModule @ 0x1800617EC (LdrpLoadContextReplaceModule.c)
 *     LdrpCheckKnownDllFullPath @ 0x18006F154 (LdrpCheckKnownDllFullPath.c)
 *     NtClose @ 0x18009D7E0 (NtClose.c)
 */

__int64 __fastcall LdrpLoadKnownDll(_BYTE *a1)
{
  int v1; // eax
  _BYTE *v2; // rbx
  __int64 v3; // rsi
  int KnownDll; // edi
  char v5; // al
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v1 = *((_DWORD *)a1 + 8);
  v2 = a1;
  v3 = *((_QWORD *)a1 + 7);
  KnownDll = -1073741515;
  if ( (v1 & 0x200) != 0 )
  {
    v5 = LdrpCheckKnownDllFullPath(a1, v7);
    a1 = v7;
  }
  else
  {
    v5 = (v1 & 0x28) == 32;
  }
  if ( v5 )
  {
    KnownDll = LdrpFindKnownDll((PCUNICODE_STRING)a1, (PUNICODE_STRING)(v3 + 88), (PUNICODE_STRING)(v3 + 72), &Handle);
    if ( KnownDll >= 0 )
    {
      LdrpLogDllState(*(_QWORD *)(v3 + 48), v3 + 72, 5285LL);
      *(_DWORD *)(v3 + 264) = LdrpHashUnicodeString(v3 + 88);
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      LdrpFindLoadedDllByNameLockHeld((PUNICODE_STRING)(v3 + 88), (PUNICODE_STRING)(v3 + 72), *(_DWORD *)(v3 + 264));
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      LdrpLogDllState(0LL, v3 + 72, 5290LL);
      KnownDll = LdrpMapDllWithSectionHandle(v2, Handle);
      NtClose(Handle);
    }
  }
  return (unsigned int)KnownDll;
}
