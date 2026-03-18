/*
 * XREFs of NtResetWriteWatch @ 0x140624640
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     MiMoveDirtyBitsToPfns @ 0x14022F4F0 (MiMoveDirtyBitsToPfns.c)
 *     MiGetVadMandatoryPageSize @ 0x14022FFE0 (MiGetVadMandatoryPageSize.c)
 *     KeStackAttachProcess @ 0x14023EE20 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402688E0 (KeUnstackDetachProcess.c)
 *     MiUnlockAndDereferenceVad @ 0x14027C760 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14027CA80 (MiObtainReferencedVadEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140611880 (ObReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtResetWriteWatch(void *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdi
  unsigned __int64 v8; // r12
  PVOID v9; // r13
  int v10; // ebx
  volatile signed __int32 *v11; // rax
  volatile signed __int32 *v12; // rdi
  NTSTATUS v13; // esi
  unsigned __int64 VadMandatoryPageSize; // rax
  __int64 v16; // rax
  PVOID Object; // [rsp+40h] [rbp-88h] BYREF
  int v18; // [rsp+48h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-78h] BYREF

  Object = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( a2 > 0x7FFFFFFEFFFFLL )
    return 3221225712LL;
  if ( 0x7FFFFFFF0000LL - a2 >= a3 && a3 )
  {
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
    v8 = a3 + a2 - 1;
    if ( a1 == (void *)-1LL )
    {
      v9 = CurrentThread->ApcState.Process;
      v10 = 0;
    }
    else
    {
      v13 = ObReferenceObjectByHandleWithTag(
              a1,
              8u,
              (POBJECT_TYPE)PsProcessType,
              CurrentThread->PreviousMode,
              0x77576D4Du,
              &Object,
              0LL);
      if ( v13 < 0 )
        return (unsigned int)v13;
      v9 = Object;
      v10 = 0;
      if ( Process != Object )
      {
        KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
        v10 = 1;
      }
    }
    v11 = MiObtainReferencedVadEx(a2, 0, &v18);
    v12 = v11;
    if ( !v11 )
    {
      v13 = -1073741585;
      goto LABEL_10;
    }
    if ( (v11[12] & 0x300000) == 0x300000
      && v8 <= (((*((unsigned int *)v11 + 7) | ((unsigned __int64)*((unsigned __int8 *)v11 + 33) << 32)) << 12) | 0xFFF) )
    {
      VadMandatoryPageSize = MiGetVadMandatoryPageSize((__int64)v11);
      if ( VadMandatoryPageSize <= 1 )
      {
LABEL_17:
        MiMoveDirtyBitsToPfns(a2, v8, (__int64)v12, 1);
        v13 = 0;
        goto LABEL_9;
      }
      v16 = (VadMandatoryPageSize << 12) - 1;
      if ( (v16 & a2) == 0 )
      {
        if ( (v16 & a3) != 0 )
        {
          v13 = -1073741583;
          goto LABEL_9;
        }
        goto LABEL_17;
      }
    }
    v13 = -1073741585;
LABEL_9:
    MiUnlockAndDereferenceVad((PVOID)v12);
LABEL_10:
    if ( v10 )
      KeUnstackDetachProcess(&ApcState);
    if ( a1 != (void *)-1LL )
      ObfDereferenceObjectWithTag(v9, 0x77576D4Du);
    return (unsigned int)v13;
  }
  return 3221225713LL;
}
