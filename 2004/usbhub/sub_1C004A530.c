/*
 * XREFs of sub_1C004A530 @ 0x1C004A530
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

void __fastcall sub_1C004A530(__int64 a1)
{
  _DWORD *v2; // rdi
  int v3; // eax
  _QWORD **v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = sub_1C000F050(a1);
  sub_1C000FD80(a1, 128, 1702381138, 0LL, 0LL);
  v3 = v2[640];
  if ( (v3 & 0x2000) != 0 )
  {
    v2[640] = v3 & 0xFFFFDFFF;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v2 + 609, &LockHandle);
    v4 = (_QWORD **)(v2 + 1214);
    while ( 1 )
    {
      v5 = *v4;
      if ( *v4 == v4 )
        break;
      if ( (_QWORD **)v5[1] != v4 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
        __fastfail(3u);
      *v4 = v6;
      v6[1] = v4;
      if ( v5 != (_QWORD *)48 )
        ExFreePoolWithTag(v5 - 6, 0);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
