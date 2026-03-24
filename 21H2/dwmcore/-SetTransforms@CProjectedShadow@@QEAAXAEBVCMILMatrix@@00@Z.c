/*
 * XREFs of ?SetTransforms@CProjectedShadow@@QEAAXAEBVCMILMatrix@@00@Z @ 0x18000C318
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18000A760 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     <none>
 */

void __fastcall CProjectedShadow::SetTransforms(
        CProjectedShadow *this,
        const struct CMILMatrix *a2,
        const struct CMILMatrix *a3,
        const struct CMILMatrix *a4)
{
  int v4; // xmm0_4
  int v5; // eax
  __int64 v6; // rax
  __int128 v7; // [rsp+20h] [rbp-30h]
  __int128 v8; // [rsp+30h] [rbp-20h]

  *(_OWORD *)((char *)this + 104) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 120) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 136) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 152) = *((_OWORD *)a2 + 3);
  *((_DWORD *)this + 42) = *((_DWORD *)a2 + 16);
  LODWORD(v7) = *(_DWORD *)a3;
  DWORD2(v7) = *((_DWORD *)a3 + 3);
  DWORD1(v7) = *((_DWORD *)a3 + 1);
  LODWORD(v8) = *((_DWORD *)a3 + 5);
  HIDWORD(v7) = *((_DWORD *)a3 + 4);
  DWORD1(v8) = *((_DWORD *)a3 + 7);
  DWORD2(v8) = *((_DWORD *)a3 + 12);
  v4 = *((_DWORD *)a3 + 15);
  HIDWORD(v8) = *((_DWORD *)a3 + 13);
  *(_OWORD *)((char *)this + 172) = v7;
  *(_OWORD *)((char *)this + 188) = v8;
  *((_DWORD *)this + 51) = v4;
  LODWORD(v7) = *(_DWORD *)a4;
  DWORD2(v7) = *((_DWORD *)a4 + 3);
  DWORD1(v7) = *((_DWORD *)a4 + 1);
  HIDWORD(v7) = *((_DWORD *)a4 + 4);
  LODWORD(v8) = *((_DWORD *)a4 + 5);
  DWORD1(v8) = *((_DWORD *)a4 + 7);
  *((_QWORD *)&v8 + 1) = *((_QWORD *)a4 + 6);
  v5 = *((_DWORD *)a4 + 15);
  *((_OWORD *)this + 13) = v7;
  *((_OWORD *)this + 14) = v8;
  *((_DWORD *)this + 60) = v5;
  v6 = *(_QWORD *)this;
  *((_QWORD *)this + 12) = *(_QWORD *)(*((_QWORD *)this + 2) + 352LL);
  (*(void (__fastcall **)(CProjectedShadow *, __int64, CProjectedShadow *))(v6 + 72))(this, 5LL, this);
}
