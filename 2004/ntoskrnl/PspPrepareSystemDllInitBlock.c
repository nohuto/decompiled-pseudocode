/*
 * XREFs of PspPrepareSystemDllInitBlock @ 0x14065D530
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x14065D2E4 (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x140250640 (ExGenRandom.c)
 *     MmGetCfgBitMapInformation @ 0x14065D754 (MmGetCfgBitMapInformation.c)
 *     PspWow64GetSharedInformation @ 0x14065D79C (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessNtdllType @ 0x14065D7B4 (PsWow64GetProcessNtdllType.c)
 */

__int64 __fastcall PspPrepareSystemDllInitBlock(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 CfgBitMapInformation; // r15
  __int64 v6; // r12
  _KPROCESS *Process; // r9
  unsigned __int64 v8; // rax
  unsigned int ProcessNtdllType; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // edx
  unsigned __int8 i; // dl
  int v17; // ecx
  __int64 SharedInformation; // rax
  __int16 v19; // ax
  __int128 v20; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+38h] [rbp-50h]
  __int128 v22; // [rsp+40h] [rbp-48h]
  __int64 v23; // [rsp+50h] [rbp-38h]
  __int64 v24; // [rsp+98h] [rbp+10h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+18h] BYREF

  v4 = 0LL;
  CfgBitMapInformation = 0LL;
  v24 = 0LL;
  v6 = 0LL;
  v25 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (_DWORD)a1 )
  {
    v17 = a1 - 1;
    if ( v17 )
    {
      if ( v17 != 1 )
        goto LABEL_3;
      SharedInformation = PspWow64GetSharedInformation(2LL, a2, a3, Process);
    }
    else
    {
      SharedInformation = PspWow64GetSharedInformation(1LL, a2, a3, Process);
    }
    v4 = *(_QWORD *)(SharedInformation + 56);
    CfgBitMapInformation = MmGetCfgBitMapInformation(1LL, &v24);
    goto LABEL_3;
  }
  v4 = PspSystemDllInitBlock;
  CfgBitMapInformation = MmGetCfgBitMapInformation(a1, &v24);
  v8 = Process[1].AffinityPadding[10];
  if ( v8 )
  {
    v19 = *(_WORD *)(v8 + 8);
    if ( v19 == 332 || v19 == 452 )
      v6 = MmGetCfgBitMapInformation(1LL, &v25);
  }
LABEL_3:
  if ( a2 )
  {
    v20 = *(_OWORD *)(a2 + 360);
    v21 = *(_QWORD *)(a2 + 376);
    v22 = *(_OWORD *)(a2 + 488);
    v23 = *(_QWORD *)(a2 + 504);
  }
  else
  {
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
  }
  if ( *(_DWORD *)v4 != 240 )
    return 3221225561LL;
  *(_QWORD *)(v4 + 16) = *((_QWORD *)PspSystemDlls + 8);
  ProcessNtdllType = PsWow64GetProcessNtdllType(Process);
  v12 = ProcessNtdllType;
  if ( !ProcessNtdllType )
    v12 = 1LL;
  v13 = PspWow64GetSharedInformation((unsigned int)v12, v12, v10, v11);
  *(_QWORD *)(v4 + 8) = *((_QWORD *)*(&PspSystemDlls + v14) + 8);
  for ( i = 0; i < 0x10u; ++i )
    *(_QWORD *)(v4 + 8LL * i + 24) = *(_QWORD *)(v13 + 8LL * i);
  *(_DWORD *)(v4 + 152) = ExGenRandom(1);
  *(_DWORD *)(v4 + 156) = 0;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 9) & 2) != 0 )
      *(_DWORD *)(v4 + 156) |= 1u;
  }
  *(_OWORD *)(v4 + 160) = v20;
  *(_QWORD *)(v4 + 176) = v21;
  *(_OWORD *)(v4 + 216) = v22;
  *(_QWORD *)(v4 + 232) = v23;
  *(_QWORD *)(v4 + 184) = CfgBitMapInformation;
  *(_QWORD *)(v4 + 192) = v24;
  *(_QWORD *)(v4 + 200) = v6;
  *(_QWORD *)(v4 + 208) = v25;
  return 0LL;
}
