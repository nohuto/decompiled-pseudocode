/*
 * XREFs of PspCreateSecureThread @ 0x14090C7EC
 * Callers:
 *     PspInsertThread @ 0x1406867E0 (PspInsertThread.c)
 * Callees:
 *     MmSizeOfMdl @ 0x14025F2E0 (MmSizeOfMdl.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x14026AA30 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeSecureThread @ 0x14051179C (KeSecureThread.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspCreateSecureThread(__int64 Base, __int64 a2)
{
  SIZE_T v4; // rax
  struct _MDL *PoolWithTag; // rbx
  int v6; // edi
  _OWORD v8[3]; // [rsp+30h] [rbp-48h] BYREF

  memset(v8, 0, sizeof(v8));
  KiStackAttachProcess(*(_KPROCESS **)(Base + 544), 0, (__int64)v8);
  v4 = MmSizeOfMdl((PVOID)Base, 0x898uLL);
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x65537350u);
  PoolWithTag->Next = 0LL;
  PoolWithTag->Size = 8 * (((unsigned __int16)((Base & 0xFFF) + 6295) >> 12) + 6);
  PoolWithTag->MdlFlags = 0;
  PoolWithTag->StartVa = (PVOID)(Base & 0xFFFFFFFFFFFFF000uLL);
  PoolWithTag->ByteOffset = Base & 0xFFF;
  PoolWithTag->ByteCount = 2200;
  MmProbeAndLockPages(PoolWithTag, 0, IoModifyAccess);
  v6 = KeSecureThread(Base, (int)PoolWithTag, *(_QWORD *)(Base + 1152), *(_QWORD *)(Base + 1232), a2);
  if ( v6 < 0 )
  {
    MmUnlockPages(PoolWithTag);
    ExFreePoolWithTag(PoolWithTag, 0x65537350u);
  }
  KiUnstackDetachProcess((__int64)v8, 0);
  return (unsigned int)v6;
}
