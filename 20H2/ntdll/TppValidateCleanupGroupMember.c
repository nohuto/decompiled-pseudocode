/*
 * XREFs of TppValidateCleanupGroupMember @ 0x18001298C
 * Callers:
 *     TppWorkpValidateWork @ 0x18000F214 (TppWorkpValidateWork.c)
 *     TppWaitpValidateWait @ 0x180012038 (TppWaitpValidateWait.c)
 *     TppIopValidateIo @ 0x180012858 (TppIopValidateIo.c)
 *     TpPostWork @ 0x1800128C0 (TpPostWork.c)
 *     TppTimerpValidateTimer @ 0x180012914 (TppTimerpValidateTimer.c)
 *     TppAlpcpValidateAlpc @ 0x18007974C (TppAlpcpValidateAlpc.c)
 *     TppJobpValidateJob @ 0x18007F4A8 (TppJobpValidateJob.c)
 * Callees:
 *     <none>
 */

bool __fastcall TppValidateCleanupGroupMember(__int64 a1, int a2)
{
  int v2; // eax
  void *ThreadPoolData; // rcx

  v2 = *(_DWORD *)(a1 + 168);
  if ( (v2 & 0x10000) != 0 )
    return 0;
  if ( (v2 & 0x20000) == 0 )
    return 1;
  return a2
      && (ThreadPoolData = NtCurrentTeb()->ThreadPoolData) != 0LL
      && *(_QWORD *)(*(_QWORD *)ThreadPoolData + 240LL) == a1;
}
