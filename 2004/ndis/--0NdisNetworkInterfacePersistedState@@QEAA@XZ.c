/*
 * XREFs of ??0NdisNetworkInterfacePersistedState@@QEAA@XZ @ 0x1C0039414
 * Callers:
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C0105634 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1C0126ADC (ndisIfUpdateIfBlockFromPersistedState.c)
 * Callees:
 *     memset @ 0x1C003FE40 (memset.c)
 */

NdisNetworkInterfacePersistedState *__fastcall NdisNetworkInterfacePersistedState::NdisNetworkInterfacePersistedState(
        NdisNetworkInterfacePersistedState *this)
{
  NdisNetworkInterfacePersistedState *result; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_WORD *)this + 8) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_OWORD *)((char *)this + 36) = 0LL;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *((_DWORD *)this + 15) = 0;
  memset((char *)this + 64, 0, 0x44uLL);
  result = this;
  *((_DWORD *)this + 33) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  return result;
}
