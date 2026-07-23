/*
 * XREFs of CmpRecordRMRecoveryMode @ 0x1405E08DC
 * Callers:
 *     CmpCompleteUnloadKey @ 0x1405E0268 (CmpCompleteUnloadKey.c)
 * Callees:
 *     HvMarkBaseBlockDirty @ 0x14061C16C (HvMarkBaseBlockDirty.c)
 */

char __fastcall CmpRecordRMRecoveryMode(__int64 a1)
{
  __int64 v1; // rax
  char v2; // bl
  __int64 v4; // r8
  int v5; // edx
  unsigned int v6; // edx

  v1 = *(_QWORD *)(a1 + 4192);
  v2 = 0;
  if ( v1 )
  {
    v4 = *(_QWORD *)(a1 + 64);
    v5 = *(_DWORD *)(v4 + 144);
    if ( *(_QWORD *)(v1 + 16) == v1 + 16 )
    {
      v6 = v5 & 0xFFFFFFFE;
    }
    else
    {
      v2 = 1;
      v6 = v5 | 1;
    }
    *(_DWORD *)(v4 + 144) = v6;
    HvMarkBaseBlockDirty();
  }
  return v2;
}
