/*
 * XREFs of ?ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ @ 0x1C00C5DB4
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0065C20 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_MEMORY_SEGMENT::ValidateFrameBufferRotation(unsigned int **this, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rax
  unsigned int *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rcx
  _QWORD *v9; // rax

  v2 = *((unsigned int *)this + 124);
  if ( (_DWORD)v2 )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v4[7] = 0LL;
    v4[3] = 270LL;
    v4[4] = 59LL;
    v4[5] = this;
    v4[6] = v2;
    WdLogEvent5_WdCriticalError(v4);
  }
  v5 = this[61];
  if ( v5 )
  {
    v6 = v5[15];
    v7 = v5[14];
    v8 = (unsigned int)v6 + v5[17];
    if ( (_DWORD)v7 != (_DWORD)v8 )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, a2);
      v9[3] = 270LL;
      v9[4] = 60LL;
      v9[5] = v5;
      v9[6] = v7;
      v9[7] = v6;
      WdLogEvent5_WdCriticalError(v9);
    }
  }
}
