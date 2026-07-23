/*
 * XREFs of PiUpdateDeviceResourceLists @ 0x1408B529C
 * Callers:
 *     PiProcessQueryDeviceState @ 0x140749BFC (PiProcessQueryDeviceState.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PnpCopyResourceList @ 0x1408B2700 (PnpCopyResourceList.c)
 *     IopQueryBusResourceUpdateInterface @ 0x1408B2CE0 (IopQueryBusResourceUpdateInterface.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiUpdateDeviceResourceLists(_QWORD *a1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  PVOID v3; // rsi
  PVOID v4; // rdi
  __int64 result; // rax
  void (__fastcall **v6)(_QWORD); // r14
  int v7; // ebx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  void *Src; // [rsp+60h] [rbp+18h] BYREF

  Src = 0LL;
  v10 = 0LL;
  v2 = (struct _DEVICE_OBJECT *)a1[4];
  v3 = 0LL;
  P = 0LL;
  v4 = 0LL;
  result = IopQueryBusResourceUpdateInterface(v2, &P);
  if ( (int)result < 0 )
    return result;
  v6 = (void (__fastcall **)(_QWORD))P;
  v7 = (*((__int64 (__fastcall **)(_QWORD, void **, void **))P + 4))(*((_QWORD *)P + 1), &Src, &v10);
  if ( v7 >= 0 )
  {
    if ( !Src || !v10 )
    {
LABEL_13:
      v7 = 0;
      goto LABEL_14;
    }
    v3 = PnpCopyResourceList(Src);
    if ( v3 )
    {
      v4 = PnpCopyResourceList(v10);
      if ( v4 )
      {
        ExAcquireFastMutex(&PiResourceListLock);
        v8 = (void *)a1[52];
        if ( v8 )
          ExFreePoolWithTag(v8, 0);
        v9 = (void *)a1[53];
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
        a1[52] = v3;
        a1[53] = v4;
        KeReleaseGuardedMutex(&PiResourceListLock);
        goto LABEL_13;
      }
    }
    v7 = -1073741670;
  }
LABEL_14:
  v6[3](v6[1]);
  ExFreePoolWithTag(v6, 0);
  if ( v7 < 0 )
  {
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
  return (unsigned int)v7;
}
