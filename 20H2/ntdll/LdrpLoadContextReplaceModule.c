/*
 * XREFs of LdrpLoadContextReplaceModule @ 0x1800602FC
 * Callers:
 *     LdrpLoadKnownDll @ 0x180014398 (LdrpLoadKnownDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x180014A90 (LdrpMapDllWithSectionHandle.c)
 *     LdrpMapDllSearchPath @ 0x18005F610 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x18005F9D0 (LdrpMapDllFullPath.c)
 *     LdrpMapDllRetry @ 0x180060588 (LdrpMapDllRetry.c)
 * Callees:
 *     LdrpQueueWork @ 0x18000F420 (LdrpQueueWork.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     LdrpDependencyExist @ 0x180060544 (LdrpDependencyExist.c)
 */

signed __int64 __fastcall LdrpLoadContextReplaceModule(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r8
  __int64 v9; // rdi
  int v10; // eax
  _QWORD **v11; // rcx
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rsi
  __int64 v14; // rbp
  _QWORD *v15; // r8
  _QWORD **v16; // rcx
  _QWORD *i; // rdx
  _QWORD **v18; // rax
  int v19; // eax
  _QWORD *v22; // rcx

  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 152LL);
  *(_QWORD *)(a1 + 56) = a2;
  v9 = *(_QWORD *)(a2 + 152);
  v10 = *(_DWORD *)(v9 + 24);
  if ( v10 != -1 )
    *(_DWORD *)(v9 + 24) = v10 + 1;
  *(_DWORD *)(v8 + 24) = 0;
  v11 = *(_QWORD ***)(v8 + 48);
  if ( v11 )
  {
    v12 = *v11;
    if ( *v11 == v11 )
      *(_QWORD *)(v8 + 48) = 0LL;
    else
      *v11 = (_QWORD *)*v12;
    LdrpDereferenceModule(a2, v6, v8, v7);
    v13 = v12[1] & 0xFFFFFFFFFFFFFFF8uLL;
    v14 = *(_QWORD *)(*(_QWORD *)v13 + 16LL);
    if ( (unsigned __int8)LdrpDependencyExist(v13, v9) )
    {
      v16 = *(_QWORD ***)(v13 + 40);
      for ( i = *v16; i != v15; i = (_QWORD *)*i )
        v16 = (_QWORD **)i;
      *v16 = (_QWORD *)*v15;
      if ( *(_QWORD **)(v13 + 40) == v15 )
      {
        v18 = 0LL;
        if ( v16 != v15 )
          v18 = v16;
        *(_QWORD *)(v13 + 40) = v18;
      }
      v19 = *(_DWORD *)(v9 + 24);
      if ( v19 != -1 )
        *(_DWORD *)(v9 + 24) = v19 - 1;
      RtlFreeHeap(LdrpHeap, 0, (__int64)v15);
      v15 = 0LL;
    }
    else
    {
      v15[1] = v9;
      v22 = *(_QWORD **)(v9 + 48);
      if ( v22 )
      {
        *v12 = *v22;
        *v22 = v12;
      }
      else
      {
        *v12 = v12;
      }
      *(_QWORD *)(v9 + 48) = v12;
    }
    if ( v14 && (*(int *)(v9 + 56) >= 2 || !v15) && (*(_DWORD *)(v14 + 100))-- == 1 )
    {
      *(_DWORD *)(v13 + 56) = 4;
      LdrpQueueWork(v14);
    }
  }
  return RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
