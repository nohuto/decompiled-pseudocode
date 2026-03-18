/*
 * XREFs of ?GetDirtyRects@COffScreenRenderTarget@@MEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAI@Z @ 0x180189BC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COffScreenRenderTarget::GetDirtyRects(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  __int64 result; // rax
  void (__fastcall ***v7)(_QWORD, _DWORD *); // rcx
  int v8; // eax
  float v9; // xmm0_4
  float v10; // xmm1_4
  _DWORD v11[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( !a3 )
    return 2147942487LL;
  v7 = (void (__fastcall ***)(_QWORD, _DWORD *))(a1 + 72 + *(int *)(*(_QWORD *)(a1 + 72) + 12LL));
  (**v7)(v7, v11);
  v8 = v11[0];
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  v9 = (float)v8;
  v10 = (float)v11[1];
  result = 0LL;
  *(float *)(a2 + 8) = v9;
  *(float *)(a2 + 12) = v10;
  *a4 = 1;
  return result;
}
