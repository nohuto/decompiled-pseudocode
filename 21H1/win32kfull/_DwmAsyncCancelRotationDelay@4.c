/*
 * XREFs of _DwmAsyncCancelRotationDelay@4 @ 0x1D1A90
 * Callers:
 *     _NtUserLayoutCompleted@4 @ 0xA8C00 (_NtUserLayoutCompleted@4.c)
 * Callees:
 *     <none>
 */

int __thiscall DwmAsyncCancelRotationDelay(void *this)
{
  unsigned int v1; // esi
  PVOID v2; // edi
  _WORD v4[3]; // [esp+Ch] [ebp-28h] BYREF
  int v5; // [esp+12h] [ebp-22h]
  int v6; // [esp+16h] [ebp-1Eh]
  int v7; // [esp+1Ah] [ebp-1Ah]
  int v8; // [esp+1Eh] [ebp-16h]
  __int16 v9; // [esp+22h] [ebp-12h]
  int v10; // [esp+24h] [ebp-10h]
  PVOID Object; // [esp+28h] [ebp-Ch]
  unsigned int v12; // [esp+2Ch] [ebp-8h]
  int v13; // [esp+30h] [ebp-4h]

  Object = this;
  v13 = -1073741823;
  do
  {
    v12 = HIDWORD(g_cDWMWindowUniqueness);
    v1 = g_cDWMWindowUniqueness;
  }
  while ( _InterlockedCompareExchange64(&g_cDWMWindowUniqueness, g_cDWMWindowUniqueness + 1, g_cDWMWindowUniqueness) != __PAIR64__(v12, v1) );
  v2 = Object;
  if ( Object )
  {
    v10 = 1073741936;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v4[0] = 4;
    v4[1] = 28;
    v4[2] = 0x8000;
    v13 = LpcRequestPort(Object, v4);
    ObfDereferenceObject(v2);
  }
  return v13;
}
