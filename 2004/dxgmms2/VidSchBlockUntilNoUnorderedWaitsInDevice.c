/*
 * XREFs of VidSchBlockUntilNoUnorderedWaitsInDevice @ 0x1C00D2320
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0012F6C (VidSchiInterlockedRemoveEntryList.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0080C20 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0080D40 (VidSchRegisterCompletionEvent.c)
 */

char __fastcall VidSchBlockUntilNoUnorderedWaitsInDevice(__int64 a1)
{
  _DWORD *v1; // rdi
  int v3; // eax
  __int64 v4; // rbx
  _QWORD v6[21]; // [rsp+20h] [rbp-A8h] BYREF

  v1 = (_DWORD *)(a1 + 1588);
  v3 = *(_DWORD *)(a1 + 1588);
  if ( v3 )
  {
    memset(v6, 0, 0xA0uLL);
    v4 = *(_QWORD *)(a1 + 32);
    LODWORD(v6[4]) |= 0x10u;
    LODWORD(v6[2]) = 1;
    v6[5] = v1;
    VidSchRegisterCompletionEvent(v4, (__int64)v6);
    if ( *v1 )
      VidSchWaitForCompletionEvent(v4, (__int64)v6, 49LL);
    LOBYTE(v3) = VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v4 + 1728), v6, 0LL);
  }
  return v3;
}
