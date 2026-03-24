/*
 * XREFs of ObpRemoveObjectRoutine @ 0x1406F0440
 * Callers:
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     ObpProcessRemoveObjectQueue @ 0x140684B90 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     ObpFreeObject @ 0x1406F0520 (ObpFreeObject.c)
 */

__int64 __fastcall ObpRemoveObjectRoutine(__int64 a1, char a2)
{
  ULONG_PTR v4; // rdi
  void (__fastcall *v5)(__int64); // rax
  __int64 v7; // [rsp+60h] [rbp+8h] BYREF

  v4 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)];
  if ( (PADAPTER_OBJECT)v4 == ObpTypeObjectType )
    KeBugCheckEx(0xF4u, v4, a1 + 48, 0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, __int64 *, _DWORD, _QWORD, _BYTE))(v4 + 152))(
      a1 + 48,
      2LL,
      0LL,
      0LL,
      0LL,
      &v7,
      0,
      0LL,
      0);
  v5 = *(void (__fastcall **)(__int64))(v4 + 136);
  if ( v5 )
  {
    if ( !a2 )
    {
      *(_BYTE *)(a1 + 27) |= 0x80u;
      v5 = *(void (__fastcall **)(__int64))(v4 + 136);
    }
    v5(a1 + 48);
  }
  return ObpFreeObject(a1);
}
