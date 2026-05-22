/*
 * XREFs of ?CancelBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIPEAXI@Z @ 0x18003F2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TryFindBufferStream@BufferingMessageCallHost@BamoImpl@Microsoft@@AEAA_N_KPEAPEAUBufferStream@23@@Z @ 0x18003FA68 (-TryFindBufferStream@BufferingMessageCallHost@BamoImpl@Microsoft@@AEAA_N_KPEAPEAUBufferStream@23.c)
 *     memmove_0 @ 0x18004A697 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::CancelBuffer(
        Microsoft::BamoImpl::BufferingMessageCallHost *this,
        unsigned __int64 *a2,
        unsigned int a3,
        void *a4,
        unsigned int a5)
{
  const char *v9; // r9
  struct Microsoft::BamoImpl::BufferStream *v10; // rbx
  unsigned int v11; // r10d
  void ***v12; // r8
  void ***v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Microsoft::BamoImpl::BufferStream *v16; // [rsp+50h] [rbp+8h] BYREF

  Microsoft::BamoImpl::BufferingMessageCallHost::TryFindBufferStream(
    (Microsoft::BamoImpl::BufferingMessageCallHost *)((char *)this - 16),
    *a2,
    &v16);
  v10 = v16;
  v11 = 0;
  if ( !v16 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      269LL,
      (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoBufferingMessageCallHost.inl",
      v9);
    __debugbreak();
  }
  v12 = (void ***)*((_QWORD *)v16 + 1);
  v13 = *(void ****)v16;
  if ( *(void ****)v16 == v12 )
  {
LABEL_8:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      288LL,
      (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoBufferingMessageCallHost.inl",
      v9);
    JUMPOUT(0x18003F39CLL);
  }
  while ( **v13 != a4 )
  {
    ++v11;
    if ( ++v13 == v12 )
      goto LABEL_8;
  }
  memmove_0(
    (void *)(*(_QWORD *)v16 + 8LL * v11),
    (const void *)(*(_QWORD *)v16 + 8LL * v11 + 8),
    (size_t)v12 + -*(_QWORD *)v16 + -8 * v11 - 8);
  *((_QWORD *)v10 + 1) -= 8LL;
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD, void *, unsigned int))(**((_QWORD **)this + 1)
                                                                                             + 40LL))(
           *((_QWORD *)this + 1),
           a2,
           a3,
           a4,
           a5);
}
