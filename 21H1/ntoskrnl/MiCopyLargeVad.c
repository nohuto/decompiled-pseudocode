/*
 * XREFs of MiCopyLargeVad @ 0x1408D53D0
 * Callers:
 *     MiMapChildLargePageVads @ 0x1408D5010 (MiMapChildLargePageVads.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MiLocateVadEvent @ 0x1402AA0B4 (MiLocateVadEvent.c)
 *     MiLocateLockedVadEvent @ 0x1402AA0CC (MiLocateLockedVadEvent.c)
 *     ExUnlockUserBuffer @ 0x1402F85E0 (ExUnlockUserBuffer.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     MiMapUserLargePages @ 0x140558C40 (MiMapUserLargePages.c)
 *     ExLockUserBuffer @ 0x1406BD108 (ExLockUserBuffer.c)
 */

__int64 __fastcall MiCopyLargeVad(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 VadEvent; // rax
  __int64 v7; // r8
  _KPROCESS *v8; // r9
  int v9; // ebx
  __int64 v10; // r8
  _DWORD *v11; // r9
  int v13; // r12d
  unsigned __int64 v14; // rbx
  int v15; // r13d
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rsi
  size_t v19; // rdi
  _DWORD *v20; // r9
  void *v21; // rcx
  __int64 v22; // r8
  _DWORD *v23; // r9
  struct _MDL *v24; // r15
  __int64 v25; // r8
  _DWORD *v26; // r9
  void *v27; // [rsp+30h] [rbp-39h] BYREF
  PVOID v28; // [rsp+38h] [rbp-31h] BYREF
  PVOID P; // [rsp+40h] [rbp-29h] BYREF
  void *Src; // [rsp+48h] [rbp-21h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+50h] [rbp-19h]
  _OWORD v32[3]; // [rsp+58h] [rbp-11h] BYREF

  BugCheckParameter1 = a1;
  Src = 0LL;
  P = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  memset(v32, 0, sizeof(v32));
  MiLocateLockedVadEvent(a3, 16);
  VadEvent = MiLocateVadEvent(a2, v5);
  if ( v7 )
  {
    *(_BYTE *)(v7 + 8) = *(_BYTE *)(VadEvent + 8);
    *(_QWORD *)(v7 + 16) = *(_QWORD *)(VadEvent + 16);
  }
  KiStackAttachProcess(v8, 0LL, (__int64)v32, v8);
  v9 = MiMapUserLargePages(a3);
  KiUnstackDetachProcess((__int64)v32, 0LL, v10, v11);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v13 = 0;
  v14 = 4292870144LL;
  v15 = *(_DWORD *)(a3 + 48) & 0x200;
  v16 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
  v17 = v16 << 12;
  v18 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) - v16 + 1) << 12;
  while ( v18 )
  {
    v19 = v14;
    if ( v18 <= v14 )
      v19 = v18;
    v13 = ExLockUserBuffer(v17, v19, 1, IoReadAccess, &Src, (struct _MDL **)&P);
    if ( v13 < 0 )
      goto LABEL_9;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v32, v20);
    v21 = (void *)v17;
    if ( v15 )
    {
      v24 = 0LL;
      v27 = (void *)v17;
      v28 = 0LL;
    }
    else
    {
      v13 = ExLockUserBuffer(v17, v19, 1, IoWriteAccess, &v27, (struct _MDL **)&v28);
      if ( v13 < 0 )
      {
        KiUnstackDetachProcess((__int64)v32, 0LL, v22, v23);
        ExUnlockUserBuffer((struct _MDL *)P);
LABEL_9:
        v14 = (v19 >> 1) & 0x7FFFFFFFFFE00000LL;
        if ( v14 < 0x200000 )
          return (unsigned int)v13;
        continue;
      }
      v24 = (struct _MDL *)v28;
      v21 = v27;
    }
    memmove(v21, Src, v19);
    if ( !v15 )
      ExUnlockUserBuffer(v24);
    KiUnstackDetachProcess((__int64)v32, 0LL, v25, v26);
    ExUnlockUserBuffer((struct _MDL *)P);
    v18 -= v19;
    v17 += v19;
  }
  return (unsigned int)v13;
}
