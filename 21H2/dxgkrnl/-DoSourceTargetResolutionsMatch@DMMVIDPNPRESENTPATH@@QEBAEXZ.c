/*
 * XREFs of ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0005C38
 * Callers:
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0005AA0 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0110740 (-UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PE.c)
 *     BmlPinPathContentScaling @ 0x1C013E9C4 (BmlPinPathContentScaling.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0110AB0 (-IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

char __fastcall DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch(DMMVIDPNPRESENTPATH *this, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  char v14; // di
  void (__fastcall ***v15)(_QWORD, __int64); // rcx
  int v16; // ebx
  void (__fastcall ***v17)(_QWORD, __int64); // rcx
  int v18; // ebx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+30h] [rbp+8h]

  v3 = *((_QWORD *)this + 11);
  v4 = *(_QWORD *)(v3 + 104);
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 96));
    v5 = *(_QWORD *)(v3 + 104);
  }
  else
  {
    v5 = 0LL;
  }
  v6 = *((_QWORD *)this + 12);
  v7 = *(_QWORD *)(v6 + 104);
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 96));
    v8 = *(_QWORD *)(v6 + 104);
  }
  else
  {
    v8 = 0LL;
  }
  v9 = *(_QWORD *)(v8 + 144);
  v10 = *((_DWORD *)this + 29);
  v22 = *(_QWORD *)(*(_QWORD *)(v5 + 144) + 76LL);
  v11 = v10 - 1;
  if ( (unsigned int)(v10 - 1) <= 0xF )
  {
    a2 = (unsigned int)(v11 >> 31);
    LODWORD(a2) = v11 % 4;
    v10 = v11 / 4 + 1;
  }
  if ( ((v10 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( v10 == 254 && DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation(this) )
    {
      v12 = v22;
      v13 = HIDWORD(v22);
      if ( v22 == *(_QWORD *)(v9 + 84) )
      {
LABEL_11:
        v14 = 1;
        goto LABEL_12;
      }
    }
    else
    {
      v12 = HIDWORD(v22);
      v13 = v22;
    }
  }
  else
  {
    v12 = *(_QWORD *)(*(_QWORD *)(v5 + 144) + 76LL);
    v13 = HIDWORD(*(_QWORD *)(*(_QWORD *)(v5 + 144) + 76LL));
  }
  if ( v13 == *(_DWORD *)(v9 + 84) && v12 == *(_DWORD *)(v9 + 88) )
    goto LABEL_11;
  v14 = 0;
LABEL_12:
  v15 = (void (__fastcall ***)(_QWORD, __int64))(v8 + 88);
  v16 = _InterlockedDecrement((volatile signed __int32 *)(v8 + 96));
  if ( v16 )
  {
    if ( v16 < 0 )
    {
      v20 = WdLogNewEntry5_WdError(v15, a2);
      *(_QWORD *)(v20 + 24) = v16;
      WdLogEvent5_WdError(v20);
    }
  }
  else if ( v8 != -88 )
  {
    (**v15)(v15, 1LL);
  }
  v17 = (void (__fastcall ***)(_QWORD, __int64))(v5 + 88);
  v18 = _InterlockedDecrement((volatile signed __int32 *)(v5 + 96));
  if ( v18 )
  {
    if ( v18 < 0 )
    {
      v21 = WdLogNewEntry5_WdError(v17, a2);
      *(_QWORD *)(v21 + 24) = v18;
      WdLogEvent5_WdError(v21);
    }
  }
  else if ( v5 != -88 )
  {
    (**v17)(v17, 1LL);
  }
  return v14;
}
