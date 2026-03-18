/*
 * XREFs of ?MulIcmSetDeviceGammaRamp@@YGKPAUDHPDEV__@@KPAX@Z @ 0x203998
 * Callers:
 *     <none>
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QBEHXZ @ 0xB23BC (-bLddmDriver@PDEVOBJ@@QBEHXZ.c)
 */

int __stdcall MulIcmSetDeviceGammaRamp(struct DHPDEV__ *a1, unsigned int a2, void *a3)
{
  _DWORD *v3; // esi
  int v4; // edi
  int v5; // ebx
  struct DHPDEV__ *v6; // edx
  int (__stdcall *v8)(_DWORD, unsigned int, void *); // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h]

  v9 = 0;
  v3 = *(_DWORD **)a1;
  v4 = 1;
  v5 = 1;
  if ( !*(_DWORD *)a1 )
    return 0;
  do
  {
    v6 = (struct DHPDEV__ *)v3[9];
    a1 = v6;
    v8 = (int (__stdcall *)(_DWORD, unsigned int, void *))*((_DWORD *)v6 + 542);
    if ( v8 && ((_BYTE)v6[354] & 0x10) != 0 && (a3 || PDEVOBJ::bLddmDriver((PDEVOBJ *)&a1)) )
    {
      v9 = 1;
      v5 &= v8(*((_DWORD *)v6 + 277), a2, a3);
    }
    v3 = (_DWORD *)*v3;
  }
  while ( v3 );
  if ( !v9 || !v5 )
    return 0;
  return v4;
}
