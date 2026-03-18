/*
 * XREFs of ?Win32kLeakTrackingLiveDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z @ 0x1C021FC30
 * Callers:
 *     <none>
 * Callees:
 *     ?Empty@CLeakTrackingAllocator@NSInstrumentation@@QEAA_NXZ @ 0x1C012B21C (-Empty@CLeakTrackingAllocator@NSInstrumentation@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ?Win32kAddLeakTrackingSecondaryData@@YAJPEAXP6AJ0PEBU_GUID@@0K@Z1@Z @ 0x1C021FB14 (-Win32kAddLeakTrackingSecondaryData@@YAJPEAXP6AJ0PEBU_GUID@@0K@Z1@Z.c)
 */

__int64 __fastcall Win32kLeakTrackingLiveDumpCallback(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        int (*a2)(void *, const struct _GUID *, void *, unsigned int),
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned int *a8)
{
  __int64 result; // rax
  NSInstrumentation::CLeakTrackingAllocator *v11; // rcx
  int v12; // r9d
  unsigned int v13; // ebx
  int v14; // eax
  _OWORD v15[3]; // [rsp+30h] [rbp-48h] BYREF

  if ( !a8 )
    return 0LL;
  result = ((__int64 (__fastcall *)(NSInstrumentation::CLeakTrackingAllocator *, void *, _QWORD, _QWORD))a2)(
             a1,
             &unk_1C02F4FB8,
             *(_QWORD *)a8,
             a8[2]);
  v12 = result;
  if ( (int)result >= 0 )
  {
    if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext && !NSInstrumentation::CLeakTrackingAllocator::Empty(v11) )
    {
      v13 = 0;
      v15[0] = xmmword_1C02F4FA8;
      v15[1] = xmmword_1C02F4F98;
      v15[2] = xmmword_1C02F4F88;
      do
      {
        if ( v12 < 0 )
          break;
        v14 = Win32kAddLeakTrackingSecondaryData(a1, a2, (const struct _GUID *)&v15[v13++]);
        v12 = v14;
      }
      while ( v13 < 3 );
    }
    return (unsigned int)v12;
  }
  return result;
}
