/*
 * XREFs of MiLoadDataIntoVsmEnclave @ 0x1408CE874
 * Callers:
 *     NtLoadEnclaveData @ 0x1408CFB00 (NtLoadEnclaveData.c)
 * Callees:
 *     MiCommitExistingVad @ 0x140218720 (MiCommitExistingVad.c)
 *     MiMakeProtectionMask @ 0x14021A3B0 (MiMakeProtectionMask.c)
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MmProbeAndLockPages @ 0x1402A68D0 (MmProbeAndLockPages.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MmSizeOfMdl @ 0x1402FB560 (MmSizeOfMdl.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiCountCommittedPages @ 0x140543E88 (MiCountCommittedPages.c)
 *     PsLoadVsmEnclaveData @ 0x14057F0BC (PsLoadVsmEnclaveData.c)
 *     MiDecommitRegion @ 0x14062F1B0 (MiDecommitRegion.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiLoadDataIntoVsmEnclave(
        __int64 a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        KPROCESSOR_MODE a4,
        __int64 a5,
        int a6,
        int *a7,
        unsigned __int64 Base,
        __int64 a9,
        int a10,
        _QWORD *a11)
{
  __int64 v12; // rsi
  __int64 result; // rax
  unsigned int v14; // eax
  unsigned int ProtectionMask; // eax
  __int64 v16; // r9
  int VsmEnclaveData; // edi
  SIZE_T v18; // rax
  _WORD *Pool; // rax
  _DWORD *v20; // r9
  int *v21; // r14
  __int64 v22; // r8
  _DWORD *v23; // r9
  __int16 v25; // [rsp+54h] [rbp-C4h] BYREF
  int v26; // [rsp+58h] [rbp-C0h] BYREF
  int *v27; // [rsp+60h] [rbp-B8h]
  _QWORD *v28; // [rsp+68h] [rbp-B0h]
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-A8h]
  _WORD *v30; // [rsp+78h] [rbp-A0h]
  ULONG_PTR v31; // [rsp+80h] [rbp-98h]
  __int64 v32; // [rsp+88h] [rbp-90h]
  int *v33; // [rsp+90h] [rbp-88h]
  __int64 v34; // [rsp+98h] [rbp-80h]
  _BYTE v35[48]; // [rsp+A0h] [rbp-78h] BYREF

  BugCheckParameter1 = a2;
  v31 = a3;
  v32 = a5;
  v27 = a7;
  v33 = a7;
  v28 = a11;
  v25 = 0;
  v26 = 0;
  memset(v35, 0, sizeof(v35));
  v12 = 0LL;
  *a11 = 0LL;
  if ( a9 != 4096 )
    return 3221225714LL;
  if ( a6 != 4 )
    return 3221225476LL;
  v14 = *a7;
  if ( !*a7 )
    return 3221225485LL;
  if ( v14 > 2 )
  {
    if ( v14 == 3 )
      goto LABEL_10;
    if ( v14 != 4 )
    {
      if ( v14 == 5 )
      {
LABEL_10:
        if ( Base )
          return 3221225713LL;
        goto LABEL_14;
      }
      return 3221225485LL;
    }
  }
  if ( !Base )
    return 3221225477LL;
LABEL_14:
  ProtectionMask = MiMakeProtectionMask(a10 & 0x5FFFFFFF);
  if ( (ProtectionMask & 7) == 0 || ProtectionMask > 7 || (ProtectionMask & 5) == 5 )
    return 3221225541LL;
  if ( (ProtectionMask & 2) != 0
    && ((__int64)KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink & 0x100) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) == 0 )
  {
    return 3221227012LL;
  }
  v34 = a5 + 4095;
  if ( MiCountCommittedPages(a5, a5 + 4095, a3, v16 + 1664) )
    return 3221225505LL;
  result = MiCommitExistingVad(a3, a5, 4096LL, a10, 0, 0LL, 0, 0LL, &v26, &v25);
  VsmEnclaveData = result;
  if ( (int)result >= 0 )
  {
    if ( Base )
    {
      v18 = MmSizeOfMdl((PVOID)Base, 0x1000uLL);
      Pool = MiAllocatePool(64, v18, 0x6C646D4Du);
      v12 = (__int64)Pool;
      v30 = Pool;
      if ( !Pool )
      {
        VsmEnclaveData = -1073741670;
        goto LABEL_36;
      }
      *(_QWORD *)Pool = 0LL;
      Pool[4] = 8 * (((unsigned __int16)((Base & 0xFFF) + 0x1FFF) >> 12) + 6);
      Pool[5] = 0;
      *((_QWORD *)Pool + 4) = Base & 0xFFFFFFFFFFFFF000uLL;
      *((_DWORD *)Pool + 11) = Base & 0xFFF;
      *((_DWORD *)Pool + 10) = 4096;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v35, v20);
      if ( a4 == 1 && (Base + 4096 > 0x7FFFFFFF0000LL || Base + 4096 < Base) )
        MEMORY[0x7FFFFFFF0000] = 0;
      MmProbeAndLockPages((PMDL)v12, a4, IoReadAccess);
      v21 = v27;
      KiUnstackDetachProcess((__int64)v35, 0LL, v22, v23);
      if ( VsmEnclaveData < 0 )
        goto LABEL_36;
    }
    else
    {
      v21 = v27;
    }
    VsmEnclaveData = PsLoadVsmEnclaveData(*(_QWORD *)(a3 + 72), a5, *v21, a10, v12);
    if ( VsmEnclaveData >= 0 )
    {
      *v28 = 4096LL;
LABEL_37:
      if ( v12 )
      {
        if ( (*(_BYTE *)(v12 + 10) & 2) != 0 )
          MmUnlockPages((PMDL)v12);
        ExFreePoolWithTag((PVOID)v12, 0);
      }
      return (unsigned int)VsmEnclaveData;
    }
LABEL_36:
    MiDecommitRegion(a3, a5, a5 + 4095);
    goto LABEL_37;
  }
  return result;
}
