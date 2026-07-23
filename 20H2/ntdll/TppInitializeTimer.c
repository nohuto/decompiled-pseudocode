/*
 * XREFs of TppInitializeTimer @ 0x180010960
 * Callers:
 *     TpAllocWait @ 0x18000DF40 (TpAllocWait.c)
 *     TpAllocTimer @ 0x18000EFD0 (TpAllocTimer.c)
 * Callees:
 *     TppCleanupGroupAddMember @ 0x18000C490 (TppCleanupGroupAddMember.c)
 *     TpAdjustBindingCount @ 0x180010A00 (TpAdjustBindingCount.c)
 *     TppWorkInitialize @ 0x1800122AC (TppWorkInitialize.c)
 */

__int64 __fastcall TppInitializeTimer(__int64 a1, char a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdi
  __int64 result; // rax

  v6 = a4;
  if ( a4 )
    LODWORD(a4) = *(_DWORD *)(a4 + 56);
  result = TppWorkInitialize(a1, a3, v6, a4, a5, a6);
  if ( (int)result >= 0 )
  {
    TpAdjustBindingCount(*(_QWORD *)(a1 + 144), 1LL);
    *(_QWORD *)(a1 + 240) = 0LL;
    *(_BYTE *)(a1 + 353) = a2;
    if ( v6 )
      *(_QWORD *)(a1 + 32) = *(_QWORD *)(v6 + 48);
    if ( *(_QWORD *)(a1 + 16) )
      TppCleanupGroupAddMember(a1);
    return 0LL;
  }
  return result;
}
