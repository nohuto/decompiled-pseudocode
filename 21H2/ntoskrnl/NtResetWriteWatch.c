/*
 * XREFs of NtResetWriteWatch @ 0x140700F70
 * Callers:
 *     <none>
 * Callees:
 *     MiMoveDirtyBitsToPfns @ 0x14028E8E0 (MiMoveDirtyBitsToPfns.c)
 *     MiGetVadMandatoryPageSize @ 0x14028ECC8 (MiGetVadMandatoryPageSize.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x14030E7C0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x14032E700 (MiUnlockAndDereferenceVad.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtResetWriteWatch(ULONG_PTR a1, unsigned __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v7; // r12
  _KPROCESS *Process; // rsi
  void *v9; // r14
  int v10; // ebx
  __int64 v11; // rax
  char *v12; // rsi
  unsigned int v13; // edi
  __int64 result; // rax
  unsigned __int64 VadMandatoryPageSize; // rax
  _DWORD *v16; // r9
  __int64 v17; // rax
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v19[3]; // [rsp+48h] [rbp-70h] BYREF

  BugCheckParameter1 = 0LL;
  memset(v19, 0, sizeof(v19));
  if ( a2 > 0x7FFFFFFEFFFFLL )
    return 3221225712LL;
  if ( 0x7FFFFFFF0000LL - a2 < a3 || !a3 )
    return 3221225713LL;
  CurrentThread = KeGetCurrentThread();
  v7 = a2 + a3 - 1;
  Process = CurrentThread->ApcState.Process;
  if ( a1 == -1LL )
  {
    v9 = CurrentThread->ApcState.Process;
    v10 = 0;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(a1, 0x77576D4Du, (__int64)&BugCheckParameter1, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    v9 = (void *)BugCheckParameter1;
    v10 = 0;
    if ( Process != (_KPROCESS *)BugCheckParameter1 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v19, v16);
      v10 = 1;
    }
  }
  v11 = MiObtainReferencedVadEx(a2, 0, (int *)&BugCheckParameter1);
  v12 = (char *)v11;
  if ( !v11 )
  {
    v13 = -1073741585;
    goto LABEL_10;
  }
  if ( (*(_DWORD *)(v11 + 48) & 0x600000) == 0x600000
    && v7 <= (((*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) << 12) | 0xFFF) )
  {
    VadMandatoryPageSize = MiGetVadMandatoryPageSize(v11);
    if ( VadMandatoryPageSize <= 1 )
    {
LABEL_18:
      MiMoveDirtyBitsToPfns(a2, v7, (__int64)v12, 1);
      v13 = 0;
      goto LABEL_9;
    }
    v17 = (VadMandatoryPageSize << 12) - 1;
    if ( (v17 & a2) == 0 )
    {
      if ( (v17 & a3) != 0 )
      {
        v13 = -1073741583;
        goto LABEL_9;
      }
      goto LABEL_18;
    }
  }
  v13 = -1073741585;
LABEL_9:
  MiUnlockAndDereferenceVad(v12);
LABEL_10:
  if ( v10 )
    KiUnstackDetachProcess((__int64)v19, 0LL);
  if ( a1 != -1LL )
    ObfDereferenceObjectWithTag(v9, 0x77576D4Du);
  return v13;
}
