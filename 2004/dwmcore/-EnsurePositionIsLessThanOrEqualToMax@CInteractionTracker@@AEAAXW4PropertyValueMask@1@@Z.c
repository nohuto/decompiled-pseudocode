/*
 * XREFs of ?EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x1801CA988
 * Callers:
 *     ?NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ @ 0x1801CB518 (-NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ.c)
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801CD2F8 (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x1801CD678 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 */

__int64 __fastcall CInteractionTracker::EnsurePositionIsLessThanOrEqualToMax(__int64 a1, char a2)
{
  int v2; // eax
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]

  if ( !*(_DWORD *)(a1 + 168) && (*(_BYTE *)(a1 + 532) & 0x20) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 80);
    v4 = *(_QWORD *)(a1 + 72);
    v5 = v2;
    if ( (a2 & 1) != 0 )
      LODWORD(v4) = fminf(*(float *)(a1 + 72), *(float *)(a1 + 96));
    if ( (a2 & 2) != 0 )
      HIDWORD(v4) = fminf(*(float *)(a1 + 76), *(float *)(a1 + 100));
    v5 = 0;
    return CInteractionTracker::SetPosition(a1, &v4, 0LL);
  }
  return result;
}
