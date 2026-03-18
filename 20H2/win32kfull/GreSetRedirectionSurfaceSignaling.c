/*
 * XREFs of GreSetRedirectionSurfaceSignaling @ 0x1C00C2848
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C00C3890 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C008C9E4 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0090670 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00906A4 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0098FF0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0099034 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSetRedirectionSurfaceSignaling(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned int v13; // edi
  DYNAMICMODECHANGESHARELOCK *v14; // rcx
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v17[32]; // [rsp+38h] [rbp-20h] BYREF

  if ( g_pDwmState )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v16);
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    if ( (unsigned int)UserIsCurrentProcessDwm() )
    {
      if ( *(_QWORD *)(a1 + 3456) )
      {
        v10 = 0LL;
        if ( a2 && (LOBYTE(v9) = 18, v11 = HmgShareLockCheck(a2, v9), (v10 = v11) != 0) )
        {
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v17, (struct _EX_PUSH_LOCK *)(v11 + 256));
          v12 = *(_QWORD *)(v10 + 184);
          if ( v12 && (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v10) )
          {
            if ( (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(a1 + 3456))(
                   v12,
                   a3,
                   a2,
                   *(_QWORD *)(v12 + 32)) )
            {
              *(_DWORD *)(v10 + 244) ^= (*(_DWORD *)(v10 + 244) ^ (2 * a5)) & 2;
              EtwLogicalSurfEnableDirtyNotificationEvent(a2, a3);
            }
            *(_QWORD *)(v10 + 192) = *(_QWORD *)(v12 + 544);
            *(_QWORD *)(v10 + 200) = *(_QWORD *)(v12 + 552);
            *(_DWORD *)(v10 + 208) = *(_DWORD *)(v12 + 100);
            if ( (*(_DWORD *)(v12 + 92) & 0x400) != 0 )
              *(_DWORD *)(v10 + 244) |= 0x100u;
          }
          else
          {
            *(_QWORD *)(v10 + 192) = a3;
            *(_QWORD *)(v10 + 200) = a4;
          }
          v13 = 0;
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v17);
        }
        else
        {
          v13 = -1073741811;
        }
        if ( v10 )
          DEC_SHARE_REF_CNT(v10);
      }
      else
      {
        v13 = -1073741822;
      }
    }
    else
    {
      v13 = -1073741790;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v14);
  }
  else
  {
    return (unsigned int)-1071775733;
  }
  return v13;
}
