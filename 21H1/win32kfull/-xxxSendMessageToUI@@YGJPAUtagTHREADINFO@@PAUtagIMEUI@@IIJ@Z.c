/*
 * XREFs of ?xxxSendMessageToUI@@YGJPAUtagTHREADINFO@@PAUtagIMEUI@@IIJ@Z @ 0x14EEFD
 * Callers:
 *     ?xxxSendOpenStatusNotify@@YGXPAUtagTHREADINFO@@PAUtagIMEUI@@PAUtagWND@@H@Z @ 0xC399E (-xxxSendOpenStatusNotify@@YGXPAUtagTHREADINFO@@PAUtagIMEUI@@PAUtagWND@@H@Z.c)
 * Callees:
 *     _LockW32Thread@8 @ 0x3C2F8 (_LockW32Thread@8.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __userpurge xxxSendMessageToUI@<eax>(
        ULONG a1@<edx>,
        LONG_PTR a2@<ecx>,
        struct tagTHREADINFO *a3,
        struct tagIMEUI *a4,
        unsigned int a5,
        unsigned int a6,
        int a7)
{
  ULONG v8; // ecx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  void *v11; // esi
  LONG_PTR v13[3]; // [esp+10h] [ebp-50h] BYREF
  int v14; // [esp+1Ch] [ebp-44h] BYREF
  int v15; // [esp+20h] [ebp-40h]
  int v16; // [esp+24h] [ebp-3Ch]
  volatile signed __int32 *v17; // [esp+34h] [ebp-2Ch]
  int v18; // [esp+38h] [ebp-28h]
  int v19; // [esp+3Ch] [ebp-24h]
  ULONG v20; // [esp+40h] [ebp-20h]
  int v21; // [esp+44h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+48h] [ebp-18h]

  v20 = a1;
  v17 = (volatile signed __int32 *)a2;
  v18 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  memset(v13, 0, sizeof(v13));
  v21 = 0;
  if ( a2 != _gptiCurrent )
  {
    v21 = 1;
    LockW32Thread(a2, v13);
    KeAttachProcess(**(PRKPROCESS **)(a2 + 232));
  }
  ms_exc.registration.TryLevel = 0;
  v8 = _MmUserProbeAddress;
  if ( v20 < _MmUserProbeAddress )
    v8 = v20;
  v19 = HMValidateHandleNoSecure(*(_DWORD *)(v8 + 16), 1);
  ms_exc.registration.TryLevel = -2;
  if ( v19 )
  {
    ms_exc.registration.TryLevel = 1;
    v17 = (volatile signed __int32 *)(v20 + 20);
    _InterlockedIncrement((volatile signed __int32 *)(v20 + 20));
    ms_exc.registration.TryLevel = -2;
    if ( v21 )
      KeDetachProcess();
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v14 = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = &v14;
    v11 = (void *)v19;
    v15 = v19;
    HMLockObject(v19);
    v18 = xxxSendMessage(v11, (unsigned int)a4, 0);
    ThreadUnlock1();
    if ( v21 )
    {
      if ( (*(_BYTE *)(a2 + 264) & 1) != 0 )
      {
LABEL_14:
        PopAndFreeW32ThreadLock((int)v13);
        return v18;
      }
      KeAttachProcess(**(PRKPROCESS **)(a2 + 232));
    }
    ms_exc.registration.TryLevel = 2;
    _InterlockedDecrement(v17);
    ms_exc.registration.TryLevel = -2;
  }
  if ( v21 )
  {
    KeDetachProcess();
    goto LABEL_14;
  }
  return v18;
}
