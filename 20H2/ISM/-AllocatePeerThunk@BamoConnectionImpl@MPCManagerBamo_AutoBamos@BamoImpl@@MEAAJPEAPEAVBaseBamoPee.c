/*
 * XREFs of ?AllocatePeerThunk@BamoConnectionImpl@MPCManagerBamo_AutoBamos@BamoImpl@@MEAAJPEAPEAVBaseBamoPeer@Bamo@Microsoft@@@Z @ 0x1800118E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::MPCManagerBamo_AutoBamos::BamoConnectionImpl::AllocatePeerThunk(
        BamoImpl::MPCManagerBamo_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::Bamo::BaseBamoPeer **a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  struct Microsoft::Bamo::BaseBamoPeer *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 2);
  v5 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, struct Microsoft::Bamo::BaseBamoPeer **))(*(_QWORD *)v2 + 40LL))(v2, &v5);
  *a2 = v5;
  return result;
}
