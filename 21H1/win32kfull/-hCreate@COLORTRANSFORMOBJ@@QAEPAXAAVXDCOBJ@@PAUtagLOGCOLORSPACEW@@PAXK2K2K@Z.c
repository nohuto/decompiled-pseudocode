/*
 * XREFs of ?hCreate@COLORTRANSFORMOBJ@@QAEPAXAAVXDCOBJ@@PAUtagLOGCOLORSPACEW@@PAXK2K2K@Z @ 0x1F4A5E
 * Callers:
 *     ?GreCreateColorTransform@@YGPAXPAUHDC__@@PAUtagLOGCOLORSPACEW@@PAXK2K2K@Z @ 0x21B794 (-GreCreateColorTransform@@YGPAXPAUHDC__@@PAUtagLOGCOLORSPACEW@@PAXK2K2K@Z.c)
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?Insert@HmgInsertObjectHelper@@QAEPAUHOBJ__@@PAVOBJECT@@EK@Z @ 0x22A2E (-Insert@HmgInsertObjectHelper@@QAEPAUHOBJ__@@PAVOBJECT@@EK@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?bAddColorTransform@XDCOBJ@@QAEHPAX@Z @ 0x1F48CA (-bAddColorTransform@XDCOBJ@@QAEHPAX@Z.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QAEHAAVXDCOBJ@@H@Z @ 0x1F4909 (-bDelete@COLORTRANSFORMOBJ@@QAEHAAVXDCOBJ@@H@Z.c)
 */

struct HOBJ__ *__thiscall COLORTRANSFORMOBJ::hCreate(
        COLORTRANSFORMOBJ *this,
        struct XDCOBJ *a2,
        struct tagLOGCOLORSPACEW *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        void *a8,
        unsigned int a9)
{
  struct HOBJ__ *v9; // edi
  int v10; // esi
  struct OBJECT *Object; // eax
  struct OBJECT *v12; // ebx
  int (__stdcall *v13)(_DWORD, struct tagLOGCOLORSPACEW *, void *, unsigned int, void *, unsigned int, void *, unsigned int, _DWORD); // ecx
  int v14; // ecx
  int v16; // [esp+24h] [ebp-40h]
  int v18; // [esp+2Ch] [ebp-38h] BYREF
  int v19; // [esp+30h] [ebp-34h] BYREF
  _BYTE v20[20]; // [esp+34h] [ebp-30h] BYREF
  _DWORD v21[3]; // [esp+48h] [ebp-1Ch] BYREF
  __int16 v22; // [esp+54h] [ebp-10h]

  v9 = 0;
  v16 = 0;
  v10 = *(_DWORD *)(*(_DWORD *)a2 + 36);
  v19 = v10;
  if ( !v10 )
    return v9;
  Object = (struct OBJECT *)AllocateObject(20, 14, 0);
  v12 = Object;
  if ( Object )
  {
    v18 = 0;
    v9 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v18, Object, 0xEu, 2u);
    if ( v9 )
    {
      v22 = 256;
      *(_DWORD *)this = v12;
      memset(v21, 0, sizeof(v21));
      DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v20, (struct PDEVOBJ *)&v19);
      v13 = *(int (__stdcall **)(_DWORD, struct tagLOGCOLORSPACEW *, void *, unsigned int, void *, unsigned int, void *, unsigned int, _DWORD))(v10 + 2156);
      if ( v13 )
      {
        v14 = v13(*(_DWORD *)(v10 + 1108), a3, a4, a5, a6, a7, a8, a9, 0);
        v16 = v14;
      }
      else
      {
        EngSetLastError(0x57u);
        v14 = 0;
      }
      if ( v14 )
      {
        *(_DWORD *)(*(_DWORD *)this + 16) = v14;
        XDCOBJ::bAddColorTransform(a2, v9);
      }
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v20);
      if ( v21[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v21);
    }
    if ( v18 )
      _InterlockedDecrement((volatile signed __int32 *)(v18 + 8));
  }
  else
  {
    EngSetLastError(8u);
  }
  if ( !v12 )
    goto LABEL_18;
  if ( v9 )
  {
    if ( !v16 )
    {
      *(_DWORD *)(*(_DWORD *)this + 16) = 0;
      COLORTRANSFORMOBJ::bDelete(this, a2, 0);
      v9 = 0;
      v12 = 0;
    }
LABEL_18:
    if ( v9 )
      return v9;
  }
  if ( v12 )
    FreeObject(v12, 14);
  return v9;
}
