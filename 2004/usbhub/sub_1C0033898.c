/*
 * XREFs of sub_1C0033898 @ 0x1C0033898
 * Callers:
 *     sub_1C00071D0 @ 0x1C00071D0 (sub_1C00071D0.c)
 * Callees:
 *     sub_1C0008BD0 @ 0x1C0008BD0 (sub_1C0008BD0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

__int64 __fastcall sub_1C0033898(ULONG_PTR a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  KSPIN_LOCK *v8; // rax
  unsigned int v9; // ebp
  KSPIN_LOCK *v10; // r15
  KIRQL v11; // r10
  int v12; // r11d
  __int64 v13; // r12
  __int64 v14; // r9
  KIRQL v15; // r10
  void *v16; // rcx

  v8 = (KSPIN_LOCK *)sub_1C000F050(a1);
  if ( *(_DWORD *)a2 != 1146120296 )
    sub_1C002DC78(a1, a1);
  v9 = 3;
  if ( a3 )
  {
    v9 = *(_DWORD *)(a2 + 400);
    if ( a4 )
    {
      v10 = v8 + 618;
      KeAcquireSpinLockRaiseToDpc(v8 + 618);
      sub_1C000FD80(*(_QWORD *)(a2 + 16), 512, 1346596207, *(_QWORD *)(a3 + 40), *(unsigned __int16 *)(a2 + 4));
      v13 = *(_QWORD *)(a2 + 680);
      v14 = *(_QWORD *)(a3 + 40);
      if ( v13 == v14 )
      {
        *(_QWORD *)(a2 + 680) = 0LL;
        *(_DWORD *)(a2 + 696) = 0;
        KeReleaseSpinLock(v10, v11);
        sub_1C000FD80(*(_QWORD *)(a2 + 16), 512, 1953328982, v13, *(_QWORD *)(a3 + 40));
        v9 = sub_1C0008BD0(a1, a2, a3, a4);
      }
      else
      {
        sub_1C000FD80(*(_QWORD *)(a2 + 16), v12, 1346596145, v14, *(unsigned __int16 *)(a2 + 4));
        KeReleaseSpinLock(v10, v15);
      }
    }
    v16 = *(void **)(a3 + 40);
    if ( v16 )
    {
      ExFreePoolWithTag(v16, 0);
      *(_QWORD *)(a3 + 40) = 0LL;
    }
  }
  return v9;
}
