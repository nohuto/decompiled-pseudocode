/*
 * XREFs of ?ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C02A29E0
 * Callers:
 *     ?ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C029C7D0 (-ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     McTemplateK0pqqttq_EtwWriteTransfer @ 0x1C004B218 (McTemplateK0pqqttq_EtwWriteTransfer.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C015CC08 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0298688 (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C029A7F0 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C029AD80 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C029C4B8 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ReleaseFrame(
        OUTPUTDUPL_CONTEXT *this,
        struct _D3DKMT_OUTPUTDUPL_RELEASE_FRAME *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  OUTPUTDUPL_MGR *v6; // rcx
  __int64 v7; // r8
  int v8; // ecx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  OUTPUTDUPL_MGR *v21; // rcx
  __int64 v22; // rdx
  DXGFASTMUTEX ***v23; // rcx
  unsigned int v24; // r8d
  __int64 v26; // [rsp+20h] [rbp-59h]
  __int64 v27; // [rsp+28h] [rbp-51h]
  union _LARGE_INTEGER v28[2]; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v29[16]; // [rsp+60h] [rbp-19h] BYREF

  LODWORD(v4) = 0;
  memset(v29, 0, sizeof(v29));
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
  {
    OUTPUTDUPL_MGR::InitializePacketHeader(v6, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v29);
    v8 = *((_DWORD *)this + 71);
    v29[13] = *((_DWORD *)this + 4);
    v29[1] = 64;
    v29[14] = v29[14] & 0xFFFFFFF3 | (4 * (v8 & 1));
    v29[12] = 10;
  }
  v9 = *((unsigned int *)this + 11);
  if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 2 )
  {
    v9 = (unsigned int)(v9 + 1);
    *((_DWORD *)this + 11) = v9;
    if ( (unsigned int)v9 >= *((_DWORD *)this + 10) )
    {
      *((_DWORD *)this + 11) = 0;
      v9 = 0LL;
    }
  }
  a2->NextKeyMutexIdx = v9;
  v10 = *((_QWORD *)this + 33);
  *(_QWORD *)v10 = 0LL;
  *(_DWORD *)(v10 + 20) = 0;
  *(_DWORD *)(v10 + 40) = 0;
  if ( *(_DWORD *)(v10 + 16) != 1 )
  {
    *(_DWORD *)(v10 + 16) = 0;
    v11 = *(_QWORD *)(v10 + 8);
    *(_QWORD *)v11 = 0LL;
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_DWORD *)(v11 + 16) = 0;
    *(_DWORD *)(v11 + 24) = 0;
    *(_DWORD *)(v11 + 44) = 0;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 1 && *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) == 1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v5);
    *(_QWORD *)(v12 + 24) = 2337LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( *((_DWORD *)this + 71) )
  {
    v13 = *((_QWORD *)this + 34);
    if ( *(_DWORD *)(v13 + 16) == 2 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v13, v5);
      *(_QWORD *)(v14 + 24) = 2347LL;
      WdLogEvent5_WdAssertion(v14);
      v13 = *((_QWORD *)this + 34);
    }
    v15 = (_QWORD *)*((_QWORD *)this + 33);
    *((_QWORD *)this + 34) = v15;
    *((_QWORD *)this + 33) = v13;
    if ( !*(_DWORD *)(v13 + 20) )
    {
      *(_QWORD *)v13 = *v15;
      *(_OWORD *)(*((_QWORD *)this + 33) + 24LL) = *(_OWORD *)(*((_QWORD *)this + 34) + 24LL);
      v13 = *((_QWORD *)this + 33);
    }
    *((_DWORD *)this + 71) = 0;
    if ( (*(_DWORD *)(v13 + 20) || *(_DWORD *)(v13 + 40)) && *(_DWORD *)(v13 + 16) != 1 )
    {
      v28[0].QuadPart = 0LL;
      v16 = DXGDXGIKEYEDMUTEX::AcquireCPU(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), v5, v7, v28, 0LL, 1);
      v4 = v16;
      if ( v16 == 258 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v18, v17);
        *(_QWORD *)(v19 + 24) = 2376LL;
        WdLogEvent5_WdAssertion(v19);
      }
      if ( (int)v4 < 0 )
      {
        v20 = WdLogNewEntry5_WdError(v18, v17);
        *(_QWORD *)(v20 + 24) = v4;
        WdLogEvent5_WdError(v20);
        return (unsigned int)v4;
      }
      DXGDXGIKEYEDMUTEX::Release(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), 1uLL, 0LL, 1);
      if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
        v29[14] |= 8u;
    }
  }
  v21 = (OUTPUTDUPL_MGR *)*((_QWORD *)this + 37);
  *((_DWORD *)this + 77) = 0;
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(v21) )
  {
    v29[14] = ((unsigned __int8)v24 ^ (unsigned __int8)*(_DWORD *)(*((_QWORD *)this + 33) + 16LL)) & 3 ^ v24;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(v23, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v29, 1);
    v24 = v29[14];
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v27) = *(_DWORD *)(*((_QWORD *)this + 33) + 16LL);
    LODWORD(v26) = *((_DWORD *)this + 11);
    McTemplateK0pqqttq_EtwWriteTransfer(
      (v24 >> 3) & 1,
      v22,
      (v24 >> 2) & 1,
      this,
      v26,
      v27,
      (v24 >> 2) & 1,
      (v24 >> 3) & 1,
      v4);
  }
  return (unsigned int)v4;
}
