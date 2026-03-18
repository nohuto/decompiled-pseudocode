/*
 * XREFs of ?PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z @ 0x1C007E09C
 * Callers:
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C007CF24 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C00790A0 (--$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlip.c)
 */

__int64 __fastcall CFlipManager::PostFlipManagerIFlipFrameStatistics(CFlipManager *this, struct CFlipManagerToken *a2)
{
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // ebx
  int v10; // [rsp+20h] [rbp-49h] BYREF
  CFlipConsumerMessage *v11; // [rsp+28h] [rbp-41h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-39h] BYREF
  int v13; // [rsp+40h] [rbp-29h]
  __int64 v14; // [rsp+44h] [rbp-25h]
  int v15; // [rsp+4Ch] [rbp-1Dh]
  __int64 v16; // [rsp+50h] [rbp-19h]
  __int64 v17; // [rsp+58h] [rbp-11h]
  __int64 v18; // [rsp+60h] [rbp-9h]
  GUID v19; // [rsp+70h] [rbp+7h] BYREF
  int v20; // [rsp+80h] [rbp+17h]
  int *v21; // [rsp+88h] [rbp+1Fh]
  GUID v22; // [rsp+90h] [rbp+27h]
  int v23; // [rsp+A0h] [rbp+37h]
  _QWORD *v24; // [rsp+A8h] [rbp+3Fh]

  v14 = 0LL;
  v15 = 0;
  v3 = *((_QWORD *)a2 + 8);
  v4 = *((_QWORD *)a2 + 10);
  v11 = 0LL;
  v12[0] = v4;
  v10 = 3;
  v5 = *(_QWORD *)(v3 + 96);
  v19 = GUID_c61fb26f_e968_4c5e_9baa_e64d8c4362a8;
  v20 = 4;
  v12[1] = *(_QWORD *)(v5 + 16);
  v6 = *(_QWORD *)(v3 + 96);
  v22 = GUID_d95b714e_88dd_40d3_8ac6_cc1f0f048571;
  v23 = 56;
  v13 = *(_DWORD *)(v6 + 24);
  v16 = *(_QWORD *)(v3 + 88);
  v17 = *(_QWORD *)(*(_QWORD *)(v3 + 96) + 32LL);
  v7 = *(unsigned int *)(*(_QWORD *)(v3 + 96) + 40LL);
  v21 = &v10;
  v18 = v7;
  v24 = v12;
  v8 = CreateFlipPropertySetWorker<CFlipConsumerMessage>(2u, (char *)&v19, 0, &v11);
  if ( v8 >= 0 )
    (*(void (__fastcall **)(_QWORD, CFlipConsumerMessage *))(**((_QWORD **)this + 28) + 8LL))(
      *((_QWORD *)this + 28),
      v11);
  return (unsigned int)v8;
}
