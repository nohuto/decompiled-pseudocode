/*
 * XREFs of sub_1C00302D0 @ 0x1C00302D0
 * Callers:
 *     sub_1C0009690 @ 0x1C0009690 (sub_1C0009690.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C001D080 @ 0x1C001D080 (sub_1C001D080.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C00302D0(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _DWORD *v6; // rsi
  char *SecurityContext; // rdi
  int v8; // r11d
  unsigned int v9; // ebx
  unsigned int v10; // r10d
  unsigned int v11; // r15d
  __m128 *PoolWithTag; // rax
  char *v13; // rcx
  __int64 v14; // rax

  sub_1C000F050(a1);
  v6 = sub_1C0011220(a2);
  SecurityContext = (char *)a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  sub_1C000FD80(a1, 8, 1717854513, *((_QWORD *)v6 + 106), (__int64)SecurityContext);
  v9 = 0;
  if ( *((_QWORD *)v6 + 106) )
    goto LABEL_2;
  if ( !SecurityContext )
  {
    sub_1C000FD80(a1, v8, 1717854514, 0LL, 0LL);
LABEL_2:
    v9 = -1073741811;
    goto LABEL_16;
  }
  sub_1C000FD80(a1, v8, 1717854515, 0LL, *(unsigned int *)SecurityContext);
  if ( v10 > 0x1000 )
    v10 = 4096;
  if ( v10 >= 0x14 )
  {
    v11 = v10;
    PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, v10, 0x42554855u);
    *((_QWORD *)v6 + 106) = PoolWithTag;
    if ( PoolWithTag && (sub_1C001D340(PoolWithTag, 0, v11), (v13 = (char *)*((_QWORD *)v6 + 106)) != 0LL) )
    {
      sub_1C001D080(v13, SecurityContext, v11);
      if ( *((_DWORD *)SecurityContext + 3) == 7 )
      {
        v14 = sub_1C0016CA0(a1, *((_WORD *)v6 + 714));
        if ( v14 )
        {
          _InterlockedExchange((volatile __int32 *)(v14 + 428), 7);
          sub_1C004A608(
            a1,
            *((unsigned __int16 *)v6 + 714),
            131,
            0,
            0,
            *((_DWORD *)SecurityContext + 1),
            *((_DWORD *)SecurityContext + 2),
            (__int64)aDioctlC,
            1349,
            0);
        }
      }
      sub_1C004A608(
        a1,
        *((unsigned __int16 *)v6 + 714),
        130,
        0,
        0,
        *((_DWORD *)SecurityContext + 1),
        *((_DWORD *)SecurityContext + 2),
        (__int64)aDioctlC,
        1357,
        0);
    }
    else
    {
      v9 = -1073741670;
    }
  }
  else
  {
    v9 = -1073741789;
  }
LABEL_16:
  a3->IoStatus.Status = v9;
  IofCompleteRequest(a3, 0);
  sub_1C0014E84(a2, (ULONG_PTR)a3);
  return v9;
}
