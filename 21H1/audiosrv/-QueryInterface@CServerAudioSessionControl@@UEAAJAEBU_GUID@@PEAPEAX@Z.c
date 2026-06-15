/*
 * XREFs of ?QueryInterface@CServerAudioSessionControl@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CCA70
 * Callers:
 *     ?QueryInterface@CServerAudioSessionControl@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074DF0 (-QueryInterface@CServerAudioSessionControl@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::QueryInterface(
        CServerAudioSessionControl *this,
        const struct _GUID *a2,
        void **a3)
{
  return CUnknown::QueryInterface((CServerAudioSessionControl *)((char *)this + 8), a2, a3);
}
