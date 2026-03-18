/*
 * XREFs of IsMessageParentWindow @ 0x1C0020EE0
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C000E8BC (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0020C78 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsMessageParentWindow(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0LL;
  if ( v1 )
    v2 = *(_QWORD *)(v1 + 104);
  return a1 == v2;
}
