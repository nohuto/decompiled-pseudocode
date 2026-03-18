/*
 * XREFs of ??1PANDEVLOCK@@QAE@XZ @ 0x1F569A
 * Callers:
 *     ?PanEnableSurface@@YGPAUHSURF__@@PAUDHPDEV__@@@Z @ 0x1F5CE7 (-PanEnableSurface@@YGPAUHSURF__@@PAUDHPDEV__@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall PANDEVLOCK::~PANDEVLOCK(HSEMAPHORE *this)
{
  if ( *this )
  {
    EngReleaseSemaphore(*this);
    *this = 0;
  }
}
