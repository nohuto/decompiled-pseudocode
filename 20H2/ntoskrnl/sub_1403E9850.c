/*
 * XREFs of sub_1403E9850 @ 0x1403E9850
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E680 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KeExitRetpoline @ 0x1403599C8 (KeExitRetpoline.c)
 *     _guard_check_icall @ 0x140405EF0 (_guard_check_icall.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall sub_1403E9850(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rdi
  __int64 result; // rax

  KeExitRetpoline(a1, a2);
  KxAcquireSpinLock(&KiHardwareTriggerLock);
  KxReleaseSpinLock(&KiHardwareTriggerLock);
  v3 = *(unsigned int **)(a1 + 32);
  result = *v3;
  if ( (_DWORD)result )
  {
    result = (unsigned int)(result - 1);
    *v3 = result;
    if ( !(_DWORD)result )
    {
      memset(v3 + 2, 0, 0x40uLL);
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)v3 + 9) + 24LL))(
                 *((_QWORD *)v3 + 9),
                 *(_QWORD *)(*((_QWORD *)v3 + 9) + 32LL),
                 *(_QWORD *)(*((_QWORD *)v3 + 9) + 40LL),
                 *(_QWORD *)(*((_QWORD *)v3 + 9) + 48LL));
    }
  }
  if ( *((_QWORD *)v3 + 4) )
    return (*((__int64 (__fastcall **)(unsigned int *, _QWORD, _QWORD, _QWORD))v3 + 4))(
             v3 + 2,
             *((_QWORD *)v3 + 5),
             *((_QWORD *)v3 + 6),
             *((_QWORD *)v3 + 7));
  return result;
}
