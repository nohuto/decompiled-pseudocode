/*
 * XREFs of GreSetRedirectionSurfaceSignaling @ 0x1C002D8E0
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C002BC30 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C001ED40 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C001ED74 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C002D7BC (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSetRedirectionSurfaceSignaling(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned int v16; // edi
  DYNAMICMODECHANGESHARELOCK *v17; // rcx
  __int64 v19; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v20[32]; // [rsp+38h] [rbp-20h] BYREF

  if ( g_pDwmState )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v19);
    GreAcquireSemaphoreSharedInternal(ghsemDwmState, v9, v10, v11);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    if ( (unsigned int)UserIsCurrentProcessDwm() )
    {
      if ( *(_QWORD *)(a1 + 3456) )
      {
        v13 = 0LL;
        if ( a2 && (LOBYTE(v12) = 18, v14 = HmgShareLockCheck(a2, v12), (v13 = v14) != 0) )
        {
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v20, (struct _EX_PUSH_LOCK *)(v14 + 256));
          v15 = *(_QWORD *)(v13 + 184);
          if ( v15 && (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v13) )
          {
            if ( (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(a1 + 3456))(
                   v15,
                   a3,
                   a2,
                   *(_QWORD *)(v15 + 32)) )
            {
              *(_DWORD *)(v13 + 244) ^= (*(_DWORD *)(v13 + 244) ^ (2 * a5)) & 2;
              EtwLogicalSurfEnableDirtyNotificationEvent(a2, a3);
            }
            *(_QWORD *)(v13 + 192) = *(_QWORD *)(v15 + 544);
            *(_QWORD *)(v13 + 200) = *(_QWORD *)(v15 + 552);
            *(_DWORD *)(v13 + 208) = *(_DWORD *)(v15 + 100);
            if ( (*(_DWORD *)(v15 + 92) & 0x400) != 0 )
              *(_DWORD *)(v13 + 244) |= 0x100u;
          }
          else
          {
            *(_QWORD *)(v13 + 192) = a3;
            *(_QWORD *)(v13 + 200) = a4;
          }
          v16 = 0;
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v20);
        }
        else
        {
          v16 = -1073741811;
        }
        if ( v13 )
          DEC_SHARE_REF_CNT(v13);
      }
      else
      {
        v16 = -1073741822;
      }
    }
    else
    {
      v16 = -1073741790;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v17);
  }
  else
  {
    return (unsigned int)-1071775733;
  }
  return v16;
}
