/*
 * XREFs of ?ReduceFraction@@YGXPAK0@Z @ 0x150026
 * Callers:
 *     _GetHimetricScaleForMonitor@12 @ 0x151143 (_GetHimetricScaleForMonitor@12.c)
 * Callees:
 *     <none>
 */

void __fastcall ReduceFraction(unsigned int *a1, int *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // ecx
  unsigned int v6; // [esp+Ch] [ebp-Ch]
  unsigned int v8; // [esp+14h] [ebp-4h]

  v2 = *a1;
  v3 = *a1;
  v8 = *a1;
  v6 = *a2;
  v4 = *a2;
  if ( *a1 )
  {
    do
    {
      v5 = v3;
      v3 = v4 % v3;
      v4 = v5;
    }
    while ( v3 );
    v2 = v8;
  }
  *a1 = v2 / v4;
  *a2 = v6 / v4;
}
