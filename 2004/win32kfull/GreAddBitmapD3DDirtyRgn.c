/*
 * XREFs of GreAddBitmapD3DDirtyRgn @ 0x1C026FE1C
 * Callers:
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C02779A0 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C001ED40 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C001ED74 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C002D5D0 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C002D6F8 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C002D7BC (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0079870 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 */

struct DwmState *__fastcall GreAddBitmapD3DDirtyRgn(HWND a1, __int64 a2, struct _RECTL *a3, __int64 a4)
{
  UINT_PTR v4; // rdi
  unsigned int v5; // r15d
  struct _RECTL *v6; // r12
  struct DwmState *result; // rax
  int v9; // r14d
  unsigned int v10; // ebp
  struct DWMSPRITE *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // rax
  struct DWMSPRITE *v15; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v16[48]; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v17; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = a2;
  v17 = 0;
  v6 = a3;
  result = g_pDwmState;
  v9 = 0;
  v10 = 0;
  if ( g_pDwmState )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDwmState, a2, a3, a4);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v15, a1);
    v11 = v15;
    if ( v15 )
    {
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v16, (struct DWMSPRITE *)((char *)v15 + 88));
      v12 = *((_QWORD *)v11 + 21);
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v15, (struct _EX_PUSH_LOCK *)(v12 + 256));
      if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v12) )
      {
        v9 = 1;
        if ( v5 )
        {
          v13 = v5;
          do
          {
            vSpUpdateDirtyRgn(v11, (struct SFMLOGICALSURFACE *)v12, 0LL, v6++, &v17, 0);
            --v13;
          }
          while ( v13 );
          v10 = v17;
        }
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v15);
      if ( v9 )
      {
        v14 = *(_QWORD *)(v12 + 184);
        if ( v14 )
          v4 = *(_QWORD *)(v14 + 8);
        bSpDwmNotifyDirty(*(HSPRITE *)v11, (struct SFMLOGICALSURFACE *)v12, v10, v4);
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v16);
      DEC_SHARE_REF_CNT(v11);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    return (struct DwmState *)GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  return result;
}
