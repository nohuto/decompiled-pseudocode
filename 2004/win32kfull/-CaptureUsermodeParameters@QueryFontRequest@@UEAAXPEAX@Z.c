/*
 * XREFs of ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x1C00E6B90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C00E16CC (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ?ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C00E6CB8 (-ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z.c)
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C00E710C (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     ?Win32ProbeForRead@@YAXPEAX_KK@Z @ 0x1C00E76AC (-Win32ProbeForRead@@YAXPEAX_KK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall QueryFontRequest::CaptureUsermodeParameters(QueryFontRequest *this, _QWORD *a2)
{
  _QWORD *v3; // r8
  void *v4; // rcx
  unsigned int *v5; // r15
  unsigned int v6; // esi
  ULONG v7; // r14d
  _QWORD *v8; // rbx
  unsigned int v9; // eax
  struct _IFIMETRICS *v10; // rax
  char *v11; // rbx
  __int64 v12; // [rsp+30h] [rbp-18h]
  _QWORD *v13; // [rsp+38h] [rbp-10h]

  v3 = (_QWORD *)a2[3];
  v13 = v3;
  *((_QWORD *)this + 11) = a2[4];
  if ( v3 == *((_QWORD **)this + 10) )
  {
    **((_QWORD **)this + 8) = *v3;
    v4 = (void *)*((_QWORD *)this + 11);
    if ( v4 )
    {
      Win32ProbeForRead(v4, 0xC0uLL, 8u);
      v5 = (unsigned int *)*((_QWORD *)this + 11);
      v6 = *v5;
      LODWORD(v12) = *v5;
      v7 = v5[1];
      HIDWORD(v12) = v7;
      if ( *v5 >= 0xB6 && (!v7 || v6 >= 0xC0 && v7 < v6 && v6 - v7 >= 0xC0) )
      {
        v8 = (_QWORD *)*((_QWORD *)this + 8);
        v9 = (**(__int64 (__fastcall ***)(QueryFontRequest *))this)(this);
        v10 = (struct _IFIMETRICS *)UmfdAllocation::ObtainKernelmodeAllocation(
                                      v9,
                                      *v8,
                                      v5,
                                      v6,
                                      0LL,
                                      UmfdAllocation::TryBufferHasSameContent,
                                      v12,
                                      v13);
        v11 = (char *)v10;
        if ( v10 )
        {
          v10->cjThis = v6;
          v10->cjIfiExtra = v7;
          if ( ValidateIFIMETRICS(v10) )
            *((_QWORD *)this + 9) = v11;
          else
            UmfdAllocation::ReleaseKernelmodeAllocation(v11);
        }
      }
    }
  }
}
