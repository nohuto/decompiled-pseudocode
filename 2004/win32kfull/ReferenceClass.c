/*
 * XREFs of ReferenceClass @ 0x1C0103CE0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 * Callees:
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAX@Z @ 0x1C0030BE4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 *     ??$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z @ 0x1C008E254 (--$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C008E2B4 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C008EF60 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1C0103F34 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     ?ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z @ 0x1C0103F5C (-ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C01E921C (-ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z.c)
 */

__int64 __fastcall ReferenceClass(__int64 a1, __int64 a2)
{
  PVOID *v2; // rbx
  size_t v5; // r15
  char *v7; // rsi
  __int64 v8; // rax
  void *v9; // rcx
  unsigned int v10; // r8d
  __int64 v11; // rdi
  char *v12; // rdx
  __int64 v13; // rcx
  const void *v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int128 v20; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(PVOID **)(a2 + 24);
  v5 = 0LL;
  if ( *(PVOID **)(a1 + 32) == v2 )
  {
    ++*(_DWORD *)(a1 + 72);
    return 1LL;
  }
  v7 = *(char **)(a1 + 64);
  if ( v7 )
  {
    do
    {
      if ( *((PVOID **)v7 + 4) == v2 )
        break;
      v7 = *(char **)v7;
    }
    while ( v7 );
    if ( v7 )
      goto LABEL_19;
  }
  v8 = ClassAlloc(
         v2,
         (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 6LL) & 8u) + *(_DWORD *)(*(_QWORD *)(a1 + 8) + 12LL) + 88);
  v7 = (char *)v8;
  if ( v8 )
  {
    v9 = *(void **)(v8 + 8);
    *(_OWORD *)(v8 + 30) = *(_OWORD *)(a1 + 30);
    *(_OWORD *)(v8 + 46) = *(_OWORD *)(a1 + 46);
    *(_OWORD *)(v8 + 62) = *(_OWORD *)(a1 + 62);
    *(_OWORD *)(v8 + 78) = *(_OWORD *)(a1 + 78);
    *(_QWORD *)(v8 + 94) = *(_QWORD *)(a1 + 94);
    *(_WORD *)(v8 + 102) = *(_WORD *)(a1 + 102);
    memmove(
      v9,
      *(const void **)(a1 + 8),
      *(int *)(*(_QWORD *)(a1 + 8) + 12LL) + ((*(_BYTE *)(*(_QWORD *)(a1 + 8) + 6LL) & 8) != 0 ? 96LL : 88LL));
    v11 = -1LL;
    do
      ++v11;
    while ( *(_BYTE *)(*(_QWORD *)(a1 + 104) + v11) );
    v12 = (char *)ClassAllocString((struct tagDESKTOP *const)v2, (int)v11 + 1, v10);
    if ( !v12 )
      goto LABEL_22;
    if ( v2 )
    {
      *(_QWORD *)(*((_QWORD *)v7 + 1) + 48LL) = &v12[*((_QWORD *)v7 + 2) - *((_QWORD *)v7 + 1)];
      *((_QWORD *)v7 + 13) = v12;
    }
    else
    {
      v16 = *((_QWORD *)v7 + 1);
      *((_QWORD *)v7 + 13) = v12;
      *(_QWORD *)(v16 + 48) = 0LL;
    }
    v13 = *(_QWORD *)(a1 + 96);
    if ( (v13 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( *(_WORD *)(v13 + 2 * v17) );
      v5 = 2 * v17 + 2;
      v18 = Win32AllocPoolWithQuota(v5, 2020897621LL);
      v19 = v18;
      if ( (v18 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        v19 = -1LL;
      *(_QWORD *)(*((_QWORD *)v7 + 1) + 40LL) = v19;
      *((_QWORD *)v7 + 12) = v18;
      if ( !v18 )
      {
LABEL_21:
        ClassFree((struct tagDESKTOP *)v2, *((char **)v7 + 13));
LABEL_22:
        ClassFree(v2, (PVOID *)v7);
        return 0LL;
      }
    }
    if ( !InitLookAsideRef<tagCLS>((__int64)v7) )
    {
      Win32FreePool(*((_QWORD *)v7 + 12));
      goto LABEL_21;
    }
    *((_QWORD *)v7 + 4) = 0LL;
    LockObjectAssignment(v7 + 32, v2);
    *(_QWORD *)v7 = *(_QWORD *)(a1 + 64);
    *((_QWORD *)v7 + 8) = 0LL;
    v14 = *(const void **)(a1 + 104);
    *(_QWORD *)(a1 + 64) = v7;
    memmove(*((void **)v7 + 13), v14, v11 + 1);
    v15 = *((_QWORD *)v7 + 12);
    if ( (v15 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      memmove((void *)v15, *(const void **)(a1 + 96), v5);
    *((_QWORD *)v7 + 11) = 0LL;
    *(_QWORD *)(*((_QWORD *)v7 + 1) + 56LL) = 0LL;
    *((_QWORD *)v7 + 14) = 0LL;
    *((_QWORD *)v7 + 10) = 0LL;
    *(_QWORD *)&v20 = v7 + 80;
    *((_QWORD *)&v20 + 1) = *(_QWORD *)(a1 + 80);
    HMAssignmentLock(&v20);
    v20 = *(_OWORD *)LockPointer(&v21, (__int64)(v7 + 112), *(__int64 **)(a1 + 112));
    HMAssignmentLock(&v20);
    *((_QWORD *)&v20 + 1) = *(_QWORD *)(a1 + 88);
    *(_QWORD *)&v20 = v7 + 88;
    HMAssignmentLock(&v20);
    *((_QWORD *)v7 + 6) = 0LL;
    *((_DWORD *)v7 + 18) = 0;
LABEL_19:
    ++*(_DWORD *)(a1 + 72);
    ++*((_DWORD *)v7 + 18);
    tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=(a2 + 136, v7);
    return 1LL;
  }
  return 0LL;
}
