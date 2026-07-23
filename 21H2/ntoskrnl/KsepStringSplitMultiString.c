/*
 * XREFs of KsepStringSplitMultiString @ 0x1408C0F84
 * Callers:
 *     KsepEngineGetShimsFromRegistry @ 0x14075B90C (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140371274 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x14037129C (KsepPoolAllocatePaged.c)
 *     RtlAssert @ 0x140588A40 (RtlAssert.c)
 *     KsepStringDuplicate @ 0x14075B434 (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x14075B9C0 (KsepStringFree.c)
 */

__int64 __fastcall KsepStringSplitMultiString(__int64 a1, unsigned __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rsi
  PVOID Paged; // rdi
  unsigned int v10; // esi
  unsigned int v11; // edx
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // rax
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  unsigned int v17; // ebp
  unsigned int v18; // r15d
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbp

  v5 = a2 >> 1;
  v6 = 0LL;
  Paged = 0LL;
  if ( !a1 || (a2 & 1) != 0 || !a3 || !a4 )
  {
    v15 = -1073741811;
    goto LABEL_30;
  }
  if ( v5 < 3 || *(_WORD *)(a1 + 2 * v5 - 2) || *(_WORD *)(a1 + 2 * v5 - 4) )
    return (unsigned int)-1073741811;
  v10 = 0;
  v11 = 0;
  v12 = 0LL;
  do
  {
    v13 = v10 + 1;
    if ( *(_WORD *)(a1 + 2 * v12) )
      v13 = v10;
    v12 = ++v11;
    v10 = v13;
  }
  while ( v11 < v5 );
  if ( v13 < 2 )
  {
    v14 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v14 + 1] = -1073740768;
    KsepHistoryErrors[2 * v14] = 197557;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("NullCount >= 2", "minkernel\\ntos\\kshim\\ksemisc.c", 0x3B5u, 0LL);
  }
  v6 = v10 - 1;
  Paged = KsepPoolAllocatePaged(16LL * (unsigned int)v6);
  if ( !Paged )
    return (unsigned int)-1073741801;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = v5 - 1;
  if ( !v19 )
  {
LABEL_23:
    if ( v17 != (_DWORD)v6 )
    {
      v21 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      KsepHistoryErrors[2 * v21 + 1] = -1073740768;
      KsepHistoryErrors[2 * v21] = 197597;
      if ( (KsepDebugFlag & 4) != 0 )
        RtlAssert("Count == StringsVectorSize", "minkernel\\ntos\\kshim\\ksemisc.c", 0x3DDu, 0LL);
    }
    *a3 = Paged;
    v15 = 0;
    *a4 = v6;
    return v15;
  }
  v20 = 0LL;
  while ( *(_WORD *)(a1 + 2 * v20) )
  {
LABEL_22:
    v20 = ++v18;
    if ( v18 >= v19 )
      goto LABEL_23;
  }
  if ( (int)KsepStringDuplicate((__int64)Paged + 16 * v17, (_WORD *)(a1 + 2LL * v16)) >= 0 )
  {
    v16 = v18 + 1;
    ++v17;
    goto LABEL_22;
  }
  v15 = -1073741801;
LABEL_30:
  if ( Paged )
  {
    if ( (_DWORD)v6 )
    {
      v22 = (__int64)Paged;
      do
      {
        KsepStringFree(v22);
        v22 += 16LL;
        --v6;
      }
      while ( v6 );
    }
    KsepPoolFreePaged(Paged);
  }
  return v15;
}
