/*
 * XREFs of ?UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x1801BD2CC
 * Callers:
 *     ?UnregisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@@Z @ 0x180195864 (-UnregisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@@Z.c)
 * Callees:
 *     ?Create@?$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x18004A518 (-Create@-$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReaderUnregistered@DataProviderProxy@@QEAAXXZ @ 0x1801BE4A4 (-ReaderUnregistered@DataProviderProxy@@QEAAXXZ.c)
 */

__int64 __fastcall DataSourceProxy::UnregisterReader(DataSourceProxy *this, struct CDataSourceReader *a2)
{
  _QWORD *v3; // rbx
  struct CWeakResourceReference *v4; // rsi
  struct CWeakResourceReference *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( ((*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    v6 = 0LL;
    CWeakReference<CResource>::Create(a2, &v6);
    v3 = (_QWORD *)*((_QWORD *)this + 25);
    v4 = v6;
    while ( v3 != *((_QWORD **)this + 26) )
    {
      if ( (struct CWeakResourceReference *)*v3 == v6 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 8LL))(*v3);
        memmove_0(v3, v3 + 1, *((_QWORD *)this + 26) - (_QWORD)(v3 + 1));
        *((_QWORD *)this + 26) -= 8LL;
        DataProviderProxy::ReaderUnregistered(*((DataProviderProxy **)this + 24));
        break;
      }
      ++v3;
    }
    (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  return 0LL;
}
