/*
 * XREFs of ??$emplace_back@AEAUINPUT_SPACE_REGION@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@QEAAAEAUINPUT_SPACE_REGION@@AEAU2@@Z @ 0x18012C0FC
 * Callers:
 *     ??$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAAPEAUInputSpacePayload@@QEAU2@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x18012AD5C (--$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UInputSpacePayload@@V-$allocator@UInpu.c)
 *     ??$emplace_back@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAAAEAUInputSpacePayload@@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x18012C03C (--$emplace_back@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UInputSpacePayload@@V-$allocator@UInputSpaceP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<INPUT_SPACE_REGION>::emplace_back<INPUT_SPACE_REGION &>(__int64 a1, _OWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int128 v5; // xmm0
  _OWORD *v6; // r8
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) == v3 )
    return std::vector<INPUT_SPACE_REGION>::_Emplace_reallocate<INPUT_SPACE_REGION &>(
             (const void **)a1,
             (_BYTE *)v3,
             a2);
  *(_OWORD *)v3 = *a2;
  *(_OWORD *)(v3 + 16) = a2[1];
  *(_OWORD *)(v3 + 32) = a2[2];
  *(_OWORD *)(v3 + 48) = a2[3];
  *(_OWORD *)(v3 + 64) = a2[4];
  *(_OWORD *)(v3 + 80) = a2[5];
  *(_OWORD *)(v3 + 96) = a2[6];
  v4 = v3 + 128;
  v5 = a2[7];
  v6 = a2 + 8;
  *(_OWORD *)(v4 - 16) = v5;
  *(_OWORD *)v4 = *v6;
  *(_OWORD *)(v4 + 16) = v6[1];
  *(_OWORD *)(v4 + 32) = v6[2];
  *(_OWORD *)(v4 + 48) = v6[3];
  *(_QWORD *)(v4 + 64) = *((_QWORD *)v6 + 8);
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 200;
  return result;
}
