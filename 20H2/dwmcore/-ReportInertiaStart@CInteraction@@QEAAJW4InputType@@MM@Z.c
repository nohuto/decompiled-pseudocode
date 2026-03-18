/*
 * XREFs of ?ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z @ 0x1801C6264
 * Callers:
 *     ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x180210DC8 (-OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800EE947 (ceilf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::InputTypeToInertiaSourceType @ 0x1801C5BA8 (_anonymous_namespace_--InputTypeToInertiaSourceType.c)
 */

__int64 __fastcall CInteraction::ReportInertiaStart(__int64 a1, int a2, float a3, float a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v8; // rdi
  __m128 v9; // xmm6
  float v10; // xmm0_4
  __int64 v11; // rcx
  int v12; // eax
  int v13; // xmm0_4
  int v14; // xmm1_4
  int v15; // xmm0_4
  int v16; // xmm1_4
  int v17; // xmm0_4
  signed int LastError; // eax
  _DWORD v20[4]; // [rsp+38h] [rbp-29h] BYREF
  _DWORD v21[10]; // [rsp+48h] [rbp-19h] BYREF

  v4 = *(_QWORD *)(a1 + 104);
  v5 = 0;
  if ( v4 )
  {
    v8 = *(_QWORD *)(v4 + 16);
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      *(float *)v20 = a3;
      *(float *)&v20[1] = a4;
      v20[2] = anonymous_namespace_::InputTypeToInertiaSourceType(a2);
      v9 = (__m128)_mm_loadu_si128((const __m128i *)(v8 + 164));
      v21[0] = (int)ceilf_0(v9.m128_f32[0]);
      v21[1] = (int)ceilf_0(_mm_shuffle_ps(v9, v9, 85).m128_f32[0]);
      v21[2] = (int)ceilf_0(_mm_shuffle_ps(v9, v9, 170).m128_f32[0]);
      v10 = ceilf_0(_mm_shuffle_ps(v9, v9, 255).m128_f32[0]);
      v11 = *(unsigned int *)(a1 + 1696);
      v12 = (int)v10;
      v13 = *(_DWORD *)(a1 + 284);
      v21[4] = *(_DWORD *)(a1 + 280);
      v14 = *(_DWORD *)(a1 + 296);
      v21[5] = v13;
      v15 = *(_DWORD *)(a1 + 300);
      v21[3] = v12;
      v21[6] = v14;
      v16 = *(_DWORD *)(a1 + 328);
      v21[7] = v15;
      v17 = *(_DWORD *)(a1 + 332);
      v21[8] = v16;
      v21[9] = v17;
      if ( !(unsigned int)ReportInertia(v11, 5LL, 0LL, v20, v21) )
      {
        LastError = GetLastError();
        if ( LastError > 0 )
          v5 = (unsigned __int16)LastError | 0x80070000;
        else
          v5 = LastError;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  return v5;
}
