/*
 * XREFs of ?ComposeDeviceGammaRampsUnsafe@PDEVOBJ@@QEAAXXZ @ 0x1C0149BF0
 * Callers:
 *     ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C0149D94 (-GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PDEVOBJ::ComposeDeviceGammaRampsUnsafe(PDEVOBJ *this)
{
  __int64 v1; // rbx
  _WORD *v2; // rdx
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // r10
  __int64 v9; // rdi

  v1 = 256LL;
  v2 = *(_WORD **)(*(_QWORD *)this + 1704LL);
  v3 = *(_QWORD *)(*(_QWORD *)this + 1688LL);
  v4 = *(_QWORD *)(*(_QWORD *)this + 1696LL);
  v5 = v3 + 512;
  v6 = v3 - (_QWORD)v2;
  v7 = v5 + 512;
  v8 = v5 - (_QWORD)v2;
  v9 = v7 - (_QWORD)v2;
  do
  {
    *v2 = *(_WORD *)(v4 + 2LL * *((unsigned __int8 *)v2 + v6 + 1));
    v2[256] = *(_WORD *)(v4 + 2LL * *((unsigned __int8 *)v2 + v8 + 1) + 512);
    v2[512] = *(_WORD *)(v4 + 2LL * *((unsigned __int8 *)v2 + v9 + 1) + 1024);
    ++v2;
    --v1;
  }
  while ( v1 );
}
