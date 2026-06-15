/*
 * XREFs of ?TryGetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x1800D13F0
 * Callers:
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800B9618 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 * Callees:
 *     ??$query_dispatch@VCAudioSessionManagerProvider@@V1@@default_query_policy@details@wil@@CAJPEAVCAudioSessionManagerProvider@@U?$integral_constant@_N$00@wistd@@PEAPEAV3@@Z @ 0x1800D0A20 (--$query_dispatch@VCAudioSessionManagerProvider@@V1@@default_query_policy@details@wil@@CAJPEAVCA.c)
 */

__int64 __fastcall CAudioSessionManagerProvider::TryGetAudioSessionManager(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        struct CAudioSessionManager **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  volatile int *v6; // rdx
  __int64 *v7; // r14
  __int64 *i; // rbx

  *a3 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v7 = (__int64 *)*((_QWORD *)this + 8);
  for ( i = (__int64 *)*((_QWORD *)this + 7);
        i != v7 && CompareStringW(0x7Fu, 1u, a2, -1, *(PCNZWCH *)(*i + 296), -1) != 2;
        ++i )
  {
    ;
  }
  if ( i != *((__int64 **)this + 8) )
  {
    if ( *i )
      wil::details::default_query_policy::query_dispatch<CAudioSessionManagerProvider,CAudioSessionManagerProvider>(
        *i,
        v6,
        (__int64 *)a3);
    else
      *a3 = 0LL;
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return 0LL;
}
