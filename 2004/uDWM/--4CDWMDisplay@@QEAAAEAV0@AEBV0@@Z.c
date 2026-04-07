/*
 * XREFs of ??4CDWMDisplay@@QEAAAEAV0@AEBV0@@Z @ 0x180080168
 * Callers:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18003F398 (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDWMDisplay::operator=(__int64 a1, __int64 a2)
{
  _WORD *v2; // r8
  __int64 v3; // r9

  v2 = (_WORD *)(a1 + 96);
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v3 = 32LL;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 56);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 88);
  do
  {
    *v2 = *(_WORD *)((char *)v2 + a2 - a1);
    ++v2;
    --v3;
  }
  while ( v3 );
  *(_DWORD *)(a1 + 160) = *(_DWORD *)(a2 + 160);
  *(_BYTE *)(a1 + 164) = *(_BYTE *)(a2 + 164);
  *(_QWORD *)(a1 + 168) = *(_QWORD *)(a2 + 168);
  *(_DWORD *)(a1 + 176) = *(_DWORD *)(a2 + 176);
  *(_OWORD *)(a1 + 180) = *(_OWORD *)(a2 + 180);
  *(_QWORD *)(a1 + 196) = *(_QWORD *)(a2 + 196);
  *(_DWORD *)(a1 + 204) = *(_DWORD *)(a2 + 204);
  *(_DWORD *)(a1 + 208) = *(_DWORD *)(a2 + 208);
  *(_DWORD *)(a1 + 212) = *(_DWORD *)(a2 + 212);
  *(_DWORD *)(a1 + 216) = *(_DWORD *)(a2 + 216);
  *(_BYTE *)(a1 + 220) = *(_BYTE *)(a2 + 220);
  *(_BYTE *)(a1 + 221) = *(_BYTE *)(a2 + 221);
  *(_BYTE *)(a1 + 222) = *(_BYTE *)(a2 + 222);
  *(_BYTE *)(a1 + 223) = *(_BYTE *)(a2 + 223);
  return a1;
}
