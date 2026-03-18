/*
 * XREFs of sub_1C000A800 @ 0x1C000A800
 * Callers:
 *     sub_1C000A690 @ 0x1C000A690 (sub_1C000A690.c)
 * Callees:
 *     sub_1C00017D0 @ 0x1C00017D0 (sub_1C00017D0.c)
 *     sub_1C0001800 @ 0x1C0001800 (sub_1C0001800.c)
 *     sub_1C0001850 @ 0x1C0001850 (sub_1C0001850.c)
 *     sub_1C00019E0 @ 0x1C00019E0 (sub_1C00019E0.c)
 *     sub_1C0001B50 @ 0x1C0001B50 (sub_1C0001B50.c)
 *     sub_1C0001B60 @ 0x1C0001B60 (sub_1C0001B60.c)
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0004100 @ 0x1C0004100 (sub_1C0004100.c)
 *     sub_1C00043B8 @ 0x1C00043B8 (sub_1C00043B8.c)
 *     sub_1C0004810 @ 0x1C0004810 (sub_1C0004810.c)
 *     sub_1C000AA60 @ 0x1C000AA60 (sub_1C000AA60.c)
 *     sub_1C000AAE0 @ 0x1C000AAE0 (sub_1C000AAE0.c)
 *     sub_1C000AB30 @ 0x1C000AB30 (sub_1C000AB30.c)
 *     sub_1C000ABE0 @ 0x1C000ABE0 (sub_1C000ABE0.c)
 *     sub_1C000B090 @ 0x1C000B090 (sub_1C000B090.c)
 *     sub_1C000B4C0 @ 0x1C000B4C0 (sub_1C000B4C0.c)
 *     sub_1C000B570 @ 0x1C000B570 (sub_1C000B570.c)
 *     sub_1C000B720 @ 0x1C000B720 (sub_1C000B720.c)
 */

__int64 __fastcall sub_1C000A800(struct _KTHREAD *Object, volatile signed __int64 *P, __int64 *a3)
{
  __int64 v3; // rdi
  PEPROCESS ThreadProcess; // rax
  __int64 v8; // rsi
  int v9; // ebx
  __m128 *PoolWithQuotaTag; // rax
  __int64 v11; // rbx
  NTSTATUS InformationThread; // r15d
  char v13; // al
  volatile signed __int32 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  _BYTE ThreadInformation[32]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v19; // [rsp+50h] [rbp-48h]
  __int64 v20; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+20h] BYREF

  v3 = *((_QWORD *)P + 17);
  v20 = 0LL;
  memset(ThreadInformation, 0, sizeof(ThreadInformation));
  v19 = 0LL;
  ThreadProcess = PsGetThreadProcess(Object);
  v21 = sub_1C000ABE0(ThreadProcess);
  v8 = v21;
  if ( !v21 )
  {
    v9 = sub_1C000B090(&v21);
    if ( v9 < 0 )
    {
LABEL_22:
      sub_1C0001B60(P);
      return (unsigned int)v9;
    }
    v8 = v21;
  }
  v9 = sub_1C00017D0(&dword_1C0007258, dword_1C0007020);
  if ( v9 < 0 )
  {
LABEL_21:
    sub_1C000B720((PVOID)v8);
    goto LABEL_22;
  }
  v9 = sub_1C00017D0((volatile signed __int32 *)(v8 + 92), dword_1C0007024);
  if ( v9 < 0 )
  {
    v15 = &dword_1C0007258;
LABEL_20:
    sub_1C0001B50(v15);
    goto LABEL_21;
  }
  PoolWithQuotaTag = (__m128 *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x98uLL, 0x4873634Du);
  v11 = (__int64)PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
  {
    v9 = -1073741801;
    sub_1C0001B50(&dword_1C0007258);
    v15 = (volatile signed __int32 *)(v8 + 92);
    goto LABEL_20;
  }
  sub_1C0003440(PoolWithQuotaTag, 0, 0x98uLL);
  *(_QWORD *)(v11 + 32) = 1LL;
  *(_QWORD *)(v11 + 72) = P;
  *(_QWORD *)(v11 + 64) = *((_QWORD *)P + 17);
  *(_QWORD *)(v11 + 128) = v8;
  InformationThread = ZwQueryInformationThread(
                        (HANDLE)0xFFFFFFFFFFFFFFFELL,
                        ThreadBasicInformation,
                        ThreadInformation,
                        0x30u,
                        0LL);
  if ( InformationThread < 0 )
    goto LABEL_30;
  *(_DWORD *)(v11 + 108) = DWORD2(v19);
  *(_DWORD *)(v11 + 144) = HIDWORD(v19);
  *(_QWORD *)(v11 + 136) = v19;
  v13 = *(_BYTE *)(v3 + 1);
  if ( !v13 )
    v13 = 1;
  *(_BYTE *)(v11 + 106) = v13;
  *(_BYTE *)(v11 + 105) = 8;
  *(_BYTE *)(v11 + 104) = *(_BYTE *)v3;
  v20 = *(_QWORD *)(v3 + 32);
  if ( v20 != (_QWORD)v19 )
  {
    v20 = *(_QWORD *)(v3 + 32);
    InformationThread = ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAffinityMask, &v20, 8u);
    if ( InformationThread < 0 )
    {
      if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
        sub_1C0004810((__int64)off_1C0007000->AttachedDevice, v16, v17, InformationThread, v20);
      if ( InformationThread != -1073741811 || (~qword_1C0007210 & v20) != 0 )
        goto LABEL_30;
    }
  }
  *(_QWORD *)(v11 + 96) = Object;
  if ( !sub_1C00019E0(v11) )
  {
    *(_QWORD *)(v11 + 96) = 0LL;
    if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
      sub_1C00043B8((__int64)off_1C0007000->AttachedDevice, 0xCu, (__int64)&unk_1C0005418);
    InformationThread = -1073740542;
LABEL_30:
    sub_1C000B570(v11);
    sub_1C000B4C0(v11);
    return (unsigned int)InformationThread;
  }
  sub_1C000AB30(v11, v3, 0LL);
  if ( byte_1C0007358 )
    sub_1C0004100(v11);
  ObfReferenceObject(Object);
  ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
  *(_QWORD *)(v8 + 24) = KeGetCurrentThread();
  sub_1C000AAE0(v11);
  if ( (*(_BYTE *)(v3 + 3) & 1) != 0 )
    sub_1C0001850((__int64)P, v11);
  if ( (*(_BYTE *)(v11 + 148) & 1) == 0 )
    sub_1C000AA60(v11);
  *(_QWORD *)(v8 + 24) = 0LL;
  ExReleasePushLockExclusiveEx(v8 + 16, 0LL);
  *a3 = v11;
  sub_1C0001800(1u);
  return 0LL;
}
