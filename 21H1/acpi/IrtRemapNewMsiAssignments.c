/*
 * XREFs of IrtRemapNewMsiAssignments @ 0x1C00959D0
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C00935F0 (IrqArbCommitAllocation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 *     PcisuppGetBusSlotNumber @ 0x1C0095B08 (PcisuppGetBusSlotNumber.c)
 */

__int64 __fastcall IrtRemapNewMsiAssignments(__int64 a1)
{
  struct _RTL_RANGE_LIST *v1; // rcx
  _DWORD *UserData; // rbx
  int v3; // eax
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 result; // rax
  char v8; // [rsp+40h] [rbp+7h] BYREF
  unsigned int v9; // [rsp+44h] [rbp+Bh] BYREF
  unsigned int v10; // [rsp+48h] [rbp+Fh] BYREF
  PRTL_RANGE Range; // [rsp+50h] [rbp+17h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+58h] [rbp+1Fh] BYREF
  __int64 v13; // [rsp+78h] [rbp+3Fh] BYREF
  int v14; // [rsp+80h] [rbp+47h]

  v1 = *(struct _RTL_RANGE_LIST **)(a1 + 48);
  v9 = 0;
  Range = 0LL;
  v10 = 0;
  v13 = 0LL;
  v14 = 0;
  memset(&Iterator, 0, sizeof(Iterator));
  v8 = 0;
  RtlGetFirstRange(v1, &Iterator, &Range);
  while ( Range )
  {
    if ( Range->Owner )
    {
      if ( (Range->Attributes & 1) == 0 )
      {
        UserData = Range->UserData;
        if ( UserData )
        {
          v3 = UserData[1];
          if ( (v3 & 4) != 0 && UserData[2] == 3 )
          {
            UserData[1] = v3 & 0xFFFFFFFB;
            if ( (int)PcisuppGetBusSlotNumber(
                        Range->Owner,
                        (unsigned int)&v9,
                        (unsigned int)&v10,
                        (unsigned int)&v8,
                        (__int64)&v13) < 0 )
            {
              v5 = 0LL;
              v6 = 0LL;
              LOBYTE(v4) = 0;
              v9 = 0;
              v10 = 0;
              v13 = 0LL;
              v14 = 0;
              v8 = 0;
            }
            else
            {
              v5 = v9;
              LOBYTE(v4) = v8;
              v6 = v10;
            }
            result = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64, _DWORD *, _DWORD))HalPrivateDispatchTable[64])(
                       v5,
                       v6,
                       &v13,
                       v4,
                       UserData + 8,
                       *((unsigned __int8 *)UserData + 26));
            if ( (int)result < 0 )
              return result;
          }
        }
      }
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return 0LL;
}
