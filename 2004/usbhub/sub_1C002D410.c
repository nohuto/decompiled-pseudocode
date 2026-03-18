/*
 * XREFs of sub_1C002D410 @ 0x1C002D410
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C0029800 @ 0x1C0029800 (sub_1C0029800.c)
 *     sub_1C00298B4 @ 0x1C00298B4 (sub_1C00298B4.c)
 *     sub_1C002D68C @ 0x1C002D68C (sub_1C002D68C.c)
 */

__int64 __fastcall sub_1C002D410(PDEVICE_OBJECT DeviceObject, ULONG_PTR Irp, __int64 Context)
{
  _DWORD *v5; // rbx
  unsigned __int16 v6; // dx
  __int64 v7; // rcx
  PIO_SECURITY_CONTEXT v8; // rdi
  __int64 v9; // r14
  ACCESS_MASK *v10; // rbp
  ACCESS_MASK *i; // rdi

  v5 = sub_1C0011220(Context);
  sub_1C000F050(*((_QWORD *)v5 + 148));
  v6 = *((_WORD *)v5 + 714);
  v7 = *((_QWORD *)v5 + 148);
  if ( *(int *)(Irp + 48) < 0 )
  {
    v8 = *(PIO_SECURITY_CONTEXT *)(*(_QWORD *)(Irp + 184) + 8LL);
    v9 = sub_1C0016CA0(v7, v6);
    sub_1C00298B4(*((_QWORD *)v5 + 148), *((_WORD *)v5 + 714));
    if ( v9 && HIDWORD(v8->SecurityQos) == -2147481856 )
    {
      sub_1C002D68C(*((_QWORD *)v5 + 148), *((unsigned __int16 *)v5 + 714), *(unsigned int *)(Irp + 48));
      *(_DWORD *)(v9 + 436) = 0;
      if ( WORD1(v8->SecurityQos) )
      {
        if ( WORD1(v8->SecurityQos) == 1 )
          *(_DWORD *)(v9 + 436) = sub_1C0029800(*((_QWORD *)v5 + 148), Context, (__int64)&v8[1].AccessState);
      }
      else
      {
        v10 = (ACCESS_MASK *)((char *)v8 + LOWORD(v8->SecurityQos));
        for ( i = &v8[1].DesiredAccess; i < v10; i = (ACCESS_MASK *)((char *)i + *(unsigned __int16 *)i) )
          *(_DWORD *)(v9 + 436) += sub_1C0029800(*((_QWORD *)v5 + 148), Context, (__int64)i);
      }
    }
  }
  else
  {
    sub_1C00298B4(v7, v6);
  }
  sub_1C0014E84(Context, Irp);
  if ( *(_BYTE *)(Irp + 65) )
    *(_BYTE *)(*(_QWORD *)(Irp + 184) + 3LL) |= 1u;
  return 0LL;
}
