/*
 * XREFs of SeSetSessionIdTokenWithLinked @ 0x140919510
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     SepReferenceTokenByHandle @ 0x140295E60 (SepReferenceTokenByHandle.c)
 *     SepDeReferenceLogonSessionDirect @ 0x1402FED40 (SepDeReferenceLogonSessionDirect.c)
 *     SepReferenceLogonSessionSilo @ 0x14062F8A0 (SepReferenceLogonSessionSilo.c)
 *     SeSetSessionIdToken @ 0x140708398 (SeSetSessionIdToken.c)
 */

__int64 __fastcall SeSetSessionIdTokenWithLinked(void *a1, ULONG a2)
{
  void *v3; // rsi
  int v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  void *v8; // r14
  _QWORD *v10; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v11; // [rsp+38h] [rbp-18h] BYREF
  __int64 v12; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+48h] [rbp-8h] BYREF
  char v14; // [rsp+90h] [rbp+40h] BYREF
  __int64 v15; // [rsp+98h] [rbp+48h] BYREF

  v15 = 0LL;
  v10 = 0LL;
  v3 = 0LL;
  v11 = 0LL;
  v4 = SepReferenceTokenByHandle(a1, 8u, KeGetCurrentThread()->PreviousMode, &v15, &v14, &v13);
  if ( v4 < 0 )
  {
    v6 = v15;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = v15;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v15 + 48), 1u);
    if ( *(_BYTE *)(v6 + 204) )
    {
      v4 = -1073741525;
      goto LABEL_13;
    }
    v4 = SepReferenceLogonSessionSilo(
           (_DWORD *)(*(_QWORD *)(v6 + 216) + 8LL),
           *(_QWORD *)(*(_QWORD *)(v6 + 216) + 160LL),
           (__int64 *)&v10);
    if ( v4 >= 0 )
    {
      v7 = *(_QWORD *)(v6 + 216);
      v8 = (void *)v10[6];
      v12 = *(_QWORD *)(v7 + 16);
      if ( v12 )
      {
        v4 = SepReferenceLogonSessionSilo(&v12, *(_QWORD *)(v7 + 160), (__int64 *)&v11);
        if ( v4 < 0 )
          goto LABEL_13;
        v3 = (void *)v11[6];
      }
      if ( !v8 || (v4 = SeSetSessionIdToken(v8, a2), v4 >= 0) )
      {
        if ( v3 )
          v4 = SeSetSessionIdToken(v3, a2);
      }
    }
  }
LABEL_13:
  if ( v6 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 48));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v10 )
    SepDeReferenceLogonSessionDirect(v10);
  if ( v11 )
    SepDeReferenceLogonSessionDirect(v11);
  return (unsigned int)v4;
}
