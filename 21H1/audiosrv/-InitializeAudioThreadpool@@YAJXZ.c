/*
 * XREFs of ?InitializeAudioThreadpool@@YAJXZ @ 0x180062798
 * Callers:
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x1800625D0 (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056710 (--2@YAPEAX_K@Z.c)
 *     ?Initialize@CAudioThreadPool@@QEAAJXZ @ 0x180062840 (-Initialize@CAudioThreadPool@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 InitializeAudioThreadpool(void)
{
  int v0; // edi
  CAudioThreadPool *v1; // rax
  CAudioThreadPool *v2; // rbx

  v0 = 0;
  if ( !ThreadPool )
  {
    v1 = (CAudioThreadPool *)operator new(0x60uLL);
    v2 = v1;
    if ( v1 )
    {
      *((_QWORD *)v1 + 10) = 0LL;
      *((_QWORD *)v1 + 2) = 0LL;
      *((_QWORD *)v1 + 3) = 0LL;
      *((_QWORD *)v1 + 4) = 0LL;
      *((_QWORD *)v1 + 5) = 0LL;
      *((_QWORD *)v1 + 6) = 0LL;
      *((_QWORD *)v1 + 7) = 0LL;
      *((_DWORD *)v1 + 16) = 0;
      *(_QWORD *)v1 = &CAudioThreadPool::`vftable';
      *((_DWORD *)v1 + 2) = 3;
      *((_DWORD *)v1 + 17) = 1;
      *((_DWORD *)v1 + 18) = 72;
    }
    else
    {
      v2 = 0LL;
    }
    if ( v2 )
    {
      v0 = CAudioThreadPool::Initialize(v2);
      if ( v0 >= 0 )
      {
        ThreadPool = v2;
        v2 = 0LL;
      }
      if ( v2 )
        (**(void (__fastcall ***)(CAudioThreadPool *, __int64))v2)(v2, 1LL);
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  return (unsigned int)v0;
}
