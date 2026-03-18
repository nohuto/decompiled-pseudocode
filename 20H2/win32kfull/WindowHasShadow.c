/*
 * XREFs of WindowHasShadow @ 0x1C003CBA4
 * Callers:
 *     NtUserSetLayeredWindowAttributes @ 0x1C003CA60 (NtUserSetLayeredWindowAttributes.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0047E74 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00C91F8 (zzzSetWindowCompositionCloak.c)
 * Callees:
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C003CBD8 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall WindowHasShadow(__int64 a1)
{
  unsigned int v1; // r9d

  v1 = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
    return FindShadow((struct tagWND *)a1) != 0LL;
  return v1;
}
