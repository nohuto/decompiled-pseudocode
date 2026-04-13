/*
 * XREFs of ?_Locimp_Addfac@_Locimp@locale@std@@CAXPEAV123@PEAVfacet@23@_K@Z @ 0x1800B5388
 * Callers:
 *     ??0?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA@XZ @ 0x18004E224 (--0-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@2@@std.c)
 *     ?_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800B5568 (-_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800C03F8 (-_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800C1090 (-_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800C96F0 (-_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 * Callees:
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800B0158 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800B0AE4 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x1800B0B74 (--1_Lockit@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::locale::_Locimp::_Locimp_Addfac(void **a1, struct std::locale::facet *a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rdi
  void *v7; // rax
  __int64 v8; // rcx
  void (__fastcall ***v9)(_QWORD, __int64); // rax
  char v10; // [rsp+40h] [rbp+8h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v10, 0);
  if ( (unsigned __int64)a1[3] <= a3 )
  {
    v6 = a3 + 1;
    if ( a3 + 1 < 0x28 )
      v6 = 40LL;
    v7 = realloc(a1[2], 8 * v6);
    if ( !v7 )
      std::_Xbad_alloc();
    a1[2] = v7;
    while ( (unsigned __int64)a1[3] < v6 )
    {
      *((_QWORD *)a1[2] + (_QWORD)a1[3]) = 0LL;
      a1[3] = (char *)a1[3] + 1;
    }
  }
  (*(void (__fastcall **)(struct std::locale::facet *))(*(_QWORD *)a2 + 8LL))(a2);
  v8 = *((_QWORD *)a1[2] + a3);
  if ( v8 )
  {
    v9 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v9 )
      (**v9)(v9, 1LL);
  }
  *((_QWORD *)a1[2] + a3) = a2;
  std::_Lockit::~_Lockit((std::_Lockit *)&v10);
}
