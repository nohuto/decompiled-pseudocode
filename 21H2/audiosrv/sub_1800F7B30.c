/*
 * XREFs of sub_1800F7B30 @ 0x1800F7B30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_1800F759C @ 0x1800F759C (sub_1800F759C.c)
 *     sub_1800F7864 @ 0x1800F7864 (sub_1800F7864.c)
 */

__int64 __fastcall sub_1800F7B30(__int64 a1, const wchar_t *a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  DWORD LastError; // ebx
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF
  WINBOOL v12; // [rsp+90h] [rbp+18h] BYREF

  v3 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v3[1], v4, (struct _TP_TIMER *)L"s_mmeNotifyDeviceAdded");
  LastError = 0;
  if ( (unsigned int)sub_1800F759C(v6, v5, &v12) )
  {
    if ( !v12 || (sub_1800F7864(a2), !v12) )
      LastError = 5;
  }
  else
  {
    LastError = GetLastError();
  }
  sub_18000F690((__int64)pv, v7, v8);
  return LastError;
}
