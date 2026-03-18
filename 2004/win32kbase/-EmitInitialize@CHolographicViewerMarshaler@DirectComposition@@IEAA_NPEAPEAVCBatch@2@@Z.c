/*
 * XREFs of ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01E9FC8
 * Callers:
 *     ?EmitUpdateCommands@CHolographicViewerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01EA0F0 (-EmitUpdateCommands@CHolographicViewerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00A1378 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     GreUnlockDwmState @ 0x1C00A59D0 (GreUnlockDwmState.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C00A695C (CheckOrAcquireDwmStateLock.c)
 *     ReferenceDwmProcess @ 0x1C00A6AB0 (ReferenceDwmProcess.c)
 */

char __fastcall DirectComposition::CHolographicViewerMarshaler::EmitInitialize(
        DirectComposition::CHolographicViewerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // si
  char v5; // bp
  PVOID v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r8d
  void *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  char *v13; // rcx
  char v15; // [rsp+38h] [rbp-20h]
  void *v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v2 = *((_DWORD *)this + 15);
  v3 = 0;
  if ( v2 >= 0 && (v2 & 0x3F) == 0x3F )
  {
    v16 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x44uLL, &v16) )
    {
      v5 = CheckOrAcquireDwmStateLock();
      v6 = ReferenceDwmProcess();
      v10 = v6;
      if ( v6 )
      {
        v11 = *((_QWORD *)this + 13);
        v12 = *((_QWORD *)this + 16);
        v17 = 0LL;
        v15 = 0;
        if ( (int)ObDuplicateObject(v12, v11, v6, &v17, 0, 0, 6, v15) >= 0 )
        {
          v13 = (char *)v16;
          v3 = 1;
          *(_DWORD *)v16 = 68;
          *((_DWORD *)v13 + 1) = 185;
          *((_DWORD *)v13 + 2) = *((_DWORD *)this + 6);
          *((_DWORD *)v13 + 3) = *((_DWORD *)this + 16);
          *((_DWORD *)v13 + 4) = *((_DWORD *)this + 17);
          *(_QWORD *)(v13 + 20) = *(_QWORD *)((char *)this + 116);
          *(_OWORD *)(v13 + 28) = *(_OWORD *)((char *)this + 76);
          *((_DWORD *)v13 + 11) = *((_DWORD *)this + 18);
          *(_QWORD *)(v13 + 52) = v17;
          *((_DWORD *)v13 + 15) = *((_DWORD *)this + 31);
          *((_DWORD *)this + 15) |= 0x80000000;
        }
        ObfDereferenceObject(v10);
      }
      if ( v5 )
        GreUnlockDwmState(v8, v7, v9);
    }
  }
  return v3;
}
