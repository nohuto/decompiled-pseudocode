/*
 * XREFs of _TpSetDefaultPoolMaxThreads@4 @ 0x4B383C20
 * Callers:
 *     _RtlpTpInitializeData@12 @ 0x4B2B1FE2 (_RtlpTpInitializeData@12.c)
 * Callees:
 *     _TpSetPoolMaxThreads@8 @ 0x4B2B1D10 (_TpSetPoolMaxThreads@8.c)
 *     _TppPoolpDereferenceGlobalPool@8 @ 0x4B2B26D2 (_TppPoolpDereferenceGlobalPool@8.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _TpPoolReferenceExistingGlobalPool@0 @ 0x4B2E9657 (_TpPoolReferenceExistingGlobalPool@0.c)
 *     _TpSetPoolMaxThreadsSoftLimit@8 @ 0x4B2EBEA0 (_TpSetPoolMaxThreadsSoftLimit@8.c)
 */

unsigned __int32 __stdcall TpSetDefaultPoolMaxThreads(unsigned int a1)
{
  int v1; // eax
  int v2; // ecx
  int v3; // ebx
  unsigned __int32 result; // eax
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // ecx
  unsigned __int32 v8; // ecx
  int v9; // edi
  unsigned int v10; // [esp+8h] [ebp-8h]
  unsigned int v11; // [esp+Ch] [ebp-4h]

  v1 = TpPoolReferenceExistingGlobalPool();
  v2 = TppPoolpGlobalPoolMaxThreadsOverride;
  v3 = v1;
  if ( TppPoolpGlobalPoolMaxThreadsOverride )
  {
    result = TppPoolpGlobalPoolMaxThreadsOverride;
    v10 = TppPoolpGlobalPoolMaxThreadsOverride;
  }
  else
  {
    if ( !v1 || (v5 = *(_DWORD *)(v1 + 272), v2 = TppPoolpGlobalPoolMaxThreadsOverride, !v5) )
      v5 = MEMORY[0x7FFE03C0];
    result = 8 * v5;
    v10 = result;
    if ( result < 0x300 )
    {
      result = 768;
      v10 = 768;
    }
  }
  if ( v2 )
  {
    v6 = 0;
    v11 = 0;
  }
  else
  {
    if ( !v3 || (v7 = *(_DWORD *)(v3 + 272)) == 0 )
      v7 = MEMORY[0x7FFE03C0];
    v6 = 4 * v7;
    v11 = v6;
    if ( v6 < 0x180 )
    {
      v6 = 384;
      v11 = 384;
    }
  }
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( a1 <= TppPoolpGlobalPoolMaxThreads )
      return result;
    goto LABEL_20;
  }
  if ( a1 <= v6 )
    return result;
  v8 = result;
  if ( a1 > result )
LABEL_20:
    v8 = a1;
  if ( !v8 )
    return result;
  RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock);
  v9 = 0;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( a1 > TppPoolpGlobalPoolMaxThreads )
    {
LABEL_27:
      v9 = a1;
LABEL_28:
      if ( v9 )
        TppPoolpGlobalPoolMaxThreads = v9;
    }
  }
  else if ( a1 > v11 )
  {
    v9 = v10;
    if ( a1 <= v10 )
      goto LABEL_28;
    goto LABEL_27;
  }
  result = RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  if ( v9 )
  {
    if ( v3 )
    {
      TpSetPoolMaxThreads(v3, v9);
      TpSetPoolMaxThreadsSoftLimit(v3, 0);
      return (unsigned __int32)TppPoolpDereferenceGlobalPool(
                                 (signed __int32 **)&TppPoolpGlobalPool,
                                 (int)&TppPoolpGlobalPoolLock);
    }
  }
  return result;
}
