/*
 * XREFs of sub_1800F9000 @ 0x1800F9000
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F9000(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // eax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+98h] [rbp+20h] BYREF

  v6 = 0;
  v7 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v7[1], v8, (struct _TP_TIMER *)L"s_pbmUnregisterPlaybackManagerNotifications");
  if ( (unsigned int)IsPbmUnregisterPlaybackManagerNotificationsSupported() )
  {
    v6 = PbmUnregisterPlaybackManagerNotifications(a1, a2, a3);
  }
  else if ( !a2 && qword_18019E618 )
  {
    v16 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
            qword_18019E618,
            a1,
            &v16);
    v12 = v16;
    v6 = v11;
    if ( v11 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 336LL))(v16);
      v12 = v16;
      v6 = v13;
    }
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  sub_18000F690((__int64)pv, v9, v10);
  return v6;
}
