/*
 * XREFs of ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1C0169C9C
 * Callers:
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x1C01639B0 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C0169BBC (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N1W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0134888 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N1W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AddPathDescriptor(
        CCD_TOPOLOGY *this,
        const struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR **a3)
{
  int v5; // r9d
  char v6; // cl
  __int64 result; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v8; // rcx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v9; // [rsp+70h] [rbp+18h] BYREF

  v9 = a3;
  if ( (*(_QWORD *)a2 & 0x1000000000LL) != 0 && (*((_DWORD *)this + 21) & 1) == 0 )
    return 0LL;
  v5 = *((_DWORD *)a2 + 7);
  v6 = *((_BYTE *)a2 + 129);
  v9 = 0LL;
  result = CCD_TOPOLOGY::AddPathDescriptor(
             (__int64)this,
             (_QWORD *)a2 + 2,
             *((_DWORD *)a2 + 6),
             v5,
             v6 & 1,
             (v6 & 2) != 0,
             *((_DWORD *)a2 + 22),
             *((_DWORD *)a2 + 23),
             *((_DWORD *)a2 + 53),
             (__int64 *)&v9);
  if ( (int)result >= 0 )
  {
    v8 = v9;
    *v9 = *(struct D3DKMT_PATHMODALITY_DESCRIPTOR **)a2;
    *((_OWORD *)v8 + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)v8 + 3) = *((_OWORD *)a2 + 3);
    *((_OWORD *)v8 + 4) = *((_OWORD *)a2 + 4);
    v8[10] = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)*((_QWORD *)a2 + 10);
    *((_DWORD *)v8 + 22) = *((_DWORD *)a2 + 22);
    *((_DWORD *)v8 + 23) = *((_DWORD *)a2 + 23);
    *((_OWORD *)v8 + 6) = *((_OWORD *)a2 + 6);
    *((_OWORD *)v8 + 7) = *((_OWORD *)a2 + 7);
    *((_DWORD *)v8 + 33) = *((_DWORD *)a2 + 33);
    *((_DWORD *)v8 + 34) = *((_DWORD *)a2 + 34);
    *((_DWORD *)v8 + 35) = *((_DWORD *)a2 + 35);
    v8[18] = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)*((_QWORD *)a2 + 18);
    v8[19] = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)*((_QWORD *)a2 + 19);
    *(_OWORD *)(v8 + 21) = *(_OWORD *)((char *)a2 + 168);
    *((_DWORD *)v8 + 46) = *((_DWORD *)a2 + 46);
    *((_DWORD *)v8 + 47) = *((_DWORD *)a2 + 47);
    *((_DWORD *)v8 + 48) = *((_DWORD *)a2 + 48);
    *((_DWORD *)v8 + 51) = *((_DWORD *)a2 + 51);
    *((_DWORD *)v8 + 52) = *((_DWORD *)a2 + 52);
    return (unsigned int)result;
  }
  return result;
}
