/*
 * XREFs of ?ReplaceAll@?$IVector_impl@U_GUID@@$00@Collections@Foundation@Windows@@UEAAJIPEAU_GUID@@@Z @ 0x180037E70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::IVector_impl<_GUID,1>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int128 *a3)
{
  int v6; // esi
  unsigned int v7; // ebx
  __int64 (__fastcall *v8)(__int64, __int128 *); // rax
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
  if ( v6 >= 0 )
  {
    v7 = 0;
    if ( a2 )
    {
      while ( 1 )
      {
        v8 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a1 + 104LL);
        v10 = *a3;
        v6 = v8(a1, &v10);
        if ( v6 < 0 )
          break;
        ++v7;
        ++a3;
        if ( v7 >= a2 )
          return (unsigned int)v6;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
    }
  }
  return (unsigned int)v6;
}
