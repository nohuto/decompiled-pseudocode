/*
 * XREFs of PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x140732820
 * Callers:
 *     PipProcessQueryRemovalInKernelMode @ 0x14073278C (PipProcessQueryRemovalInKernelMode.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PnpLogVetoInformation @ 0x140732954 (PnpLogVetoInformation.c)
 *     PipEventRemovalCheckOpenHandles @ 0x1407329B4 (PipEventRemovalCheckOpenHandles.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1407383C0 (PnpDeleteLockedDeviceNodes.c)
 *     PnpCollectOpenHandles @ 0x1408ABD64 (PnpCollectOpenHandles.c)
 *     PipRecordOpenHandleVeto @ 0x1408B922C (PipRecordOpenHandleVeto.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipSendQueryRemoveIrpAndCheckOpenHandles(
        int a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *a6)
{
  __int64 v6; // r15
  _DWORD *v8; // r14
  unsigned int v9; // edi
  int v11; // eax
  int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rdi
  int v16; // r9d
  __int64 v17; // rax
  _QWORD *v18; // rdi
  _QWORD *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // [rsp+40h] [rbp-30h] BYREF
  __int64 v22; // [rsp+48h] [rbp-28h]
  _QWORD v23[2]; // [rsp+50h] [rbp-20h] BYREF
  int v24; // [rsp+60h] [rbp-10h]
  bool v25; // [rsp+64h] [rbp-Ch]
  bool v26; // [rsp+65h] [rbp-Bh]
  char v27; // [rsp+66h] [rbp-Ah]
  char v28; // [rsp+67h] [rbp-9h]
  __int64 v29; // [rsp+A8h] [rbp+38h] BYREF

  v6 = *(_QWORD *)(a2 + 152);
  v8 = a6;
  v9 = a4;
  LOBYTE(a4) = 1;
  v29 = 0LL;
  v11 = PnpDeleteLockedDeviceNodes(
          v6,
          a3,
          0,
          a4,
          *(_DWORD *)(a2 + 16),
          *(_DWORD *)(a2 + 20),
          (__int64)a6,
          (__int64)(a6 + 2));
  v27 = 0;
  v28 = 0;
  v26 = (a1 & 0xFFFFFFFB) == 0;
  v12 = v11;
  if ( v6 )
    v13 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
  else
    v13 = 0LL;
  v24 = 0;
  v22 = v13 + 40;
  v23[1] = v23;
  v23[0] = v23;
  v21 = 0LL;
  v25 = (NtGlobalFlag & 0x4000) != 0;
  if ( v12 < 0 )
  {
    if ( *v8 == 6 )
      PnpCollectOpenHandles(a5, v9, &v21);
  }
  else
  {
    v12 = PipEventRemovalCheckOpenHandles(a5, v9, &v29);
    if ( v12 < 0 )
    {
      PipRecordOpenHandleVeto(v9, a5, v29, &v21, v8);
      LOBYTE(v16) = 1;
      PnpDeleteLockedDeviceNodes(v6, a3, 1, v16, 0, 0, 0LL, 0LL);
      v12 = -2147483608;
    }
  }
  if ( v26 )
  {
    PnpLogVetoInformation(v22, v23);
    while ( 1 )
    {
      v14 = v23[0];
      if ( (_QWORD *)v23[0] == v23 )
        break;
      if ( *(_QWORD **)(v23[0] + 8LL) != v23
        || (v17 = *(_QWORD *)v23[0], *(_QWORD *)(*(_QWORD *)v23[0] + 8LL) != v23[0]) )
      {
LABEL_21:
        __fastfail(3u);
      }
      v23[0] = *(_QWORD *)v23[0];
      *(_QWORD *)(v17 + 8) = v23;
      v18 = (_QWORD *)(v14 - 24);
      while ( 1 )
      {
        v19 = (_QWORD *)*v18;
        if ( (_QWORD *)*v18 == v18 )
          break;
        if ( (_QWORD *)v19[1] != v18 )
          goto LABEL_21;
        v20 = *v19;
        if ( *(_QWORD **)(*v19 + 8LL) != v19 )
          goto LABEL_21;
        *v18 = v20;
        *(_QWORD *)(v20 + 8) = v18;
        HalPutDmaAdapter((PADAPTER_OBJECT)*(v19 - 1));
        ExFreePoolWithTag(v19 - 1, 0x50706E50u);
      }
      ExFreePoolWithTag(v18, 0x4F706E50u);
    }
  }
  return (unsigned int)v12;
}
