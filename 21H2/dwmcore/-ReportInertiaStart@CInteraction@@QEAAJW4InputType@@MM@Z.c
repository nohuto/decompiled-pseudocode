/*
 * XREFs of ?ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z @ 0x1801F2C94
 * Callers:
 *     ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x180264948 (-OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportInertiaStartHelper@@YAH_KIMMAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DMATRIX@@@Z @ 0x18017921C (-ReportInertiaStartHelper@@YAH_KIMMAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 */

__int64 __fastcall CInteraction::ReportInertiaStart(__int64 a1, int a2, float a3, float a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  float *v8; // rdi
  signed int LastError; // eax

  v4 = *(_QWORD *)(a1 + 112);
  v5 = 0;
  if ( v4 )
  {
    v8 = *(float **)(v4 + 16);
    if ( v8 )
    {
      (*(void (__fastcall **)(float *))(*(_QWORD *)v8 + 8LL))(v8);
      if ( !(unsigned int)ReportInertiaStartHelper(
                            *(unsigned int *)(a1 + 1704),
                            a2,
                            a3,
                            a4,
                            v8 + 43,
                            (_DWORD *)(a1 + 288)) )
      {
        LastError = GetLastError();
        if ( LastError > 0 )
          v5 = (unsigned __int16)LastError | 0x80070000;
        else
          v5 = LastError;
      }
      (*(void (__fastcall **)(float *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  return v5;
}
