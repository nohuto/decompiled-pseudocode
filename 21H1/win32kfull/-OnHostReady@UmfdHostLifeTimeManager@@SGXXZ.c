/*
 * XREFs of ?OnHostReady@UmfdHostLifeTimeManager@@SGXXZ @ 0xEC3BC
 * Callers:
 *     _UmfdDispatchEscape@4 @ 0x8B7AC (_UmfdDispatchEscape@4.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CGXPAX00@Z @ 0x22904B (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CGXPAX00@Z.c)
 */

void __stdcall UmfdHostLifeTimeManager::OnHostReady()
{
  struct _FONTHASH **v0; // esi
  unsigned int v1; // eax
  struct _FONTHASH **v2; // ebx
  struct _FONTHASH *v3; // edi
  int v4; // [esp+0h] [ebp-8h] BYREF
  unsigned int v5; // [esp+4h] [ebp-4h]

  if ( !KeReadStateEvent((PRKEVENT)UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent) )
  {
    if ( UmfdHostLifeTimeManager::s_SessionRasterizerInitialized || UmfdHostLifeTimeManager::s_UmfdHostGenerationId != 1 )
    {
      v4 = _ghsemPublicPFT;
      GreAcquireSemaphore(_ghsemPublicPFT);
      v0 = gpPFTPublic;
      v1 = 0;
      v5 = 0;
      if ( gpPFTPublic[3] )
      {
        v2 = gpPFTPublic + 6;
        do
        {
          v3 = *v2;
          if ( *v2 )
          {
            do
            {
              UmfdHostLifeTimeManager::TryResurrectPffApcRoutine(0, *((void **)v3 + 14), v3);
              v3 = (struct _FONTHASH *)*((_DWORD *)v3 + 1);
            }
            while ( v3 );
            v1 = v5;
          }
          ++v1;
          ++v2;
          v5 = v1;
        }
        while ( v1 < (unsigned int)v0[3] );
      }
      UmfdHostLifeTimeManager::s_SessionRasterizerInitialized = 1;
      KeSetEvent((PRKEVENT)UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, 0, 0);
      KeSetEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, 0, 0);
      SEMOBJ::vUnlock((SEMOBJ *)&v4);
    }
    else
    {
      KeSetEvent((PRKEVENT)UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent, 0, 0);
      KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0);
    }
  }
}
