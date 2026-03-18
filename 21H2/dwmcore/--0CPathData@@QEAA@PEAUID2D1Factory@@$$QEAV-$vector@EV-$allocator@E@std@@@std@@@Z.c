/*
 * XREFs of ??0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18026F8F4
 * Callers:
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x1802A038C (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x1802A0C90 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPathData::CPathData(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CPathData::`vftable';
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 16) = *a3;
  *(_QWORD *)(a1 + 24) = a3[1];
  *(_QWORD *)(a1 + 32) = a3[2];
  *a3 = 0LL;
  a3[1] = 0LL;
  a3[2] = 0LL;
  *(_QWORD *)(a1 + 40) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_DWORD *)(a1 + 52) = 0;
  result = a1;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_BYTE *)(a1 + 72) = 0;
  return result;
}
