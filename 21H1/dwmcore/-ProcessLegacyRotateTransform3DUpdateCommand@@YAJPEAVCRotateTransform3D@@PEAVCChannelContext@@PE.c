/*
 * XREFs of ?ProcessLegacyRotateTransform3DUpdateCommand@@YAJPEAVCRotateTransform3D@@PEAVCChannelContext@@PEBUtagMILCMD_ROTATETRANSFORM3D@@@Z @ 0x1801B7180
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ProcessLegacyRotateTransform3DUpdateCommand(
        struct CRotateTransform3D *a1,
        struct CChannelContext *a2,
        const struct tagMILCMD_ROTATETRANSFORM3D *a3)
{
  float v3; // xmm0_4
  __int64 v6; // rax
  float v7; // xmm0_4
  __int64 v8; // rax
  float v9; // xmm0_4
  __int64 v10; // rax
  float v11; // xmm0_4
  __int64 v12; // rax
  float v13; // xmm0_4
  __int64 v14; // rax
  float v15; // xmm0_4
  __int64 v16; // rax
  float v17; // xmm0_4
  __int64 v18; // rax

  v3 = *((float *)a3 + 2);
  if ( v3 != *((float *)a1 + 38) )
  {
    v6 = *(_QWORD *)a1;
    *((float *)a1 + 38) = v3;
    (*(void (__fastcall **)(struct CRotateTransform3D *, _QWORD, _QWORD))(v6 + 72))(a1, 0LL, 0LL);
  }
  v7 = *((float *)a3 + 3);
  if ( v7 != *((float *)a1 + 39) )
  {
    v8 = *(_QWORD *)a1;
    *((float *)a1 + 39) = v7;
    (*(void (__fastcall **)(struct CRotateTransform3D *, _QWORD, _QWORD))(v8 + 72))(a1, 0LL, 0LL);
  }
  v9 = *((float *)a3 + 4);
  if ( v9 != *((float *)a1 + 40) )
  {
    v10 = *(_QWORD *)a1;
    *((float *)a1 + 40) = v9;
    (*(void (__fastcall **)(struct CRotateTransform3D *, _QWORD, _QWORD))(v10 + 72))(a1, 0LL, 0LL);
  }
  v11 = *((float *)a3 + 5);
  if ( v11 != *((float *)a1 + 41) )
  {
    v12 = *(_QWORD *)a1;
    *((float *)a1 + 41) = v11;
    (*(void (__fastcall **)(struct CRotateTransform3D *, _QWORD, _QWORD))(v12 + 72))(a1, 0LL, 0LL);
  }
  v13 = *((float *)a3 + 6);
  if ( v13 != *((float *)a1 + 42) )
  {
    v14 = *(_QWORD *)a1;
    *((float *)a1 + 42) = v13;
    (*(void (__fastcall **)(struct CRotateTransform3D *, _QWORD, _QWORD))(v14 + 72))(a1, 0LL, 0LL);
  }
  v15 = *((float *)a3 + 7);
  if ( v15 != *((float *)a1 + 43) )
  {
    v16 = *(_QWORD *)a1;
    *((float *)a1 + 43) = v15;
    (*(void (__fastcall **)(struct CRotateTransform3D *, _QWORD, _QWORD))(v16 + 72))(a1, 0LL, 0LL);
  }
  v17 = *((float *)a3 + 8);
  if ( v17 != *((float *)a1 + 44) )
  {
    v18 = *(_QWORD *)a1;
    *((float *)a1 + 44) = v17;
    (*(void (__fastcall **)(struct CRotateTransform3D *, _QWORD, _QWORD))(v18 + 72))(a1, 0LL, 0LL);
  }
  return 0LL;
}
