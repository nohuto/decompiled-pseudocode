/*
 * XREFs of RtlpComputeDllPathWithOptions @ 0x18006D5D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlpComputePath @ 0x18006D800 (RtlpComputePath.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpComputeDllPathWithOptions(__int16 a1, __int64 a2)
{
  __int64 v4; // r9
  int v5; // eax
  __int64 v6; // r10
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  _DWORD v13[10]; // [rsp+20h] [rbp-38h] BYREF

  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  v5 = v13[0];
  if ( (a1 & 0x100) != 0 )
    v5 = 5;
  v13[0] = v5;
  LODWORD(v6) = (a1 & 0x100) != 0;
  if ( (a1 & 0x200) != 0 )
  {
    LODWORD(v6) = v6 + 1;
    v13[(a1 & 0x100) != 0] = 1;
  }
  if ( (a1 & 0x400) != 0 )
  {
    v7 = (unsigned int)v6;
    v6 = (unsigned int)(v6 + 1);
    v8 = LdrpDllDirectory.Length == 0;
    v13[v7] = 6;
    if ( !v8 )
    {
      v13[v6] = 0;
      LODWORD(v6) = v6 + 1;
    }
  }
  if ( (a1 & 0x4800) != 0 )
  {
    v9 = (unsigned int)v6;
    LODWORD(v6) = v6 + 1;
    v13[v9] = 7;
  }
  if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x20000000) == 0 || (LOBYTE(v4) = 1, (a1 & 0x800) == 0) )
    LOBYTE(v4) = 0;
  if ( (_WORD)LdrpAppPackagesPath )
  {
    v10 = (unsigned int)v6;
    LODWORD(v6) = v6 + 1;
    v13[v10] = 8;
  }
  v11 = RtlpComputePath(v13, (unsigned int)v6, a2, v4);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v11 )
    *(_BYTE *)(v11 + 116) = 1;
  return v11;
}
