/*
 * XREFs of ?InitializeDefaultPlaceholderPeer@BamoConnectionImpl@MPCManagerBamo_AutoBamos@BamoImpl@@MEAAJPEAPEAVBaseBamoPeer@Bamo@Microsoft@@@Z @ 0x18003FDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z @ 0x1800729AC (-Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z.c)
 */

__int64 __fastcall BamoImpl::MPCManagerBamo_AutoBamos::BamoConnectionImpl::InitializeDefaultPlaceholderPeer(
        BamoImpl::MPCManagerBamo_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::Bamo::BaseBamoPeer **a2)
{
  Microsoft::BamoImpl::BaseBamoPeerImpl *v4; // rax
  Microsoft::BamoImpl::BaseBamoPeerImpl *v5; // rbx
  __int64 result; // rax
  unsigned int v7; // [rsp+20h] [rbp-18h]
  struct Microsoft::Bamo::BaseBamoPeer *v8; // [rsp+50h] [rbp+18h]

  v8 = (struct Microsoft::Bamo::BaseBamoPeer *)operator new(0x48uLL);
  *(_QWORD *)v8 = &MPCManagerBamo_AutoBamos::BamoPeer::`vftable';
  *((_QWORD *)v8 + 4) = 0LL;
  *((_QWORD *)v8 + 5) = 0LL;
  *((_DWORD *)v8 + 12) = 0;
  *((_WORD *)v8 + 26) = 0;
  *((_QWORD *)v8 + 7) = 0LL;
  *((_QWORD *)v8 + 8) = 0LL;
  *((_QWORD *)v8 + 1) = &BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl::`vftable';
  *((_DWORD *)v8 + 4) = 1;
  *((_QWORD *)v8 + 3) = v8;
  v4 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)(*(__int64 (__fastcall **)(struct Microsoft::Bamo::BaseBamoPeer *))(*(_QWORD *)v8 + 8LL))(v8);
  v7 = *((_DWORD *)this + 9);
  v5 = v4;
  *((_DWORD *)this + 9) = v7 + 1;
  Microsoft::BamoImpl::BaseBamoPeerImpl::Initialize(v4, this, 0, v7, v7);
  result = 0LL;
  *((_BYTE *)v5 + 44) = 1;
  *a2 = v8;
  return result;
}
