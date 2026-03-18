/*
 * XREFs of ?CaptureUsermodeParameters@LoadFontFileRequest@@UAEXPAX@Z @ 0xE2FEE
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

void __thiscall LoadFontFileRequest::CaptureUsermodeParameters(LoadFontFileRequest *this, _DWORD *a2)
{
  unsigned int v3; // ecx
  int v4; // eax
  _DWORD *v5; // eax

  v3 = a2[15];
  *((_DWORD *)this + 45) = v3;
  v4 = a2[16];
  *((_DWORD *)this + 44) = v4;
  if ( v4 && v3 < 4 )
  {
    v5 = EngAllocMem(0, 0xCu, 0x46464855u);
    *((_DWORD *)this + 46) = v5;
    if ( v5 )
    {
      *v5 = *((_DWORD *)this + 44);
      *(_DWORD *)(*((_DWORD *)this + 46) + 4) = *((_DWORD *)this + 45);
      *(_BYTE *)(*((_DWORD *)this + 46) + 8) = 0;
      *(_BYTE *)(*((_DWORD *)this + 46) + 9) = 0;
    }
  }
}
