/*
 * XREFs of ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAAEAUPointData3D@@AEBU2@@Z @ 0x180074EC0
 * Callers:
 *     _lambda_ca1dd57b0795afeb4485e1a66ba69688_::operator() @ 0x1800752EC (_lambda_ca1dd57b0795afeb4485e1a66ba69688_--operator().c)
 *     ?GetPoints@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x18007D7E0 (-GetPoints@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV-$vector@UPointData3D@@V-$.c)
 *     ?GetPoints@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x180189B70 (-GetPoints@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV-$vector@UPointData3D@@V-.c)
 *     ?GetPoints@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x18018C9C0 (-GetPoints@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV-$vector@UPointData3D@@V.c)
 *     ?GetPoints@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x180192190 (-GetPoints@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV-$vector@UPointData3D@@.c)
 *     ?GetPoints@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x1801956B0 (-GetPoints@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV-$vector@UPointData3D@@V-.c)
 *     ?GetPoints@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x180198270 (-GetPoints@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV-$vector@UPointData3D@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<PointData3D>::emplace_back<PointData3D const &>(__int64 a1, _OWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int128 v5; // xmm0
  _OWORD *v6; // r8
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) == v3 )
    return std::vector<PointData3D>::_Emplace_reallocate<PointData3D const &>((const void **)a1, (_BYTE *)v3, a2);
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
  *(_QWORD *)(v4 + 48) = *((_QWORD *)v6 + 6);
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 184;
  return result;
}
