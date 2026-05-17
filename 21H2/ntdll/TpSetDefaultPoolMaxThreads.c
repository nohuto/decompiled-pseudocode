/*
 * XREFs of TpSetDefaultPoolMaxThreads @ 0x180111DB0
 * Callers:
 *     RtlpTpInitializeData @ 0x18000BDF8 (RtlpTpInitializeData.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     TppPoolpDereferenceGlobalPool @ 0x180013E60 (TppPoolpDereferenceGlobalPool.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     TpSetPoolMaxThreads @ 0x180062C20 (TpSetPoolMaxThreads.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18007110C (TpPoolReferenceExistingGlobalPool.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x1800819E0 (TpSetPoolMaxThreadsSoftLimit.c)
 */

signed __int64 __fastcall TpSetDefaultPoolMaxThreads(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  int v9; // ecx
  __int64 v10; // rsi
  unsigned int v11; // ebp
  int v12; // ebp
  unsigned int v13; // r14d
  int v14; // r14d
  signed __int64 result; // rax
  int v16; // eax
  unsigned int v17; // edi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r9

  v4 = a1;
  v5 = TpPoolReferenceExistingGlobalPool(a1, a2, a3, a4);
  v9 = TppPoolpGlobalPoolMaxThreadsOverride;
  v10 = v5;
  if ( TppPoolpGlobalPoolMaxThreadsOverride )
  {
    v11 = TppPoolpGlobalPoolMaxThreadsOverride;
  }
  else
  {
    if ( !v5 || (v12 = *(_DWORD *)(v5 + 440), v9 = TppPoolpGlobalPoolMaxThreadsOverride, !v12) )
      v12 = MEMORY[0x7FFE03C0];
    v11 = 8 * v12;
    if ( v11 < 0x300 )
      v11 = 768;
  }
  if ( v9 )
  {
    v13 = 0;
  }
  else
  {
    if ( !v5 || (v14 = *(_DWORD *)(v5 + 440)) == 0 )
      v14 = MEMORY[0x7FFE03C0];
    v13 = 4 * v14;
    if ( v13 < 0x180 )
      v13 = 384;
  }
  result = (unsigned int)TppPoolpGlobalPoolMaxThreads;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( v4 <= TppPoolpGlobalPoolMaxThreads )
      return result;
    goto LABEL_20;
  }
  if ( v4 <= v13 )
    return result;
  result = v11;
  if ( v4 > v11 )
LABEL_20:
    result = v4;
  if ( !(_DWORD)result )
    return result;
  RtlAcquireSRWLockExclusive((unsigned __int64)&TppPoolpGlobalPoolLock, v6, v7, v8);
  v16 = TppPoolpGlobalPoolMaxThreads;
  v17 = 0;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( v4 > TppPoolpGlobalPoolMaxThreads )
      goto LABEL_27;
  }
  else if ( v4 > v13 )
  {
    v17 = v11;
    if ( v4 <= v11 )
    {
LABEL_28:
      if ( v17 )
        v16 = v17;
      TppPoolpGlobalPoolMaxThreads = v16;
      goto LABEL_31;
    }
LABEL_27:
    v17 = v4;
    goto LABEL_28;
  }
LABEL_31:
  result = RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  if ( v17 )
  {
    if ( v10 )
    {
      TpSetPoolMaxThreads(v10, (_PEB_LDR_DATA *)v17, v18, v19);
      TpSetPoolMaxThreadsSoftLimit(v10, 0LL, v20, v21);
      return TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
    }
  }
  return result;
}
