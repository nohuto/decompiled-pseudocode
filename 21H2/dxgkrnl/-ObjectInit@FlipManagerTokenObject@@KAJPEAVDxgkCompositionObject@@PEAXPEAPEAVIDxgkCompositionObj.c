/*
 * XREFs of ?ObjectInit@FlipManagerTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C0064020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FlipManagerTokenObject::ObjectInit(
        struct DxgkCompositionObject *a1,
        _QWORD *a2,
        struct IDxgkCompositionObject **a3)
{
  struct IDxgkCompositionObject *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax

  v3 = (struct DxgkCompositionObject *)((char *)a1 + 32);
  if ( a1 != (struct DxgkCompositionObject *)-32LL )
  {
    *((_QWORD *)a1 + 8) = 6LL;
    *(_QWORD *)v3 = &CFlipManagerToken::`vftable'{for `IDxgkCompositionObject'};
    *((_QWORD *)a1 + 5) = &CFlipManagerToken::`vftable'{for `CTokenBase'};
    *((_QWORD *)a1 + 9) = &CFlipManagerToken::`vftable'{for `CPushLock'};
    *((_QWORD *)a1 + 10) = 0LL;
    *((_QWORD *)a1 + 11) = 0LL;
    *((_QWORD *)a1 + 14) = 0LL;
    *((_QWORD *)a1 + 15) = 0LL;
    *((_QWORD *)a1 + 16) = 0LL;
    *((_QWORD *)a1 + 17) = 0LL;
    *((_WORD *)a1 + 72) = 0;
    *((_QWORD *)a1 + 12) = 0LL;
    *((_QWORD *)a1 + 13) = 0LL;
  }
  *a3 = v3;
  *((_DWORD *)a1 + 16) = 0;
  *((_QWORD *)a1 + 14) = *a2;
  v4 = a2[1];
  *a2 = 0LL;
  *((_QWORD *)a1 + 15) = v4;
  v5 = a2[3];
  a2[1] = 0LL;
  *((_QWORD *)a1 + 16) = v5;
  *((_QWORD *)a1 + 17) = a2[4];
  *((_BYTE *)a1 + 144) = *((_BYTE *)a2 + 16);
  result = 0LL;
  *((_BYTE *)a1 + 145) = 1;
  return result;
}
