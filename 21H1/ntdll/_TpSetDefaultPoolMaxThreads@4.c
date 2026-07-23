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

void __stdcall TpSetDefaultPoolMaxThreads(ULONG a1)
{
  int v1; // eax
  ULONG v2; // ecx
  _TP_POOL *v3; // ebx
  unsigned int v4; // eax
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // ecx
  unsigned int v8; // ecx
  ULONG v9; // edi
  ULONG v10; // [esp+8h] [ebp-8h]
  unsigned int v11; // [esp+Ch] [ebp-4h]

  v1 = TpPoolReferenceExistingGlobalPool();
  v2 = TppPoolpGlobalPoolMaxThreadsOverride;
  v3 = (_TP_POOL *)v1;
  if ( TppPoolpGlobalPoolMaxThreadsOverride )
  {
    v4 = TppPoolpGlobalPoolMaxThreadsOverride;
    v10 = TppPoolpGlobalPoolMaxThreadsOverride;
  }
  else
  {
    if ( !v1 || (v5 = *(_DWORD *)(v1 + 272), v2 = TppPoolpGlobalPoolMaxThreadsOverride, !v5) )
      v5 = MEMORY[0x7FFE03C0];
    v4 = 8 * v5;
    v10 = v4;
    if ( v4 < 0x300 )
    {
      v4 = 768;
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
    if ( !v3 || (v7 = *((_DWORD *)v3 + 68)) == 0 )
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
      return;
    goto LABEL_20;
  }
  if ( a1 <= v6 )
    return;
  v8 = v4;
  if ( a1 > v4 )
LABEL_20:
    v8 = a1;
  if ( !v8 )
    return;
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
  RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  if ( v9 )
  {
    if ( v3 )
    {
      TpSetPoolMaxThreads(v3, v9);
      TpSetPoolMaxThreadsSoftLimit((int)v3, 0);
      TppPoolpDereferenceGlobalPool((signed __int32 **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
    }
  }
}
