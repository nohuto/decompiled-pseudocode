/*
 * XREFs of sub_18004A4F4 @ 0x18004A4F4
 * Callers:
 *     sub_18004997C @ 0x18004997C (sub_18004997C.c)
 *     sub_180049F80 @ 0x180049F80 (sub_180049F80.c)
 *     sub_180125A30 @ 0x180125A30 (sub_180125A30.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18004A4F4(_QWORD *a1, __int128 *a2, ULONG a3, ULONG *a4)
{
  HRESULT v6; // ebx
  __int16 v7; // ax
  __int128 v9; // [rsp+20h] [rbp-48h] BYREF
  int v10; // [rsp+30h] [rbp-38h]
  PROPVARIANT propvarIn[4]; // [rsp+40h] [rbp-28h] BYREF

  *a4 = 0;
  LOWORD(propvarIn[0]) = 0;
  v9 = *a2;
  v10 = *((_DWORD *)a2 + 4);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(*(_QWORD *)*a1 + 40LL))(*a1, &v9, propvarIn);
  v7 = (__int16)propvarIn[0];
  if ( v6 >= 0 )
  {
    if ( !LOWORD(propvarIn[0]) )
      v6 = -2147023728;
    if ( v6 >= 0 )
    {
      *a4 = 0;
      if ( v7 )
        v6 = PropVariantToUInt32(propvarIn, a4);
      else
        v6 = -2147023728;
    }
  }
  PropVariantClear(propvarIn);
  if ( v6 == -2147023728 )
  {
    *a4 = a3;
    return 0;
  }
  return (unsigned int)v6;
}
