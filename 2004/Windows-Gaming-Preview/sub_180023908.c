/*
 * XREFs of sub_180023908 @ 0x180023908
 * Callers:
 *     sub_180021760 @ 0x180021760 (sub_180021760.c)
 * Callees:
 *     sub_180025B2C @ 0x180025B2C (sub_180025B2C.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180023908(RTL_SRWLOCK *a1, _QWORD *a2)
{
  PVOID Ptr; // rbx
  PVOID v5; // rdi
  PVOID v6; // rbp
  unsigned int v7; // esi
  unsigned int v8; // eax
  PVOID v10; // [rsp+40h] [rbp+8h] BYREF

  Ptr = 0LL;
  v10 = 0LL;
  v5 = 0LL;
  AcquireSRWLockShared(a1 + 4);
  v6 = 0LL;
  if ( a1[3].Ptr )
  {
    Ptr = a1[3].Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v10 = Ptr;
    v6 = Ptr;
  }
  if ( a1[2].Ptr )
  {
    v5 = a1[2].Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 8LL))(v5);
  }
  ReleaseSRWLockShared(a1 + 4);
  *a2 = 0LL;
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(PVOID, __int128 *, _QWORD *))(*(_QWORD *)v5 + 24LL))(v5, &xmmword_180050E58, a2);
  }
  else
  {
    if ( v6 )
    {
      v8 = sub_180025B2C(&v10, &xmmword_180050E58, a2);
      Ptr = v10;
      v7 = v8;
      goto LABEL_12;
    }
    v7 = 0;
  }
  if ( v5 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 16LL))(v5);
LABEL_12:
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  return v7;
}
