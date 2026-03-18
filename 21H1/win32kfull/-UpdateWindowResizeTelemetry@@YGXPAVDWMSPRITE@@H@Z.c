/*
 * XREFs of ?UpdateWindowResizeTelemetry@@YGXPAVDWMSPRITE@@H@Z @ 0x1CD5C4
 * Callers:
 *     ?CheckAndProcessWindowResizeComplete@@YGXPAVDWMSPRITE@@HPAH@Z @ 0x1CCD3C (-CheckAndProcessWindowResizeComplete@@YGXPAVDWMSPRITE@@HPAH@Z.c)
 *     _GreWindowResizeStarted@20 @ 0x1CEC76 (_GreWindowResizeStarted@20.c)
 * Callees:
 *     __alldiv @ 0xF91D3 (__alldiv.c)
 */

void __fastcall UpdateWindowResizeTelemetry(union _LARGE_INTEGER *a1, int a2)
{
  LONGLONG v4; // rax
  union _LARGE_INTEGER CurrentTime; // [esp+8h] [ebp-8h] BYREF

  CurrentTime.QuadPart = 0LL;
  KeQuerySystemTime(&CurrentTime);
  if ( a2 )
  {
    a1[13] = CurrentTime;
  }
  else
  {
    v4 = (CurrentTime.QuadPart - a1[13].QuadPart) / 10000;
    if ( v4 > a1[11].LowPart )
      a1[11].LowPart = v4;
    a1[11].HighPart += v4;
    ++a1[12].LowPart;
  }
}
