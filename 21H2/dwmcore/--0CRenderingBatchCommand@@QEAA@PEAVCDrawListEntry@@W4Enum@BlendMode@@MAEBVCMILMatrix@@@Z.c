/*
 * XREFs of ??0CRenderingBatchCommand@@QEAA@PEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@@Z @ 0x1801F131C
 * Callers:
 *     ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1801E8360 (-Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingBatchCommand::CRenderingBatchCommand(__int64 a1, __int64 a2, int a3, float a4, __int64 a5)
{
  int v8; // eax

  *(_QWORD *)a1 = a2;
  if ( a2 )
    (**(void (__fastcall ***)(__int64))a2)(a2);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a5;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a5 + 16);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a5 + 32);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a5 + 48);
  v8 = *(_DWORD *)(a5 + 64);
  *(float *)(a1 + 88) = a4;
  *(_DWORD *)(a1 + 80) = v8;
  *(_DWORD *)(a1 + 84) = a3;
  *(_BYTE *)(a1 + 92) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) == 2;
  return a1;
}
