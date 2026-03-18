/*
 * XREFs of ?Lock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@IPEAPEAX@Z @ 0x1C0317280
 * Callers:
 *     DxgkLock2Internal @ 0x1C0317934 (DxgkLock2Internal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::Lock2(DXGDEVICE *this, struct DXGALLOCATION *a2, __int64 a3, void **a4)
{
  DXGDEVICE *v5; // r9

  v5 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  if ( v5 == this )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                              + 648LL)
                                                                                  + 8LL)
                                                                      + 824LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
             *((_QWORD *)a2 + 3),
             0LL,
             a4);
  WdLogSingleEntry4(3LL, a2, this, v5, -1073741811LL);
  return 3221225485LL;
}
