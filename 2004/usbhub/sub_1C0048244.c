/*
 * XREFs of sub_1C0048244 @ 0x1C0048244
 * Callers:
 *     sub_1C00461A0 @ 0x1C00461A0 (sub_1C00461A0.c)
 *     sub_1C0046540 @ 0x1C0046540 (sub_1C0046540.c)
 *     sub_1C005A9D0 @ 0x1C005A9D0 (sub_1C005A9D0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C0048244(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const wchar_t *a6, ...)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  const wchar_t *v11; // rcx
  bool v12; // zf
  int v14; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v7 = -1LL;
  if ( (HIDWORD(DeviceObject->Timer) & 1) != 0 )
  {
    if ( a6 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( a6[v9] );
      v10 = 2 * v9 + 2;
    }
    else
    {
      v10 = 10LL;
    }
    v11 = a6;
    if ( !a6 )
      v11 = L"NULL";
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))qword_1C006B728)(
      DeviceObject->AttachedDevice,
      43LL,
      &unk_1C0063940,
      64LL,
      v11,
      v10,
      va,
      4LL,
      0LL);
  }
  v12 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v12 = a6 == 0LL;
  }
  if ( v12 )
    v6 = L"NULL";
  LOWORD(v14) = 64;
  return WppAutoLogTrace(a1, 0LL, 1LL, &unk_1C0063940, v14, v6);
}
