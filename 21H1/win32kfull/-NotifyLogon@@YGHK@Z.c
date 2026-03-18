/*
 * XREFs of ?NotifyLogon@@YGHK@Z @ 0xD4198
 * Callers:
 *     ?InitiateShutdownW@@YGJPAU_ETHREAD@@PAK@Z @ 0xD3602 (-InitiateShutdownW@@YGJPAU_ETHREAD@@PAK@Z.c)
 *     ?EndShutdown@@YGXJ@Z @ 0xD40DC (-EndShutdown@@YGXJ@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall NotifyLogon(int a1)
{
  int v1; // esi

  v1 = 0;
  if ( (a1 & 0x10000) == 0 )
  {
    v1 = 1;
    PostWinlogonMessage(1, a1);
  }
  return v1;
}
