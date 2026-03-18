/*
 * XREFs of ?ReportStates@VIDMM_RECYCLE_BLOCK@@QEAAXXZ @ 0x1C00E71D8
 * Callers:
 *     ?ReportBlockStates@VIDMM_RECYCLE_HEAP@@QEAAXXZ @ 0x1C00E7018 (-ReportBlockStates@VIDMM_RECYCLE_HEAP@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pppppppqq_EtwWriteTransfer @ 0x1C0032470 (McTemplateK0pppppppqq_EtwWriteTransfer.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x1C003260C (McTemplateK0qxxx_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::ReportStates(VIDMM_RECYCLE_BLOCK *this, __int64 a2, __int64 a3)
{
  char *v3; // r14
  char *i; // rdi
  char *v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // [rsp+50h] [rbp-18h]
  __int64 v12; // [rsp+58h] [rbp-10h]

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
        a2 = (unsigned int)(*(_DWORD *)v8 - 3) <= 3 ? *((_QWORD *)this + 7) : *((_QWORD *)v6 + 4);
        a3 = *((_QWORD *)v6 + 5) - *((_QWORD *)v6 + 4);
        v9 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL);
        if ( (byte_1C006E941 & 8) != 0 )
          McTemplateK0qxxx_EtwWriteTransfer(
            v9,
            &EventCreateProcessAllocationDetails,
            a3,
            *(_DWORD *)(v9 + 8),
            (_BYTE)i - 120,
            a3,
            a2);
      }
    }
    if ( (byte_1C006E942 & 2) != 0 )
    {
      v10 = *((_QWORD *)this + 4);
      LODWORD(v12) = *((_DWORD *)v6 + 16);
      LODWORD(v11) = *(_DWORD *)v10;
      McTemplateK0pppppppqq_EtwWriteTransfer(
        v10,
        a2,
        a3,
        **(_QWORD **)(*(_QWORD *)(v10 + 8) + 8LL),
        i - 120,
        this,
        *((_QWORD *)this + 7),
        v10,
        *((_QWORD *)v6 + 4),
        *((_QWORD *)v6 + 5),
        v11,
        v12);
    }
  }
}
