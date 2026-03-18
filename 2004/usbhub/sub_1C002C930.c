/*
 * XREFs of sub_1C002C930 @ 0x1C002C930
 * Callers:
 *     sub_1C002CA30 @ 0x1C002CA30 (sub_1C002CA30.c)
 * Callees:
 *     sub_1C0001AE8 @ 0x1C0001AE8 (sub_1C0001AE8.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0015F10 @ 0x1C0015F10 (sub_1C0015F10.c)
 */

__int64 __fastcall sub_1C002C930(__int64 a1)
{
  volatile __int64 *v2; // rax
  volatile __int64 *v3; // rdi
  __int64 v4; // r9
  NTSTATUS v5; // esi
  struct _UNICODE_STRING Object; // [rsp+58h] [rbp+28h] BYREF

  Object.Buffer = 0LL;
  *(_QWORD *)&Object.Length = 0LL;
  v2 = (volatile __int64 *)sub_1C000F050(a1);
  v3 = v2;
  if ( (v2[320] & 1) != 0 )
  {
    *(_QWORD *)&Object.Length = *((_QWORD *)v2 + 151);
    sub_1C0001AE8(a1, *(__int64 *)&Object.Length, 1918062420);
    ObfReferenceObject(*(PVOID *)&Object.Length);
    v4 = _InterlockedExchange64(v3 + 152, *(__int64 *)&Object.Length);
    sub_1C000FD80(a1, 8, 1920091215, v4, *(__int64 *)&Object.Length);
    v5 = 0;
  }
  else
  {
    v5 = sub_1C0015F10(a1, 0x22000Fu, (ULONG_PTR)&Object.Buffer, &Object);
    if ( v5 >= 0 )
    {
      sub_1C0001AE8(a1, *(__int64 *)&Object.Length, 1918062420);
      _InterlockedExchange64(v3 + 152, *(__int64 *)&Object.Length);
      ObfDereferenceObject(Object.Buffer);
    }
  }
  sub_1C000FD80(a1, 8, 1733313615, v5, *(__int64 *)&Object.Length);
  return (unsigned int)v5;
}
