/*
 * XREFs of ?ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ @ 0x1C030501C
 * Callers:
 *     ??_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z @ 0x1C03047D0 (--_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z.c)
 *     ?AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z @ 0x1C03048A8 (-AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C03052F0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0305DE0 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTDR_DUMP_BUFFER::ShrinkLastSegment(CTDR_DUMP_BUFFER *this)
{
  __int16 v1; // ax
  __int64 v3; // rdx
  unsigned int v4; // r9d
  __int64 v5; // rcx
  unsigned int v6; // edx
  __int64 v7; // rdx
  bool v8; // zf
  int v9; // edx

  v1 = *((_WORD *)this + 10);
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 1);
    v4 = *(_DWORD *)(v3 + 8LL * (unsigned __int16)(v1 - 1) + 8);
    v5 = v3 + v4;
    if ( !v5 )
      goto LABEL_8;
    v6 = *((_DWORD *)this + 6) - v4;
    if ( !v6 )
      goto LABEL_8;
    v7 = v6 - 1;
    if ( (_DWORD)v7 )
    {
      do
      {
        if ( *(_BYTE *)(v7 + v5) )
          break;
        v8 = (_DWORD)v7 == 1;
        v7 = (unsigned int)(v7 - 1);
      }
      while ( !v8 );
    }
    v9 = *(_BYTE *)(v7 + v5) != 0 ? v7 + 1 : 0;
    if ( !v9 )
LABEL_8:
      v9 = 1;
    *((_DWORD *)this + 6) = v9 + v4;
  }
}
