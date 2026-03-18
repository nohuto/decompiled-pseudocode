/*
 * XREFs of ?InitializeVSyncPhaseState@DXGADAPTER@@AEAAJXZ @ 0x1C01FFF5C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01FECEC (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002C48 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::InitializeVSyncPhaseState(DXGADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebp
  unsigned __int64 v6; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  char *v23; // rax
  char *v24; // rdi
  unsigned int v25; // esi
  __int64 v26; // rdi
  __int64 v27; // r14
  __int64 v28; // r13
  __int64 v29; // r15
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // rcx

  if ( (*((_DWORD *)this + 666) & 0x10) != 0 )
    v5 = *((_DWORD *)this + 386);
  else
    v5 = 1;
  v6 = 4LL * v5;
  if ( !is_mul_ok(v5, 4uLL) )
    v6 = -1LL;
  *((_QWORD *)this + 498) = operator new[](v6, 0x4B677844u, 64LL, a4);
  v8 = (unsigned __int64)v5 << 6;
  if ( !is_mul_ok(v5, 0x40uLL) )
    v8 = -1LL;
  *((_QWORD *)this + 499) = operator new[](v8, 0x4B677844u, 64LL, v7);
  v10 = (unsigned __int64)v5 << 6;
  if ( !is_mul_ok(v5, 0x40uLL) )
    v10 = -1LL;
  *((_QWORD *)this + 500) = operator new[](v10, 0x4B677844u, 64LL, v9);
  v12 = 32LL * v5;
  if ( !is_mul_ok(v5, 0x20uLL) )
    v12 = -1LL;
  *((_QWORD *)this + 501) = operator new[](v12, 0x4B677844u, 64LL, v11);
  v14 = 16LL * v5;
  if ( !is_mul_ok(v5, 0x10uLL) )
    v14 = -1LL;
  *((_QWORD *)this + 502) = operator new[](v14, 0x4B677844u, 64LL, v13);
  v16 = 4LL * v5;
  if ( !is_mul_ok(v5, 4uLL) )
    v16 = -1LL;
  *((_QWORD *)this + 503) = operator new[](v16, 0x4B677844u, 64LL, v15);
  v18 = 8LL * v5;
  if ( !is_mul_ok(v5, 8uLL) )
    v18 = -1LL;
  *((_QWORD *)this + 510) = operator new[](v18, 0x4B677844u, 64LL, v17);
  v20 = 8LL * v5;
  if ( !is_mul_ok(v5, 8uLL) )
    v20 = -1LL;
  *((_QWORD *)this + 509) = operator new[](v20, 0x4B677844u, 64LL, v19);
  v22 = 112LL * v5;
  if ( !is_mul_ok(v5, 0x70uLL) )
    v22 = -1LL;
  v23 = (char *)operator new[](v22, 0x4B677844u, 64LL, v21);
  v24 = v23;
  if ( v23 )
    `vector constructor iterator'(v23, 112LL, v5, (void (__fastcall *)(char *))VSYNC_TIME_STATS::VSYNC_TIME_STATS);
  else
    v24 = 0LL;
  *((_QWORD *)this + 511) = v24;
  if ( !*((_QWORD *)this + 498)
    || !*((_QWORD *)this + 499)
    || !*((_QWORD *)this + 500)
    || !*((_QWORD *)this + 501)
    || !*((_QWORD *)this + 502)
    || !*((_QWORD *)this + 503)
    || !*((_QWORD *)this + 510)
    || !*((_QWORD *)this + 509)
    || !v24 )
  {
    return 3221225495LL;
  }
  v25 = 0;
  if ( v5 )
  {
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    do
    {
      *(_DWORD *)(*((_QWORD *)this + 498) + v28) = 0;
      KeInitializeTimer((PKTIMER)(v30 + *((_QWORD *)this + 499)));
      *(_QWORD *)(v27 + *((_QWORD *)this + 502)) = this;
      *(_DWORD *)(*((_QWORD *)this + 502) + v27 + 8) = v25;
      KeInitializeDpc(
        (PRKDPC)(v30 + *((_QWORD *)this + 500)),
        (PKDEFERRED_ROUTINE)DxgkpVSyncPhaseTimerDpc,
        (PVOID)(v29 + *((_QWORD *)this + 502)));
      v31 = *((_QWORD *)this + 501);
      v28 += 4LL;
      v32 = v29 + *((_QWORD *)this + 502);
      v27 += 16LL;
      ++v25;
      v30 += 64LL;
      v29 += 16LL;
      *(_QWORD *)(v26 + v31 + 24) = v32;
      *(_QWORD *)(v26 + v31) = 0LL;
      *(_QWORD *)(v26 + v31 + 16) = DxgkpProcessVSyncPhaseThread;
      v26 += 32LL;
    }
    while ( v25 < v5 );
  }
  return 0LL;
}
