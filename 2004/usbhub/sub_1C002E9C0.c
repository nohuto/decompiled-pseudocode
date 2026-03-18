/*
 * XREFs of sub_1C002E9C0 @ 0x1C002E9C0
 * Callers:
 *     sub_1C002D07C @ 0x1C002D07C (sub_1C002D07C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C002E9C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const char *a6, ...)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  const char *v8; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdx
  const char *v12; // r9
  __int64 v13; // r8
  __int64 v14; // r8
  const char *v15; // rcx
  __int64 v16; // rax
  int v18; // [rsp+20h] [rbp-68h]
  __int64 v19; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  const char *v21; // [rsp+C8h] [rbp+40h]
  va_list va1; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v19 = va_arg(va1, _QWORD);
  v21 = va_arg(va1, const char *);
  v6 = (__int64)v21;
  v7 = -1LL;
  v8 = a6;
  if ( (HIDWORD(DeviceObject->Timer) & 1) != 0 )
  {
    if ( v21 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( v21[v10] );
      v11 = v10 + 1;
    }
    else
    {
      v11 = 5LL;
    }
    v12 = v21;
    if ( !v21 )
      v12 = "NULL";
    if ( a6 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a6[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = a6;
    if ( !a6 )
      v15 = "NULL";
    qword_1C006B728(
      DeviceObject->AttachedDevice,
      43LL,
      &unk_1C0062088,
      20LL,
      v15,
      v14,
      (__int64 *)va,
      4LL,
      v12,
      v11,
      va1,
      4LL,
      0LL);
  }
  if ( v6 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(v6 + v16) );
  }
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
  }
  if ( !a6 )
    v8 = "NULL";
  LOWORD(v18) = 20;
  return WppAutoLogTrace(a1, 0LL, 1LL, &unk_1C0062088, v18, v8);
}
