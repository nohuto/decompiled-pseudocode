/*
 * XREFs of ?CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C02940D4
 * Callers:
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C0293B60 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C029CAC8 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C016D178 (-QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C029447C (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::CloseConsumerResources(struct _KPROCESS **this, __int64 a2)
{
  __int64 CurrentProcess; // rax
  struct _KPROCESS *v4; // rdi
  struct _KPROCESS *v5; // rsi
  struct _KPROCESS *v6; // rdi
  struct DXGGLOBAL *Global; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  if ( *((_DWORD *)this + 10) )
  {
    CurrentProcess = PsGetCurrentProcess(this, a2);
    v4 = this[7];
    v5 = (struct _KPROCESS *)CurrentProcess;
    memset(&ApcState, 0, sizeof(ApcState));
    if ( (struct _KPROCESS *)CurrentProcess != v4 )
      KeStackAttachProcess(v4, &ApcState);
    DXGDXGIKEYEDMUTEX::CloseLocalMutex(this, 1LL, 1LL);
    if ( v5 != v4 )
      KeUnstackDetachProcess(&ApcState);
  }
  v6 = *this;
  if ( *this )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
    CSERIALIZEDWORKQUEUE::QueueSerializedWorkItem(
      (CSERIALIZEDWORKQUEUE ***)Global + 38073,
      (void (*)(void *))DXGGLOBAL::DereferenceObjectWork,
      v6);
    *this = 0LL;
  }
}
