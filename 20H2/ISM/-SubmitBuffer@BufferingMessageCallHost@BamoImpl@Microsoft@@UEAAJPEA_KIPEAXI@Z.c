/*
 * XREFs of ?SubmitBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIPEAXI@Z @ 0x18003F740
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003CAF8 (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAURemoteCallBuffer@BamoImpl@Microsoft@@@?$vector@PEAURemoteCallBuffer@BamoImpl@Microsoft@@V?$allocator@PEAURemoteCallBuffer@BamoImpl@Microsoft@@@std@@@std@@QEAAPEAPEAURemoteCallBuffer@BamoImpl@Microsoft@@QEAPEAU234@AEBQEAU234@@Z @ 0x18003EF00 (--$_Emplace_reallocate@AEBQEAURemoteCallBuffer@BamoImpl@Microsoft@@@-$vector@PEAURemoteCallBuffe.c)
 *     ?TryFindBufferStream@BufferingMessageCallHost@BamoImpl@Microsoft@@AEAA_N_KPEAPEAUBufferStream@23@@Z @ 0x18003F9D8 (-TryFindBufferStream@BufferingMessageCallHost@BamoImpl@Microsoft@@AEAA_N_KPEAPEAUBufferStream@23.c)
 *     ?_Tidy@?$vector@UItemIdParameterIndex@BamoImpl@Microsoft@@V?$allocator@UItemIdParameterIndex@BamoImpl@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18003FAD0 (-_Tidy@-$vector@UItemIdParameterIndex@BamoImpl@Microsoft@@V-$allocator@UItemIdParameterIndex@Bam.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::SubmitBuffer(
        Microsoft::BamoImpl::BufferingMessageCallHost *this,
        unsigned __int64 *a2,
        int a3,
        const char *a4,
        unsigned int a5)
{
  unsigned __int64 v7; // r12
  const char *v8; // r9
  struct Microsoft::BamoImpl::BufferStream *v9; // rbx
  const char **v10; // rax
  const char **v11; // rdi
  _QWORD *v12; // r14
  _QWORD *v13; // r15
  _BYTE *v14; // rdx
  const char *v15; // r9
  struct Microsoft::BamoImpl::BufferStream *v17[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a3 != 2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      211LL,
      (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoBufferingMessageCallHost.inl",
      a4);
    __debugbreak();
  }
  v7 = a2[1];
  Microsoft::BamoImpl::BufferingMessageCallHost::TryFindBufferStream(
    (Microsoft::BamoImpl::BufferingMessageCallHost *)((char *)this - 16),
    *a2,
    v17);
  v9 = v17[0];
  if ( !v17[0] )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      224LL,
      (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoBufferingMessageCallHost.inl",
      v8);
    __debugbreak();
  }
  v10 = (const char **)operator new(0x38uLL);
  v11 = v10;
  v12 = v10 + 3;
  v10[3] = 0LL;
  v10[4] = 0LL;
  v10[5] = 0LL;
  *v10 = a4;
  *((_DWORD *)v10 + 2) = a5;
  v10[2] = (const char *)v7;
  *((_BYTE *)v10 + 48) = 0;
  v17[0] = (struct Microsoft::BamoImpl::BufferStream *)v10;
  v13 = (_QWORD *)((char *)this + 32);
  if ( v10 + 3 != (const char **)((char *)this + 32) )
  {
    std::vector<Microsoft::BamoImpl::ItemIdParameterIndex>::_Tidy(v10 + 3);
    *v12 = *v13;
    v12[1] = *((_QWORD *)this + 5);
    v12[2] = *((_QWORD *)this + 6);
    *v13 = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_BYTE *)v11 + 48) = *((_BYTE *)this + 56);
  *((_BYTE *)this + 56) = 0;
  v14 = (_BYTE *)*((_QWORD *)v9 + 1);
  if ( *((_BYTE **)v9 + 2) == v14 )
  {
    try
    {
      std::vector<Microsoft::BamoImpl::RemoteCallBuffer *>::_Emplace_reallocate<Microsoft::BamoImpl::RemoteCallBuffer * const &>(
        (const void **)v9,
        v14,
        v17);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0xF2,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoBufferingMessageCallHost.inl",
        v15);
      JUMPOUT(0x18003F896LL);
    }
  }
  else
  {
    *(_QWORD *)v14 = v11;
    *((_QWORD *)v9 + 1) += 8LL;
  }
  return 0LL;
}
