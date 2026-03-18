/*
 * XREFs of ?SubmitBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIPEAXI@Z @ 0x18016B800
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180150424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@PEBVCVisual@@@?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@QEAAPEAPEBVCVisual@@QEAPEBV2@$$QEAPEBV2@@Z @ 0x180168C68 (--$_Emplace_reallocate@PEBVCVisual@@@-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@std@@@std@.c)
 *     ?TryFindBufferStream@BufferingMessageCallHost@BamoImpl@Microsoft@@AEAA_N_KPEAPEAUBufferStream@23@@Z @ 0x18016BBBC (-TryFindBufferStream@BufferingMessageCallHost@BamoImpl@Microsoft@@AEAA_N_KPEAPEAUBufferStream@23.c)
 *     ?_Tidy@?$vector@UItemIdParameterIndex@BamoImpl@Microsoft@@V?$allocator@UItemIdParameterIndex@BamoImpl@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18016BF68 (-_Tidy@-$vector@UItemIdParameterIndex@BamoImpl@Microsoft@@V-$allocator@UItemIdParameterIndex@Bam.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::SubmitBuffer(
        Microsoft::BamoImpl::BufferingMessageCallHost *this,
        unsigned __int64 *a2,
        int a3,
        const char *a4,
        unsigned int a5)
{
  unsigned __int64 v7; // rsi
  const char *v8; // r9
  __int64 *v9; // rdi
  struct Microsoft::BamoImpl::BufferStream *v10; // rax
  struct Microsoft::BamoImpl::BufferStream *v11; // rbx
  _QWORD *v13; // rsi
  struct Microsoft::BamoImpl::BufferStream **v14; // rdx
  struct Microsoft::BamoImpl::BufferStream *v15[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 != 2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD3,
      (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoBufferingMessageCallHost.inl",
      a4);
    __debugbreak();
  }
  v7 = a2[1];
  Microsoft::BamoImpl::BufferingMessageCallHost::TryFindBufferStream(
    (Microsoft::BamoImpl::BufferingMessageCallHost *)((char *)this - 16),
    *a2,
    v15);
  v9 = (__int64 *)v15[0];
  if ( !v15[0] )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xE0,
      (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoBufferingMessageCallHost.inl",
      v8);
    __debugbreak();
  }
  v10 = (struct Microsoft::BamoImpl::BufferStream *)operator new(0x38uLL);
  v11 = v10;
  if ( v10 )
  {
    *((_QWORD *)v10 + 3) = 0LL;
    *((_QWORD *)v10 + 4) = 0LL;
    *((_QWORD *)v10 + 5) = 0LL;
    *(_QWORD *)v10 = a4;
    *((_DWORD *)v10 + 2) = a5;
    *((_QWORD *)v10 + 2) = v7;
    *((_BYTE *)v10 + 48) = 0;
  }
  else
  {
    v11 = 0LL;
  }
  v15[0] = v11;
  if ( v11 )
  {
    v13 = (_QWORD *)((char *)this + 32);
    if ( (char *)v11 + 24 != (char *)this + 32 )
    {
      std::vector<Microsoft::BamoImpl::ItemIdParameterIndex>::_Tidy((char *)v11 + 24);
      *((_QWORD *)v11 + 3) = *v13;
      *((_QWORD *)v11 + 4) = *((_QWORD *)this + 5);
      *((_QWORD *)v11 + 5) = *((_QWORD *)this + 6);
      *v13 = 0LL;
      *((_QWORD *)this + 5) = 0LL;
      *((_QWORD *)this + 6) = 0LL;
    }
    *((_BYTE *)v11 + 48) = *((_BYTE *)this + 56);
    *((_BYTE *)this + 56) = 0;
    v14 = (struct Microsoft::BamoImpl::BufferStream **)v9[1];
    if ( (struct Microsoft::BamoImpl::BufferStream **)v9[2] == v14 )
    {
      std::vector<CVisual const *>::_Emplace_reallocate<CVisual const *>(v9, v14, v15);
    }
    else
    {
      *v14 = v11;
      v9[1] += 8LL;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE7,
      (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoBufferingMessageCallHost.inl",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
