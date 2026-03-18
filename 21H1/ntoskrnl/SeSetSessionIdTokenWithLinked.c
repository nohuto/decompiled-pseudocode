/*
 * XREFs of SeSetSessionIdTokenWithLinked @ 0x140918260
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     SepReferenceTokenByHandle @ 0x1402595E0 (SepReferenceTokenByHandle.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     SepDeReferenceLogonSessionDirect @ 0x140340624 (SepDeReferenceLogonSessionDirect.c)
 *     SepReferenceLogonSessionSilo @ 0x1406740E0 (SepReferenceLogonSessionSilo.c)
 *     SeSetSessionIdToken @ 0x1406E4A08 (SeSetSessionIdToken.c)
 */

__int64 __fastcall SeSetSessionIdTokenWithLinked(void *a1, ULONG a2)
{
  void *v3; // rsi
  int v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  void *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v13; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v14; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h] BYREF
  __int64 v16; // [rsp+48h] [rbp-8h] BYREF
  char v17; // [rsp+90h] [rbp+40h] BYREF
  __int64 v18; // [rsp+98h] [rbp+48h] BYREF

  v18 = 0LL;
  v13 = 0LL;
  v3 = 0LL;
  v14 = 0LL;
  v4 = SepReferenceTokenByHandle(a1, 8u, KeGetCurrentThread()->PreviousMode, &v18, &v17, &v16);
  if ( v4 < 0 )
  {
    v6 = v18;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = v18;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v18 + 48), 1u);
    if ( *(_BYTE *)(v6 + 204) )
    {
      v4 = -1073741525;
      goto LABEL_13;
    }
    v4 = SepReferenceLogonSessionSilo(
           (_DWORD *)(*(_QWORD *)(v6 + 216) + 8LL),
           *(_QWORD *)(*(_QWORD *)(v6 + 216) + 160LL),
           (__int64 *)&v13);
    if ( v4 >= 0 )
    {
      v7 = *(_QWORD *)(v6 + 216);
      v8 = (void *)v13[6];
      v15 = *(_QWORD *)(v7 + 16);
      if ( v15 )
      {
        v4 = SepReferenceLogonSessionSilo(&v15, *(_QWORD *)(v7 + 160), (__int64 *)&v14);
        if ( v4 < 0 )
          goto LABEL_13;
        v3 = (void *)v14[6];
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
  }
  if ( v13 )
    SepDeReferenceLogonSessionDirect(v13);
  if ( v14 )
    SepDeReferenceLogonSessionDirect(v14);
  return (unsigned int)v4;
}
