/*
 * XREFs of EditionQueryInertiaWorker @ 0x1C0218D70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0022F98 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     DCEPtInRect @ 0x1C00A3450 (DCEPtInRect.c)
 *     DCEHitTestWindow @ 0x1C01E5184 (DCEHitTestWindow.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall EditionQueryInertiaWorker(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  int *v9; // rcx
  unsigned __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v4 = ValidateHwnd(*(_QWORD *)(a2 + 120));
  v6 = *(unsigned int *)(a2 + 184);
  v7 = v4;
  if ( (v6 & 4) != 0 )
  {
    v12 = a1;
    if ( !(unsigned int)DCEHitTestWindow((int *)(a2 + 40), a2 + 56, (int *)&v12, 0LL) )
      return 0LL;
  }
  if ( (!v7 || (unsigned int)IsCompositionInputWindow((const struct tagWND *)v7)) && (*(_DWORD *)(a2 + 184) & 4) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5);
  if ( !v7 || (unsigned int)IsCompositionInputWindow((const struct tagWND *)v7) )
    return 1LL;
  v8 = *(_QWORD *)(v7 + 216);
  v9 = (int *)(*(_QWORD *)(v7 + 40) + 88LL);
  v12 = a1;
  if ( v8 ? DCEHitTestWindow(v9, v8, (int *)&v12, 0LL) : DCEPtInRect(v9, a1) )
    return 1LL;
  else
    return 0LL;
}
