/*
 * XREFs of ??1EFSMEMOBJ@@QAE@XZ @ 0x88B8C
 * Callers:
 *     ?EnumEngineOnly@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2PAVDCOBJ@@PAKPAX@Z @ 0x88A46 (-EnumEngineOnly@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2PAVDCOBJ@@PAKPAX@Z.c)
 *     ?EnumDeviceAndEngine@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2AAVPFFOBJ@@AAVPDEVOBJ@@PAVDCOBJ@@PAKPAX@Z @ 0x21F000 (-EnumDeviceAndEngine@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2AAVPFFOBJ@@AAVPDEVOBJ@@PAVD.c)
 *     ?bGrow@EFSOBJ@@QAEHXZ @ 0x2293A6 (-bGrow@EFSOBJ@@QAEHXZ.c)
 * Callees:
 *     <none>
 */

void __thiscall EFSMEMOBJ::~EFSMEMOBJ(EFSMEMOBJ *this)
{
  _DWORD *v2; // eax

  if ( *(_DWORD *)this )
  {
    **((_DWORD **)this + 1) = *(_DWORD *)(*(_DWORD *)this + 36);
    v2 = *(_DWORD **)this;
    if ( *(_DWORD *)(*(_DWORD *)this + 16) )
    {
      EngSetLastError(*(_DWORD *)(*(_DWORD *)this + 16));
      v2 = *(_DWORD **)this;
    }
    FreeTmpBuffer(v2);
  }
  else
  {
    **((_DWORD **)this + 1) = 0;
    EngSetLastError(0xEu);
  }
}
