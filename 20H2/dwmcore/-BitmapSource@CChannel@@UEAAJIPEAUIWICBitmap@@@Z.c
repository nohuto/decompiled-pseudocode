/*
 * XREFs of ?BitmapSource@CChannel@@UEAAJIPEAUIWICBitmap@@@Z @ 0x1800D33B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800688AC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180068DB4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800691E0 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannel::BitmapSource(CChannel *this, unsigned int a2, struct IWICBitmap *a3)
{
  unsigned int v6; // ebx
  _DWORD v8[2]; // [rsp+20h] [rbp-18h] BYREF
  struct IWICBitmap *v9; // [rsp+28h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 11);
  if ( a3 )
    ((void (__fastcall *)(struct IWICBitmap *))a3->lpVtbl->AddRef)(a3);
  v8[0] = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v8[1] = a2;
  v9 = a3;
  v6 = CChannel::SendCommand(this, v8, 0x10u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v10);
  return v6;
}
