/*
 * XREFs of MiObtainRotateProtectionRanges @ 0x140200BAC
 * Callers:
 *     MiRotateToFrameBufferNoCopy @ 0x14065FFA0 (MiRotateToFrameBufferNoCopy.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x140318330 (MiQueryAddressState.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiObtainRotateProtectionRanges(int a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int v7; // edi
  _KPROCESS *Process; // r14
  __int64 v10; // rdx
  int v11; // r8d
  char v12; // r12
  int v13; // eax
  __int64 Pool; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v18; // rcx
  __int64 v19; // rax
  int v20; // [rsp+50h] [rbp-10h] BYREF
  int v21; // [rsp+54h] [rbp-Ch] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-8h] BYREF
  __int16 v23; // [rsp+A8h] [rbp+48h] BYREF
  int v24; // [rsp+B0h] [rbp+50h] BYREF

  v22 = 0LL;
  v7 = 0;
  v21 = 0;
  v20 = 0;
  v23 = 0;
  v24 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = MiLockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26]);
  while ( a2 <= a3 )
  {
    LOBYTE(v11) = v12;
    MiQueryAddressState(a2, a3, v11, a1, 0LL, (__int64)&v24, (__int64)&v21, (__int64)&v23, (__int64)&v22, (__int64)&v20);
    v13 = v24 & 7;
    if ( v13 != 4 && v13 != 1 )
    {
      v7 = -1073741755;
      break;
    }
    Pool = MiAllocatePool(64LL, 40LL, 1649568077LL);
    v15 = (_QWORD *)Pool;
    if ( !Pool )
    {
      v7 = -1073741670;
      break;
    }
    *(_QWORD *)(Pool + 16) = a2;
    *(_QWORD *)(Pool + 24) = v22;
    *(_DWORD *)(Pool + 32) = v24;
    v16 = *(_QWORD **)(a4 + 8);
    if ( *v16 != a4 )
LABEL_16:
      __fastfail(3u);
    *v15 = a4;
    v15[1] = v16;
    *v16 = v15;
    a2 = v22;
    *(_QWORD *)(a4 + 8) = v15;
  }
  LOBYTE(v10) = v12;
  MiUnlockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26], v10);
  if ( v7 < 0 )
  {
    while ( 1 )
    {
      v18 = *(_QWORD **)a4;
      if ( *(_QWORD *)a4 == a4 )
        break;
      if ( v18[1] != a4 )
        goto LABEL_16;
      v19 = *v18;
      if ( *(_QWORD **)(*v18 + 8LL) != v18 )
        goto LABEL_16;
      *(_QWORD *)a4 = v19;
      *(_QWORD *)(v19 + 8) = a4;
      ExFreePoolWithTag(v18, 0);
    }
  }
  return (unsigned int)v7;
}
