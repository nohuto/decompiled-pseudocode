/*
 * XREFs of ?InitializeVSyncPhaseState@DXGADAPTER@@AEAAJXZ @ 0x1C017C0C0
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C017B218 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::InitializeVSyncPhaseState(DXGADAPTER *this)
{
  unsigned int v2; // ebp
  SIZE_T v3; // rax
  SIZE_T v4; // rax
  SIZE_T v5; // rax
  SIZE_T v6; // rax
  SIZE_T v7; // rax
  SIZE_T v8; // rax
  SIZE_T v9; // rax
  SIZE_T v10; // rax
  PVOID v11; // rax
  unsigned int v12; // esi
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // r13
  __int64 v16; // r15
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rcx

  if ( (*((_DWORD *)this + 642) & 0x10) != 0 )
    v2 = *((_DWORD *)this + 362);
  else
    v2 = 1;
  v3 = 4LL * v2;
  if ( !is_mul_ok(v2, 4uLL) )
    v3 = -1LL;
  *((_QWORD *)this + 486) = operator new[](v3, 0x4B677844u, (POOL_TYPE)512);
  v4 = (unsigned __int64)v2 << 6;
  if ( !is_mul_ok(v2, 0x40uLL) )
    v4 = -1LL;
  *((_QWORD *)this + 487) = operator new[](v4, 0x4B677844u, (POOL_TYPE)512);
  v5 = (unsigned __int64)v2 << 6;
  if ( !is_mul_ok(v2, 0x40uLL) )
    v5 = -1LL;
  *((_QWORD *)this + 488) = operator new[](v5, 0x4B677844u, (POOL_TYPE)512);
  v6 = 32LL * v2;
  if ( !is_mul_ok(v2, 0x20uLL) )
    v6 = -1LL;
  *((_QWORD *)this + 489) = operator new[](v6, 0x4B677844u, (POOL_TYPE)512);
  v7 = 16LL * v2;
  if ( !is_mul_ok(v2, 0x10uLL) )
    v7 = -1LL;
  *((_QWORD *)this + 490) = operator new[](v7, 0x4B677844u, (POOL_TYPE)512);
  v8 = 4LL * v2;
  if ( !is_mul_ok(v2, 4uLL) )
    v8 = -1LL;
  *((_QWORD *)this + 491) = operator new(v8, 0x4B677844u, 1, (POOL_TYPE)512);
  v9 = 8LL * v2;
  if ( !is_mul_ok(v2, 8uLL) )
    v9 = -1LL;
  *((_QWORD *)this + 498) = operator new(v9, 0x4B677844u, 1, (POOL_TYPE)512);
  v10 = 8LL * v2;
  if ( !is_mul_ok(v2, 8uLL) )
    v10 = -1LL;
  v11 = operator new(v10, 0x4B677844u, 1, (POOL_TYPE)512);
  *((_QWORD *)this + 497) = v11;
  if ( !*((_QWORD *)this + 486)
    || !*((_QWORD *)this + 487)
    || !*((_QWORD *)this + 488)
    || !*((_QWORD *)this + 489)
    || !*((_QWORD *)this + 490)
    || !*((_QWORD *)this + 491)
    || !*((_QWORD *)this + 498)
    || !v11 )
  {
    return 3221225495LL;
  }
  v12 = 0;
  if ( v2 )
  {
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    do
    {
      *(_DWORD *)(*((_QWORD *)this + 486) + v15) = 0;
      KeInitializeTimer((PKTIMER)(v17 + *((_QWORD *)this + 487)));
      *(_QWORD *)(v14 + *((_QWORD *)this + 490)) = this;
      *(_DWORD *)(*((_QWORD *)this + 490) + v14 + 8) = v12;
      KeInitializeDpc(
        (PRKDPC)(v17 + *((_QWORD *)this + 488)),
        (PKDEFERRED_ROUTINE)DxgkpVSyncPhaseTimerDpc,
        (PVOID)(v16 + *((_QWORD *)this + 490)));
      v18 = *((_QWORD *)this + 489);
      v15 += 4LL;
      v19 = v16 + *((_QWORD *)this + 490);
      v14 += 16LL;
      ++v12;
      v17 += 64LL;
      v16 += 16LL;
      *(_QWORD *)(v13 + v18 + 24) = v19;
      *(_QWORD *)(v13 + v18) = 0LL;
      *(_QWORD *)(v13 + v18 + 16) = DxgkpProcessVSyncPhaseThread;
      v13 += 32LL;
    }
    while ( v12 < v2 );
  }
  return 0LL;
}
