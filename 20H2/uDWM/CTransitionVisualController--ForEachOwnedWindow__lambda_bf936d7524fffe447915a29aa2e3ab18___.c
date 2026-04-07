/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__lambda_bf936d7524fffe447915a29aa2e3ab18___ @ 0x180050D00
 * Callers:
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x180050C00 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_bf936d7524fffe447915a29aa2e3ab18___ @ 0x180050D00 (CTransitionVisualController--ForEachOwnedWindow__lambda_bf936d7524fffe447915a29aa2e3ab18___.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_bf936d7524fffe447915a29aa2e3ab18___ @ 0x180050D00 (CTransitionVisualController--ForEachOwnedWindow__lambda_bf936d7524fffe447915a29aa2e3ab18___.c)
 *     _lambda_bf936d7524fffe447915a29aa2e3ab18_::operator() @ 0x180050DC8 (_lambda_bf936d7524fffe447915a29aa2e3ab18_--operator().c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__lambda_bf936d7524fffe447915a29aa2e3ab18___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  int v3; // r9d
  __int64 v6; // rax
  __int64 i; // rdi
  __int64 v8; // rsi

  v3 = 0;
  if ( !a3 || (*(_DWORD *)(a1 + 616) & 0x10000000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 384);
    if ( !v6 || (*(_BYTE *)(v6 + 240) & 0x18) == 0 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 568); i = (unsigned int)(i + 1) )
      {
        if ( v3 < 0 )
          break;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 8 * i);
        if ( (*(_DWORD *)(v8 + 616) & 0xFFF) == 0xFFF )
        {
          v3 = lambda_bf936d7524fffe447915a29aa2e3ab18_::operator()(a2, *(_QWORD *)(*(_QWORD *)(a1 + 544) + 8 * i));
          if ( v3 >= 0 )
            v3 = CTransitionVisualController::ForEachOwnedWindow__lambda_bf936d7524fffe447915a29aa2e3ab18___(
                   v8,
                   a2,
                   0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
