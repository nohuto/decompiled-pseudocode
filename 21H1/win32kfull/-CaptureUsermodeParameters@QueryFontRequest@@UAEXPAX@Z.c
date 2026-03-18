/*
 * XREFs of ?CaptureUsermodeParameters@QueryFontRequest@@UAEXPAX@Z @ 0xE00D8
 * Callers:
 *     <none>
 * Callees:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SGPAXW4FontDriverType@@KPAXIPA_NP6G_N11I@Z@Z @ 0x8CDC4 (-ObtainKernelmodeAllocation@UmfdAllocation@@SGPAXW4FontDriverType@@KPAXIPA_NP6G_N11I@Z@Z.c)
 *     ?Win32ProbeForRead@@YGXPAXKK@Z @ 0x8D388 (-Win32ProbeForRead@@YGXPAXKK@Z.c)
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SGXPAX@Z @ 0xD3290 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SGXPAX@Z.c)
 *     ?ValidateIFIMETRICS@@YG_NPAU_IFIMETRICS@@@Z @ 0xE01BE (-ValidateIFIMETRICS@@YG_NPAU_IFIMETRICS@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

void __thiscall QueryFontRequest::CaptureUsermodeParameters(QueryFontRequest *this, _DWORD *a2)
{
  _DWORD *v3; // edx
  ULONG v4; // ecx
  size_t *v5; // edx
  size_t v6; // ebx
  void *v7; // ecx
  int *v8; // esi
  int v9; // eax
  char *v10; // eax
  char *v11; // esi
  void *v12; // [esp-10h] [ebp-44h]
  unsigned int v13; // [esp+0h] [ebp-34h]
  struct _IFIMETRICS *v14; // [esp+0h] [ebp-34h]
  unsigned int v15; // [esp+4h] [ebp-30h]
  void *v16; // [esp+3Ch] [ebp+8h]

  v3 = (_DWORD *)a2[3];
  *((_DWORD *)this + 12) = a2[4];
  if ( v3 == *((_DWORD **)this + 11) )
  {
    **((_DWORD **)this + 9) = *v3;
    v4 = *((_DWORD *)this + 12);
    if ( v4 )
    {
      Win32ProbeForRead(184, v4, (void *)4, v13, v15);
      v5 = (size_t *)*((_DWORD *)this + 12);
      v6 = *v5;
      v7 = (void *)v5[1];
      v16 = v7;
      if ( *v5 >= 0xB6 && (!v7 || v6 >= 0xB8 && (unsigned int)v7 < v6 && v6 - (unsigned int)v7 >= 0xB8) )
      {
        v12 = (void *)*((_DWORD *)this + 12);
        v8 = (int *)*((_DWORD *)this + 9);
        v9 = (**(int (__thiscall ***)(QueryFontRequest *))this)(this);
        v10 = UmfdAllocation::ObtainKernelmodeAllocation(
                v9,
                *v8,
                v12,
                v6,
                0,
                (int)UmfdAllocation::TryBufferHasSameContent);
        v11 = v10;
        if ( v10 )
        {
          *(_DWORD *)v10 = v6;
          *((_DWORD *)v10 + 1) = v16;
          if ( ValidateIFIMETRICS(v14) )
            *((_DWORD *)this + 10) = v11;
          else
            UmfdAllocation::ReleaseKernelmodeAllocation(v11);
        }
      }
    }
  }
}
