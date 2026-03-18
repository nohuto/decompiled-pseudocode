/*
 * XREFs of ?ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C013848C
 * Callers:
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C0138178 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCD_TOPOLOGY::ClearPathDescriptor(struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1)
{
  *((_OWORD *)a1 + 2) = 0LL;
  *((_BYTE *)a1 + 128) = 0;
  *((_OWORD *)a1 + 3) = 0LL;
  *((_OWORD *)a1 + 4) = 0LL;
  *((_QWORD *)a1 + 10) = 0LL;
  *(_OWORD *)((char *)a1 + 232) = 0LL;
  *((_DWORD *)a1 + 6) = -1;
  *(_OWORD *)((char *)a1 + 168) = 0LL;
  *((_DWORD *)a1 + 7) = -1;
  *((_OWORD *)a1 + 6) = 0LL;
  *((_QWORD *)a1 + 17) = 0LL;
  *(_OWORD *)((char *)a1 + 248) = 0LL;
  *((_QWORD *)a1 + 19) = 0LL;
  *((_QWORD *)a1 + 33) = 0LL;
  *((_OWORD *)a1 + 7) = 0LL;
  *(_QWORD *)((char *)a1 + 188) = 0LL;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_DWORD *)a1 + 22) = -2;
  *((_DWORD *)a1 + 23) = -2;
  *((_DWORD *)a1 + 33) = 0;
  *((_QWORD *)a1 + 18) = 0LL;
}
