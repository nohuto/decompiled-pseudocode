/*
 * XREFs of ?vGetEntriesFrom@XEPALOBJ@@QAEXV1@0PAGK@Z @ 0x223520
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YGHKAAVDCOBJ@@AAVPDEVOBJ@@AAVSURFREF@@AAVXEPALOBJ@@PAUHDC__@@PAUHBITMAP__@@IIPAEPAUtagBITMAPINFO@@III@Z @ 0x4B706 (-GreGetDIBitsInternalWorker@@YGHKAAVDCOBJ@@AAVPDEVOBJ@@AAVSURFREF@@AAVXEPALOBJ@@PAUHDC__@@PAUHBI.c)
 *     _GreSetDIBitsToDeviceInternal@64 @ 0x4E312 (_GreSetDIBitsToDeviceInternal@64.c)
 *     _GreStretchDIBitsInternal@64 @ 0x75662 (_GreStretchDIBitsInternal@64.c)
 *     _GreCreateDIBitmapReal@52 @ 0x76A92 (_GreCreateDIBitmapReal@52.c)
 * Callees:
 *     <none>
 */

void __thiscall XEPALOBJ::vGetEntriesFrom(void *this, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v6; // edi
  unsigned int v7; // ecx
  int v8; // ebx
  unsigned int v9; // edx
  struct tagPALETTEENTRY *v10; // ecx
  unsigned int v11; // edx
  struct tagPALETTEENTRY *v12; // eax
  unsigned int v13; // [esp+Ch] [ebp-Ch]
  unsigned int v15; // [esp+14h] [ebp-4h]
  struct tagPALETTEENTRY *v16; // [esp+2Ch] [ebp+14h]

  v5 = a3;
  v6 = a2;
  v7 = *(_DWORD *)(a2 + 20);
  v13 = v7;
  if ( (*(_DWORD *)(a3 + 16) & 0x800) != 0 )
    v15 = *(_DWORD *)(a3 + 20);
  else
    v15 = 0;
  v8 = a5;
  if ( a5 )
  {
    while ( 1 )
    {
      --v8;
      v9 = *(unsigned __int16 *)(a4 + 2 * v8);
      if ( v9 >= v7 )
        v9 %= v7;
      v10 = *(struct tagPALETTEENTRY **)(*(_DWORD *)(v6 + 76) + 4 * v9);
      v16 = v10;
      if ( HIBYTE(v10) == 2 )
      {
        if ( v15 )
        {
          v11 = (unsigned __int16)v10;
          if ( (unsigned __int16)v10 >= v15 )
            v11 = (unsigned __int16)v10 % v15;
          v12 = *(struct tagPALETTEENTRY **)(*(_DWORD *)(v5 + 76) + 4 * v11);
        }
        else
        {
          v12 = (&apalVGA)[(unsigned __int8)v10 & 0xF];
        }
        v16 = v12;
      }
      HIBYTE(v16) = 0;
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 76) + 4 * v8) = v16;
      if ( !v8 )
        break;
      v5 = a3;
      v6 = a2;
      v7 = v13;
    }
  }
}
