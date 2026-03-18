/*
 * XREFs of ?ResetOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x18022E7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x18002FC98 (-ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180152660 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall CInteractionContextWrapper::ResetOutput(CInteractionContextWrapper *this)
{
  int v1; // edx
  __int64 v2; // r9
  __int64 v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  CInteractionContextWrapper::ResetCachedInteractionOutput(this, 0LL);
  if ( (unsigned int)dword_180341E80 > 4 && (qword_180341E90 & 2) != 0 && (qword_180341E98 & 2) == qword_180341E98 )
  {
    v7 &= v1;
    v5 = &v3;
    v3 = v2;
    v6 = 8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_180341E80,
      (unsigned __int8 *)dword_1802E9606,
      0LL,
      0LL,
      3u,
      &v4);
  }
}
