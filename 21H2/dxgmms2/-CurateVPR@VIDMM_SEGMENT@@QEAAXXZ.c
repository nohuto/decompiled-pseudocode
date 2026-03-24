/*
 * XREFs of ?CurateVPR@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00C6774
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C008EC90 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001D90 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     McTemplateK0phhhqqx_EtwWriteTransfer @ 0x1C0028670 (McTemplateK0phhhqqx_EtwWriteTransfer.c)
 *     McTemplateK0phhhxxqqx_EtwWriteTransfer @ 0x1C002873C (McTemplateK0phhhxxqqx_EtwWriteTransfer.c)
 *     ?PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B2430 (-PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW.c)
 *     Percentagex100 @ 0x1C00C7D44 (Percentagex100.c)
 *     ?CalculateCapacity@VIDMM_LINEAR_POOL@@QEAA_KXZ @ 0x1C00CE3EC (-CalculateCapacity@VIDMM_LINEAR_POOL@@QEAA_KXZ.c)
 */

void __fastcall VIDMM_SEGMENT::CurateVPR(VIDMM_SEGMENT *this)
{
  bool v2; // zf
  __int16 v3; // bp
  __int64 v4; // r11
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  unsigned int v12; // ebp
  __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  __int16 v15; // si
  __int64 v16; // r11
  unsigned int v17; // r9d
  int v18; // r10d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  _QWORD *v26; // rax
  __int64 v27; // [rsp+20h] [rbp-58h]
  __int64 v28; // [rsp+28h] [rbp-50h]
  __int64 v29; // [rsp+40h] [rbp-38h]
  unsigned __int8 v30; // [rsp+80h] [rbp+8h] BYREF
  __int64 v31; // [rsp+88h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 448) )
  {
    v2 = bTracingEnabled == 0;
    *((_BYTE *)this + 448) = 1;
    if ( !v2 )
    {
      VIDMM_LINEAR_POOL::CalculateCapacity(*((VIDMM_LINEAR_POOL **)this + 19));
      v3 = VIDMM_SEGMENT::DriverId(this);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      {
        Percentagex100(*((_QWORD *)this + 55), *((_QWORD *)this + 54));
        Percentagex100((unsigned int)dword_1C00504C8, (unsigned int)dword_1C00504CC);
        v29 = v4;
        LOWORD(v28) = v3;
        LOWORD(v27) = *((_WORD *)this + 190);
        McTemplateK0phhhxxqqx_EtwWriteTransfer(v6, v5, v7, *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
      }
    }
    v8 = *((_QWORD *)this + 54);
    v9 = *((_QWORD *)this + 55);
    if ( v9 < v8 * (unsigned __int64)(unsigned int)dword_1C00504C8 / (unsigned int)dword_1C00504CC )
    {
      v10 = VIDMM_LINEAR_POOL::CalculateCapacity(*((VIDMM_LINEAR_POOL **)this + 19));
      v12 = dword_1C00504D4;
      v13 = v8 - v9;
      v14 = (unsigned __int64)(unsigned int)dword_1C00504D0 * v13 % (unsigned int)dword_1C00504D4;
      if ( v10 < (unsigned __int64)(unsigned int)dword_1C00504D0 * v13 / (unsigned int)dword_1C00504D4 )
      {
        v31 = 0LL;
        v30 = 0;
        if ( bTracingEnabled )
        {
          v15 = VIDMM_SEGMENT::DriverId(this);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          {
            Percentagex100(v16, v13);
            Percentagex100(v17, v12);
            LODWORD(v29) = v18;
            LOWORD(v28) = v15;
            LOWORD(v27) = *((_WORD *)this + 190);
            McTemplateK0phhhqqx_EtwWriteTransfer(v20, v19, v21, *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
          }
        }
        v22 = VIDMM_GLOBAL::PrepareMoveResources(
                *((VIDMM_GLOBAL **)this + 1),
                v14,
                v11,
                *((_DWORD *)this + 4),
                v27,
                v28,
                *((_QWORD *)this + 52),
                *((_QWORD *)this + 53),
                v29,
                &v30,
                (__int64)&v31);
        v25 = v22;
        if ( v22 < 0 )
        {
          v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23);
          v26[4] = v31;
          v26[3] = v25;
          v26[5] = v30;
          WdLogEvent5_WdWarning(v26);
        }
      }
    }
  }
}
