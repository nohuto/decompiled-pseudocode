/*
 * XREFs of ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C01E7508
 * Callers:
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C016AE0C (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::EnsurePriviledgedDmaPool(DXGCONTEXT *this, int a2, int a3)
{
  __int64 v6; // rax
  int v7; // ebx
  char v9; // [rsp+20h] [rbp-48h]

  if ( *((_QWORD *)this + 29) )
    return 0LL;
  v9 = 1;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, char, _DWORD, int, int, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL) + 8LL) + 448LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 656LL),
         *((unsigned int *)this + 100),
         *(_QWORD *)(*((_QWORD *)this + 2) + 760LL),
         this,
         v9,
         *((_DWORD *)this + 50),
         a2,
         a3,
         *((_DWORD *)this + 51),
         *((_DWORD *)this + 52));
  *((_QWORD *)this + 29) = v6;
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL)
                                                        + 8LL)
                                            + 456LL))(v6);
    if ( v7 >= 0 )
    {
      *((_DWORD *)this + 53) = a2;
      *((_DWORD *)this + 54) = a3;
      return 0LL;
    }
  }
  else
  {
    v7 = -1073741801;
    WdLogSingleEntry2(3LL, this, -1073741801LL);
  }
  if ( *((_QWORD *)this + 29) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL) + 8LL) + 464LL))();
    *((_QWORD *)this + 29) = 0LL;
  }
  return (unsigned int)v7;
}
