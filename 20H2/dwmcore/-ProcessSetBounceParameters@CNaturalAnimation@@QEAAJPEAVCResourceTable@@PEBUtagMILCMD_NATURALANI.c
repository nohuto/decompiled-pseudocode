/*
 * XREFs of ?ProcessSetBounceParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETBOUNCEPARAMETERS@@@Z @ 0x1801D7F00
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x1801D6EC4 (-EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z.c)
 */

__int64 __fastcall CNaturalAnimation::ProcessSetBounceParameters(
        CNaturalAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NATURALANIMATION_SETBOUNCEPARAMETERS *a3)
{
  __int64 v5; // rbx
  float v6; // xmm0_4
  void (__fastcall **v7)(__int64); // rax
  void (__fastcall *v8)(__int64); // rax
  float v9; // xmm1_4

  CNaturalAnimation::EnsureAccelerator((__int64)this, 1);
  v5 = *((_QWORD *)this + 53);
  if ( v5 )
    (**(void (__fastcall ***)(__int64))v5)(v5);
  v6 = *((float *)a3 + 2);
  v7 = *(void (__fastcall ***)(__int64))v5;
  *(float *)(v5 + 28) = v6;
  v8 = v7[1];
  *(float *)(v5 + 32) = v6 / 0.0099999998;
  LODWORD(v9) = *((_DWORD *)a3 + 3) & _xmm;
  *(float *)(v5 + 36) = v9;
  *(float *)(v5 + 40) = (float)((float)(v9 + 1.0) * -1.0) / 0.0099999998;
  v8(v5);
  return 0LL;
}
