/*
 * XREFs of KeBuildPrimaryThreadContext @ 0x1408BDFFC
 * Callers:
 *     PspGetSetContextInternal @ 0x14063E6D0 (PspGetSetContextInternal.c)
 *     KiSwapToUmsThread @ 0x1408BDA80 (KiSwapToUmsThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090E9A4 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall KeBuildPrimaryThreadContext(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r11
  __int64 v8; // r14
  __int64 v9; // r8
  __int64 v10; // r10
  unsigned __int64 v11; // r8
  int v12; // esi
  unsigned __int64 v13; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // r9
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // [rsp+40h] [rbp+8h]

  v6 = a4;
  v8 = **(_QWORD **)(a1 + 496);
  v9 = *(_QWORD *)(a1 + 240);
  v10 = *(_QWORD *)(a1 + 544);
  v26 = *(_QWORD *)(v9 + 8);
  v11 = *(_QWORD *)(v9 + 16);
  if ( a3 )
  {
    v12 = *(_DWORD *)(a3 + 48) & 0x10001B;
    *(_DWORD *)(a3 + 48) = v12;
    if ( (v12 & 0x100001) == 0x100001 )
    {
      v13 = *(_QWORD *)(v8 + 168);
      if ( (*(_DWORD *)(v10 + 632) & 0x20) != 0 && (v13 < v11 || v13 > v26) )
        return 3221225725LL;
      *(_QWORD *)(a3 + 152) = v13;
      *(_QWORD *)(a3 + 248) = *(_QWORD *)(v8 + 264);
      *(_QWORD *)(a3 + 160) = *(_QWORD *)(v8 + 176);
      *(_WORD *)(a3 + 56) = 51;
      *(_WORD *)(a3 + 66) = 43;
    }
    if ( (v12 & 0x100002) == 0x100002 )
    {
      *(_QWORD *)(a3 + 216) = a4;
      *(_QWORD *)(a3 + 224) = a5;
      *(_QWORD *)(a3 + 232) = a6;
    }
    if ( (v12 & 0x100008) == 0x100008 )
    {
      memset((void *)(a3 + 256), 0, 0x200uLL);
      *(_WORD *)(a3 + 256) = 639;
      *(_DWORD *)(a3 + 280) = 8064;
      *(_DWORD *)(a3 + 52) = 8064;
    }
    if ( (v12 & 0x100010) == 0x100010 )
    {
      *(_QWORD *)(a3 + 112) = *(_DWORD *)(v8 + 128) & 0xFFFF0355;
      *(_QWORD *)(a3 + 104) = 0LL;
      v15 = *(_QWORD *)(v8 + 88);
      if ( v15 > 0x7FFFFFFEFFFFLL )
        v15 = 0LL;
      *(_QWORD *)(a3 + 72) = v15;
      v16 = *(_QWORD *)(v8 + 96);
      if ( v16 > 0x7FFFFFFEFFFFLL )
        v16 = 0LL;
      *(_QWORD *)(a3 + 80) = v16;
      v17 = *(_QWORD *)(v8 + 104);
      if ( v17 > 0x7FFFFFFEFFFFLL )
        v17 = 0LL;
      *(_QWORD *)(a3 + 88) = v17;
      v18 = *(_QWORD *)(v8 + 112);
      if ( v18 > 0x7FFFFFFEFFFFLL )
        v18 = 0LL;
      *(_QWORD *)(a3 + 96) = v18;
    }
  }
  else
  {
    v19 = *(_QWORD *)(a2 + 80);
    v20 = *(_QWORD **)(a2 + 88);
    v21 = *(_QWORD *)(v8 + 168);
    if ( (*(_DWORD *)(v10 + 632) & 0x20) != 0 && (v21 < v11 || v21 > v26) )
      return 3221225725LL;
    *(_QWORD *)(v19 + 360) = (__int64)(*(_QWORD *)(v8 + 264) << 16) >> 16;
    *(_QWORD *)(v19 + 384) = v21;
    *(_QWORD *)(v19 + 344) = *(_QWORD *)(v8 + 176);
    *(_WORD *)(v19 + 368) = 51;
    *(_WORD *)(v19 + 392) = 43;
    v20[35] = v6;
    v20[36] = a5;
    v20[37] = a6;
    *(_DWORD *)(v19 + 44) = 8064;
    if ( (*(_DWORD *)(v8 + 128) & 0x355LL) != 0 || (*(_DWORD *)(v19 + 256) & 0x355LL) != 0 )
    {
      *(_QWORD *)(v19 + 256) = *(_DWORD *)(v8 + 88) & 0xFFFF0355;
      *(_QWORD *)(v19 + 248) = 0LL;
      v22 = *(_QWORD *)(v8 + 88);
      if ( v22 > 0x7FFFFFFEFFFFLL )
        v22 = 0LL;
      *(_QWORD *)(v19 + 216) = v22;
      v23 = *(_QWORD *)(v8 + 96);
      if ( v23 > 0x7FFFFFFEFFFFLL )
        v23 = 0LL;
      *(_QWORD *)(v19 + 224) = v23;
      v24 = *(_QWORD *)(v8 + 104);
      if ( v24 > 0x7FFFFFFEFFFFLL )
        v24 = 0LL;
      *(_QWORD *)(v19 + 232) = v24;
      v25 = *(_QWORD *)(v8 + 112);
      if ( v25 > 0x7FFFFFFEFFFFLL )
        v25 = 0LL;
      *(_QWORD *)(v19 + 240) = v25;
    }
  }
  return 0LL;
}
