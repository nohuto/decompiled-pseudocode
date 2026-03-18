/*
 * XREFs of ??0EFSMEMOBJ@@QAE@PAVDCOBJ@@KKPAXPAK@Z @ 0x88BBA
 * Callers:
 *     ?EnumEngineOnly@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2PAVDCOBJ@@PAKPAX@Z @ 0x88A46 (-EnumEngineOnly@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2PAVDCOBJ@@PAKPAX@Z.c)
 *     ?EnumDeviceAndEngine@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2AAVPFFOBJ@@AAVPDEVOBJ@@PAVDCOBJ@@PAKPAX@Z @ 0x21F000 (-EnumDeviceAndEngine@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2AAVPFFOBJ@@AAVPDEVOBJ@@PAVD.c)
 *     ?bGrow@EFSOBJ@@QAEHXZ @ 0x2293A6 (-bGrow@EFSOBJ@@QAEHXZ.c)
 * Callees:
 *     ?vInit@EFSMEMOBJ@@QAEXPAVDCOBJ@@KKPAXI@Z @ 0x88C0A (-vInit@EFSMEMOBJ@@QAEXPAVDCOBJ@@KKPAXI@Z.c)
 */

EFSMEMOBJ *__thiscall EFSMEMOBJ::EFSMEMOBJ(
        EFSMEMOBJ *this,
        struct DCOBJ *a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        unsigned int *a6)
{
  int v7; // eax

  *((_DWORD *)this + 1) = a6;
  if ( a3 > 0x1FFFFFFA )
  {
    *(_DWORD *)this = 0;
  }
  else
  {
    v7 = AllocFreeTmpBuffer(8 * a3 + 40);
    *(_DWORD *)this = v7;
    if ( v7 )
      EFSMEMOBJ::vInit(this, a2, a3, a4, a5, *a6);
  }
  return this;
}
