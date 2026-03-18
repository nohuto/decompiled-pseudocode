/*
 * XREFs of sub_1C005C970 @ 0x1C005C970
 * Callers:
 *     EnableCallback @ 0x1C005C020 (EnableCallback.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C001CDA8 @ 0x1C001CDA8 (sub_1C001CDA8.c)
 *     sub_1C0031714 @ 0x1C0031714 (sub_1C0031714.c)
 *     sub_1C00317D8 @ 0x1C00317D8 (sub_1C00317D8.c)
 *     sub_1C005C07C @ 0x1C005C07C (sub_1C005C07C.c)
 *     sub_1C005C198 @ 0x1C005C198 (sub_1C005C198.c)
 *     sub_1C005C500 @ 0x1C005C500 (sub_1C005C500.c)
 *     sub_1C005C614 @ 0x1C005C614 (sub_1C005C614.c)
 *     sub_1C005C7EC @ 0x1C005C7EC (sub_1C005C7EC.c)
 */

LONG sub_1C005C970()
{
  struct _DEVICE_OBJECT *i; // rdi
  PKDEFERRED_ROUTINE *p_DeferredRoutine; // rbx
  __int64 Flink; // rsi
  _DWORD *v3; // rax
  _DWORD *v4; // rax
  __int64 v5; // rcx
  char *j; // r14
  _DWORD *v7; // rax
  KIRQL v8; // dl
  _DWORD *v9; // rax

  KeWaitForSingleObject(&stru_1C006B480.Queue.Wcb.DeviceRoutine, Executive, 0, 0, 0LL);
  for ( i = (struct _DEVICE_OBJECT *)stru_1C006B480.Queue.Wcb.DeviceObject;
        i != (struct _DEVICE_OBJECT *)&stru_1C006B480.Queue.Wcb.DeviceObject;
        i = *(struct _DEVICE_OBJECT **)&i->Type )
  {
    p_DeferredRoutine = &i[-16].Dpc.DeferredRoutine;
    Flink = (__int64)i[-12].Queue.ListEntry.Flink;
    v3 = sub_1C000F050(Flink);
    if ( (unsigned int)sub_1C0031714(Flink, (__int64)(v3 + 346), 13, 0, 1) == 5 )
    {
      sub_1C005C500((__int64)&i[-16].Dpc.DeferredRoutine, &stru_1C00627B8);
      sub_1C005C614((__int64)&i[-16].Dpc.DeferredRoutine);
      sub_1C005C7EC(Flink);
      v4 = sub_1C000F050(Flink);
      sub_1C001CDA8(v5, (__int64)(v4 + 346), 25);
      for ( j = (char *)p_DeferredRoutine[601]; j != (char *)(p_DeferredRoutine + 601); j = *(char **)j )
      {
        sub_1C005C198((__int64)(j - 1320), &stru_1C0062AA0, 1);
        sub_1C005C07C((__int64)(j - 1320), &stru_1C00626B0);
      }
      v7 = sub_1C000F050(Flink) + 346;
      v7[34] = 0;
      stru_1C006B480.Dpc.DeferredRoutine = 0LL;
      v8 = *((_BYTE *)v7 + 132);
      v7[22] = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v8);
    }
    v9 = sub_1C000F050(Flink);
    sub_1C00317D8(Flink, (__int64)(v9 + 346));
  }
  return KeSetEvent((PRKEVENT)&stru_1C006B480.Queue.Wcb.DeviceRoutine, 0, 0);
}
