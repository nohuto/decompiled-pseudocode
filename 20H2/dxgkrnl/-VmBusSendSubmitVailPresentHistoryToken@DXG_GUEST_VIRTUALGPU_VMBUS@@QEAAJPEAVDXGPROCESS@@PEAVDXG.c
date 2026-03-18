/*
 * XREFs of ?VmBusSendSubmitVailPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGSYNCOBJECT@@PEAVDXGALLOCATION_VGPU@@I_K@Z @ 0x1C024BE44
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C0102FF0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C024C330 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitVailPresentHistoryToken(
        DXG_VMBUS_CHANNEL_BASE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11)
{
  int v15; // eax
  unsigned int v16; // r15d
  _QWORD *v17; // rax
  unsigned int v18; // ecx
  _QWORD *v19; // rdi
  int v20; // eax
  _OWORD *v21; // rcx
  int v22; // eax
  int v23; // edx
  __int64 v24; // rax
  _OWORD *v25; // rdx
  __int64 v26; // r9
  __int128 v27; // xmm1
  bool v28; // zf
  int v29; // eax

  if ( a7 )
    v15 = *(_DWORD *)(a7 + 8);
  else
    v15 = 0;
  v16 = v15 + 1160;
  v17 = operator new((unsigned int)(v15 + 1160), 0x4B677844u, 1, (POOL_TYPE)512);
  v18 = *(_DWORD *)(a2 + 424);
  v19 = v17;
  *v17 = 0LL;
  v17[1] = v18;
  *((_DWORD *)v17 + 4) = 64;
  if ( a3 )
    v20 = *(_DWORD *)(a3 + 28);
  else
    v20 = 0;
  v21 = a6;
  *((_DWORD *)v19 + 6) = v20;
  v19[4] = a5;
  v22 = a8;
  v19[6] = a7;
  v19[5] = a6;
  v19[7] = a4;
  if ( a8 )
    v22 = *(_DWORD *)(a8 + 76);
  *((_DWORD *)v19 + 16) = v22;
  if ( a9 )
    v23 = *(_DWORD *)(a9 + 96);
  else
    v23 = 0;
  v24 = 8LL;
  *((_DWORD *)v19 + 17) = v23;
  v25 = v19 + 9;
  v26 = 128LL;
  do
  {
    *v25 = *v21;
    v25[1] = v21[1];
    v25[2] = v21[2];
    v25[3] = v21[3];
    v25[4] = v21[4];
    v25[5] = v21[5];
    v25[6] = v21[6];
    v25 += 8;
    v27 = v21[7];
    v21 += 8;
    *(v25 - 1) = v27;
    --v24;
  }
  while ( v24 );
  *v25 = *v21;
  v25[1] = v21[1];
  v25[2] = v21[2];
  *((_QWORD *)v25 + 6) = *((_QWORD *)v21 + 6);
  v28 = *((_DWORD *)v19 + 18) == 2;
  v19[10] = a11;
  if ( v28 )
  {
    v19[17] = 0LL;
    *((_DWORD *)v19 + 33) &= ~0x2000000u;
    v19[15] = 0LL;
    v19[12] = a10;
    v19[18] = 0LL;
  }
  if ( a7 )
    v29 = *(_DWORD *)(a7 + 8);
  else
    v29 = 0;
  *((_DWORD *)v19 + 288) = v29;
  if ( a7 )
    memmove(v19 + 145, (const void *)(a7 + 16), *(unsigned int *)(a7 + 8));
  return DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
           a1,
           (struct DXGKVMB_COMMAND_BASE *)v19,
           v16,
           (struct _MDL *)v26);
}
