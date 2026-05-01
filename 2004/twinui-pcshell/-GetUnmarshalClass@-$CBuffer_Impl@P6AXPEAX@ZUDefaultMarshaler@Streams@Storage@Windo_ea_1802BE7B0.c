/*
 * XREFs of ?GetUnmarshalClass@?$CBuffer_Impl@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@UEAAJAEBU_GUID@@PEAXK1KPEAU5@@Z @ 0x1802BE7B0
 * Callers:
 *     ?GetUnmarshalClass@?$CBuffer_Impl@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@W7EAAJAEBU_GUID@@PEAXK1KPEAU5@@Z @ 0x1800F7150 (-GetUnmarshalClass@-$CBuffer_Impl@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureInit@DefaultMarshaler@Streams@Storage@Windows@@AEAAJXZ @ 0x1802C8470 (-_EnsureInit@DefaultMarshaler@Streams@Storage@Windows@@AEAAJXZ.c)
 */

__int64 __fastcall Windows::Storage::Streams::CBuffer_Impl<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::GetUnmarshalClass(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  _QWORD *v7; // rbx
  __int64 result; // rax

  v7 = (_QWORD *)(a1 + 80);
  result = Windows::Storage::Streams::DefaultMarshaler::_EnsureInit((Windows::Storage::Streams::DefaultMarshaler *)(a1 + 80));
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64, int, __int64))(*(_QWORD *)*v7 + 24LL))(
             *v7,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7);
  return result;
}
