/*
 * XREFs of DpiKsrCallback @ 0x1C02D2A50
 * Callers:
 *     <none>
 * Callees:
 *     ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x1C02D1D8C (-DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z.c)
 *     ?DpiKsrCancel@@YAXPEAX@Z @ 0x1C02D2450 (-DpiKsrCancel@@YAXPEAX@Z.c)
 */

void __fastcall DpiKsrCallback(_BYTE *CallbackContext, PVOID Argument1, PVOID Argument2)
{
  int v3; // edx

  if ( (_DWORD)Argument1 )
  {
    v3 = (_DWORD)Argument1 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        if ( qword_1C00B3018 )
        {
          DpIterateFdoContexts((__int64 (__fastcall *)(__int64 *, void *))DpiKsrRestoreMemoryCallback, 0LL);
          *(_BYTE *)(qword_1C00B3018 + 28) = 1;
        }
      }
    }
    else
    {
      DpiKsrCancel(CallbackContext);
    }
  }
  else
  {
    CallbackContext[1297] = 1;
  }
}
