/*
 * XREFs of MiLockPatchIatForDV @ 0x1405A1D20
 * Callers:
 *     <none>
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiGetSessionVm @ 0x14027B520 (MiGetSessionVm.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     MiLockDriverPageRange @ 0x140581D58 (MiLockDriverPageRange.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x1405A29F8 (MiUnlockAndFreeDvPatchImage.c)
 *     MiInitializeDriverPatchState @ 0x140761F70 (MiInitializeDriverPatchState.c)
 *     MiPrepareDriverPatchState @ 0x1409682E4 (MiPrepareDriverPatchState.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

_BOOL8 __fastcall MiLockPatchIatForDV(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  char v4; // r12
  _QWORD *v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 Pool2; // rax
  int v9; // ebx
  __int64 v10; // r15
  unsigned __int64 SessionVm; // rax
  __int64 v12; // r9
  PMDL Mdl; // rax
  unsigned int v14; // r8d
  __int64 v15; // rdx
  struct _MDL *v16; // rcx
  char *v17; // rcx
  char *v18; // rcx
  _QWORD *v19; // rcx
  unsigned int v21; // [rsp+60h] [rbp+8h] BYREF

  v21 = 0;
  v2 = a2;
  v4 = 0;
  LOBYTE(a2) = 1;
  v5 = 0LL;
  v6 = RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), a2, 12, (int)&v21);
  if ( v6 && (v7 = v21, v21 >= 8) )
  {
    Pool2 = ExAllocatePool2(64LL, 144LL, 1349807944LL);
    v5 = (_QWORD *)Pool2;
    if ( !Pool2 )
    {
LABEL_4:
      v9 = -1073741670;
      goto LABEL_24;
    }
    v10 = Pool2 + 16;
    MiInitializeDriverPatchState(a1, Pool2 + 16);
    if ( (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 48)) == 1 )
      SessionVm = MiGetSessionVm();
    else
      SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(1);
    v9 = MiPrepareDriverPatchState(v10, SessionVm);
    if ( v9 < 0 )
      goto LABEL_24;
    if ( (MiFlags & 0x8000) != 0 )
    {
      v12 = v5[15];
      v4 = 1;
    }
    else
    {
      Mdl = IoAllocateMdl(*(PVOID *)(a1 + 48), *(_DWORD *)(a1 + 64), 0, 0, 0LL);
      v5[15] = Mdl;
      v12 = (__int64)Mdl;
      if ( !Mdl )
        goto LABEL_4;
      v14 = 0;
      if ( ((Mdl->ByteCount + ((__int64)Mdl->StartVa & 0xFFFLL) + 4095) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      {
        v15 = 0LL;
        do
        {
          ++v14;
          *((_QWORD *)&Mdl[1].Next + v15) = qword_140C53288;
          v12 = v5[15];
          v15 = v14;
        }
        while ( v14 < (*(unsigned int *)(v12 + 40) + (*(_DWORD *)(v12 + 32) & 0xFFFuLL) + 4095) >> 12 );
      }
    }
    v9 = MiLockDriverPageRange(
           v10,
           (unsigned int)(v6 - *(_DWORD *)(a1 + 48)) >> 12,
           ((unsigned int)(v6 - *(_DWORD *)(a1 + 48)) >> 12) + ((v7 + 4095 + (unsigned __int64)(v6 & 0xFFF)) >> 12) - 1,
           v4,
           v12);
    if ( v9 >= 0 )
    {
      v16 = (struct _MDL *)v5[15];
      if ( v16 )
      {
        v17 = (char *)MmMapLockedPagesSpecifyCache(v16, 0, MmCached, 0LL, 0, 0x10u);
        if ( !v17 )
          goto LABEL_4;
        v18 = &v17[v6 - *(_QWORD *)(a1 + 48)];
      }
      else
      {
        v18 = (char *)v6;
      }
      *((_DWORD *)v5 + 34) = v7;
      v5[16] = v18;
      v19 = *(_QWORD **)(v2 + 64);
      if ( *v19 != v2 + 56 )
        __fastfail(3u);
      *v5 = v2 + 56;
      v5[1] = v19;
      *v19 = v5;
      *(_QWORD *)(v2 + 64) = v5;
      v5 = 0LL;
    }
  }
  else
  {
    v9 = 0;
  }
LABEL_24:
  *(_DWORD *)(v2 + 72) = v9;
  if ( v5 )
    MiUnlockAndFreeDvPatchImage(v5);
  return v9 >= 0;
}
