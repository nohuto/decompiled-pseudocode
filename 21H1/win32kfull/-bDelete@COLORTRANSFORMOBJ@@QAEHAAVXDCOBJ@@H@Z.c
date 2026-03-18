/*
 * XREFs of ?bDelete@COLORTRANSFORMOBJ@@QAEHAAVXDCOBJ@@H@Z @ 0x1F4909
 * Callers:
 *     _XDCOBJ_vCleanupColorTransformWrap@8 @ 0x98390 (_XDCOBJ_vCleanupColorTransformWrap@8.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QAEPAXAAVXDCOBJ@@PAUtagLOGCOLORSPACEW@@PAXK2K2K@Z @ 0x1F4A5E (-hCreate@COLORTRANSFORMOBJ@@QAEPAXAAVXDCOBJ@@PAUtagLOGCOLORSPACEW@@PAXK2K2K@Z.c)
 *     ?GreDeleteColorTransform@@YGHPAUHDC__@@PAX@Z @ 0x21B852 (-GreDeleteColorTransform@@YGHPAUHDC__@@PAX@Z.c)
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?bRemoveColorTransform@XDCOBJ@@QAEHPAX@Z @ 0x1F4A14 (-bRemoveColorTransform@XDCOBJ@@QAEHPAX@Z.c)
 */

int __thiscall COLORTRANSFORMOBJ::bDelete(COLORTRANSFORMOBJ *this, struct XDCOBJ *a2, int a3)
{
  int v4; // ebx
  _DWORD *v5; // eax
  void *v6; // esi
  _DWORD *v7; // eax
  bool v8; // zf
  XDCOBJ *v9; // ecx
  _DWORD *v10; // esi
  int (__stdcall *v11)(_DWORD, int); // ecx
  void *v13; // [esp+Ch] [ebp-3Ch]
  _DWORD *v14; // [esp+10h] [ebp-38h] BYREF
  int v15; // [esp+14h] [ebp-34h]
  _BYTE v16[20]; // [esp+18h] [ebp-30h] BYREF
  _DWORD v17[3]; // [esp+2Ch] [ebp-1Ch] BYREF
  __int16 v18; // [esp+38h] [ebp-10h]

  v4 = 0;
  v5 = *(_DWORD **)this;
  if ( *(_DWORD *)this )
  {
    v6 = (void *)*v5;
    v13 = (void *)*v5;
    if ( HmgRemoveObject(*v5, 0, 1, 1, 14, 0) )
    {
      v7 = *(_DWORD **)this;
      v8 = *(_DWORD *)(*(_DWORD *)this + 16) == 0;
      v15 = *(_DWORD *)(*(_DWORD *)this + 16);
      v9 = a2;
      if ( !v8 )
      {
        v10 = *(_DWORD **)(*(_DWORD *)a2 + 36);
        v14 = v10;
        if ( v10 )
        {
          if ( (v10[6] & 0x8000) != 0 && a3 )
          {
            v7[4] = 0;
          }
          else
          {
            memset(v17, 0, sizeof(v17));
            v18 = 256;
            DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v16, (struct PDEVOBJ *)&v14);
            v11 = (int (__stdcall *)(_DWORD, int))v10[540];
            if ( v11 )
            {
              if ( v11(v10[277], v15) || (v10[6] & 0x8000) != 0 )
                *(_DWORD *)(*(_DWORD *)this + 16) = 0;
            }
            else
            {
              EngSetLastError(0x57u);
            }
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v16);
            if ( v17[0] )
              DLODCOBJ::vUnlock((DLODCOBJ *)v17);
            v9 = a2;
          }
        }
        v6 = v13;
      }
      if ( !*(_DWORD *)(*(_DWORD *)this + 16) )
      {
        XDCOBJ::bRemoveColorTransform(v9, v6);
        FreeObject(*(_DWORD *)this, 14);
        *(_DWORD *)this = 0;
      }
    }
    return 1;
  }
  return v4;
}
