/*
 * XREFs of ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0286094
 * Callers:
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C000E204 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C027B7D8 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     NtGdiSetPixelFormat @ 0x1C02BB580 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreClientRgnUpdated @ 0x1C00456A8 (GreClientRgnUpdated.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00690E4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C009EEA8 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C014BAB8 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     UserGetClientRgn @ 0x1C01E82F8 (UserGetClientRgn.c)
 *     ?vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C0284778 (-vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x1C02864F8 (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 *     ?vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x1C0286754 (-vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 */

void vForceClientRgnUpdate(void)
{
  TRACKOBJ *v0; // rsi
  int v1; // eax
  __int64 i; // rdi
  int v3; // r8d
  unsigned int v4; // r8d
  unsigned __int64 v5; // rcx
  HRGN ClientRgn; // rax
  HRGN v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  int v11; // ecx
  BOOL v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // eax
  struct _POINTL v16; // [rsp+28h] [rbp-49h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-41h] BYREF
  _QWORD v18[3]; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v19[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v20; // [rsp+68h] [rbp-9h] BYREF
  __int64 v21; // [rsp+70h] [rbp-1h] BYREF
  _QWORD v22[2]; // [rsp+78h] [rbp+7h] BYREF
  __int64 v23; // [rsp+88h] [rbp+17h] BYREF
  __int128 v24; // [rsp+98h] [rbp+27h] BYREF
  __int128 v25; // [rsp+A8h] [rbp+37h] BYREF

  v21 = ghsemWndobj;
  GreAcquireSemaphore(ghsemWndobj);
  v0 = gpto;
  if ( gpto )
  {
    while ( 1 )
    {
      v1 = *((_DWORD *)v0 + 12);
      if ( (v1 & 0x40000000) != 0 )
        break;
      v0 = (TRACKOBJ *)*((_QWORD *)v0 + 1);
      if ( !v0 )
        goto LABEL_4;
    }
    *((_DWORD *)v0 + 12) = v1 & 0x3FFFFFFF | 0x80000000;
    for ( i = *((_QWORD *)v0 + 3); i; i = *(_QWORD *)(i + 160) )
    {
      v3 = *(_DWORD *)(i + 184);
      if ( (v3 & 0x40000000) != 0 )
      {
        v4 = v3 & 0x3FFFFFFF | 0x80000000;
        *(_DWORD *)(i + 184) = v4;
        v5 = *(_QWORD *)(i + 176);
        if ( v5 )
        {
          ClientRgn = UserGetClientRgn(v5, &v25, v4 & 0x20);
        }
        else
        {
          v25 = *(_OWORD *)((char *)v0 + 52);
          ClientRgn = (HRGN)GreCreateRectRgnIndirect(&v25);
        }
        v7 = ClientRgn;
        if ( !ClientRgn )
          break;
        GreSetRegionOwner(ClientRgn, 0LL);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v18, v7, 0);
        if ( v18[0] )
        {
          if ( (*(_DWORD *)(i + 184) & 0x100) == 0 )
          {
            v8 = *(_QWORD *)(*(_QWORD *)(i + 168) + 32LL);
            v9 = *(_QWORD *)(v8 + 48);
            if ( v9 )
            {
              if ( v8 == *(_QWORD *)(v9 + 2552) )
              {
                v10 = *(_DWORD *)(v9 + 2584);
                v16.x = -v10;
                v11 = *(_DWORD *)(v9 + 2588);
                v16.y = -v11;
                if ( v10 || v11 )
                {
                  RGNOBJ::bOffset((RGNOBJ *)v18, &v16);
                  ERECTL::bOffsetAdd((ERECTL *)&v25, &v16, 0);
                }
              }
            }
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v17);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v17);
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v19);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v19);
            if ( v17[0] )
            {
              if ( v19[0] )
              {
                RGNOBJ::vSet((RGNOBJ *)v19, (struct _RECTL *)((char *)v0 + 52));
                RGNOBJ::bCopy((RGNOBJ *)v17, (struct RGNOBJ *)v18);
                RGNOBJAPI::iCombine((RGNOBJAPI *)v18, (struct RGNOBJ *)v17, (struct RGNOBJ *)v19, 1);
                if ( RGNOBJ::iCombine((RGNOBJ *)v17, (struct RGNOBJ *)v18, (struct RGNOBJ *)v19, 1) )
                  RGNOBJAPI::bSwap((RGNOBJAPI *)v18, (struct RGNOBJ *)v17);
              }
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v19);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
          }
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v22);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v22);
          v12 = 0;
          if ( (*(_DWORD *)(i + 184) & 0x200) != 0 && v22[0] )
            v12 = RGNOBJ::bCopy((RGNOBJ *)v22, (struct RGNOBJ *)v18) != 0;
          v23 = *(_QWORD *)(i + 200);
          GreAcquireSemaphore(v23);
          if ( v12 )
          {
            v20 = *(_QWORD *)(i + 192);
            if ( v20 )
            {
              RGNOBJ::vSwap((RGNOBJ *)v22, (struct RGNOBJ *)&v20);
              *(_QWORD *)(i + 192) = v20;
            }
          }
          RGNOBJAPI::bSwap((RGNOBJAPI *)v18, (struct RGNOBJ *)(i + 56));
          v13 = *(_QWORD *)(i + 56);
          *(_DWORD *)(v13 + 28) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
          v14 = *(_QWORD *)(i + 56);
          v24 = v25;
          EWNDOBJ::vSetClip(i, v14, &v24);
          RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v18);
          v15 = *((_DWORD *)v0 + 12);
          if ( (v15 & 1) != 0 )
          {
            TRACKOBJ::vUpdateDrvDelta(v0, (struct EWNDOBJ *)i, 1u);
            v15 = *((_DWORD *)v0 + 12);
          }
          if ( (v15 & 2) != 0 )
            (*((void (__fastcall **)(__int64))v0 + 5))(i);
          vSpWndobjChange(*(HDEV *)(*((_QWORD *)v0 + 4) + 48LL), (struct EWNDOBJ *)i);
          SEMOBJ::vUnlock((SEMOBJ *)&v23);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v22);
        }
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v18);
        SEMOBJ::vUnlock((SEMOBJ *)&v21);
        GreClientRgnUpdated(1);
        return;
      }
    }
  }
LABEL_4:
  SEMOBJ::vUnlock((SEMOBJ *)&v21);
}
