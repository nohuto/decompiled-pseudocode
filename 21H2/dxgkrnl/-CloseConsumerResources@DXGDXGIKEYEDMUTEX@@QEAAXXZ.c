/*
 * XREFs of ?CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C031F7B8
 * Callers:
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C031EFF0 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C0326FE0 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C020B9B0 (-QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C031FC2C (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::CloseConsumerResources(struct _KPROCESS **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcess; // rax
  struct _KPROCESS *v6; // rdi
  struct _KPROCESS *v7; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // r9
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  if ( *((_DWORD *)this + 10) )
  {
    CurrentProcess = PsGetCurrentProcess(this, a2, a3, a4);
    v6 = this[7];
    v7 = (struct _KPROCESS *)CurrentProcess;
    memset(&ApcState, 0, sizeof(ApcState));
    if ( (struct _KPROCESS *)CurrentProcess != v6 )
      KeStackAttachProcess(v6, &ApcState);
    DXGDXGIKEYEDMUTEX::CloseLocalMutex(this, 1LL, 1LL);
    if ( v7 != v6 )
      KeUnstackDetachProcess(&ApcState);
  }
  if ( *this )
  {
    Global = DXGGLOBAL_GetGlobal();
    CSERIALIZEDWORKQUEUE::QueueSerializedWorkItem(
      (CSERIALIZEDWORKQUEUE ***)Global + 38119,
      (void (*)(void *))DXGGLOBAL::DereferenceObjectWork,
      *this,
      v9);
    *this = 0LL;
  }
}
