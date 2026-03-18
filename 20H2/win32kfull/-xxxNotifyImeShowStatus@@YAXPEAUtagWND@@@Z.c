/*
 * XREFs of ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01E25F4
 * Callers:
 *     xxxSetIMEShowStatus @ 0x1C012C3A4 (xxxSetIMEShowStatus.c)
 *     xxxBroadcastImeShowStatusChange @ 0x1C01E2D50 (xxxBroadcastImeShowStatusChange.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C00BC63C (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00ECF88 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01E29E0 (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 */

void __fastcall xxxNotifyImeShowStatus(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r13d
  ULONG64 *v6; // rsi
  __int64 v7; // rdi
  ULONG64 v8; // rsi
  ULONG64 v9; // rax
  BOOL v10; // r15d
  struct tagWND *v11; // r14

  v5 = 0;
  if ( (*gpsi & 4) != 0 && *(char *)(*((_QWORD *)a1 + 5) + 20LL) >= 0 )
  {
    v6 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND(a1, gpsi, a3, a4);
    if ( v6 )
    {
      v7 = *((_QWORD *)a1 + 2);
      if ( v7 != gptiCurrent )
        KeAttachProcess(**(PRKPROCESS **)(v7 + 424));
      v8 = *v6;
      v9 = v8;
      if ( v8 >= MmUserProbeAddress )
        v9 = MmUserProbeAddress;
      v10 = (*(_DWORD *)(v9 + 44) & 0x20) != 0 && HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument2);
      v11 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(v8 + 16), 1);
      if ( v11 || (v11 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) + 112LL)) != 0LL )
      {
        v5 = 1;
        *(_DWORD *)(v8 + 44) ^= (v10 ^ *(_DWORD *)(v8 + 44)) & 1;
      }
      if ( v7 != gptiCurrent )
        KeDetachProcess();
      if ( v5 )
        xxxSendOpenStatusNotify((struct tagTHREADINFO *)v7, (struct tagIMEUI *)v8, v11, v10);
      if ( *(char *)(*((_QWORD *)a1 + 5) + 20LL) >= 0 )
        xxxCheckImeShowStatus(a1, 0LL);
    }
  }
}
