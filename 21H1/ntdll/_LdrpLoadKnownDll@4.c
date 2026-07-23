/*
 * XREFs of _LdrpLoadKnownDll@4 @ 0x4B2CEF5D
 * Callers:
 *     _LdrpFindOrPrepareLoadingModule@28 @ 0x4B2D2238 (_LdrpFindOrPrepareLoadingModule@28.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlWow64EnableFsRedirectionEx@8 @ 0x4B2CC460 (_RtlWow64EnableFsRedirectionEx@8.c)
 *     _LdrpLogDllState@12 @ 0x4B2CDF06 (_LdrpLogDllState@12.c)
 *     _LdrpFindLoadedDllByNameLockHeld@20 @ 0x4B2CDF40 (_LdrpFindLoadedDllByNameLockHeld@20.c)
 *     _LdrpHashUnicodeString@4 @ 0x4B2CE090 (_LdrpHashUnicodeString@4.c)
 *     _LdrpFindKnownDll@16 @ 0x4B2D0FCB (_LdrpFindKnownDll@16.c)
 *     _LdrpMapDllWithSectionHandle@8 @ 0x4B2D1302 (_LdrpMapDllWithSectionHandle@8.c)
 *     _LdrpLoadContextReplaceModule@8 @ 0x4B2DE80E (_LdrpLoadContextReplaceModule@8.c)
 *     _LdrpCheckKnownDllFullPath@8 @ 0x4B2E3ACB (_LdrpCheckKnownDllFullPath@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 */

signed int __thiscall LdrpLoadKnownDll(int this)
{
  NTSTATUS v2; // eax
  int *v3; // ecx
  bool v4; // sf
  int v5; // eax
  signed int KnownDll; // edi
  char v7; // al
  _UNICODE_STRING *v8; // ebx
  int *v9; // edi
  _BYTE v11[8]; // [esp+Ch] [ebp-1Ch] BYREF
  PVOID OldFsRedirectionLevel; // [esp+14h] [ebp-14h] BYREF
  HANDLE Handle; // [esp+18h] [ebp-10h] BYREF
  int *v14; // [esp+1Ch] [ebp-Ch] BYREF
  PCUNICODE_STRING Source; // [esp+20h] [ebp-8h]
  bool v16; // [esp+27h] [ebp-1h]

  v2 = RtlWow64EnableFsRedirectionEx(0, &OldFsRedirectionLevel);
  v3 = *(int **)(this + 32);
  v4 = v2 < 0;
  v5 = *(_DWORD *)(this + 16);
  KnownDll = -1073741515;
  v16 = !v4;
  v14 = v3;
  if ( (v5 & 0x200) != 0 )
  {
    v7 = LdrpCheckKnownDllFullPath(this, v11);
    v3 = v14;
    Source = (PCUNICODE_STRING)v11;
  }
  else
  {
    Source = (PCUNICODE_STRING)this;
    v7 = (v5 & 0x28) == 32;
  }
  if ( v7 )
  {
    v8 = (_UNICODE_STRING *)(v3 + 9);
    KnownDll = LdrpFindKnownDll(Source, (PUNICODE_STRING)(v3 + 9), &Handle);
    if ( KnownDll >= 0 )
    {
      v9 = v14;
      LdrpLogDllState(v14[6], (int)v8, 5285);
      v14 = 0;
      v9[36] = LdrpHashUnicodeString(v9 + 11);
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      KnownDll = LdrpFindLoadedDllByNameLockHeld((unsigned __int16 *)v9 + 22, v8, *(_DWORD *)(this + 16), &v14, v9[36]);
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( v14 )
      {
        LdrpLoadContextReplaceModule(this);
      }
      else
      {
        LdrpLogDllState(0, (int)v8, 5290);
        KnownDll = LdrpMapDllWithSectionHandle(this, Handle);
      }
      NtClose(Handle);
    }
  }
  if ( v16 )
    RtlWow64EnableFsRedirectionEx(OldFsRedirectionLevel, &OldFsRedirectionLevel);
  return KnownDll;
}
