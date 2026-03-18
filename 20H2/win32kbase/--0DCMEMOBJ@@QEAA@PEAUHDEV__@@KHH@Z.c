/*
 * XREFs of ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x1C00CE94C
 * Callers:
 *     GreCreateDisplayDC @ 0x1C004DC90 (GreCreateDisplayDC.c)
 * Callees:
 *     HmgModifyHandleType @ 0x1C001F0B0 (HmgModifyHandleType.c)
 *     HmgAlloc @ 0x1C003D700 (HmgAlloc.c)
 *     INC_SHARE_REF_CNT @ 0x1C00460C0 (INC_SHARE_REF_CNT.c)
 *     ?Feature_Servicing_NtGdiGetMonitorIDCorruptedPDEV__private_IsEnabled@@YAHXZ @ 0x1C00CEBA0 (-Feature_Servicing_NtGdiGetMonitorIDCorruptedPDEV__private_IsEnabled@@YAHXZ.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, HDEV a2, unsigned int a3, int a4)
{
  struct HOBJ__ *v8; // rax
  struct HOBJ__ *v9; // rbx
  __int64 v10; // rdx
  _OWORD *v11; // rax
  PKDPC *p_BufferChainingDpc; // rcx
  __int64 v13; // r9
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  HPALETTE *v16; // rcx
  _OWORD *v17; // rax
  __int128 v18; // xmm1
  __int64 v19; // rax

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 4) = 0;
  if ( a3 <= 2 )
  {
    v8 = HmgAlloc(0x840uLL, 1u, 0x11u);
    *(_QWORD *)this = v8;
    v9 = v8;
    if ( v8 )
    {
      if ( a4 )
        HmgModifyHandleType(*(_QWORD *)v8 | 0x210000LL);
      v10 = 3LL;
      v11 = (_OWORD *)((char *)v9 + 544);
      p_BufferChainingDpc = &WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
      v13 = 3LL;
      do
      {
        *v11 = *(_OWORD *)p_BufferChainingDpc;
        v11[1] = *((_OWORD *)p_BufferChainingDpc + 1);
        v11[2] = *((_OWORD *)p_BufferChainingDpc + 2);
        v11[3] = *((_OWORD *)p_BufferChainingDpc + 3);
        v11[4] = *((_OWORD *)p_BufferChainingDpc + 4);
        v11[5] = *((_OWORD *)p_BufferChainingDpc + 5);
        v11[6] = *((_OWORD *)p_BufferChainingDpc + 6);
        v11 += 8;
        v14 = *((_OWORD *)p_BufferChainingDpc + 7);
        p_BufferChainingDpc += 16;
        *(v11 - 1) = v14;
        --v13;
      }
      while ( v13 );
      *v11 = *(_OWORD *)p_BufferChainingDpc;
      v11[1] = *((_OWORD *)p_BufferChainingDpc + 1);
      v15 = *((_OWORD *)p_BufferChainingDpc + 2);
      *((_QWORD *)v9 + 122) = (char *)v9 + 544;
      v16 = &dclevelDefault;
      v11[2] = v15;
      v17 = (_OWORD *)((char *)v9 + 80);
      do
      {
        *v17 = *(_OWORD *)v16;
        v17[1] = *((_OWORD *)v16 + 1);
        v17[2] = *((_OWORD *)v16 + 2);
        v17[3] = *((_OWORD *)v16 + 3);
        v17[4] = *((_OWORD *)v16 + 4);
        v17[5] = *((_OWORD *)v16 + 5);
        v17[6] = *((_OWORD *)v16 + 6);
        v17 += 8;
        v18 = *((_OWORD *)v16 + 7);
        v16 += 16;
        *(v17 - 1) = v18;
        --v10;
      }
      while ( v10 );
      *v17 = *(_OWORD *)v16;
      v17[1] = *((_OWORD *)v16 + 1);
      v17[2] = *((_OWORD *)v16 + 2);
      v17[3] = *((_OWORD *)v16 + 3);
      v17[4] = *((_OWORD *)v16 + 4);
      INC_SHARE_REF_CNT(*(unsigned int **)(*(_QWORD *)this + 136LL));
      INC_SHARE_REF_CNT(*(unsigned int **)(*(_QWORD *)this + 144LL));
      INC_SHARE_REF_CNT(*(unsigned int **)(*(_QWORD *)this + 96LL));
      *((_DWORD *)v9 + 8) = a3;
      *(_QWORD *)((char *)v9 + 36) = 0LL;
      *((_DWORD *)v9 + 11) = 0;
      *((_QWORD *)v9 + 147) = 0LL;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 152LL) = 1179679;
      v19 = *(_QWORD *)this + 176LL;
      *((_QWORD *)v9 + 218) = 0LL;
      *((_QWORD *)v9 + 155) = v19;
      *((_QWORD *)v9 + 172) = v19;
      *((_QWORD *)v9 + 189) = v19;
      *((_QWORD *)v9 + 206) = v19;
      *((_QWORD *)v9 + 216) = 0LL;
      *((_DWORD *)v9 + 434) = 0;
      *(_DWORD *)(*(_QWORD *)this + 2076LL) = -1;
      *(_WORD *)(*(_QWORD *)this + 2072LL) = -1;
      *((_QWORD *)v9 + 140) = 0LL;
      *((_QWORD *)v9 + 257) = 0LL;
      *((_QWORD *)v9 + 258) = 0LL;
      if ( (unsigned int)Feature_Servicing_NtGdiGetMonitorIDCorruptedPDEV__private_IsEnabled() )
        *((_QWORD *)v9 + 6) = a2;
    }
  }
  return this;
}
