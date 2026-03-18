/*
 * XREFs of _MenuRecalc@0 @ 0x1A11F9
 * Callers:
 *     ?xxxSetAndDrawNCMetrics@@YGHPAU_UNICODE_STRING@@HPAUtagNONCLIENTMETRICSW@@@Z @ 0x145A20 (-xxxSetAndDrawNCMetrics@@YGHPAU_UNICODE_STRING@@HPAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 */

_DWORD *__stdcall MenuRecalc()
{
  unsigned int v0; // edi
  int *v1; // ebx
  _BYTE *v2; // esi
  int v3; // eax
  unsigned int v4; // edx
  int v5; // ecx
  int v6; // eax
  _DWORD v8[2]; // [esp+Ch] [ebp-Ch] BYREF
  int v9; // [esp+14h] [ebp-4h]

  SmartObjStackRefBase<tagMENU>::Init(v8, 0);
  v0 = 0;
  v9 = 0;
  v1 = (int *)_gpKernelHandleTable;
  v2 = (_BYTE *)(_gSharedInfo[1] + 12);
  do
  {
    if ( *v2 == 2 )
    {
      v3 = *v1;
      v9 = 0;
      SmartObjStackRefBase<tagMENU>::operator=(v8, v3);
      v4 = 0;
      *(_DWORD *)(*(_DWORD *)v8[0] + 36) = 0;
      *(_DWORD *)(*(_DWORD *)v8[0] + 40) = 0;
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v8[0] + 20) + 24) )
      {
        v5 = 0;
        do
        {
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v8[0] + 56) + v5) + 56) = 0x7FFFFFFF;
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v8[0] + 56) + v5) + 60) = 0;
          v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v8[0] + 56) + v5);
          v5 += 80;
          *(_DWORD *)(v6 + 68) = -1;
          ++v4;
        }
        while ( v4 < *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v8[0] + 20) + 24) );
      }
    }
    ++v0;
    v2 += 16;
    v1 += 3;
  }
  while ( v0 <= _giheLast );
  return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v8);
}
