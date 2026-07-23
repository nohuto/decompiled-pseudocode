/*
 * XREFs of KiTpHandleTrap @ 0x14051D410
 * Callers:
 *     KiDispatchException @ 0x1402612C0 (KiDispatchException.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KiTpWriteBreakpoint @ 0x14051D6A8 (KiTpWriteBreakpoint.c)
 *     KiTpEmulateInstruction @ 0x140A138C0 (KiTpEmulateInstruction.c)
 */

bool __fastcall KiTpHandleTrap(__int64 a1, __int64 a2, unsigned __int8 a3, char a4)
{
  __int64 v7; // r9
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int64 v10; // rdx
  _KPROCESS *Process; // r8
  __int64 *i; // rdi
  _KPRCBFLAG v13; // eax
  _KPROCESS *v14; // rax
  int v15; // eax
  __int64 v16; // rax
  int v17; // r15d
  __int64 v18; // rax
  bool v19; // [rsp+20h] [rbp-78h]
  _QWORD v20[3]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v21[3]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v22[4]; // [rsp+60h] [rbp-38h] BYREF

  v7 = a1;
  if ( (KiDynamicTraceEnabled & 2) == 0 && (!a3 || (KiDynamicTraceEnabled & 1) == 0) )
    return 0;
  v19 = 0;
  CurrentPrcb = 0LL;
  v10 = *(_QWORD *)(a2 + 248);
  Process = KeGetCurrentThread()->Process;
  _InterlockedAdd(&KiTpActiveTrapsCount, 1u);
  for ( i = *(__int64 **)(KiTpHashTable + 8 * ((v10 >> 4) & 0x3FFF)); ; i = (__int64 *)*i )
  {
    if ( !i )
    {
      v19 = *(_BYTE *)v10 != 0xCC;
      goto LABEL_34;
    }
    if ( v10 == i[1] && (!*((_BYTE *)i + 50) || Process == (_KPROCESS *)i[2]) )
      break;
  }
  if ( KeGetCurrentIrql() < 2u )
  {
LABEL_16:
    if ( a4 )
    {
      v14 = (_KPROCESS *)i[2];
      if ( !v14 || *((_BYTE *)i + 50) || v14 == Process )
      {
        if ( *((_BYTE *)i + 24) )
        {
          v16 = 4LL;
          if ( *((_BYTE *)i + 50) )
            v16 = 6LL;
          if ( ((unsigned __int8 (__fastcall *)(__int64, __int64, _KPROCESS *, __int64))KiDynamicTraceCallouts[v16])(
                 a2,
                 i[4],
                 Process,
                 a1) )
          {
            goto LABEL_14;
          }
          v7 = a1;
        }
        v22[0] = v7;
        v22[1] = a2;
        v22[2] = a3;
        v17 = KiTpEmulateInstruction((char *)i + 52, v22, Process);
        if ( v17 >= 0 && *((_BYTE *)i + 25) )
        {
          v18 = 5LL;
          if ( *((_BYTE *)i + 50) )
            v18 = 7LL;
          ((void (__fastcall *)(__int64, __int64))KiDynamicTraceCallouts[v18])(a2, i[5]);
        }
LABEL_33:
        v19 = v17 >= 0;
        goto LABEL_34;
      }
      v21[0] = a1;
      v21[1] = a2;
      v21[2] = a3;
      v15 = KiTpEmulateInstruction((char *)i + 52, v21, Process);
    }
    else
    {
      v15 = KiTpWriteBreakpoint(i, 0LL, Process, a1);
    }
    v17 = v15;
    goto LABEL_33;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v13.PrcbFlags = (volatile int)CurrentPrcb->PrcbFlags;
  if ( (v13.PrcbFlags & 0x800) == 0 )
  {
    CurrentPrcb->PrcbFlags.PrcbFlags = v13.PrcbFlags | 0x800;
    goto LABEL_16;
  }
  CurrentPrcb = 0LL;
  v20[0] = a1;
  v20[1] = a2;
  v20[2] = a3;
  if ( (int)KiTpEmulateInstruction((char *)i + 52, v20, Process) >= 0 )
LABEL_14:
    v19 = 1;
LABEL_34:
  if ( CurrentPrcb )
    CurrentPrcb->PrcbFlags.PrcbFlags &= ~0x800u;
  _InterlockedDecrement(&KiTpActiveTrapsCount);
  return v19;
}
