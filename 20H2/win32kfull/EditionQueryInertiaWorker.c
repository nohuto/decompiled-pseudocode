/*
 * XREFs of EditionQueryInertiaWorker @ 0x1C0217EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C004C93C (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     DCEPtInRect @ 0x1C00F0BF8 (DCEPtInRect.c)
 *     DCEHitTestWindow @ 0x1C01E44C4 (DCEHitTestWindow.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall EditionQueryInertiaWorker(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdx
  int *v11; // rcx
  unsigned __int64 v14; // [rsp+38h] [rbp+10h] BYREF

  v4 = ValidateHwnd(*(_QWORD *)(a2 + 120));
  v8 = *(unsigned int *)(a2 + 184);
  v9 = v4;
  if ( (v8 & 4) != 0 )
  {
    v14 = a1;
    if ( !(unsigned int)DCEHitTestWindow((int *)(a2 + 40), a2 + 56, (int *)&v14, 0LL) )
      return 0LL;
  }
  if ( (!v9 || (unsigned int)IsCompositionInputWindow((const struct tagWND *)v9)) && (*(_DWORD *)(a2 + 184) & 4) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v5, v6, v7);
  if ( !v9 || (unsigned int)IsCompositionInputWindow((const struct tagWND *)v9) )
    return 1LL;
  v10 = *(_QWORD *)(v9 + 216);
  v11 = (int *)(*(_QWORD *)(v9 + 40) + 88LL);
  v14 = a1;
  if ( v10 ? DCEHitTestWindow(v11, v10, (int *)&v14, 0LL) : DCEPtInRect(v11, a1) )
    return 1LL;
  else
    return 0LL;
}
