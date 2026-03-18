/*
 * XREFs of MiInvokePatchCallback @ 0x140973F50
 * Callers:
 *     MiActOnPatchInAllSessions @ 0x140970E00 (MiActOnPatchInAllSessions.c)
 *     MiApplyDriverHotPatch @ 0x140971068 (MiApplyDriverHotPatch.c)
 *     MiMapAndApplyPatchInSession @ 0x140975FF0 (MiMapAndApplyPatchInSession.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiInvokePatchCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 (__fastcall *v4)(_DWORD *, __int64); // rax
  __int64 result; // rax
  int v7; // ecx
  _DWORD v8[4]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  v8[1] = *(_DWORD *)(a2 + 8);
  v4 = *(__int64 (__fastcall **)(_DWORD *, __int64))a2;
  v8[2] = 0;
  v8[0] = 1;
  result = v4(v8, 12LL);
  if ( (int)result >= 0 )
    return 0LL;
  v7 = *(_DWORD *)(a2 + 8);
  if ( v7 )
  {
    LOBYTE(v2) = v7 != 1;
    KeBugCheckEx(0x1Au, v2 + 4739099, *(_QWORD *)(a1 + 48), *(_QWORD *)a2, (int)result);
  }
  return result;
}
