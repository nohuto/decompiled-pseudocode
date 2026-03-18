/*
 * XREFs of sub_1C0036A40 @ 0x1C0036A40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0002AF0 @ 0x1C0002AF0 (sub_1C0002AF0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

void __fastcall sub_1C0036A40(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  _DWORD *v4; // rdi
  struct _IO_WORKITEM *v5; // rcx
  __int64 v6; // rcx
  unsigned __int16 v7; // si
  PIO_WORKITEM *v8; // rbx
  void *v9; // rcx

  v4 = sub_1C000F050((__int64)a1);
  sub_1C0002AF0(a1, a2, 2);
  v5 = (struct _IO_WORKITEM *)*((_QWORD *)v4 + 148);
  if ( v5 )
  {
    IoFreeWorkItem(v5);
    *((_QWORD *)v4 + 148) = 0LL;
  }
  v6 = *((_QWORD *)v4 + 382);
  if ( v6 )
  {
    v7 = 0;
    v8 = (PIO_WORKITEM *)(v6 + 2456);
    while ( v7 < *((unsigned __int8 *)sub_1C000F050((__int64)a1) + 2938) )
    {
      if ( *v8 )
      {
        IoFreeWorkItem(*v8);
        *v8 = 0LL;
      }
      v8 += 366;
      ++v7;
    }
    v9 = (void *)*((_QWORD *)v4 + 382);
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0);
      *((_QWORD *)v4 + 382) = 0LL;
    }
  }
}
