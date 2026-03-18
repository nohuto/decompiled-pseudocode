/*
 * XREFs of ?ReportStates@VIDMM_RECYCLE_BLOCK@@QEAAXXZ @ 0x1C00C2F58
 * Callers:
 *     ?ReportBlockStates@VIDMM_RECYCLE_HEAP@@QEAAXXZ @ 0x1C00C2D90 (-ReportBlockStates@VIDMM_RECYCLE_HEAP@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pppppppqq_EtwWriteTransfer @ 0x1C0027EE8 (McTemplateK0pppppppqq_EtwWriteTransfer.c)
 *     McTemplateK0qpxp_EtwWriteTransfer @ 0x1C0028084 (McTemplateK0qpxp_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::ReportStates(VIDMM_RECYCLE_BLOCK *this, __int64 a2, __int64 a3)
{
  char *v3; // r14
  char *i; // rdi
  char *v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+50h] [rbp-18h]
  __int64 v11; // [rsp+58h] [rbp-10h]

  v3 = (char *)this + 72;
  for ( i = (char *)*((_QWORD *)this + 9); i != v3; i = *(char **)i )
  {
    v6 = i - 120;
    v7 = *((_DWORD *)i - 14);
    if ( v7 == 1 || v7 > 1 && v7 <= 5 )
    {
      if ( bTracingEnabled )
      {
        v8 = *((_QWORD *)this + 4);
        a2 = (unsigned int)(*(_DWORD *)v8 - 3) > 3 ? *((_QWORD *)v6 + 4) : *((_QWORD *)this + 7);
        a3 = *((_QWORD *)v6 + 4);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          McTemplateK0qpxp_EtwWriteTransfer(
            *((_QWORD *)v6 + 5) - a3,
            &EventCreateProcessAllocationDetails,
            a3,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL) + 8LL),
            (_BYTE)i - 120,
            v6[40] - a3,
            a2);
      }
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    {
      v9 = *((_QWORD *)this + 4);
      LODWORD(v11) = *((_DWORD *)v6 + 16);
      LODWORD(v10) = *(_DWORD *)v9;
      McTemplateK0pppppppqq_EtwWriteTransfer(
        v9,
        a2,
        a3,
        **(_QWORD **)(*(_QWORD *)(v9 + 8) + 8LL),
        i - 120,
        this,
        *((_QWORD *)this + 7),
        v9,
        *((_QWORD *)v6 + 4),
        *((_QWORD *)v6 + 5),
        v10,
        v11);
    }
  }
}
