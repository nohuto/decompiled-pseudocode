/*
 * XREFs of ?CreateStreamConnection@CStreamConnectionManagerImpl@@UEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAV?$shared_ptr@VCStreamConnection@@@3@@Z @ 0x1800FB720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamConnectionManagerImpl::CreateStreamConnection(
        __int64 a1,
        __int64 **a2,
        __int64 **a3,
        int a4,
        _QWORD *a5)
{
  return CMonitorManager::CreateStreamConnection(*(_QWORD *)(a1 + 8), a2, a3, a4, a5);
}
