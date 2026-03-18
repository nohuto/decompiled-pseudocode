/*
 * XREFs of HvpFinishPrimaryWrite @ 0x14068F39C
 * Callers:
 *     HvWriteHivePrimaryFile @ 0x14068F1F8 (HvWriteHivePrimaryFile.c)
 * Callees:
 *     CmpLogEvent @ 0x140911974 (CmpLogEvent.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AB41E0 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140AB41FC (HvLockHiveFlusherExclusive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 */

__int64 __fastcall HvpFinishPrimaryWrite(__int64 a1, char a2, unsigned __int8 a3, char a4)
{
  char v4; // bp
  int v5; // esi
  int v6; // edi
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  v4 = 0;
  v5 = *(_DWORD *)(a1 + 160) & 0x100;
  v6 = a3;
  if ( (a2 == (v5 != 0) || ((*(_DWORD *)(a1 + 4224) >> 1) & 1) != a3) && !a4 )
  {
    CmpLockRegistry();
    HvLockHiveFlusherExclusive(a1);
    v4 = 1;
  }
  if ( a2 )
  {
    if ( v5 )
      *(_DWORD *)(a1 + 160) &= ~0x100u;
  }
  else if ( !v5 )
  {
    CmpLogEvent(&REG_EVENT_FLUSH_IO_FAIL);
    *(_DWORD *)(a1 + 160) |= 0x100u;
  }
  result = (*(_DWORD *)(a1 + 4224) >> 1) & 1;
  if ( (_DWORD)result != v6 )
  {
    result = *(_DWORD *)(a1 + 4224) ^ ((unsigned __int8)*(_DWORD *)(a1 + 4224) ^ (unsigned __int8)(2 * v6)) & 2u;
    *(_DWORD *)(a1 + 4224) = result;
  }
  if ( v4 )
  {
    HvUnlockHiveFlusherExclusive(a1);
    return CmpUnlockRegistry(v11, v10, v12, v13);
  }
  return result;
}
