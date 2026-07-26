/*
 * XREFs of ??1NdisNetworkInterfacePersistedState@@QEAA@XZ @ 0x1C0038F6C
 * Callers:
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C0105634 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1C0126ADC (ndisIfUpdateIfBlockFromPersistedState.c)
 * Callees:
 *     <none>
 */

void __fastcall NdisNetworkInterfacePersistedState::~NdisNetworkInterfacePersistedState(
        NdisNetworkInterfacePersistedState *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( v2 )
    ExFreePoolWithTag(v2, 0x7274534Bu);
  v3 = *(void **)this;
  *(_QWORD *)this = 0LL;
  if ( v3 )
    ExFreePoolWithTag(v3, 0x7274534Bu);
}
