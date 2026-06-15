/*
 * XREFs of sub_1800F7A80 @ 0x1800F7A80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_1800F759C @ 0x1800F759C (sub_1800F759C.c)
 *     sub_1800F77E0 @ 0x1800F77E0 (sub_1800F77E0.c)
 */

__int64 __fastcall sub_1800F7A80(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  DWORD LastError; // ebx
  WINBOOL v15; // [rsp+30h] [rbp-48h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-40h] BYREF

  v7 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v7[1], v8, (struct _TP_TIMER *)L"s_mmeNotifyDefaultDeviceChanged");
  LastError = 0;
  if ( (unsigned int)sub_1800F759C(v10, v9, &v15) )
  {
    if ( !v15 || (sub_1800F77E0(a2, a3, a4), !v15) )
      LastError = 5;
  }
  else
  {
    LastError = GetLastError();
  }
  sub_18000F690((__int64)pv, v11, v12);
  return LastError;
}
