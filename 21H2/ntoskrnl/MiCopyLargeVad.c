/*
 * XREFs of MiCopyLargeVad @ 0x1408D9E80
 * Callers:
 *     MiMapChildLargePageVads @ 0x1408D9AC0 (MiMapChildLargePageVads.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x1402161DC (ExUnlockUserBuffer.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MiLocateVadEvent @ 0x140309104 (MiLocateVadEvent.c)
 *     MiLocateLockedVadEvent @ 0x14030911C (MiLocateLockedVadEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     MiMapUserLargePages @ 0x14055E970 (MiMapUserLargePages.c)
 *     ExLockUserBuffer @ 0x1405E45FC (ExLockUserBuffer.c)
 */

__int64 __fastcall MiCopyLargeVad(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 VadEvent; // rax
  __int64 v6; // r8
  _KPROCESS *v7; // r9
  int v8; // ebx
  int v10; // r12d
  unsigned __int64 v11; // rbx
  int v12; // r13d
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rsi
  size_t v16; // rdi
  void *v17; // rcx
  struct _MDL *v18; // r15
  void *v19; // [rsp+30h] [rbp-39h] BYREF
  PVOID v20; // [rsp+38h] [rbp-31h] BYREF
  PVOID P; // [rsp+40h] [rbp-29h] BYREF
  void *Src; // [rsp+48h] [rbp-21h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+50h] [rbp-19h]
  _OWORD v24[3]; // [rsp+58h] [rbp-11h] BYREF

  BugCheckParameter1 = a1;
  Src = 0LL;
  P = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  memset(v24, 0, sizeof(v24));
  MiLocateLockedVadEvent(a3, 16);
  VadEvent = MiLocateVadEvent(a2);
  if ( v6 )
  {
    *(_BYTE *)(v6 + 8) = *(_BYTE *)(VadEvent + 8);
    *(_QWORD *)(v6 + 16) = *(_QWORD *)(VadEvent + 16);
  }
  KiStackAttachProcess(v7, 0, (__int64)v24);
  v8 = MiMapUserLargePages(a3);
  KiUnstackDetachProcess((__int64)v24, 0LL);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v10 = 0;
  v11 = 4292870144LL;
  v12 = *(_DWORD *)(a3 + 48) & 0x200;
  v13 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
  v14 = v13 << 12;
  v15 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) - v13 + 1) << 12;
  while ( v15 )
  {
    v16 = v11;
    if ( v15 <= v11 )
      v16 = v15;
    v10 = ExLockUserBuffer(v14, v16, 1, IoReadAccess, &Src, (struct _MDL **)&P);
    if ( v10 < 0 )
      goto LABEL_9;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v24);
    v17 = (void *)v14;
    if ( v12 )
    {
      v18 = 0LL;
      v19 = (void *)v14;
      v20 = 0LL;
    }
    else
    {
      v10 = ExLockUserBuffer(v14, v16, 1, IoWriteAccess, &v19, (struct _MDL **)&v20);
      if ( v10 < 0 )
      {
        KiUnstackDetachProcess((__int64)v24, 0LL);
        ExUnlockUserBuffer((struct _MDL *)P);
LABEL_9:
        v11 = (v16 >> 1) & 0x7FFFFFFFFFE00000LL;
        if ( v11 < 0x200000 )
          return (unsigned int)v10;
        continue;
      }
      v18 = (struct _MDL *)v20;
      v17 = v19;
    }
    memmove(v17, Src, v16);
    if ( !v12 )
      ExUnlockUserBuffer(v18);
    KiUnstackDetachProcess((__int64)v24, 0LL);
    ExUnlockUserBuffer((struct _MDL *)P);
    v15 -= v16;
    v14 += v16;
  }
  return (unsigned int)v10;
}
