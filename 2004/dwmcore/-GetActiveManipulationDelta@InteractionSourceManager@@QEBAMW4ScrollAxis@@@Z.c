/*
 * XREFs of ?GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x180212414
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1801CB9E0 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1802028BC (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ??0CScrollPositionKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x180203C0C (--0CScrollPositionKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1801CB194 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180213348 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

__m128 __fastcall InteractionSourceManager::GetActiveManipulationDelta(InteractionSourceManager *a1)
{
  __m128 v2; // xmm6
  int v3; // r10d
  int v4; // r10d
  struct CManipulation *ActiveManipulation; // rax
  struct CManipulation *v6; // rax
  __m128 v7; // xmm6
  struct CManipulation *v8; // rax
  __int64 v9; // rcx
  _DWORD v11[16]; // [rsp+28h] [rbp-19h] BYREF
  __int64 v12; // [rsp+68h] [rbp+27h]
  int v13; // [rsp+70h] [rbp+2Fh]
  char v14; // [rsp+74h] [rbp+33h]

  v2 = 0LL;
  if ( !InteractionSourceManager::HasActiveManipulation(a1) )
    return v2;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
        return v2;
      memset_0(v11, 0, sizeof(v11));
      v12 = 0LL;
      v13 = 18;
      v14 = 0;
      ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(a1);
      (*(void (__fastcall **)(struct CManipulation *, __int64, _DWORD *))(*(_QWORD *)ActiveManipulation + 144LL))(
        ActiveManipulation,
        3LL,
        v11);
      v2 = (__m128)v11[0];
      goto LABEL_9;
    }
    memset_0(v11, 0, sizeof(v11));
    v12 = 0LL;
    v13 = 18;
    v14 = 0;
    v6 = InteractionSourceManager::TryGetActiveManipulation(a1);
    (*(void (__fastcall **)(struct CManipulation *, __int64, _DWORD *))(*(_QWORD *)v6 + 144LL))(v6, 1LL, v11);
    v7 = (__m128)v11[1];
  }
  else
  {
    memset_0(v11, 0, sizeof(v11));
    v12 = 0LL;
    v13 = 18;
    v14 = 0;
    v8 = InteractionSourceManager::TryGetActiveManipulation(a1);
    (*(void (__fastcall **)(struct CManipulation *, __int64, _DWORD *))(*(_QWORD *)v8 + 144LL))(v8, 1LL, v11);
    v7 = (__m128)v11[0];
  }
  v2 = _mm_xor_ps(v7, (__m128)_xmm);
LABEL_9:
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v2;
}
