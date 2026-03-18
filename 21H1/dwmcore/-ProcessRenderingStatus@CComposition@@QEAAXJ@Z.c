/*
 * XREFs of ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x180041F64
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18003E980 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18004384C (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x18008B64C (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800B5784 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800CD8E4 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800CD994 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 */

void __fastcall CComposition::ProcessRenderingStatus(CComposition *this, int a2)
{
  unsigned int v2; // esi
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+24h] [rbp-24h]
  __int64 v10; // [rsp+34h] [rbp-14h]

  v2 = *((_DWORD *)this + 82);
  if ( a2 == -2003304307 )
  {
    v5 = 1;
  }
  else
  {
    v4 = *((_QWORD *)this + 11);
    if ( *(_BYTE *)(v4 + 132) && !*(_BYTE *)(v4 + 133) )
    {
      v5 = 2;
      if ( v2 == 2 )
        goto LABEL_6;
      CMmcssTask::Revert((CComposition *)((char *)this + 184));
      goto LABEL_12;
    }
    v5 = 0;
  }
  if ( v2 != 2 )
    goto LABEL_5;
  CMmcssTask::Apply((CComposition *)((char *)this + 184), 0);
LABEL_12:
  CComposition::UpdateMmcssPartners(this);
LABEL_5:
  if ( v5 != v2 )
  {
    v7 = *((_QWORD *)this + 43);
    *((_DWORD *)this + 82) = v5;
    if ( v7 && v5 == 1 )
      *(_BYTE *)(v7 + 20) = 1;
    v8 = 5;
    v9 = 0LL;
    *(_QWORD *)((char *)&v9 + 4) = __PAIR64__(v5, v2);
    v10 = 0LL;
    CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)&v8);
  }
LABEL_6:
  v6 = *((_QWORD *)this + 43);
  if ( v6 && v5 == 2 )
  {
    if ( *((_DWORD *)this + 112) )
      *(_BYTE *)(v6 + 20) = 1;
  }
}
