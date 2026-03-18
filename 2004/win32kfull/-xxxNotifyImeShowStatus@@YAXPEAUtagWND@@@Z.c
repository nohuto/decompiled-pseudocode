/*
 * XREFs of ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01E32B4
 * Callers:
 *     xxxSetIMEShowStatus @ 0x1C012A314 (xxxSetIMEShowStatus.c)
 *     xxxBroadcastImeShowStatusChange @ 0x1C01E3A10 (xxxBroadcastImeShowStatusChange.c)
 * Callees:
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C003196C (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00F2718 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01E36A0 (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 */

void __fastcall xxxNotifyImeShowStatus(struct tagWND *a1)
{
  int v2; // r13d
  ULONG64 *v3; // rsi
  __int64 v4; // rdi
  ULONG64 v5; // rsi
  ULONG64 v6; // rax
  BOOL v7; // r15d
  struct tagWND *v8; // r14

  v2 = 0;
  if ( (*gpsi & 4) != 0 && *(char *)(*((_QWORD *)a1 + 5) + 20LL) >= 0 )
  {
    v3 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND(a1);
    if ( v3 )
    {
      v4 = *((_QWORD *)a1 + 2);
      if ( v4 != gptiCurrent )
        KeAttachProcess(**(PRKPROCESS **)(v4 + 416));
      v5 = *v3;
      v6 = v5;
      if ( v5 >= MmUserProbeAddress )
        v6 = MmUserProbeAddress;
      v7 = (*(_DWORD *)(v6 + 44) & 0x20) != 0 && HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
      v8 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(v5 + 16), 1);
      if ( v8 || (v8 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 112LL)) != 0LL )
      {
        v2 = 1;
        *(_DWORD *)(v5 + 44) ^= (v7 ^ *(_DWORD *)(v5 + 44)) & 1;
      }
      if ( v4 != gptiCurrent )
        KeDetachProcess();
      if ( v2 )
        xxxSendOpenStatusNotify((struct tagTHREADINFO *)v4, (struct tagIMEUI *)v5, v8, v7);
      if ( *(char *)(*((_QWORD *)a1 + 5) + 20LL) >= 0 )
        xxxCheckImeShowStatus(a1, 0LL);
    }
  }
}
