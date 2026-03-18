/*
 * XREFs of PfSnIsHostingApplication @ 0x1406B8B60
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1406B7880 (PfSnBeginAppLaunch.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     wcsstr @ 0x1403D0B90 (wcsstr.c)
 */

char __fastcall PfSnIsHostingApplication(wchar_t *SubStr)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char v5; // bp
  const wchar_t *v6; // rcx
  wchar_t *v7; // rbx
  wchar_t *v8; // rax
  wchar_t *v10; // rdx

  v1 = -1LL;
  v3 = -1LL;
  do
    ++v3;
  while ( SubStr[v3] );
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)qword_140C500B8, 0LL);
  do
    ++v1;
  while ( Str[v1] );
  v6 = Str;
  v7 = (wchar_t *)&PfGlobals + v1 + 120;
  while ( 1 )
  {
    v8 = wcsstr(v6, SubStr);
    if ( !v8 || v8 < Str || v8 >= v7 )
      break;
    if ( v8 == Str || *(v8 - 1) == 44 )
    {
      v10 = &v8[(unsigned int)v3];
      if ( v10 == v7 || *v10 == 44 )
      {
        v5 = 1;
        break;
      }
    }
    v6 = v8 + 1;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_140C500B8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)qword_140C500B8);
  KeAbPostRelease((ULONG_PTR)qword_140C500B8);
  KeLeaveCriticalRegion();
  return v5;
}
