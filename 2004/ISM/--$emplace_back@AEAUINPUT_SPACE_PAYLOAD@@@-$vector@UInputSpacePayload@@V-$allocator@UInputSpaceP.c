/*
 * XREFs of ??$emplace_back@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAAAEAUInputSpacePayload@@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x18012BBDC
 * Callers:
 *     ??$emplace@UHeatInputConfigContextMessage@@AEAKAEAPEAUINPUT_SPACE_PAYLOAD@@$00$0A@@?$variant@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@@std@@QEAAAEAUHeatInputConfigContextMessage@@AEAKAEAPEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x18012BB34 (--$emplace@UHeatInputConfigContextMessage@@AEAKAEAPEAUINPUT_SPACE_PAYLOAD@@$00$0A@@-$variant@Umo.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAAPEAUInputSpacePayload@@QEAU2@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x18012A8FC (--$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UInputSpacePayload@@V-$allocator@UInpu.c)
 *     ??$emplace_back@AEAUINPUT_SPACE_REGION@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@QEAAAEAUINPUT_SPACE_REGION@@AEAU2@@Z @ 0x18012BC9C (--$emplace_back@AEAUINPUT_SPACE_REGION@@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE.c)
 *     ?_Reallocate_exactly@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX_K@Z @ 0x18012D880 (-_Reallocate_exactly@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::vector<InputSpacePayload>::emplace_back<INPUT_SPACE_PAYLOAD &>(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r14
  unsigned int v6; // edi
  int v7; // eax
  __int64 result; // rax

  v4 = a1[1];
  if ( a1[2] == v4 )
    return std::vector<InputSpacePayload>::_Emplace_reallocate<INPUT_SPACE_PAYLOAD &>(a1, v4, a2);
  *(_QWORD *)v4 = *(_QWORD *)a2;
  *(_DWORD *)(v4 + 8) = *(_DWORD *)(a2 + 8);
  v5 = v4 + 16;
  v6 = 0;
  *(_QWORD *)(v4 + 16) = 0LL;
  *(_QWORD *)(v4 + 24) = 0LL;
  *(_QWORD *)(v4 + 32) = 0LL;
  v7 = *(_DWORD *)(a2 + 12);
  if ( v7 )
  {
    std::vector<INPUT_SPACE_REGION>::_Reallocate_exactly(v5);
    v7 = *(_DWORD *)(a2 + 12);
  }
  if ( v7 )
  {
    do
      std::vector<INPUT_SPACE_REGION>::emplace_back<INPUT_SPACE_REGION &>(v5, *(_QWORD *)(a2 + 16) + 200LL * v6++);
    while ( v6 < *(_DWORD *)(a2 + 12) );
  }
  result = a1[1];
  a1[1] = result + 40;
  return result;
}
