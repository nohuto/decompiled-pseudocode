/*
 * XREFs of sub_1C005BDC4 @ 0x1C005BDC4
 * Callers:
 *     sub_1C005ADEC @ 0x1C005ADEC (sub_1C005ADEC.c)
 *     sub_1C005B07C @ 0x1C005B07C (sub_1C005B07C.c)
 *     sub_1C005D550 @ 0x1C005D550 (sub_1C005D550.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C005BDC4(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7)
{
  __int64 v7; // rsi
  const wchar_t *v8; // rdi
  unsigned int v9; // r15d
  unsigned int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // r9
  const wchar_t *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r8
  const wchar_t *v17; // rcx
  __int64 v18; // rax
  bool v19; // zf
  int v21; // [rsp+20h] [rbp-58h]

  v7 = -1LL;
  v8 = a6;
  v9 = a4;
  v11 = a2;
  if ( (HIDWORD(DeviceObject->Timer) & 1) != 0 && BYTE1(DeviceObject->Timer) >= a2 )
  {
    if ( a7 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a7[v12] );
      v13 = 2 * v12 + 2;
    }
    else
    {
      v13 = 10LL;
    }
    v14 = a7;
    if ( !a7 )
      v14 = L"NULL";
    if ( a6 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a6[v15] );
      v16 = 2 * v15 + 2;
    }
    else
    {
      v16 = 10LL;
    }
    v17 = a6;
    if ( !a6 )
      v17 = L"NULL";
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, __int64, _QWORD, const wchar_t *, __int64, const wchar_t *, __int64, _QWORD))qword_1C006B728)(
      DeviceObject->AttachedDevice,
      43LL,
      a5,
      v9,
      v17,
      v16,
      v14,
      v13,
      0LL);
  }
  if ( a7 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a7[v18] );
  }
  v19 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v19 = a6 == 0LL;
  }
  if ( v19 )
    v8 = L"NULL";
  LOWORD(v21) = v9;
  return WppAutoLogTrace(a1, v11, 1LL, a5, v21, v8);
}
