/*
 * XREFs of _InitQMiPTrace@0 @ 0x14E2E2
 * Callers:
 *     ?InitPostMortemLogging@@YGXXZ @ 0xEAABC (-InitPostMortemLogging@@YGXXZ.c)
 * Callees:
 *     <none>
 */

void __stdcall InitQMiPTrace()
{
  int v0; // ecx

  if ( (gdwPostMortemLogging & 1) != 0 && _gSessionId != _gServiceSessionId )
  {
    gpQmsgHistory = (struct tagQMSG_HISTORY *)Win32AllocPoolZInit(51208, 1903260501);
    if ( !gpQmsgHistory )
    {
LABEL_6:
      gdwPostMortemLogging &= ~1u;
      return;
    }
    v0 = Win32AllocPoolZInit(51208, 1903260501);
    gpQmsgHistory2 = (struct tagQMSG_HISTORY *)v0;
    if ( !v0 )
    {
      Win32FreePool(gpQmsgHistory);
      gpQmsgHistory = 0;
      goto LABEL_6;
    }
    *((_DWORD *)gpQmsgHistory + 1) = 512;
    *(_DWORD *)(v0 + 4) = 512;
  }
}
