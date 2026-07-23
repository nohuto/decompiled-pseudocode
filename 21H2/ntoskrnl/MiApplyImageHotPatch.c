/*
 * XREFs of MiApplyImageHotPatch @ 0x1408C96BC
 * Callers:
 *     MiPerformImageHotPatch @ 0x1408CD024 (MiPerformImageHotPatch.c)
 * Callees:
 *     IoAllocateMdl @ 0x140299F00 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     KeGenericCallDpc @ 0x14029E250 (KeGenericCallDpc.c)
 *     MmProbeAndLockPages @ 0x1402AE010 (MmProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     MmUnlockPagableImageSection @ 0x140325760 (MmUnlockPagableImageSection.c)
 *     MiLockPagableImageSection @ 0x140327240 (MiLockPagableImageSection.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     RtlApplyHotPatch @ 0x1409B3674 (RtlApplyHotPatch.c)
 */

__int64 __fastcall MiApplyImageHotPatch(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _MDL *v6; // rdi
  PVOID MappedSystemVa; // rsi
  int v8; // r15d
  int v9; // r14d
  void *v10; // r10
  struct _MDL *Mdl; // rax
  char Priority; // [rsp+28h] [rbp-E0h]
  int v14; // [rsp+30h] [rbp-D8h]
  int v15; // [rsp+90h] [rbp-78h]
  int v16; // [rsp+98h] [rbp-70h]
  __int64 v17; // [rsp+A0h] [rbp-68h]
  _QWORD v18[4]; // [rsp+B0h] [rbp-58h] BYREF
  PVOID v19; // [rsp+D0h] [rbp-38h]
  __int64 v20; // [rsp+D8h] [rbp-30h] BYREF

  v6 = 0LL;
  MappedSystemVa = 0LL;
  v8 = 0;
  v9 = 0;
  v18[0] = a1;
  v18[1] = a2;
  v18[2] = a4;
  v18[3] = a5;
  v20 = *(unsigned int *)(a3 + 32);
  v10 = *(void **)(a3 + 40);
  v19 = v10;
  if ( (*(_DWORD *)(a1 + 136) & 1) != 0 )
  {
    if ( v10 )
    {
      Mdl = IoAllocateMdl(v10, 6 * **(_DWORD **)(a1 + 40), 0, 0, 0LL);
      v6 = Mdl;
      if ( !Mdl
        || ((MmProbeAndLockPages(Mdl, 0, IoWriteAccess), v9 = 1, (v6->MdlFlags & 5) == 0)
          ? (MappedSystemVa = MmMapLockedPagesSpecifyCache(v6, 0, MmCached, 0LL, 0, 0x40000020u))
          : (MappedSystemVa = v6->MappedSystemVa),
            !MappedSystemVa) )
      {
        HIDWORD(v20) = -1073741670;
        goto LABEL_15;
      }
      v19 = MappedSystemVa;
    }
    if ( (MiFlags & 4) == 0 )
      MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
    v8 = 1;
    KeGenericCallDpc((__int64)MiApplyImageHotPatchDpc, (__int64)v18);
  }
  else
  {
    HIDWORD(v20) = RtlApplyHotPatch(
                     *(_QWORD *)(a1 + 72),
                     *(_QWORD *)(a1 + 8),
                     *(_QWORD *)(a1 + 80),
                     *(_DWORD *)(a1 + 36),
                     (__int64)&v20,
                     Priority,
                     v14,
                     *(_QWORD *)(a2 + 72),
                     *(_QWORD *)(a2 + 8),
                     0LL,
                     0,
                     0LL,
                     a4,
                     a5,
                     1,
                     *(PRTL_BITMAP *)(a1 + 40),
                     (__int64)v10,
                     0LL,
                     v15,
                     v16,
                     v17);
  }
  *(_DWORD *)(a3 + 32) = v20;
LABEL_15:
  if ( MappedSystemVa )
    MmUnmapLockedPages(MappedSystemVa, v6);
  if ( v6 )
  {
    if ( v9 )
      MmUnlockPages(v6);
    IoFreeMdl(v6);
  }
  if ( v8 && (MiFlags & 4) == 0 )
    MmUnlockPagableImageSection(ExPageLockHandle);
  return HIDWORD(v20);
}
