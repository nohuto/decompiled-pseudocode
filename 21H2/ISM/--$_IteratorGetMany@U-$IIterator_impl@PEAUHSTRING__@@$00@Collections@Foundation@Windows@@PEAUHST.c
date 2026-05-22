/*
 * XREFs of ??$_IteratorGetMany@U?$IIterator_impl@PEAUHSTRING__@@$00@Collections@Foundation@Windows@@PEAUHSTRING__@@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@PEAUHSTRING__@@$00@123@IPEAPEAUHSTRING__@@PEAI@Z @ 0x18010F660
 * Callers:
 *     ?GetMany@?$IIterator_impl@PEAUHSTRING__@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRING__@@PEAI@Z @ 0x180115650 (-GetMany@-$IIterator_impl@PEAUHSTRING__@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRIN.c)
 * Callees:
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$_Cleanup@I@Detail@Collections@Foundation@Windows@@YAXPEAPEAUHSTRING__@@I@Z @ 0x18010F48C (--$_Cleanup@I@Detail@Collections@Foundation@Windows@@YAXPEAPEAUHSTRING__@@I@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_IteratorGetMany<Windows::Foundation::Collections::IIterator_impl<HSTRING__ *,1>,HSTRING__ *>(
        __int64 a1,
        unsigned int a2,
        void *a3,
        unsigned int *a4)
{
  __int64 v8; // rdi
  int v9; // ebx
  char v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0;
  v8 = 0LL;
  memset_0(a3, 0, 8LL * a2);
  *a4 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 56LL))(a1, &v11);
  if ( v9 < 0 )
    goto LABEL_8;
  do
  {
    if ( !v11 || (unsigned int)v8 >= a2 )
      break;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, (__int64)a3 + 8 * v8);
    if ( v9 < 0 )
      goto LABEL_8;
    v8 = (unsigned int)(v8 + 1);
    v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 64LL))(a1, &v11);
  }
  while ( v9 >= 0 );
  if ( v9 < 0 )
LABEL_8:
    Windows::Foundation::Collections::Detail::_Cleanup<unsigned int>((HSTRING *)a3, *a4);
  else
    *a4 = v8;
  return (unsigned int)v9;
}
