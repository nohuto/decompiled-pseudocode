/*
 * XREFs of ?Animate@AssistantLightStrip@Lighting@TwinUI@@AEAAJHAEAV?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@@Z @ 0x18042DB2C
 * Callers:
 *     ?HandleState@AssistantLightStrip@Lighting@TwinUI@@UEAAXHW4AssistantState@2Cortana@@@Z @ 0x18042DDB0 (-HandleState@AssistantLightStrip@Lighting@TwinUI@@UEAAXHW4AssistantState@2Cortana@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x18008BE68 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18042D828 (--0-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall TwinUI::Lighting::AssistantLightStrip::Animate(__int64 a1, int a2, __int64 *a3)
{
  __int64 v4; // r10
  unsigned __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // rdx
  double v8; // xmm0_8
  __int64 v9; // rcx
  double v10; // xmm5_8
  __int128 i; // xmm6
  int v12; // r9d
  unsigned int v13; // r10d
  __int64 v14; // r11
  __int64 v15; // rdx
  char *v16; // rsi
  double v17; // xmm7_8
  double v18; // xmm8_8
  double v19; // xmm9_8
  int v20; // ecx
  __int128 v21; // xmm4
  int v22; // edi
  char *v23; // r8
  double v24; // xmm3_8
  double v25; // xmm2_8
  int v26; // eax
  unsigned int v27; // ebx
  void *v29[8]; // [rsp+30h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  int v31; // [rsp+A8h] [rbp+10h]

  v4 = *a3;
  v5 = (__int64)((unsigned __int128)((a3[1] - *a3) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2;
  std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(v29, v4 + 24 * (a2 % ((v5 >> 63) + v5)));
  v6 = *(_QWORD *)(a1 + 40);
  v7 = (*(_QWORD *)(a1 + 48) - v6) >> 2;
  if ( v7 < 0 )
  {
    v9 = ((*(_QWORD *)(a1 + 48) - v6) >> 2) & 1 | ((unsigned __int64)v7 >> 1);
    v8 = (double)(int)v9 + (double)(int)v9;
  }
  else
  {
    v8 = (double)(int)v7;
  }
  v10 = 12.0 / v8;
  i = 0LL;
  v12 = 0;
  v13 = 0;
  if ( v7 )
  {
    v14 = 0LL;
    LOBYTE(v31) = -1;
    v15 = 0LL;
    v16 = (char *)v29[0];
    do
    {
      v17 = 0.0;
      v18 = 0.0;
      v19 = 0.0;
      v20 = (int)*(double *)&i;
      *((_QWORD *)&v21 + 1) = *((_QWORD *)&i + 1);
      *(double *)&v21 = *(double *)&i + v10;
      if ( *(double *)&i + v10 > (double)(int)*(double *)&i )
      {
        v22 = v20 + 1;
        v23 = &v16[4 * v20 + 2];
        do
        {
          v24 = (double)v22;
          v25 = (fmin(*(double *)&v21, (double)v22) - fmax((double)v20, *(double *)&i)) / v10;
          v17 = v17 + (double)(unsigned __int8)*(v23 - 1) * v25;
          v18 = v18 + (double)(unsigned __int8)*v23 * v25;
          v19 = v19 + (double)(unsigned __int8)v23[1] * v25;
          ++v20;
          ++v22;
          v23 += 4;
        }
        while ( *(double *)&v21 > v24 );
        v6 = *(_QWORD *)(a1 + 40);
      }
      for ( i = v21; v12 <= *(_DWORD *)(v6 + 4 * v15); v6 = *(_QWORD *)(a1 + 40) )
      {
        BYTE2(v31) = (int)v18;
        HIBYTE(v31) = (int)v19;
        BYTE1(v31) = (int)v17;
        *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4 * v14) = v31;
        ++v12;
        ++v14;
      }
      v15 = ++v13;
    }
    while ( v13 < (unsigned __int64)((*(_QWORD *)(a1 + 48) - v6) >> 2) );
  }
  v26 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 208LL))(
          *(_QWORD *)(a1 + 8),
          (__int64)(*(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 64)) >> 2,
          *(_QWORD *)(a1 + 64),
          (__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 2,
          *(_QWORD *)(a1 + 16));
  v27 = v26;
  if ( v26 >= 0 )
    v27 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightstrip.cpp",
      (const char *)(unsigned int)v26);
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)v29);
  return v27;
}
