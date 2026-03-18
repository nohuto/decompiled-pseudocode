/*
 * XREFs of GreNotifyDirtySprite @ 0x1C00519D4
 * Callers:
 *     RecreateRedirectionBitmap @ 0x1C0051748 (RecreateRedirectionBitmap.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C001ED40 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C001ED74 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C002D5D0 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C002D6F8 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 */

struct DwmState *__fastcall GreNotifyDirtySprite(HWND a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct DwmState *result; // rax
  UINT_PTR v5; // rdi
  __int64 v7; // rbx
  struct SFMLOGICALSURFACE *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  result = g_pDwmState;
  v5 = 0LL;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDwmState, a2, a3, a4);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v10, a1);
    v7 = v10;
    if ( v10 )
    {
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v10, (struct _EX_PUSH_LOCK *)(v10 + 88));
      v8 = *(struct SFMLOGICALSURFACE **)(v7 + 168);
      v9 = *((_QWORD *)v8 + 23);
      if ( v9 )
        v5 = *(_QWORD *)(v9 + 8);
      bSpDwmNotifyDirty(*(HSPRITE *)v7, v8, 1LL, v5);
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v10);
      DEC_SHARE_REF_CNT(v7);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    return (struct DwmState *)GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  return result;
}
