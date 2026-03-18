/*
 * XREFs of ?ProcessLegacyScaleTransform3DUpdateCommand@@YAJPEAVCScaleTransform3D@@PEAVCChannelContext@@PEBUtagMILCMD_SCALETRANSFORM3D@@@Z @ 0x180205B18
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ProcessLegacyScaleTransform3DUpdateCommand(
        struct CScaleTransform3D *a1,
        struct CChannelContext *a2,
        const struct tagMILCMD_SCALETRANSFORM3D *a3)
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

  v3 = *((float *)a3 + 2);
  if ( v3 != *((float *)a1 + 40) )
  {
    v6 = *(_QWORD *)a1;
    *((float *)a1 + 40) = v3;
    (*(void (__fastcall **)(struct CScaleTransform3D *, _QWORD, _QWORD))(v6 + 72))(a1, 0LL, 0LL);
  }
  v7 = *((float *)a3 + 3);
  if ( v7 != *((float *)a1 + 41) )
  {
    v8 = *(_QWORD *)a1;
    *((float *)a1 + 41) = v7;
    (*(void (__fastcall **)(struct CScaleTransform3D *, _QWORD, _QWORD))(v8 + 72))(a1, 0LL, 0LL);
  }
  v9 = *((float *)a3 + 4);
  if ( v9 != *((float *)a1 + 42) )
  {
    v10 = *(_QWORD *)a1;
    *((float *)a1 + 42) = v9;
    (*(void (__fastcall **)(struct CScaleTransform3D *, _QWORD, _QWORD))(v10 + 72))(a1, 0LL, 0LL);
  }
  v11 = *((float *)a3 + 5);
  if ( v11 != *((float *)a1 + 43) )
  {
    v12 = *(_QWORD *)a1;
    *((float *)a1 + 43) = v11;
    (*(void (__fastcall **)(struct CScaleTransform3D *, _QWORD, _QWORD))(v12 + 72))(a1, 0LL, 0LL);
  }
  v13 = *((float *)a3 + 6);
  if ( v13 != *((float *)a1 + 44) )
  {
    v14 = *(_QWORD *)a1;
    *((float *)a1 + 44) = v13;
    (*(void (__fastcall **)(struct CScaleTransform3D *, _QWORD, _QWORD))(v14 + 72))(a1, 0LL, 0LL);
  }
  v15 = *((float *)a3 + 7);
  if ( v15 != *((float *)a1 + 45) )
  {
    v16 = *(_QWORD *)a1;
    *((float *)a1 + 45) = v15;
    (*(void (__fastcall **)(struct CScaleTransform3D *, _QWORD, _QWORD))(v16 + 72))(a1, 0LL, 0LL);
  }
  return 0LL;
}
