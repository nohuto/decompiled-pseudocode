/*
 * XREFs of NtUserScrollDC @ 0x1C00F6650
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _ScrollDC @ 0x1C00F67C4 (_ScrollDC.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserScrollDC(HDC a1, int a2, int a3, struct tagRECT *a4, struct tagRECT *a5, HRGN a6, ULONG64 a7)
{
  struct tagRECT *v11; // rdi
  _OWORD *v12; // rsi
  ULONG64 v13; // rdx
  ULONG64 v14; // rcx
  int v15; // ebx
  __int64 v16; // r8
  struct tagRECT v18; // [rsp+78h] [rbp-80h] BYREF
  struct tagRECT v19; // [rsp+88h] [rbp-70h] BYREF
  __int128 v20; // [rsp+A0h] [rbp-58h] BYREF

  v11 = a5;
  v12 = (_OWORD *)a7;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (struct tagRECT *)MmUserProbeAddress;
    v18 = *a4;
    a4 = &v18;
  }
  if ( a5 )
  {
    if ( (unsigned __int64)a5 >= MmUserProbeAddress )
      v11 = (struct tagRECT *)MmUserProbeAddress;
    v19 = *v11;
    v11 = &v19;
  }
  v15 = ScrollDC(a1, a2, a3, a4, v11, a6, (struct tagRECT *)((unsigned __int64)&v20 & -(__int64)(a7 != 0)));
  if ( a7 )
  {
    v14 = MmUserProbeAddress;
    v13 = MmUserProbeAddress;
    if ( a7 >= MmUserProbeAddress )
      v12 = (_OWORD *)MmUserProbeAddress;
    *v12 = v20;
  }
  UserSessionSwitchLeaveCrit(v14, v13, v16);
  return v15;
}
