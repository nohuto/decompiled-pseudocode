/*
 * XREFs of PspCreateSecureThread @ 0x1409058EC
 * Callers:
 *     PspInsertThread @ 0x1406F3184 (PspInsertThread.c)
 * Callees:
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x1402A68D0 (MmProbeAndLockPages.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MmSizeOfMdl @ 0x1402FB560 (MmSizeOfMdl.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeSecureThread @ 0x14050D81C (KeSecureThread.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspCreateSecureThread(__int64 Base, __int64 a2, __int64 a3, _DWORD *a4)
{
  SIZE_T v6; // rax
  struct _MDL *PoolWithTag; // rbx
  int v8; // edi
  __int64 v9; // r8
  _DWORD *v10; // r9
  _OWORD v12[3]; // [rsp+30h] [rbp-48h] BYREF

  memset(v12, 0, sizeof(v12));
  KiStackAttachProcess(*(_KPROCESS **)(Base + 544), 0LL, (__int64)v12, a4);
  v6 = MmSizeOfMdl((PVOID)Base, 0x898uLL);
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x65537350u);
  PoolWithTag->Next = 0LL;
  PoolWithTag->Size = 8 * (((unsigned __int16)((Base & 0xFFF) + 6295) >> 12) + 6);
  PoolWithTag->MdlFlags = 0;
  PoolWithTag->StartVa = (PVOID)(Base & 0xFFFFFFFFFFFFF000uLL);
  PoolWithTag->ByteOffset = Base & 0xFFF;
  PoolWithTag->ByteCount = 2200;
  MmProbeAndLockPages(PoolWithTag, 0, IoModifyAccess);
  v8 = KeSecureThread(Base, (int)PoolWithTag, *(_QWORD *)(Base + 1152), *(_QWORD *)(Base + 1232), a2);
  if ( v8 < 0 )
  {
    MmUnlockPages(PoolWithTag);
    ExFreePoolWithTag(PoolWithTag, 0x65537350u);
  }
  KiUnstackDetachProcess((__int64)v12, 0LL, v9, v10);
  return (unsigned int)v8;
}
