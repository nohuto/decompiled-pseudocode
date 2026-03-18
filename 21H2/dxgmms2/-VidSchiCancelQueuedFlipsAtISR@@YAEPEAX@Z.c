/*
 * XREFs of ?VidSchiCancelQueuedFlipsAtISR@@YAEPEAX@Z @ 0x1C00458C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall VidSchiCancelQueuedFlipsAtISR(__int64 ***a1)
{
  int v2; // eax
  __int64 **v3; // rdx
  __int64 **v4; // rax
  _DWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v2 = ((__int64 (__fastcall *)(__int64, __int64 ***))DxgCoreInterface[66])((*a1)[2][349], a1 + 1);
  *((_DWORD *)a1 + 6) = v2;
  if ( v2 == -1073741822 )
  {
    v8 = 0LL;
    v3 = a1[2];
    v6[0] = *((_DWORD *)a1 + 2);
    v6[1] = *((_DWORD *)*v3 + 4);
    v4 = *a1;
    v7 = **v3;
    *((_DWORD *)a1 + 6) = ((__int64 (__fastcall *)(__int64, _DWORD *))DxgCoreInterface[65])(v4[2][349], v6);
    (*a1[2])[1] = v8;
  }
  return 1;
}
