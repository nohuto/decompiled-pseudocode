/*
 * XREFs of DxgkCopyPathsModality @ 0x1C0293C50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0131FF4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Copy@CCD_TOPOLOGY@@QEAAJPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C02E92B8 (-Copy@CCD_TOPOLOGY@@QEAAJPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall DxgkCopyPathsModality(__int64 a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  unsigned int v3; // ebx
  int v4; // [rsp+20h] [rbp-60h] BYREF
  __int128 v5; // [rsp+28h] [rbp-58h]
  __int64 v6; // [rsp+38h] [rbp-48h]
  __int16 v7; // [rsp+40h] [rbp-40h]
  __int128 v8; // [rsp+48h] [rbp-38h]
  __int64 v9; // [rsp+58h] [rbp-28h]
  __int64 v10; // [rsp+60h] [rbp-20h]
  bool v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]
  int v13; // [rsp+70h] [rbp-10h]
  __int64 v14; // [rsp+74h] [rbp-Ch]

  if ( !a1 && a2 )
    return 3221225485LL;
  v10 = a1;
  v4 = 0;
  v11 = a1 == 0;
  v6 = 0LL;
  v5 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v12 = 0;
  v13 = 1;
  v14 = 0LL;
  v3 = CCD_TOPOLOGY::Copy((CCD_TOPOLOGY *)&v4, a2);
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v4);
  return v3;
}
