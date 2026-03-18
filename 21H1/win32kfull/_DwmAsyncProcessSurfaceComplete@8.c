/*
 * XREFs of _DwmAsyncProcessSurfaceComplete@8 @ 0x1D2565
 * Callers:
 *     ?CheckAndProcessWindowResizeComplete@@YGXPAVDWMSPRITE@@HPAH@Z @ 0x1CCD3C (-CheckAndProcessWindowResizeComplete@@YGXPAVDWMSPRITE@@HPAH@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall DwmAsyncProcessSurfaceComplete(void *a1, int a2)
{
  __int64 v2; // kr00_8
  unsigned int v3; // edi
  unsigned int v4; // eax
  int v5; // ecx
  _DWORD *v6; // ebx
  int v8; // [esp+10h] [ebp-E0h]
  PVOID Object; // [esp+18h] [ebp-D8h]
  unsigned int v11; // [esp+1Ch] [ebp-D4h]
  int v12; // [esp+20h] [ebp-D0h] BYREF
  __int16 v13; // [esp+24h] [ebp-CCh]
  int v14; // [esp+26h] [ebp-CAh]
  int v15; // [esp+2Ah] [ebp-C6h]
  int v16; // [esp+2Eh] [ebp-C2h]
  int v17; // [esp+32h] [ebp-BEh]
  __int16 v18; // [esp+36h] [ebp-BAh]
  _DWORD v19[45]; // [esp+38h] [ebp-B8h] BYREF

  Object = a1;
  v8 = -1073741823;
  v11 = 0;
  do
  {
    v2 = g_cDWMWindowUniqueness;
    v3 = 0;
  }
  while ( _InterlockedCompareExchange64(&g_cDWMWindowUniqueness, g_cDWMWindowUniqueness + 1, g_cDWMWindowUniqueness) != v2 );
  if ( a1 )
  {
    v4 = g_cDelayedUpdateSpriteNotifications;
    if ( g_cDelayedUpdateSpriteNotifications )
    {
      v5 = a2;
      v6 = &g_rgDelayedUpdateSpriteNotifications;
      do
      {
        if ( v5 == v6[40] )
        {
          v14 = 0;
          v15 = 0;
          v16 = 0;
          v17 = 0;
          v18 = 0;
          v12 = 13369524;
          v13 = 0x8000;
          qmemcpy(v19, v6, sizeof(v19));
          v19[2] |= 0x100u;
          EtwUpdateEvent(v19[1], 1073741830);
          v3 = v11;
          v8 = LpcRequestPort(Object, &v12);
          v4 = g_cDelayedUpdateSpriteNotifications - 1;
          if ( v11 < g_cDelayedUpdateSpriteNotifications - 1 )
          {
            qmemcpy(v6, v6 + 45, 4 * ((180 * (v4 - v11)) >> 2));
            v3 = v11;
          }
          v5 = a2;
          g_cDelayedUpdateSpriteNotifications = v4;
        }
        else
        {
          ++v3;
          v6 += 45;
          v11 = v3;
        }
      }
      while ( v3 < v4 );
      a1 = Object;
    }
    ObfDereferenceObject(a1);
  }
  return v8;
}
