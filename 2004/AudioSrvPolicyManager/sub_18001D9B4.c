/*
 * XREFs of sub_18001D9B4 @ 0x18001D9B4
 * Callers:
 *     sub_180006830 @ 0x180006830 (sub_180006830.c)
 *     sub_180006900 @ 0x180006900 (sub_180006900.c)
 *     sub_18001B7E4 @ 0x18001B7E4 (sub_18001B7E4.c)
 *     sub_180020F20 @ 0x180020F20 (sub_180020F20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001D9B4(RTL_SRWLOCK *a1, int a2, _QWORD *a3)
{
  RTL_SRWLOCK *v3; // rdi
  _QWORD *Ptr; // r9
  __int64 v8; // rcx

  *a3 = 0LL;
  v3 = a1 + 15;
  AcquireSRWLockShared(a1 + 15);
  Ptr = a1[16].Ptr;
  while ( Ptr )
  {
    v8 = Ptr[2];
    Ptr = (_QWORD *)*Ptr;
    if ( !*(_DWORD *)(v8 + 448) && *(_DWORD *)(v8 + 192) == a2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      *a3 = v8;
      break;
    }
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return 0LL;
}
