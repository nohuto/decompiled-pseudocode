/*
 * XREFs of ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C02A1F74
 * Callers:
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C02A1C54 (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C02A1D44 (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C02A1E3C (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     McTemplateK0pqqqqqttttttttq_EtwWriteTransfer @ 0x1C004B09C (McTemplateK0pqqqqqttttttttq_EtwWriteTransfer.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C015CC08 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0298688 (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 *     ?HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z @ 0x1C029A518 (-HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C029A7F0 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C029AD80 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C029C4B8 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C02A2508 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessUpdateHighLevel(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2)
{
  int v2; // r12d
  _BOOL8 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  OUTPUTDUPL_MGR *v8; // rcx
  __int64 v9; // r8
  DXGFASTMUTEX ***v10; // rcx
  OUTPUTDUPL_MGR *v11; // rcx
  int v12; // ecx
  int v13; // r15d
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  int v18; // r14d
  int v19; // ebx
  int v20; // r13d
  unsigned int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rax
  int updated; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  DXGFASTMUTEX ***v36; // r10
  int v37; // r8d
  __int64 v38; // rax
  int v39; // r9d
  __int64 v40; // rax
  int *v42; // [rsp+20h] [rbp-F0h]
  int *v43; // [rsp+28h] [rbp-E8h]
  unsigned int v44; // [rsp+68h] [rbp-A8h]
  int v45; // [rsp+90h] [rbp-80h] BYREF
  int v46; // [rsp+94h] [rbp-7Ch] BYREF
  union _LARGE_INTEGER v47; // [rsp+98h] [rbp-78h] BYREF
  _DWORD v48[20]; // [rsp+A0h] [rbp-70h] BYREF
  _OWORD v49[3]; // [rsp+F0h] [rbp-20h] BYREF
  __int64 v50; // [rsp+120h] [rbp+10h]

  v2 = 0;
  v5 = *(_DWORD *)a2 == 0;
  if ( v5 != (*((_QWORD *)a2 + 1) != 0LL) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, a2);
    *(_QWORD *)(v6 + 24) = 1380LL;
    WdLogEvent5_WdAssertion(v6);
  }
  memset(v48, 0, sizeof(v48));
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
  {
    memset(v49, 0, sizeof(v49));
    v50 = 0LL;
    OUTPUTDUPL_MGR::InitializePacketHeader(v8, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v49);
    v10 = (DXGFASTMUTEX ***)*((_QWORD *)this + 37);
    HIDWORD(v50) = *((_DWORD *)this + 4);
    DWORD1(v49[0]) = 56;
    LODWORD(v50) = 5;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(v10, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v49, 0);
    OUTPUTDUPL_MGR::InitializePacketHeader(v11, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v48);
    v12 = *((_DWORD *)this + 77);
    v48[13] = *((_DWORD *)this + 4);
    v48[14] = *((_DWORD *)this + 73);
    v48[18] = *((_DWORD *)this + 71);
    v48[1] = 80;
    v48[12] = 6;
    v48[19] ^= (LOBYTE(v48[19]) ^ (unsigned __int8)(16 * v12)) & 0x10;
  }
  if ( !*(_DWORD *)a2
    && !*((_DWORD *)this + 77)
    && *((_DWORD *)this + 78)
    && (unsigned int)DXGDXGIKEYEDMUTEX::HasConsumerGPUWorkFinished(
                       *((DXGDXGIKEYEDMUTEX **)this + *((unsigned int *)this + 11) + 6),
                       *((struct DXGCONTEXT **)a2 + 1)) )
  {
    *((_DWORD *)this + 78) = 0;
  }
  v47.QuadPart = 0LL;
  v13 = 0;
  v14 = DXGDXGIKEYEDMUTEX::AcquireCPU(
          *((_QWORD *)this + *((unsigned int *)this + 11) + 6),
          v7,
          v9,
          &v47,
          *((_QWORD *)a2 + 1),
          *((_DWORD *)a2 + 4));
  v17 = v14;
  if ( v14 != 258 )
  {
    if ( v14 < 0 )
    {
      v23 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v23 + 24) = v17;
      WdLogEvent5_WdError(v23);
      return (unsigned int)v17;
    }
    v13 = 1;
  }
  v18 = 0;
  v19 = *((_DWORD *)this + 78) & 1 | (16 * (*((_DWORD *)this + 77) & 1));
  v46 = 0;
  v20 = 0;
  v21 = v13 | (16 * v19);
  v45 = 0;
  switch ( v21 )
  {
    case 0u:
      goto LABEL_26;
    case 1u:
      LODWORD(v17) = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
                       this,
                       a2,
                       *((struct DXGDXGIKEYEDMUTEX **)this + *((unsigned int *)this + 11) + 6),
                       *((struct _PRODUCER_INFO **)this + 33),
                       &v45,
                       &v46);
      v33 = *(_QWORD *)(*((_QWORD *)this + 33) + 8LL);
      v48[17] = *(_DWORD *)(v33 + 4);
      if ( *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) )
      {
        v34 = WdLogNewEntry5_WdAssertion(v33, v32);
        *(_QWORD *)(v34 + 24) = 1509LL;
        WdLogEvent5_WdAssertion(v34);
      }
      v18 = v45;
      goto LABEL_30;
    case 0x10u:
      if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 2 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v16, v15);
        *(_QWORD *)(v29 + 24) = 1532LL;
        WdLogEvent5_WdAssertion(v29);
      }
      goto LABEL_26;
    case 0x11u:
      updated = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
                  this,
                  a2,
                  0LL,
                  *((struct _PRODUCER_INFO **)this + 33),
                  &v45,
                  &v46);
      v18 = v45;
      LODWORD(v17) = updated;
      if ( v45 && !*(_DWORD *)a2 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v26, v25);
        *(_QWORD *)(v27 + 24) = 1522LL;
        WdLogEvent5_WdAssertion(v27);
      }
      v28 = *((_QWORD *)this + 33);
      goto LABEL_29;
  }
  if ( v21 > 0x10F )
  {
LABEL_26:
    v30 = *((_QWORD *)this + 33);
    if ( *(_DWORD *)(v30 + 16) == 1 )
    {
      v20 = 1;
      v31 = *(_QWORD *)(v30 + 8);
      *(_QWORD *)(v30 + 8) = *(_QWORD *)(*((_QWORD *)this + 34) + 8LL);
      *(_QWORD *)(*((_QWORD *)this + 34) + 8LL) = v31;
      *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) = 1;
      *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) = 0;
    }
    LODWORD(v17) = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
                     this,
                     a2,
                     0LL,
                     *((struct _PRODUCER_INFO **)this + 34),
                     0LL,
                     &v46);
    *((_DWORD *)this + 71) = 1;
    v28 = *((_QWORD *)this + 34);
LABEL_29:
    v48[17] = *(_DWORD *)(*(_QWORD *)(v28 + 8) + 4LL);
    goto LABEL_30;
  }
  v22 = WdLogNewEntry5_WdAssertion(v16, v15);
  *(_QWORD *)(v22 + 24) = v21;
  WdLogEvent5_WdAssertion(v22);
  LODWORD(v17) = -1073741595;
LABEL_30:
  if ( v13 )
  {
    if ( !v18 || *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 1 )
    {
      v35 = *((_QWORD *)this + *((unsigned int *)this + 11) + 6);
      DXGDXGIKEYEDMUTEX::Release(v35, *(_QWORD *)(v35 + 136), 0LL, *((_DWORD *)a2 + 4));
    }
    else
    {
      DXGDXGIKEYEDMUTEX::Release(
        *((_QWORD *)this + *((unsigned int *)this + 11) + 6),
        1uLL,
        *((_QWORD *)a2 + 1),
        *((_DWORD *)a2 + 4));
      v2 = 1;
    }
  }
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
  {
    v37 = *((_DWORD *)this + 78) & 1;
    v48[15] = v17;
    v48[16] = v13;
    v38 = *((_QWORD *)this + 33);
    v48[19] = v48[19] & 0xFFFFFE3F | ((v46 & 1 | (2 * (v18 & 1 | (2 * v20)))) << 6);
    v39 = (LOBYTE(v48[19]) ^ (unsigned __int8)*(_DWORD *)(v38 + 16)) & 3;
    v40 = *((_QWORD *)this + 34);
    v48[19] ^= v39;
    v48[19] = v48[19] & 0xFFFFFDD3 | (4 * (*(_DWORD *)(v40 + 16) & 3 | (8 * ((16 * v2) | v37))));
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(v36, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v48, 1);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v44 = *((_DWORD *)this + 71);
    LODWORD(v43) = *(_DWORD *)a2;
    LODWORD(v42) = *((_DWORD *)this + 11);
    McTemplateK0pqqqqqttttttttq_EtwWriteTransfer(
      *((_QWORD *)this + 34),
      *((_QWORD *)this + 33),
      v44,
      this,
      v42,
      v43,
      *(_DWORD *)(*((_QWORD *)this + 33) + 16LL),
      v44,
      *(_DWORD *)(*((_QWORD *)this + 34) + 16LL),
      v13,
      *((_DWORD *)this + 77),
      *((_DWORD *)this + 78),
      v18,
      v44,
      v20,
      v2,
      v46,
      v17);
  }
  return (unsigned int)v17;
}
