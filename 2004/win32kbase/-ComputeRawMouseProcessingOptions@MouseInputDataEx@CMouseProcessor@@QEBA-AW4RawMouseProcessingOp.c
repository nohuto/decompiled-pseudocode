/*
 * XREFs of ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1C0071A4C
 * Callers:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x1C007169C (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 * Callees:
 *     ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x1C00463EC (-TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePo.c)
 *     IsEditionPostRawMouseInputMessageSupported @ 0x1C0069514 (IsEditionPostRawMouseInputMessageSupported.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0071B9C (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ApiSetEditionPreserveSystemClippedMouseInput @ 0x1C0071BD8 (ApiSetEditionPreserveSystemClippedMouseInput.c)
 */

__int64 __fastcall CMouseProcessor::MouseInputDataEx::ComputeRawMouseProcessingOptions(__int64 a1)
{
  int v2; // ebx
  int v3; // edi
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebp
  unsigned int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9

  v2 = *(_DWORD *)(a1 + 88) == 0 ? 0x20 : 0;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 4096LL) )
    v2 |= 2u;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 128LL) )
    v2 |= 8u;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 32LL) )
    v2 |= 1u;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 2048LL) )
    v2 |= 0x40u;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 0x4000LL) )
    v2 |= 0x100u;
  v3 = v2 | 4;
  if ( (*(_BYTE *)(a1 + 2) & 8) == 0 )
    v3 = v2;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 1024LL) )
    v3 |= 0x400u;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 16LL) )
    v3 |= 0x80u;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 0x8000LL) )
    v3 |= 0x200u;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 8LL) )
    v3 |= 0x2000u;
  if ( *(_DWORD *)(a1 + 88)
    || CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult(a1, 8LL, v4, v5)
    || (unsigned int)IsEditionPostRawMouseInputMessageSupported() == -1073741637 )
  {
    v3 |= 0x10u;
  }
  v6 = v3 | 0x800;
  if ( *(_DWORD *)(a1 + 88) != 4 )
    v6 = v3;
  v7 = v6;
  if ( (unsigned int)ApiSetEditionPreserveSystemClippedMouseInput()
    && CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult(a1, 2LL, v8, v9) )
  {
    return v6 | 0x1000u;
  }
  return v7;
}
